#!/usr/bin/env python3
import argparse
import concurrent.futures
import datetime
from glob import glob
import logging
import math
import pathlib
import smbus2
import subprocess
import time

TIMEOUT_secs = 60*1
GYROSCOPE = 1
ACCELEROMETER = 2

DENOMINATOR = 2**16
GYROSCOPE_SF = 500/DENOMINATOR
ACCELEROMETER_SF = 4/DENOMINATOR


class IMU:
    def __init__(self, odr) -> None:
        self.BUS_NUM = 42
        self.CHIP_ADDR = 0x6A
        self.FIFO_ADDR = 0x78
        self.FIFO_LEN = 7
        self.REG_FIFO_CTRL3 = 0x9

        if odr >= 1667:
            self.ODR = 0x81
        elif odr < 1667 and odr >= 833:
            self.ODR = 0x71
        elif odr < 833 and odr >= 417:
            self.ODR = 0x61
        elif odr < 417 and odr >= 208:
            self.ODR = 0x51
        elif odr < 208:
            self.ODR = 0x41

        # Initialize the I2C bus
        self.bus = smbus2.SMBus(self.BUS_NUM)

        # Configure IMU settings
        self.bus.write_byte_data(self.CHIP_ADDR, self.REG_FIFO_CTRL3, self.ODR)
        self.bus.write_byte_data(self.CHIP_ADDR, 0x0A, 0x06)
        self.bus.write_byte_data(self.CHIP_ADDR, 0x10, 0x10)
        self.bus.write_byte_data(self.CHIP_ADDR, 0x11, 0x80)
        self.bus.write_byte_data(self.CHIP_ADDR, 0x15, 0x80)
        self.bus.write_byte_data(self.CHIP_ADDR, 0x16, 0x40)
        self.bus.write_byte_data(self.CHIP_ADDR, 0x18, 0xE8)

    def read_register(self, register):
        ret_val = self.bus.read_word_data(self.CHIP_ADDR, register)
        return ret_val

    def _read_block(self, register, length):
        fifoblock = self.bus.read_i2c_block_data(self.CHIP_ADDR, register, length)

        axis = {}
        axis['tag'] = (fifoblock[0]) >> 3
        axis['X'] = self.convert_unsigned_to_signed_16bit((fifoblock[2] << 8) | fifoblock[1])
        axis['Y'] = self.convert_unsigned_to_signed_16bit((fifoblock[4] << 8) | fifoblock[3])
        axis['Z'] = self.convert_unsigned_to_signed_16bit((fifoblock[6] << 8) | fifoblock[5])
        return axis

    def read_fifo(self):
        rt = self._read_block(self.FIFO_ADDR, self.FIFO_LEN)
        return rt

    def convert_unsigned_to_signed_16bit(self, unsigned_int):
        # Mask with 0xFFFF to ensure it's 16-bit
        unsigned_int &= 0xFFFF

        # Check if the most significant bit (MSB) is set
        if unsigned_int & 0x8000:
            # If MSB is set, subtract 2^16 to get the signed value
            return unsigned_int - 0x10000
        else:
            # If MSB is not set, return the value as is
            return unsigned_int


def run_stream_to_file_cmd(command):
    return subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)


if __name__ == "__main__":

    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-t",
        "--time_ms",
        default=60,
        help="Provide time window in ms of camera stream.",
    )
    parser.add_argument(
        "--odr",
        default=833,
        help="Provide output data rate.",
    )
    args = parser.parse_args()

    imu = IMU(int(args.odr))

    filename = "imu_data_" + datetime.datetime.now().strftime("%Y%m%d-%H%M%S.%f") + ".gcsv"
    stream_file_name = "stream_" + datetime.datetime.now().strftime("%Y%m%d-%H%M%S.%f")
    fH = open(filename, "w")

    time_ms = f"timestamp, {time.time()}\n"
    gscale = f"gscale, 1\n"
    ascale = f"ascale, 1\n"

    fH.write("GYROFLOW IMU LOG\n")
    fH.write("version,1.2\n")
    fH.write("id,custom_logger_name\n")
    fH.write("orientation,YxZ\n")
    fH.write("note,development_test\n")
    fH.write("fwversion,FIRMWARE_0.1.0\n")
    fH.write(time_ms)
    fH.write("vendor,potatocam\n")
    fH.write(f"videofilename,{stream_file_name}\n")
    fH.write("lensprofile,potatocam/potatocam_mark1_prime_7_5mm_4k\n")
    fH.write("lens_info,pinhole\n")
    fH.write("frame_readout_time,16\n")
    fH.write("frame_readout_frequency,0\n")
    fH.write("tscale,0.001\n")
    fH.write(gscale)
    fH.write(ascale)
    fH.write("t,gx,gy,gz,ax,ay,az\n")

    print("Reading IMU readings")
    timeout = time.time() + TIMEOUT_secs

    # export DISPLAY=:1
    stream_to_file_cmd = f"nvgstcapture-1.0 --prev-res=8 --image-res=8 --video-res=8 --sensor-id=0 --sensor-mode=1 --enable-meta --aeantibanding=0 --ee-mode=0 --tnr-mode=0 --tnr-strength=0 --framerate=54 -A -C 1 --capture-auto --capture-time={args.time_ms} --mode=2 --file-name=\"{stream_file_name}\""

    stream_to_file_process = run_stream_to_file_cmd(stream_to_file_cmd)
    print(f"Stream to File command started for {args.time_ms}...")

    # wait until stream_to_file_cmd command finishes
    while stream_to_file_process.poll() is None:
        imu_reading = imu.read_fifo()

        axis_values = {}
        axis_values['GX'] = -1
        axis_values['GY'] = -1
        axis_values['GZ'] = -1
        axis_values['AX'] = -1
        axis_values['AY'] = -1
        axis_values['AZ'] = -1
        if imu_reading['tag'] == GYROSCOPE:
            axis_values['GX'] = imu_reading['X'] * GYROSCOPE_SF
            axis_values['GY'] = imu_reading['Y'] * GYROSCOPE_SF
            axis_values['GZ'] = imu_reading['Z'] * GYROSCOPE_SF
        elif imu_reading['tag'] == ACCELEROMETER:
            axis_values['AX'] = imu_reading['X'] * ACCELEROMETER_SF
            axis_values['AY'] = imu_reading['Y'] * ACCELEROMETER_SF
            axis_values['AZ'] = imu_reading['Z'] * ACCELEROMETER_SF

        timestamp_ms = time.clock_gettime(time.CLOCK_MONOTONIC_RAW)
        readings = f"{timestamp_ms},{axis_values.get('GX')},{axis_values.get('GY')},{axis_values.get('GZ')},{axis_values.get('AX')},{axis_values.get('AY')},{axis_values.get('AZ')}\n"
        fH.write(readings)

    bg_output, bg_error = stream_to_file_process.communicate()
    print("Stream to File command completed.")
    print("Stream to File command output:", bg_output.decode().strip())
    if bg_error:
        print("Stream to File command error:", bg_error.decode().strip())
