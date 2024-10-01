import concurrent.futures
from datetime import datetime
import time

# Define the paths to the accelerometer data files
ANGVEL_X_PATH = "/sys/bus/iio/devices/iio:device2/in_anglvel_x_raw"
ANGVEL_Y_PATH = "/sys/bus/iio/devices/iio:device2/in_anglvel_y_raw"
ANGVEL_Z_PATH = "/sys/bus/iio/devices/iio:device2/in_anglvel_z_raw"
ANGVEL_SAMPLING_PATH = "/sys/bus/iio/devices/iio:device2/in_anglvel_scale"

ACCEL_X_PATH = "/sys/bus/iio/devices/iio:device3/in_accel_x_raw"
ACCEL_Y_PATH = "/sys/bus/iio/devices/iio:device3/in_accel_y_raw"
ACCEL_Z_PATH = "/sys/bus/iio/devices/iio:device3/in_accel_z_raw"
ACCEL_SAMPLING_PATH = "/sys/bus/iio/devices/iio:device3/in_accel_scale"


def get_sensor_reading_float(path, scaling_factor):
    try:
        with open(path, 'r') as file:
            data = file.read().strip()
            return float(data) * scaling_factor
    except Exception as e:
        print(f"Error reading from {path}: {e}")
        return None


def get_sensor_reading_int(path, scaling_factor):
    try:
        with open(path, 'r') as file:
            data = file.read().strip()
            return int(data) * scaling_factor
    except Exception as e:
        print(f"Error reading from {path}: {e}")
        return None


def get_current_time__ms():
    return (time.time() * 1000)


if __name__ == "__main__":

    filename = "imu_data_" + datetime.now().strftime("%Y-%m-%d-%H%M%S") + ".csv"
    fH = open(filename, "w")

    time_ms = f"timestamp, {(time.time() * 1000)}\n"
    gscale = f"gscale, {get_sensor_reading_float(ANGVEL_SAMPLING_PATH, 1)}\n"
    ascale = f"ascale, {get_sensor_reading_float(ACCEL_SAMPLING_PATH, 1)}\n"

    fH.write("GYROFLOW IMU LOG\n")
    fH.write("version,1.0\n")
    fH.write("id,custom_logger_name\n")
    fH.write("orientation,XYZ\n")
    fH.write("note,development_test\n")
    fH.write("fwversion,FIRMWARE_0.1.0\n")
    fH.write(time_ms)
    fH.write("vendor,potatocam\n")
    fH.write("videofilename,videofilename.mp4\n")
    fH.write("lensprofile,potatocam/potatocam_mark1_prime_7_5mm_4k\n")
    fH.write("lens_info,wide\n")
    fH.write("frame_readout_time,15.23\n")
    fH.write("frame_readout_frequency,0\n")
    fH.write("tscale,0.001\n")
    fH.write(gscale)
    fH.write(ascale)
    fH.write("t,gx,gy,gz,ax,ay,az\n")

    print("Reading IMU readings")
    timeout = time.time() + 60*15
    with concurrent.futures.ThreadPoolExecutor() as executor:
        while True:
            future_to_axis = {
                executor.submit(read_sensor_data, ANGVEL_X_PATH): 'X-AV',
                executor.submit(read_sensor_data, ANGVEL_Y_PATH): 'Y-AV',
                executor.submit(read_sensor_data, ANGVEL_Z_PATH): 'Z-AV',
                executor.submit(read_sensor_data, ACCEL_X_PATH):  'X_AC',
                executor.submit(read_sensor_data, ACCEL_Y_PATH):  'Y_AC',
                executor.submit(read_sensor_data, ACCEL_Z_PATH):  'Z_AC'
            }

            axis_values = {}
            for future in concurrent.futures.as_completed(future_to_axis):
                axis = future_to_axis[future]
                try:
                    data = future.result()
                    axis_values[axis] = data
                except Exception as exc:
                    print(f"{axis} axis generated an exception: {exc}")

            et = time.time() * 1000
            readings = f"{et},{axis_values.get('X-AV')},{axis_values.get('Y-AV')},{axis_values.get('Z-AV')},{axis_values.get('X_AC')},{axis_values.get('Y_AC')},{axis_values.get('Z_AC')}\n"
            fH.write(readings)
            if time.time() > timeout:
                print(f"{timeout} over...")
                break

    fH.close()
