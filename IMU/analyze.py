#!/usr/bin/env python3
import argparse
import matplotlib.pyplot as plt
import pandas as pd
import statistics
import numpy

DENOMINATOR = 2**16
# GYROSCOPE_SF = 2000/DENOMINATOR
# GYROSCOPE_SF = 500/DENOMINATOR
# ACCELEROMETER_SF = 4/DENOMINATOR


GYROSCOPE_SF = 1
ACCELEROMETER_SF = 1


def swap_msb_lsb(val):
    ret_val = (val >> 8) | ((val << 8) % 2**16)
    return ret_val


def convert_unsigned_to_signed_16bit(unsigned_int):
    # Mask with 0xFFFF to ensure it's 16-bit
    unsigned_int &= 0xFFFF

    # Check if the most significant bit (MSB) is set
    if unsigned_int & 0x8000:
        # If MSB is set, subtract 2^16 to get the signed value
        return unsigned_int - 0x10000
    else:
        # If MSB is not set, return the value as is
        return unsigned_int


def translate_raw_to_scaled_val(lst, swap, comp2s, scaling_factor):
    ret_val = []
    for i in range(len(lst)):
        val = lst[i]
        if swap:
            val = swap_msb_lsb(val)
        if comp2s:
            val = convert_unsigned_to_signed_16bit(val)
        val = val * scaling_factor
        ret_val.append(val)
    return ret_val


if __name__ == "__main__":

    parser = argparse.ArgumentParser()
    parser.add_argument("-f", "--file_path", help="Provide csv file to analyze.",)
    parser.add_argument("-s", "--cal_std_deviation", nargs='?', const=1,
                        type=int, help="Provide std deviation of input data.",)
    parser.add_argument("-mm", "--cal_min_mix", nargs='?', const=1,
                        type=int, help="Provide min and max of input data.",)
    parser.add_argument("--swap", nargs='?', const=1, type=int, help="Provide MSB and LSB in inout data.",)
    parser.add_argument("--plot", nargs='?', const=1, type=int, help="Provide min and max of input data.",)
    args = parser.parse_args()
    data = pd.read_csv(args.file_path)

    data['gxl'] = translate_raw_to_scaled_val(data['gx'], False, False, GYROSCOPE_SF)
    data['gyl'] = translate_raw_to_scaled_val(data['gy'], False, False, GYROSCOPE_SF)
    data['gzl'] = translate_raw_to_scaled_val(data['gz'], False, False, GYROSCOPE_SF)

    data['axl'] = translate_raw_to_scaled_val(data['ax'], False, False, ACCELEROMETER_SF)
    data['ayl'] = translate_raw_to_scaled_val(data['ay'], False, False, ACCELEROMETER_SF)
    data['azl'] = translate_raw_to_scaled_val(data['az'], False, False, ACCELEROMETER_SF)

    if args.cal_std_deviation:
        print(f"Standard Deviation of time is {statistics.stdev(data['t'])/1000/1000}")
        print(f"Standard Deviation of gxl is {statistics.stdev(data['gxl'])}")
        print(f"Standard Deviation of gyl is {statistics.stdev(data['gyl'])}")
        print(f"Standard Deviation of gzl is {statistics.stdev(data['gzl'])}")
        print(f"Standard Deviation of axl is {statistics.stdev(data['axl'])}")
        print(f"Standard Deviation of ayl is {statistics.stdev(data['ayl'])}")
        print(f"Standard Deviation of azl is {statistics.stdev(data['azl'])}")

    if args.cal_min_mix:
        print(f"gxl, min:{min(data['gxl'])}, max:{max(data['gxl'])}")
        print(f"gyl, min:{min(data['gyl'])}, max:{max(data['gyl'])}")
        print(f"gzl, min:{min(data['gzl'])}, max:{max(data['gzl'])}")

        print(f"axl, min:{min(data['axl'])}, max:{max(data['axl'])}")
        print(f"ayl, min:{min(data['ayl'])}, max:{max(data['ayl'])}")
        print(f"azl, min:{min(data['azl'])}, max:{max(data['azl'])}")

    if args.plot:
        # Subplot 1: Signals 1, 2, 3, and CommonSignal
        plt.subplot(2, 1, 1)
        # plt.scatter(data['t'], data['gx'], label='gx')
        # plt.scatter(data['t'], data['gy'], label='gy')
        # plt.scatter(data['t'], data['gz'], label='gz')

        plt.scatter(data['t'], data['gxl'], label='gxl')
        plt.scatter(data['t'], data['gyl'], label='gyl')
        plt.scatter(data['t'], data['gzl'], label='gzl')

        plt.title('Plot 1: Signals gx, gy,gz')
        plt.xlabel('Time')
        plt.ylabel('Gyroscope (degrees/sec)')
        plt.legend()
        plt.grid(True)

        # Subplot 2: Signals 4, 5, 6, and CommonSignal
        plt.subplot(2, 1, 2)  # 2 rows, 1 column, 2nd subplot

        # plt.scatter(data['t'], data['ax'], label='ax')
        # plt.scatter(data['t'], data['ay'], label='ay')
        # plt.scatter(data['t'], data['az'], label='az')

        plt.scatter(data['t'], data['axl'], label='axl')
        plt.scatter(data['t'], data['ayl'], label='ayl')
        plt.scatter(data['t'], data['azl'], label='azl')

        plt.title('Plot 2: Signals ax, ay,az')
        plt.xlabel('Time')
        plt.ylabel('Accelerometer')
        plt.legend()
        plt.grid(True)

        plt.tight_layout()
        plt.show()
