#!/bin/bash
wget https://raw.githubusercontent.com/FaroukOyekunle/alx-low_level_programming/master/0x18-dynamic_libraries/librand.so -O ../101-make_me_win.so
export LD_PRELOAD="../101-make_me_win.so"
