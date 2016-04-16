#!/bin/bash

echo 16 > /sys/class/gpio/export
echo 17 > /sys/class/gpio/export
echo 25 > /sys/class/gpio/export
echo 23 > /sys/class/gpio/export
echo 15 > /sys/class/gpio/export
echo 14 > /sys/class/gpio/export
echo 18 > /sys/class/gpio/export
echo 19 > /sys/class/gpio/export
echo 20 > /sys/class/gpio/export
echo 21 > /sys/class/gpio/export
echo in > /sys/class/gpio/gpio16/direction
echo out > /sys/class/gpio/gpio25/direction
echo out > /sys/class/gpio/gpio23/direction
echo out > /sys/class/gpio/gpio15/direction
echo out > /sys/class/gpio/gpio14/direction
echo out > /sys/class/gpio/gpio17/direction
echo out > /sys/class/gpio/gpio18/direction
echo out > /sys/class/gpio/gpio19/direction
echo out > /sys/class/gpio/gpio20/direction
echo out > /sys/class/gpio/gpio21/direction

