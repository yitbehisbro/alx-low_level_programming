#!/bin/bash
wget -P /tmp/ https://raw.github.com/yitbehisbro/alx-low_level_programming/master/0x18-dynamic_libraries/lotto.so
export LD_PRELOAD=/tmp/lotto.so
