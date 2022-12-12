#!/bin/bash
wget -P /tmp https://github.com/jay-davisphem/alx-low_level_programming/raw/master/0x17-dynamic_libraries/hackit.so
export LD_PRELOAD=/tmp/hackit.so
