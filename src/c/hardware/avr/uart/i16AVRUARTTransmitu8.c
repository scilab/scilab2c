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
//Function to Transmit Signed Integer Values.


#include "AVRPeripheralUART.h"

uint8 i16AVRUARTTransmitu8(int16 data)
{
 uint16 temp1;
 uint16 temp2;
 temp1 = abs(data)/100;
 if(data<0)
 AVRUARTTransmitChar(45);
 AVRUARTTransmitChar(48+temp1);
 temp1 = abs(data) - temp1*100;
 temp2 = temp1;
 temp1 = temp1/10;
 AVRUARTTransmitChar(48+temp1);
 temp2 = temp2 - temp1*10;
 AVRUARTTransmitChar(48+temp2);
}
