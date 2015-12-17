//This file defines functions prototypes related to PWM.
//
// Authors
//     Siddhesh Wani
//

#ifndef __AVRPERIPHERALPWM_H__
#define __AVRPERIPHERALPWM_H__

#include <avr/io.h>
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

//Function prototypes
uint8 u8AVRPWMSetups(uint8 timer, uint8 prescalar, uint8 waveform_mode, uint8 output_mode);

uint8 u8AVRPWMSetDuty(uint8 timer, uint8 duty);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALPWM_H__ */
