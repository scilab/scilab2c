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


#ifndef __AVRPERIPHERALGPIO_H__
#define __AVRPERIPHERALGPIO_H__

#include <avr/io.h>

#ifdef  __cplusplus
extern "C" {
#endif


#include <avr/io.h>
#include "types.h"

//Port definitions
#define PORT_A 1
#define PORT_B 2
#define PORT_C 3
#define PORT_D 4

//Direction definitions
#define INPUT 0
#define OUTPUT 1

//Pin state definitions
#define LOW  0
#define HIGH 1

//Function prototypes
void u8AVRDigitalSetups(uint8 port,uint8 pin,uint8 direction);

uint8 u8AVRDigitalIns(uint8 port,uint8 pin);

void u8AVRDigitalOuts(uint8 port,uint8 pin,uint8 state);

uint8 u8AVRDigitalPortSetups(uint8 port,uint8 direction);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALGPIO_H__ */
