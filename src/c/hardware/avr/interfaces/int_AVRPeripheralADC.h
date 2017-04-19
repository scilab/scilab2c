// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Aithor: Ashish Kamble
// Email: toolbox@scilab.in


#ifndef __INT_AVRPERIPHERALADC_H__
#define __INT_AVRPERIPHERALADC_H__

#include <avr/io.h>
#include "AVRPeripheralADC.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define AVRADCSetup(in1,in2) u8AVRADCSetups((uint8) in1,\
                                                  (uint8) in2);

#define AVRReadADC(in1) u8AVRReadADCs((uint8) in1);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALADC_H__ */
