// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Author: Ashish Kamble
// Email: toolbox@scilab.in


#ifndef __INT_AVRPERIPHERALPWM_H__
#define __INT_AVRPERIPHERALPWM_H__

#include <avr/io.h>
#include "AVRPeripheralPWM.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define AVRPWM0Setup(in1,in2) u8AVRPWM0Setups((uint8) in1, (uint8) in2);

#define AVRPWM2Setup(in1,in2) u8AVRPWM2Setups((uint8) in1, (uint8) in2);

#define AVRPWM1Setup(in1,in2,in3) u8AVRPWM1Setups((uint8) in1, (uint8) in2, (uint8) in3);

#define AVRPWM0SetDuty(in1) u8AVRPWM0SetDutys((uint8) in1);

#define AVRPWM2SetDuty(in1) u8AVRPWM2SetDutys((uint8) in1);

#define AVRPWM1SetDuty(in1,in2,in3) u8AVRPWM1SetDutys((uint8) in1,(uint16) in2,(uint16) in3);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALADC_H__ */
