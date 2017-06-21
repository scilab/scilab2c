//This file defines functions prototypes related to PWM.
//
// Authors
//     Ashish Kamble
//

#ifndef __AVRPERIPHERALPWM_H__
#define __AVRPERIPHERALPWM_H__

#include <avr/io.h>
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

//Function prototypes
uint8 u8AVRPWM0Setups(uint8 waveform_mode, uint8 output_mode);

uint8 u8AVRPWM2Setups(uint8 waveform_mode, uint8 output_mode);

uint8 u8AVRPWM1Setups(uint8 waveform_mode, uint8 output_mode, uint8 output_pin);

uint8 u8AVRPWM0SetDutys(uint8 duty);

uint8 u8AVRPWM2SetDutys(uint8 duty);

uint8 u8AVRPWM1SetDutys(uint8 output_pin, uint16 duty, uint16 Top_Value);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALPWM_H__ */
