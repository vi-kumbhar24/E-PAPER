#Initial configuration

Prepare SD Card image mention in http://www.udoo.org/docs-neo/.

#Procedure:

1) Run the udooneo-gpio.sh script given in the udoo directory to export the gpio pin under /sys/class/gpio which is used with epd.

2) Install all necessary package mention in manual.

3) Configure the kernel with SPI user-mode device driver (spi-dev) support and bring the node under /dev for more information refre udoo-neo website.

4) Compile the given library given in this documention.

5) Run the demo application provided in directory.
