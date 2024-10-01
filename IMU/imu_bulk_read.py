from glob import glob
import math
import pathlib
import datetime
import smbus2
import time
import logging
import concurrent.futures

TIMEOUT_secs = 60*1
GYROSCOPE = 1
ACCELEROMETER = 2


class IMU:
    def __init__(self) -> None:
        self.BUS_NUM = 42
        self.CHIP_ADDR = 0x6A
        self.FIFO_ADDR = 0x78
        self.FIFO_LEN = 7

        # Initialize the I2C bus
        self.bus = smbus2.SMBus(self.BUS_NUM)

        # Configure IMU settings
        self.bus.write_byte_data(self.CHIP_ADDR, 0x09, 0x44)
        self.bus.write_byte_data(self.CHIP_ADDR, 0x0A, 0x06)
        self.bus.write_byte_data(self.CHIP_ADDR, 0x15, 0x80)
        self.bus.write_byte_data(self.CHIP_ADDR, 0x18, 0xE8)
        self.bus.write_byte_data(self.CHIP_ADDR, 0x10, 0x40)
        self.bus.write_byte_data(self.CHIP_ADDR, 0x11, 0x4C)

    def check_fifo_status(self):
        return True
        # Read FIFO buffer state
        fifo_buffer_state = self.bus.read_word_data(self.CHIP_ADDR, 0x3a)
        fifo_buffer_len = fifo_buffer_state & 0x2f

        if fifo_buffer_len == 0:
            return False
        else:
            # print(f"FIFO BUFFER LENGTH: {fifo_buffer_len}")
            return True

    def read_register(self, register):
        if self.check_fifo_status():
            ret_val = self.bus.read_word_data(self.CHIP_ADDR, register)
            # print(f"val at reg {register}: {ret_val}")
            return ret_val
        else:
            return -1

    def _read_block(self, register, length):
        fifoblock = self.bus.read_i2c_block_data(self.CHIP_ADDR, register, length)
        # print(f"val at reg {register}: {fifoblock}")
        axis = {}
        axis['tag'] = (fifoblock[0]) >> 3
        axis['X'] = (fifoblock[1] << 8) + fifoblock[2]
        axis['Y'] = (fifoblock[3] << 8) + fifoblock[4]
        axis['Z'] = (fifoblock[5] << 8) + fifoblock[6]
        return axis

    def read_fifo(self):
        rt = self._read_block(self.FIFO_ADDR, self.FIFO_LEN)
        # print(f"rt: {rt}")
        return rt


if __name__ == "__main__":
    imu = IMU()

    filename = "imu_data_" + datetime.datetime.now().strftime("%Y-%m-%d-%H%M%S") + ".gcsv"
    fH = open(filename, "w")

    time_ms = f"timestamp, {time.time()}\n"
    gscale = f"gscale, 0.000152716\n"
    ascale = f"ascale, 0.001196411\n"

    fH.write("GYROFLOW IMU LOG\n")
    fH.write("version,1.1\n")
    fH.write("id,custom_logger_name\n")
    fH.write("orientation,YxZ\n")
    fH.write("note,development_test\n")
    fH.write("fwversion,FIRMWARE_0.1.0\n")
    fH.write(time_ms)
    fH.write("vendor,potatocam\n")
    fH.write("videofilename,videofilename.mp4\n")
    fH.write("lensprofile,potatocam/potatocam_mark1_prime_7_5mm_4k\n")
    fH.write("lens_info,pinhole\n")
    fH.write("frame_readout_time,15.23\n")
    fH.write("frame_readout_frequency,0\n")
    fH.write("tscale,0.001\n")
    fH.write(gscale)
    fH.write(ascale)
    fH.write("t,gx,gy,gz,ax,ay,az\n")

    print("Reading IMU readings")
    count = 0
    timeout = time.time() + TIMEOUT_secs

    axis_values = {}
    axis_values['GX'] = -1
    axis_values['GY'] = -1
    axis_values['GZ'] = -1
    axis_values['AX'] = -1
    axis_values['AY'] = -1
    axis_values['AZ'] = -1

    while True:
        imu_reading = imu.read_fifo()

        readings = ""
        if imu_reading['tag'] == GYROSCOPE:
            axis_values['GX'] = imu_reading['X']
            axis_values['GY'] = imu_reading['Y']
            axis_values['GZ'] = imu_reading['Z']
        elif imu_reading['tag'] == ACCELEROMETER:
            axis_values['AX'] = imu_reading['X']
            axis_values['AY'] = imu_reading['Y']
            axis_values['AZ'] = imu_reading['Z']

        readings = f"{count},{axis_values.get('GX')},{axis_values.get('GY')},{axis_values.get('GZ')},{axis_values.get('AX')},{axis_values.get('AY')},{axis_values.get('AZ')}\n"
        fH.write(readings)

        count = count + 1
        if time.time() > timeout:
            print(f"Timeout of {TIMEOUT_secs} secs over...")
            break

    fH.close()
