#!/bin/bash

sudo i2cdetect -y -r 0
sudo i2cdetect -y -r 7

cat /sys/bus/i2c/drivers/ad799x/*/name
cat /sys/bus/i2c/drivers/at24/*/name
cat /sys/bus/i2c/drivers/fxl6408/*/name
cat /sys/bus/spi/drivers/mcp320x/spi0.0/iio\:device1/name
