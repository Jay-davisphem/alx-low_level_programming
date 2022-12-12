#!/bin/bash
wget -P /tmp https://github.com/Jay-davisphem/alx-low_level_programming/blob/main/0x18-dynamic_libraries/hackit.so
export LD_PRELOAD=/tmp/hackit.so
