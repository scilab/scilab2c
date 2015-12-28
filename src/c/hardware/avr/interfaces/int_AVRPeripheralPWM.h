//This file defines constants corresponding to gpios.
//
// Authors
//     Siddhesh Wani
//

#ifndef __INT_AVRPERIPHERALPWM_H__
#define __INT_AVRPERIPHERALPWM_H__

#include <avr/io.h>
#include "AVRPeripheralPWM.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0d0d0d0AVRPWMSetupu80(in1,in2) u8AVRPWMSetups((uint8) in1,\
                                         (uint8) in2, (uint8) in3, (uint8) in4);

#define d0d0AVRPWMSetDuty(in1,in2) u8AVRPWMSetDutys((uint8) in1, (uint8) in2);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALADC_H__ */
