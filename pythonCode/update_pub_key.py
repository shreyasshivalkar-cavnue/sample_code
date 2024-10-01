#!/usr/bin/env python3
import argparse
import os
import shutil
import json
import logging


def config_logger(log_file: str = None):

    logging.basicConfig(level=logging.INFO)
    formatter = logging.Formatter("%(asctime)s %(levelname)s >>> %(message)s", datefmt='%Y-%m-%d %H:%M:%S')
    root_logger = logging.getLogger()

    if log_file:
        handler = logging.FileHandler(log_file)
        root_logger.addHandler(handler)

    for handler in root_logger.handlers:
        handler.setFormatter(formatter)


class PublicKeyMgr():
    def __init__(self, pub_key_list) -> None:
        self._parse_config(pub_key_list)

        self.AUTH_KEY_FOLDER = "/home/shreyasshivalkar/work/sample_code/pythonCode/"
        self.AUTH_KEY_FILE = self.AUTH_KEY_FOLDER + "authorized_keys"

    def _parse_config(self, pub_key_file) -> None:
        # Read key-value pairs from the original JSON file
        try:
            with open(pub_key_file, 'r') as file:
                self.key_list = json.load(file)
        except Exception as e:
            logging.error(f"Unable to open file:{pub_key_file}. exception:{e}")
            raise

        for key in self.key_list["PUBKEY"]:
            value = self.key_list["PUBKEY"][key]
            if not isinstance(value, list):
                logging.error(f"variable type:{type(value)} must be list!")
                raise ValueError


def main():

    parser = argparse.ArgumentParser()
    parser.add_argument(
        "-k",
        "--key_list_file",
        default="/etc/cavnue/cavnue-common-node/public_keys.json",
        help="Provide the list of public keys.",
    )
    parser.add_argument(
        "-f",
        "--log_file",
        help="Location of log file.",
        default=None
    )
    args = parser.parse_args()

    config_logger(args.log_file)

    pub_key_mgr = PublicKeyMgr(args.key_list_file)


if __name__ == "__main__":
    main()
