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


#ifndef __AVRPERIPHERALUART_H__
#define __AVRPERIPHERALUART_H__

#include <avr/io.h>
#include "types.h"


#ifdef  __cplusplus
extern "C" {
#endif

//Function prototypes
uint8 u8AVRUARTSetups(uint8 mode, uint32 baudrate, uint8 stopbits, uint8 parity);

uint8 u8AVRUARTTransmits(uint8 data);

uint8 gAVRUARTTransmits(char* msg,int size);

uint8 u16AVRUARTTransmits(uint16 data);

uint8 i16AVRUARTTransmits(int16 data);

uint8 i8AVRUARTTransmits(int8 data);

//uint8 sAVRUARTTransmits(float data);

uint8 u8AVRUARTTransmita(uint8 *x,int size);

//uint8 gAVRUARTTransmita(uint8 *x,int size);

uint8 u16AVRUARTTransmita(uint16 *x,int size);

uint8 i16AVRUARTTransmita(int16 *x,int size);

uint8 i8AVRUARTTransmita(int8 *x,int size);

uint8 u8AVRUSARTReceiveCharu8();

uint8 dAVRUARTTransmits(double data);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRUART_H__ */


