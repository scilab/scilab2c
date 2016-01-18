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

#define AVRPWMSetup(in1,in2,in3,in4) u8AVRPWMSetups((uint8) in1,\
                                         (uint8) in2, (uint8) in3, (uint8) in4);

#define AVRPWMSetDuty(in1,in2) u8AVRPWMSetDutys((uint8) in1, (uint8) in2);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALADC_H__ */
