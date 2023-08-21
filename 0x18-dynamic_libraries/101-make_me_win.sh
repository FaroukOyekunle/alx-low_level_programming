#!/bin/bash
wget -P /tmp/ https://raw.github.com/FaroukOyekunle/alx-low_level_programming/master/0x18-dynamic_libraries/101-make_me_win.so
export LD_PRELOAD =/tmp/101-make_me_win.so
