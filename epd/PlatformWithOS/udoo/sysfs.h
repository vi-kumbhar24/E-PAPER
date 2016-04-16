#ifndef Sysfs_h
#define Sysfs_h
#include <inttypes.h>
#ifdef __cplusplus
extern "C"{
#endif

#define MAX_BUF 100
#define SYSFS_GPIO_DIR "/sys/class/gpio"
//#define SYSFS_LED_DIR "/sys/class/leds"
//#define SYSFS_ADC_DIR "/sys/devices/ocp.2/44e0d000.tscadc/tiadc/iio:device0"

int sysfs_read(const char *path, const char *filename, char *value);
int sysfs_write(const char *path, const char *filename, int value);
void sysfs_gpio_setvalue(uint8_t pin, uint8_t value);
//void sysfs_led_setvalue(uint8_t led, uint8_t value);
int sysfs_gpio_getvalue(uint8_t pin);
//uint32_t sysfs_adc_getvalue(uint32_t channel);
//int gpio_export(uint32_t gpio_pin);
//int gpio_unexport(uint32_t gpio_pin);
int gpio_setdirection(uint32_t gpio_pin, const char *direction);
//int pwm_export(uint32_t pwm_pin);

#ifdef __cplusplus
}
#endif
#endif /* Sysfs_h */
