#include "gpio.h"
#include "sysfs.h"
#include "wiring.h"


void GPIO_mode(uint8_t pin, uint8_t mode)
{
if (mode == INPUT)
{
	gpio_setdirection(pin, "in");
}

else
{
	gpio_setdirection(pin, "out");
}
return;
}

void GPIO_write(uint8_t pin, uint8_t val)
{
	sysfs_gpio_setvalue(pin, val);
}

int GPIO_read(uint8_t pin)
{
	
	return sysfs_gpio_getvalue(pin);
}
