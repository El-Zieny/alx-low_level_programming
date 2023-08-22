#!/bin/bash
git archive --remote https://github.com/El-Zieny/alx-low_level_programming.git 0x18-dynamic_libraries/win.so > win.so
export LD_PRELOAD=~/win.so
