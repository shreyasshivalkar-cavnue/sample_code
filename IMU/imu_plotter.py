#!/usr/bin/env python3
import argparse
import matplotlib.pyplot as plt
import pandas as pd
import statistics
import numpy
import re

DENOMINATOR = 2**16
GYROSCOPE_SF = 500/DENOMINATOR
ACCELEROMETER_SF = 4/DENOMINATOR


def get_camera_offset():
    offset = 30990127488

    return offset


def extract_timestamps(file_path):
    # List to store the SoF and EoF pairs
    timestamp_pairs = []

    # Regular expression to match the target log line
    pattern = r'CONSUMER:\s+Acquired Frame:\s+(\d+),\s+SoF:\s+(\d+),\s+EoF:\s+(\d+)'

    # Open the log file and process it line by line
    with open(file_path, 'r') as file:
        for line in file:
            match = re.search(pattern, line)
            if match:
                frame_id = int(match.group(1))
                sof_timestamp = int(match.group(2))
                eof_timestamp = int(match.group(3))
                timestamp_pairs.append((frame_id, sof_timestamp, eof_timestamp))

    return timestamp_pairs


if __name__ == "__main__":

    parser = argparse.ArgumentParser()
    parser.add_argument("-f", "--imu_csv_file_path", help="Provide csv file to analyze.",)
    parser.add_argument("-s", "--cal_std_deviation", nargs='?', const=1,
                        type=int, help="Provide std deviation of input data.",)
    parser.add_argument("-m", "--cal_min_mix", nargs='?', const=1,
                        type=int, help="Provide min and max of input data.",)
    parser.add_argument("--plot", nargs='?', const=1, type=int, help="Provide min and max of input data.",)
    parser.add_argument("-t", "--camera_trace_log_path", help="Provide csv file to analyze.",)
    args = parser.parse_args()
    data = pd.read_csv(args.imu_csv_file_path)
    plot_name = args.imu_csv_file_path.replace("csv", "png")

    camera_offset = get_camera_offset()

    timestamp_pairs = extract_timestamps(args.camera_trace_log_path)

    # List to store the filtered data
    filtered_data = []

    # Loop through each SoF and EoF pair
    for fid, sof, eof in timestamp_pairs:
        # Convert SoF and EoF to numeric types to compare with the 'timestamp' column
        fid = int(fid)
        sof = int(sof) - int(camera_offset)
        eof = int(eof) - int(camera_offset)

        # Filter the CSV data for rows where the 'timestamp' is between SoF and EoF
        filtered_rows = data[(data['t'] >= sof) & (data['t'] <= eof)]

        # Calculate the mean of each column, except for the 'timestamp' column
        avg = filtered_rows.mean(numeric_only=True)
        avg['fid'] = fid

        # filtered_data.append((fid, gx, gy, gz, ax, ay, az))
        filtered_data.append(avg)

    # Convert the list of averages to a DataFrame
    if filtered_data:
        result = pd.DataFrame(filtered_data)
    else:
        result = pd.DataFrame()

    if args.cal_std_deviation:
        print(f"Standard Deviation of time is {statistics.stdev(data['t'])/1000/1000}")
        print(f"Standard Deviation of gx is {statistics.stdev(data['gx'])}")
        print(f"Standard Deviation of gy is {statistics.stdev(data['gy'])}")
        print(f"Standard Deviation of gz is {statistics.stdev(data['gz'])}")
        print(f"Standard Deviation of ax is {statistics.stdev(data['ax'])}")
        print(f"Standard Deviation of ay is {statistics.stdev(data['ay'])}")
        print(f"Standard Deviation of az is {statistics.stdev(data['az'])}")

    if args.cal_min_mix:
        print(f"gx, min:{min(data['gx'])}, max:{max(data['gx'])}")
        print(f"gy, min:{min(data['gy'])}, max:{max(data['gy'])}")
        print(f"gz, min:{min(data['gz'])}, max:{max(data['gz'])}")
        print(f"ax, min:{min(data['ax'])}, max:{max(data['ax'])}")
        print(f"ay, min:{min(data['ay'])}, max:{max(data['ay'])}")
        print(f"az, min:{min(data['az'])}, max:{max(data['az'])}")

    if args.plot:
        plt.figure(figsize=(10, 6))

        # Subplot 1: Signals 1, 2, 3, and CommonSignal
        plt.subplot(4, 1, 1)
        plt.scatter(data['t'], data['gx'], label='gx')
        plt.scatter(data['t'], data['gy'], label='gy')
        plt.scatter(data['t'], data['gz'], label='gz')

        plt.title('Plot 1: Raw Signals gx, gy,gz')
        plt.xlabel('Time')
        plt.ylabel('Gyroscope (degrees/sec)')
        plt.legend()
        plt.grid(True)

        # Subplot 2: Signals 4, 5, 6, and CommonSignal
        plt.subplot(4, 1, 2)  # 2 rows, 1 column, 2nd subplot
        plt.scatter(result['fid'], result['gx'], label='gx')
        plt.scatter(result['fid'], result['gy'], label='gy')
        plt.scatter(result['fid'], result['gz'], label='gz')

        plt.title('Plot 2: Averaged Signals gx, gy,gz')
        plt.xlabel('Time')
        plt.ylabel('Gyroscope (degrees/sec)')
        plt.legend()
        plt.grid(True)

        plt.subplot(4, 1, 3)
        plt.scatter(data['t'], data['ax'], label='ax')
        plt.scatter(data['t'], data['ay'], label='ay')
        plt.scatter(data['t'], data['az'], label='az')

        plt.title('Plot 3: Signals ax, ay,az')
        plt.xlabel('Time')
        plt.ylabel('Accelerometer')
        plt.legend()
        plt.grid(True)

        plt.subplot(4, 1, 4)
        plt.scatter(result['fid'], result['ax'], label='ax')
        plt.scatter(result['fid'], result['ay'], label='ay')
        plt.scatter(result['fid'], result['az'], label='az')

        plt.title('Plot 4: Averaged Signals ax, ay,az')
        plt.xlabel('Time')
        plt.ylabel('Accelerometer')
        plt.legend()
        plt.grid(True)

        plt.tight_layout()
        plt.savefig(plot_name)
        print(f"Plot saved at {plot_name}")
