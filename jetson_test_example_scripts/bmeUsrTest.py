#!/usr/bin/env python3
import json
import os
import logging
import subprocess
import time
from logging.handlers import SysLogHandler


def config_logger():
    formatter = logging.Formatter(
        "Shreyas - %(asctime)s %(levelname)s >>> %(message)s",
        datefmt="%Y-%m-%d %H:%M:%S",
    )
    root_logger = logging.getLogger()

    log_handler = SysLogHandler(address="/dev/log")
    log_handler.setFormatter(formatter)
    log_handler.setLevel(logging.INFO)

    root_logger.addHandler(log_handler)

class BmeDataCollector:

    def evaluate_readings(self) -> float:
        self.STALE_READINGS_THRESHOLD__SEC = 3
        self.BME_READINGS_PATH = "/var/local/bme680-0-0x76"

        file_stats = os.stat(self.BME_READINGS_PATH)
        num_attempts = 3

        for attempt in range(0, num_attempts):
            try:
                with open(self.BME_READINGS_PATH, "r") as fHandle:
                    readings = json.load(fHandle)
                    # check if bme readings are older than 3 sec
                    if ((time.time() - readings["timestamp"]) > self.STALE_READINGS_THRESHOLD__SEC):
                        print(f"Stale readings in {self.BME_READINGS_PATH}")
                    return float(readings["temperature"])
            except json.decoder.JSONDecodeError:
                logging.warning(f"{self.BME_READINGS_PATH} Resource Busy {attempt}")
            except Exception as err:
                print(f"Unexpected {err=}, {type(err)=}")
                exit()

if __name__ == "__main__":
    config_logger()
    bme = BmeDataCollector()
    while True:
        print(bme.evaluate_readings())
        time.sleep(0.2)
