#!/usr/bin/sh
set -e

cmake ..
make
./src/money_test
