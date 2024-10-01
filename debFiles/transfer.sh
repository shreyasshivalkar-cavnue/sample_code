#!/bin/bash

#DEBIAN_PATH="/home/shreyass/work/firmware/packages/out/"
DEBIAN_PATH="/home/labuser/work/jetson-l4t-kernel/source/kernel_src/out/"

debList=(
    # "cavnue-common-node"
    # "cavnue-common-net-config"
    # "cavnue-tegra-net-config"
    "nvidia-l4t-kernel"
)
for pkg in ${debList[@]};
do
    # scp -r shreyass@durango-vm-u22:"${DEBIAN_PATH}${pkg}"*.deb .
    scp -r labuser@lab-laptop-78ntyd3:"${DEBIAN_PATH}${pkg}"*.deb .
done

scp -P 2222 -r *.deb cavnue@jetson-5d43-1:~/shreyas
scp -P 2222 -r *.deb cavnue@jetson-428b-1:~/shreyas
