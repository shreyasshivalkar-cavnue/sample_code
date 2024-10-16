#!/usr/bin/env python3

from glob import glob
import math
import pathlib


class AngularVelocity:
    def __init__(self) -> None:
        folder_wildcard = f"/sys/bus/iio/devices/iio:device2"
        folder_name = glob(folder_wildcard)
        if not folder_name:
            raise FileExistsError(
                f"LS enumerated. Cannot find {folder_wildcard}.")
        self.device_folder = pathlib.Path(folder_name[0])

    def read_values(self):
        x_angVel = float(
            (self.device_folder / f"in_anglvel_x_raw").read_text().strip())
        y_angVel = float(
            (self.device_folder / f"in_anglvel_y_raw").read_text().strip())
        z_angVel = float(
            (self.device_folder / f"in_anglvel_z_raw").read_text().strip())

        print(f"x direction:{x_angVel}")
        print(f"y direction:{y_angVel}")
        print(f"z direction:{z_angVel}")

        angular_vel = math.sqrt(pow(x_angVel, 2) + pow(y_angVel, 2) + pow(z_angVel, 2))

        return angular_vel


if __name__ == "__main__":
    avel = AngularVelocity()
    print(avel.read_values())
