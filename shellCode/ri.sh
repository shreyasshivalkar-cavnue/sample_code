#!/bin/bash

for pkg in radar-to-cloud;
do
    echo -e "remove old" $pkg
    sudo apt purge -y $pkg

    echo -e "install new pkg"
    sudo apt install ./$pkg*.deb
done
