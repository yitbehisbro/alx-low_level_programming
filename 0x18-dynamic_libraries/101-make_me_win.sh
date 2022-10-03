#!/bin/bash
wget -P /tmp/ https://github.com/yitbehisbro/alx-low_level_programming/blob/master/0x18-dynamic_libraries/myshared.so
export LD_PRELOAD=/tmp/myshared.so
