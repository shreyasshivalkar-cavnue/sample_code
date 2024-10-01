#!/bin/bash

gpio_num=gpio112
pushd /sys/class/gpio/
if [ -e ${gpio_num} ]
then
    echo "${gpio_num} found"

    echo -e "current value"
    cat ${gpio_num}/value

    echo -e "current direction"
    cat ${gpio_num}/direction
else
    echo "${gpio_num} not found"
fi
