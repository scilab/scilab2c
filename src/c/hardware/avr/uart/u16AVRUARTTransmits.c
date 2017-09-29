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

uint8 u16AVRUARTTransmits(uint16 data) 
{
 uint8 temp1;
 uint8 temp2;
 uint8 temp3;
 uint8 temp4;
 uint8 temp5;
 temp1 = data/10000;
 if(temp1==0);
 else
 {
  while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
  UDR = (48+temp1); // Put data into buffer, sends the data 
 }
 data = data % 10000;
 temp2 = data/1000;
 if((temp1==0)&(temp2==0));
 else 
 {
  while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
  UDR = (48+temp2); // Put data into buffer, sends the data 
 }
 data = data % 1000;
 temp3 = data/100;
 if((temp1==0)&(temp2==0)&(temp3==0));
 else 
 {
  while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
  UDR = (48+temp3); // Put data into buffer, sends the data 
 }
 data = data % 100;
 temp4 = data/10;
 if((temp1==0)&(temp2==0)&(temp3==0)&(temp4==0));
 else 
 {
  while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
  UDR = (48+temp4); // Put data into buffer, sends the data 
 }
 temp5 = data % 10;
 while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
 UDR = (48+temp5); // Put data into buffer, sends the data 
 
 
 while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
 UDR = (10); // Put data into buffer, sends the data 
 while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
 UDR = (13); // Put data into buffer, sends the data 
 return 0;
}























