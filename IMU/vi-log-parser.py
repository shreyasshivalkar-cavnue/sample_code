#!/usr/bin/env python3
import re
import argparse
import sys
import numpy as np
import matplotlib.pyplot as plt

# Example - kworker/5:3-128     [005] ....  2346.990699: rtcpu_vinotify_event: tstamp:74349548093 cch:1 vi:0 tag:CHANSEL_PXL_SOF channel:0x23 frame:0 vi_tstamp:2379168288480 data:0x0000000000000001

frame_time_dict = {}


def parse_vi_logs(filename: str) -> None:
    """
    Parse VI logs for Start of Frame(SoF) timestamp of video frames
    Read the interval between the number of frames processed per second and store as a dictionary
    """
    try:
        with open(filename, 'r') as fp:
            prev = 0
            diff = 0
            lines = fp.readlines()
            count = 0
            for row in lines:
                if re.search(r'CHANSEL_PXL_SOF', row):
                    p1 = re.search(r'vi_tstamp:(\d*)', row)
                    count = count + 1
                    val = p1.group(1)
                    if frame_time_dict == {}:
                        timestamp = val
                        diff = 99998700  # first timestamp value. Adjust the difference here
                    else:
                        prev = timestamp  # store the previous timestamp
                        timestamp = int(val)  # current timestamp
                        diff = int(timestamp) - int(prev)
                    print(timestamp)
                    frame_time_dict[count] = int(diff)
    except Exception:
        print(f"unable to open file {filename}")
        raise


def gen_graph() -> None:
    """
    Generate graph to plot the interval between frames for v4l2 stream
    X-axis - time in seconds
    Y-axis - interval between Start of frame timestamp for each frame per second
    """
    x1, y1 = frame_time_dict.keys(), frame_time_dict.values()
    # for i,k in frame_time_dict.items():
    # print(i,k)
    plt.xlabel("Number of frames", fontsize=10)
    plt.ylabel("Interval between SoF timestamp of frames", fontsize=10)
    plt.title("Standard deviation of frames per seconds for 10fps based on VI logs.")
    plt.tight_layout()
    plt.plot(x1, y1)
    print(min(y1))
    print(max(y1))
    # plt.xticks(np.arange(min(x1), max(x1)))
    plt.yticks(np.arange(99998500, 99999500, 50))
    plt.show()


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('-l', '--logfile', help="Provide VI log file for parsing SoF timestamp")
    args = parser.parse_args()
    parse_vi_logs(args.logfile)
    gen_graph()


if __name__ == "__main__":
    try:
        main()
    except Exception as ex:
        print(f"Unhandled exception: {ex}.")
        sys.exit(-1)
