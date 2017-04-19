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

#ifndef __AVRPERIPHERALTIMER_H__
#define __AVRPERIPHERALTIMER_H__

#include <avr/io.h>
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

//Function prototypes

uint16 u8AVRGetTimerValues(uint16 timer);

uint8 u8AVRTimerSetups(uint8 timer, uint16 prescaler,uint8 clock_source);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALTIMER_H__ */
