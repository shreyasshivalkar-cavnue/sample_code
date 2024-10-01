#!/usr/bin/env python3

from glob import glob
import math
import pathlib


class Acceleration:
    def __init__(self) -> None:
        folder_wildcard = f"/sys/bus/iio/devices/iio:device3"
        folder_name = glob(folder_wildcard)
        if not folder_name:
            raise FileExistsError(
                f"LS enumerated. Cannot find {folder_wildcard}.")
        self.device_folder = pathlib.Path(folder_name[0])

    def read_values(self):
        x_accel = float(
            (self.device_folder / f"in_accel_x_raw").read_text().strip())
        y_accel = float(
            (self.device_folder / f"in_accel_y_raw").read_text().strip())
        z_accel = float(
            (self.device_folder / f"in_accel_z_raw").read_text().strip())

        print(f"x direction:{x_accel}")
        print(f"y direction:{y_accel}")
        print(f"z direction:{z_accel}")


if __name__ == "__main__":
    avel = Acceleration()
    print(avel.read_values())
