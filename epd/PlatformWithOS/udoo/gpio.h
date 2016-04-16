#ifndef _WIRING_DIGITAL_
#define _WIRING_DIGITAL_
#include <inttypes.h>
#ifdef __cplusplus

#define LOW 0
#define HIGH 1
#define INPUT 0x0
#define OUTPUT 0x1

extern "C" {
#endif

/**
 * \brief Configures the specified pin to behave either as an input or an output. See the description of digital pins for details.
 *
 * \param ulPin The number of the pin whose mode you wish to set
 * \param ulMode Either INPUT or OUTPUT
 */
extern void GPIO_mode(uint8_t, uint8_t);

extern void GPIO_write(uint8_t, uint8_t);

/**
 * \brief Reads the value from a specified digital pin, either HIGH or LOW.
 *
 * \param ulPin The number of the digital pin you want to read (int)
 *
 * \return HIGH or LOW
 */
extern int GPIO_read(uint8_t);

#ifdef __cplusplus
}
#endif

#endif /* _WIRING_DIGITAL_ */
