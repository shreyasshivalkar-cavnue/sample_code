#!/bin/bash

# Function to check if device exists at an IP address
check_device() {
    ping -c 1 -W 1 $1 > /dev/null 2>&1
    if [ $? -eq 0 ]; then
        echo "Device found at $1"
        return 0
    else
        echo "No device found at $1"
        return 1
    fi
}

# Prompt the user to enter IP address range
start_ip=192.168.0.1
end_ip=192.168.0.255

# Extracting the prefix from the IP address
prefix=$(echo $start_ip | cut -d. -f1-3)

# Loop through each IP address in the range and check for devices
for ((i=$(echo $start_ip | cut -d. -f4); i<=$(echo $end_ip | cut -d. -f4); i++)); do
    ip="$prefix.$i"`
    check_device $ip
done
