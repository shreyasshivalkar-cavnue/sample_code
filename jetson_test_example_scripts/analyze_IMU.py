import csv
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

TIMEOUT__sec = 5 * 60


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


def imu_reader():
    # gscale = get_sensor_reading_float(ANGVEL_SAMPLING_PATH, 1)
    # ascale = get_sensor_reading_float(ACCEL_SAMPLING_PATH, 1)

    gscale = 1
    ascale = 1

    print("Reading IMU readings")
    axis_values = {
        'TS': [],
        'AX': [],
        'AY': [],
        'AZ': [],
        'GX': [],
        'GY': [],
        'GZ': [],
    }
    timeout__sec = time.time() + TIMEOUT__sec
    with concurrent.futures.ThreadPoolExecutor() as executor:
        while True:
            future_to_axis = {
                executor.submit(get_current_time__ms): 'TS',
                executor.submit(get_sensor_reading_int, ANGVEL_X_PATH, gscale): 'AX',
                executor.submit(get_sensor_reading_int, ANGVEL_Y_PATH, gscale): 'AY',
                executor.submit(get_sensor_reading_int, ANGVEL_Z_PATH, gscale): 'AZ',
                executor.submit(get_sensor_reading_int, ACCEL_X_PATH, ascale):  'GX',
                executor.submit(get_sensor_reading_int, ACCEL_Y_PATH, ascale):  'GY',
                executor.submit(get_sensor_reading_int, ACCEL_Z_PATH, ascale):  'GZ'
            }

            for future in concurrent.futures.as_completed(future_to_axis):
                axis = future_to_axis[future]

                data = future.result()
                axis_values[axis].append(data)

            if time.time() > timeout__sec:
                print(f"{TIMEOUT__sec} over...")
                break

    return axis_values


if __name__ == "__main__":

    readings = imu_reader()

    # create a csv file called data.csv and
    # store it a temp variable as fileObject
    with open("data.csv", "w") as fileObject:

        # pass the csv file to csv.writer.
        writer = csv.writer(fileObject)

        # convert the dictionary keys to a list
        key_list = list(readings.keys())

        # find the length of the key_list
        limit = len(key_list)
        print(limit)

        # the length of the keys corresponds to
        # no. of. columns.
        writer.writerow(readings.keys())

        # iterate each column and assign the
        # corresponding values to the column
        for i in range(limit):
            try:
                writer.writerow([readings[x][i] for x in key_list])
            except Exception as e:
                print(f"Error occured: {e}")
                break
