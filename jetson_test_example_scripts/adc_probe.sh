#!/bin/bash

echo -e "Read ADC channel from MCP3008"
pushd /sys/bus/iio/devices/iio\:device1

for ch in in_voltage0_raw in_voltage1_raw in_voltage2_raw in_voltage3_raw in_voltage4_raw in_voltage5_raw in_voltage6_raw in_voltage7_raw
do
	echo $ch && sudo cat $ch
done

echo -e "Read ADC channel from AD7997"
pushd /sys/class/i2c-dev/i2c-7/device/7-0023/iio\:device0/

for ch in in_voltage0_raw in_voltage1_raw in_voltage2_raw in_voltage3_raw
do
        echo $ch && sudo cat $ch
done
