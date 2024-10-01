#!/bin/bash

if  lsmod | grep bme;
then
    echo "bme kernel driver found"
else
    echo "bme kernel driver not found"
fi

systemctl status cavnue-sensor-control.service
cat /var/local/bme680-0-0x76
cat /var/local/bme680-7-0x77

