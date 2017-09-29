// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Authors: Siddhesh Wani, Ashish Kamble
// Email: toolbox@scilab.in


#ifndef __INT_AVRPERIPHERALUART_H__
#define __INT_AVRPERIPHERALUART_H__

#include <avr/io.h>
#include "AVRPeripheralUART.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define AVRUARTSetup(in1,in2,in3,in4) u8AVRUARTSetups((uint8) in1,(uint32) in2,(uint8) in3,(uint8) in4);

#define u80AVRUARTTransmitu80(in1) u8AVRUARTTransmits((uint8) in1);

#define g2AVRUARTTransmitu80(in1,in2) gAVRUARTTransmits((char*) in1,in2[0]*in2[1]);

#define u160AVRUARTTransmitu80(in1) u16AVRUARTTransmits((uint16) in1);

#define i160AVRUARTTransmitu80(in1) i16AVRUARTTransmits((int16) in1);

#define i80AVRUARTTransmitu80(in1) i8AVRUARTTransmits((int8) in1);

#define u82AVRUARTTransmitu80(in1,in2) u8AVRUARTTransmita((uint8) in1,in2[0]*in2[1]);

#define d0AVRUARTTransmitu80(in1) dAVRUARTTransmits((double) in1);

//#define g2AVRUARTTransmitu80(in1,in2) gAVRUARTTransmita((char*) in1,in2[0]*in2[1]);

#define u162AVRUARTTransmitu80(in1,in2) u16AVRUARTTransmita((uint16) in1,in2[0]*in2[1]);

#define i162AVRUARTTransmitu80(in1,in2) i16AVRUARTTransmita((int16) in1,in2[0]*in2[1]);

#define i82AVRUARTTransmitu80(in1,in2) i8AVRUARTTransmita((int8) in1,in2[0]*in2[1]);

#define u80AVRUSARTReceiveCharu80() u8AVRUSARTReceiveCharu8();

//#define s0AVRUARTTransmitu80(in1) sAVRUARTTransmits((float) in1);



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALUART_H__ */
