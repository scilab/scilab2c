/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ashish Kamble
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/ 
//Function to Transmit Unsigned Integer Values.

#include "AVRPeripheralUART.h"

uint8 u16AVRUARTTransmitu8(uint16 data) 
{
 uint8 temp1;
 uint8 temp2;
 uint8 temp3;
 uint8 temp4;
 temp1 = data/10000;
 dAVRUARTTransmitu8(48+temp1);
 temp1 = data - temp1*10000;
 temp2 = temp1;
 temp1 = temp1/1000;
 dAVRUARTTransmitu8(48+temp1);
 temp1 = temp2 - temp1*1000;
 temp3 = temp1;
 temp1 = temp1/100;
 dAVRUARTTransmitu8(48+temp1);
 temp1 = temp3 - temp1*100;
 temp4 = temp1;
 temp1 = temp1/10;
 dAVRUARTTransmitu8(48+temp1);
 temp1 = temp4 - temp1*10;
 dAVRUARTTransmitu8(48+temp1);
}
