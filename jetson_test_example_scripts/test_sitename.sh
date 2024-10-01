#!/bin/bash

set -o errexit
set -o nounset

COMMON_NET_UTILS_PATH="/usr/lib/cavnue/cavnue-common-net-config/cavnue_update_hosts.py"

${COMMON_NET_UTILS_PATH} --check_sitename > /dev/null
if [[ $? != 0 ]]; then
    echo -e "Incorrect Site Name provided. Does not match any sitename in network map!!!"
fi
