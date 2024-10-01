#!/usr/bin/env python3
import argparse
import concurrent.futures
import datetime
# import smbus2
import subprocess
import time
import random
import pandas as pd
import matplotlib.pyplot as plt

TIMEOUT_secs = 60*1
GYROSCOPE = 1
ACCELEROMETER = 2

DENOMINATOR = 2**16
GYROSCOPE_SF = 1
ACCELEROMETER_SF = 1

# sudo pkill nvargus
# sudo pkill gst-launch-1.0
# sudo systemctl restart nvargus-daemon


def get_camera_offset():
    # Read offset for camera from
    # sudo cat /sys/devices/system/clocksource/clocksource0/offset_ns
    cmd = "cat /sys/devices/system/clocksource/clocksource0/offset_ns"
    status = subprocess.run(cmd, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if status.returncode == 0:
        return int(status.stdout)


class IMU:
    def __init__(self, odr) -> None:
        self.BUS_NUM = 42
        self.CHIP_ADDR = 0x6A
        self.FIFO_ADDR = 0x78
        self.FIFO_LEN = 7
        self.REG_FIFO_CTRL3 = 0x9
        self.count = 0
        self.flag = False

        # if odr >= 1667:
        #     self.ODR = 0x81
        # elif odr < 1667 and odr >= 833:
        #     self.ODR = 0x71
        # elif odr < 833 and odr >= 417:
        #     self.ODR = 0x61
        # elif odr < 417 and odr >= 208:
        #     self.ODR = 0x51
        # elif odr < 208:
        #     self.ODR = 0x41

        # # Initialize the I2C bus
        # self.bus = smbus2.SMBus(self.BUS_NUM)

        # # Configure IMU settings
        # self.bus.write_byte_data(self.CHIP_ADDR, self.REG_FIFO_CTRL3, self.ODR)
        # self.bus.write_byte_data(self.CHIP_ADDR, 0x0A, 0x06)
        # self.bus.write_byte_data(self.CHIP_ADDR, 0x10, 0x10)
        # self.bus.write_byte_data(self.CHIP_ADDR, 0x11, 0x80)
        # self.bus.write_byte_data(self.CHIP_ADDR, 0x15, 0x80)
        # self.bus.write_byte_data(self.CHIP_ADDR, 0x16, 0x40)
        # self.bus.write_byte_data(self.CHIP_ADDR, 0x18, 0xE8)
        print(f"Initialize mock")

    def read_register(self, register):
        # ret_val = self.bus.read_byte_data(self.CHIP_ADDR, register)
        ret_val = 0xA55A
        return ret_val

    def _read_block(self, register, length):

        # fifoblock = self.bus.read_i2c_block_data(self.CHIP_ADDR, register, length)

        axis = {}
        axis['kernel_time'] = get_kernel_mono_raw_timestamp_ns()
        axis['count'] = self.count
        self.count = self.count + 1
        # axis['tag'] = (fifoblock[0]) >> 3
        # axis['X'] = self.convert_unsigned_to_signed_16bit((fifoblock[2] << 8) | fifoblock[1])
        # axis['Y'] = self.convert_unsigned_to_signed_16bit((fifoblock[4] << 8) | fifoblock[3])
        # axis['Z'] = self.convert_unsigned_to_signed_16bit((fifoblock[6] << 8) | fifoblock[5])

        if self.flag:
            axis['tag'] = GYROSCOPE
            axis['X'] = random.randint(0,   100+self.count)
            axis['Y'] = random.randint(100, 200+self.count)
            axis['Z'] = random.randint(200, 300+self.count)
            self.flag = False

        if self.flag is False:
            axis['tag'] = ACCELEROMETER
            axis['X'] = random.randint(300, 400+self.count)
            axis['Y'] = random.randint(400, 500+self.count)
            axis['Z'] = random.randint(500, 600+self.count)
            self.flag = True

        time.sleep(0.016)
        return axis

    def read_fifo(self):
        # depth = self.read_register(0x3A) * self.FIFO_LEN
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


def run_cmd_background(command):
    return subprocess.Popen(command, shell=True, stdout=subprocess.PIPE, stderr=subprocess.PIPE)


def get_kernel_mono_raw_timestamp_ns():
    return time.clock_gettime_ns(time.CLOCK_MONOTONIC_RAW)


def get_epoch_timestamp_ns():
    return time.time_ns()


def plot_imu_readings(data, index, plot_name):
    plt.figure()

    # Subplot 1: Signals 1, 2, 3, and CommonSignal
    plt.subplot(2, 1, 1)
    plt.scatter(data[index], data['GX'], label='GX')
    plt.scatter(data[index], data['GY'], label='GY')
    plt.scatter(data[index], data['GZ'], label='GZ')

    plt.title('Plot 1: Raw Signals GX, GY,GZ')
    plt.xlabel('Time')
    plt.ylabel('Gyroscope (degrees/sec)')
    plt.legend()
    plt.grid(True)

    # Subplot 2: Signals 4, 5, 6, and CommonSignal
    plt.subplot(2, 1, 2)  # 2 rows, 1 column, 2nd subplot
    plt.scatter(data[index], data['AX'], label='AX')
    plt.scatter(data[index], data['AY'], label='AY')
    plt.scatter(data[index], data['AZ'], label='AZ')

    plt.title('Plot 2: Signals AX, AY, AZ')
    plt.xlabel('Time')
    plt.ylabel('Accelerometer')
    plt.legend()
    plt.grid(True)

    plt.tight_layout()
    plt.savefig(plot_name)
    print(f"Plot saved at {plot_name}")


if __name__ == "__main__":

    parser = argparse.ArgumentParser()
    parser.add_argument("-t", "--time_ms", default=60, type=int, help="Provide time window in ms of camera stream.")
    parser.add_argument("--odr", default=833, type=int, help="Provide output data rate.")
    parser.add_argument("--plot_raw", nargs='?', const=1, type=int, help="Plot raw imu readings.")
    args = parser.parse_args()

    imu = IMU(args.odr)

    imu_readings_name = "imu_data_" + datetime.datetime.now().strftime("%Y%m%d-%H%M%S.%f") + ".gcsv"
    imu_csv_readings_name = "imu_data_" + datetime.datetime.now().strftime("%Y%m%d-%H%M%S.%f") + ".csv"
    stream_file_name = "stream_" + datetime.datetime.now().strftime("%Y%m%d-%H%M%S.%f") + ".mp4"
    stream_log_name = "stream_log_" + datetime.datetime.now().strftime("%Y%m%d-%H%M%S.%f") + ".log"
    imu_raw_reading_plot_name = "imu_plot_raw_" + datetime.datetime.now().strftime("%Y%m%d-%H%M%S.%f") + ".png"
    gcsv_writer = open(imu_readings_name, "w")
    csv_writer = open(imu_csv_readings_name, "w")

    time_ns = f"timestamp, {get_epoch_timestamp_ns()}\n"
    gscale = f"gscale, 1\n"
    ascale = f"ascale, 1\n"
    tscale = f"tscale, {1/1000000000}\n"

    gcsv_writer.write("GYROFLOW IMU LOG\n")
    gcsv_writer.write("version,1.3\n")
    gcsv_writer.write("id,custom_logger_name\n")
    gcsv_writer.write("orientation,YxZ\n")
    gcsv_writer.write("note,development_test\n")
    gcsv_writer.write("fwversion,FIRMWARE_0.1.0\n")
    gcsv_writer.write(time_ns)
    gcsv_writer.write("vendor,potatocam\n")
    gcsv_writer.write(f"videofilename,{stream_file_name}\n")
    gcsv_writer.write("lensprofile,potatocam/potatocam_mark1_prime_7_5mm_4k\n")
    gcsv_writer.write("lens_info,pinhole\n")
    gcsv_writer.write("frame_readout_time,16\n")
    gcsv_writer.write("frame_readout_frequency,0\n")
    gcsv_writer.write(tscale)
    gcsv_writer.write(gscale)
    gcsv_writer.write(ascale)
    gcsv_writer.write("t,gx,gy,gz,ax,ay,az\n")
    csv_writer.write("t,gx,gy,gz,ax,ay,az\n")

    print("Reading IMU readings")
    timeout = time.time() + TIMEOUT_secs

    # stream_to_file_cmd = f"gst-launch-1.0 nvarguscamerasrc silent = false sensor-id=0 sensor-mode=1 tnr-mode=0 tnr-strength=0 ee-mode=0 aeantibanding=0 num-buffers={args.time_ms * 30} ! nvv4l2h264enc ! h264parse ! mp4mux ! filesink location=\"{stream_file_name}\""

    stream_to_file_cmd = f"sleep {args.time_ms}"

    stream_to_file_process = run_cmd_background(stream_to_file_cmd)
    print(f"Stream to File command started for {args.time_ms}...")

    imu_readings = []

    # wait until stream_to_file_cmd command finishes
    while stream_to_file_process.poll() is None:
        imu_reading = imu.read_fifo()

        axis_values = {}
        axis_values['time'] = imu_reading['kernel_time']
        axis_values['count'] = imu_reading['count']
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

        imu_readings.append(axis_values)

    for axis_dict in imu_readings:
        gcsv_readings = f"{axis_dict['count']},{axis_dict['GX']},{axis_dict['GY']},{axis_dict['GZ']},{axis_dict['AX']},{axis_dict['AY']},{axis_dict['AZ']}\n"
        csv_readings = f"{axis_dict['time']},{axis_dict['GX']},{axis_dict['GY']},{axis_dict['GZ']},{axis_dict['AX']},{axis_dict['AY']},{axis_dict['AZ']}\n"
        gcsv_writer.write(gcsv_readings)
        csv_writer.write(csv_readings)

    bg_output, bg_error = stream_to_file_process.communicate()

    cam_offset = f"camera timestamp offset:{get_camera_offset()}\n"
    streamLogHandle = open(stream_log_name, "w")
    streamLogHandle.write(cam_offset)
    streamLogHandle.write(bg_output.decode().strip())
    print("Stream to File:", stream_log_name)
    print("Stream saved to:", stream_file_name)
    if bg_error:
        print("Stream to File command error:", bg_error.decode().strip())

    imu_reading_dataframe = pd.DataFrame(imu_readings)

    if args.plot_raw:
        plot_imu_readings(imu_reading_dataframe, "time", imu_raw_reading_plot_name)
