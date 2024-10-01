#!/bin/bash

echo -e "Read Angular Velocity"
pushd /sys/bus/iio/devices/iio\:device2

for ch in sampling_frequency in_anglvel_x_raw in_anglvel_y_raw in_anglvel_z_raw
do
        echo $ch && sudo cat $ch
done

echo -e "Read Accelerometer"
pushd /sys/bus/iio/devices/iio\:device3

for ch in sampling_frequency in_accel_x_raw in_accel_y_raw in_accel_z_raw
do
        echo $ch && sudo cat $ch
done
