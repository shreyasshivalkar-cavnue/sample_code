#!/bin/bash

sudo i2cdetect -y -r 0
sudo i2cdetect -y -r 7


tree /sys/bus/i2c/drivers/ad799x/ -L 2
tree /sys/bus/i2c/drivers/at24/ -L 2
tree /sys/bus/i2c/drivers/fxl6408/ -L 2
tree /sys/bus/spi/drivers/mcp320x/ -L 2
