#!/bin/bash
curl -s -o https://github.com/El-Zieny/alx-low_level_programming/blob/master/0x18-dynamic_libraries/win.so
export LD_PRELOAD=./win.so
