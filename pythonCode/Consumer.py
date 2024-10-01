#!/usr/bin/env python3
import json
import subprocess
import time


class BmeDataCollector:

    def evaluate_readings(self) -> float:
        self.STALE_READINGS_THRESHOLD__SEC = 3
        self.BME_READINGS_PATH = "readings"

        readings = {}
        self.NUM_ATTEMPTS = 3
        for attempt in range(0, self.NUM_ATTEMPTS):
            try:
                with open(self.BME_READINGS_PATH, "r") as fHandle:
                    readings = json.load(fHandle)
                    break

            except json.decoder.JSONDecodeError:
                print(f"Bme Data Resource Busy, {attempt}")
                if attempt == self.NUM_ATTEMPTS - 1:
                    return None

            except Exception as err:
                print(f"Unexpected err:{err=}")
                return None

        # check if bme readings are older than 3 sec
        if ((time.time() - readings["timestamp"]) > self.STALE_READINGS_THRESHOLD__SEC):
            print(f"Stale readings in {self.BME_READINGS_PATH}")

        return float(readings["temperature"])


if __name__ == "__main__":
    bme = BmeDataCollector()
    while True:
        print(bme.evaluate_readings())
        time.sleep(1)
