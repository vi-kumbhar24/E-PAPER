
#include "sysfs.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <time.h>

int sysfs_read(const char *path, const char *filename, char *value)
{
	FILE *fd;
	char buf[MAX_BUF];
	snprintf(buf, sizeof(buf), "%s%s", path, filename);
	fd = fopen(buf, "r");
	if (fd == NULL) {
		perror(buf);
		return -1;
	}
	fscanf(fd, "%s", value);
	if (fclose(fd) != 0)
		perror(buf);
	return 0;
}

int sysfs_write(const char *path, const char *filename, int value)
{
	FILE *fd;
	char buf[MAX_BUF];
	snprintf(buf, sizeof(buf), "%s%s", path, filename);
	fd = fopen(buf, "w");
	if (fd == NULL) {
		perror(buf);
		return -1;
	}
	fprintf(fd, "%d", value);
	if (fclose(fd) != 0)
		perror(buf);
	return 0;
}

void sysfs_gpio_setvalue(uint8_t pin, uint8_t value)
{
	char buf[MAX_BUF];
	snprintf(buf, sizeof(buf), SYSFS_GPIO_DIR "/gpio%d/", pin);
	sysfs_write(buf, "value", value);
}

int sysfs_gpio_getvalue(uint8_t pin)
{
	char buf[MAX_BUF], value[4];
	snprintf(buf, sizeof(buf), SYSFS_GPIO_DIR "/gpio%d/", pin);
	sysfs_read(buf, "value", value);
	return atoi(value);
}


int gpio_setdirection(uint32_t gpio_pin, const char *direction)
{
	FILE *fd;
	char buf[MAX_BUF];
	snprintf(buf, sizeof(buf), "/sys/class/gpio/gpio%d/direction", gpio_pin);
	fd = fopen(buf, "w");
	if (fd == NULL) {
		fprintf(stderr, "Pin %d: ", gpio_pin);
		perror(buf);
		return -1;
	}
	fprintf(fd, "%s", direction);
	if (fclose(fd) != 0) {
		fprintf(stderr, "Pin %d: ", gpio_pin);
		perror(buf);
	}
	return gpio_pin;
}

