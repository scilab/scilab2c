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
//Function to Transmit Char.


#include "AVRPeripheralUART.h"

uint8 u8AVRUARTTransmits(uint8 data)
{
 uint8 temp1;
 uint8 temp2;
 temp1 = data;
 data = data/100;
 if(data==0);  
 else 
 {
  while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
  UDR = (48+data); // Put data into buffer, sends the data 
 }
  temp1 = temp1 - data*100;
  temp2 = temp1;
  temp1 = temp1/10;
  if((data==0)&(temp1==0));
  else
  {
   while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
   UDR = (48+temp1); // Put data into buffer, sends the data 
  }
  temp2 = temp2 - temp1*10;
  while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
  UDR = (48+temp2); // Put data into buffer, sends the data 
 
 while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
 UDR = (10); // Put data into buffer, sends the data 
 while ( !( UCSRA & (1<<UDRE)) ) ; // Wait for empty transmit buffer 
 UDR = (13); // Put data into buffer, sends the data 
 return 0;
}













