#!/bin/bash

BUS_NUM=42
CHIP_ADDR=0x6A

echo "Configuring IMU settings on bus $BUS_NUM Addr $CHIP_ADDR"
sudo i2cset -y $BUS_NUM $CHIP_ADDR 0x09 0x44
sudo i2cset -y $BUS_NUM $CHIP_ADDR 0x0A 0x06
sudo i2cset -y $BUS_NUM $CHIP_ADDR 0x15 0x80
sudo i2cset -y $BUS_NUM $CHIP_ADDR 0x18 0xE8
sudo i2cset -y $BUS_NUM $CHIP_ADDR 0x10 0x40
sudo i2cset -y $BUS_NUM $CHIP_ADDR 0x11 0x4C

sleep 0.001

echo "Checking FIFO Buffer Length"
FIFO_BUFFER_STATE=$(sudo i2cget -y $BUS_NUM $CHIP_ADDR 0x3a w)
FIFO_BUFFER_LEN=$(( $FIFO_BUFFER_STATE & 0x2f ))
echo "FIFO BUFFER LENGTH: $FIFO_BUFFER_LEN"
if [[ $FIFO_BUFFER_LEN == 0 ]]; then
	echo "FIFO BUFFER IS STALE"
else
	echo "FIFO BUFFER IS FRESH"
fi

X_DATA_G=$(sudo i2cget -y $BUS_NUM $CHIP_ADDR 0x79 w)
Y_DATA_G=$(sudo i2cget -y $BUS_NUM $CHIP_ADDR 0x7b w)
Z_DATA_G=$(sudo i2cget -y $BUS_NUM $CHIP_ADDR 0x7d w)
X_DATA_A=$(sudo i2cget -y $BUS_NUM $CHIP_ADDR 0x79 w)
Y_DATA_A=$(sudo i2cget -y $BUS_NUM $CHIP_ADDR 0x7b w)
Z_DATA_A=$(sudo i2cget -y $BUS_NUM $CHIP_ADDR 0x7d w)

echo "LAST READ:"
echo "Gyroscope: $X_DATA_G, $Y_DATA_G, $Z_DATA_G"
echo "Accelerometer: $X_DATA_A, $Y_DATA_A, $Z_DATA_A"
echo "DONE ==================================================================="
