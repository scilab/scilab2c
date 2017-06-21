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
//Function selects the clock source and timer with prescaler.


#include "AVRPeripheralTimer.h"
#include <avr/interrupt.h>


uint16 u8AVRGetTimerValues(uint16 timer)
{   
 uint16_t x;
 switch(timer)
 {
  case 0:
	{
         x = TCNT0; 
         break;
        }	

 case 1:
       {
        unsigned char sreg;
 	unsigned int val;
        sreg = SREG;
 	cli();
        val = TCNT1;
 	SREG = sreg;	
 	sei();
        x = val;
        break;	
       }
		
 case 2:
       {
        x = TCNT2;
  	break;
       }
 }	    
return x;
}

