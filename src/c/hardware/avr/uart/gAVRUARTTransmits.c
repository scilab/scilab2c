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
//Function to Transmit String.


#include "AVRPeripheralUART.h"


uint8 gAVRUARTTransmits(char* msg,int size)
{
 while(*msg!='\0')
 {
  while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
  UDR = *msg; // Put data into buffer, sends the data 
  msg++;
 }
while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
 UDR = (10); // Put data into buffer, sends the data 
 while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
 UDR = (13); // Put data into buffer, sends the data 
 return 0;
}
