
// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Author: Siddhesh Wani, Ashish Kamble
// Email: toolbox@scilab.in


#ifndef __INT_AVRPERIPHERALGPIO_H__
#define __INT_AVRPERIPHERALGPIO_H__

#include <avr/io.h>
#include "AVRPeripheralGPIO.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define AVRDigitalSetup(in1,in2,in3) u8AVRDigitalSetups((uint8) in1,\
                                                  (uint8) in2, (uint8) in3);

#define AVRDigitalIn(in1,in2) u8AVRDigitalIns((uint8) in1, (uint8) in2);

#define AVRDigitalOut(in1,in2,in3) u8AVRDigitalOuts((uint8) in1,\
                                                  (uint8) in2, (uint8) in3);

#define AVRDigitalPortSetup(in1,in2) u8AVRDigitalPortSetups((uint8) in1,\
                                                  (uint8) in2);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALGPIO_H__ */
