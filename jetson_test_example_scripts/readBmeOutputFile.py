#!/usr/bin/env python3
import json
import os
import logging
import subprocess
import time
from logging.handlers import SysLogHandler


def lock(article):
    lock_folder = "/var/local"
    lockfile = os.path.join(lock_folder, article)
    os.open(lockfile, os.O_CREAT | os.O_EXCL)
    return

def unlock(article):
    lock_folder = "/var/local"
    lockfile = os.path.join(lock_folder, article)
    os.remove(lockfile)
    return

if __name__ == "__main__":
    lock_file = "bme680-7-0x77"
    try:
        try:
            lock(lock_file)
        except FileExistsError as e:
            print(f'locked. skipping...{e}')

    finally:
        unlock(lock_file)

