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

uint8 u8AVRTimerSetups(uint8 timer,uint16 prescaler,uint8 clock_source)
{
 
 if(clock_source==0)
 {
  if(timer==0)
  {
   switch(prescaler)
   {
    case 1:    TCCR0 |= (1<<CS00);
               TCNT0 = 0x00;
    case 8:    TCCR0 |= (1<<CS01);
	       TCNT0 = 0x00;
    case 64:   TCCR0 |= (1<<CS00)|(1<<CS01);
	       TCNT0 = 0x00;
    case 256:  TCCR0 |= (1<<CS02);
               TCNT0 = 0x00;
    case 1024: TCCR0 |= (1<<CS00)|(1<<CS02);
	       TCNT0 = 0x00;
    }
   }
  else if(timer==2)
  {
   switch(prescaler)
   {
    case 1:    TCCR2 |= (1<<CS20);
               TCNT2 = 0x00;
    case 8:    TCCR2 |= (1<<CS21);
	       TCNT2 = 0x00;
    case 64:   TCCR2 |= (1<<CS20)|(1<<CS21);
	       TCNT2 = 0x00;
    case 256:  TCCR2 |= (1<<CS22);
               TCNT2 = 0x00;
    case 1024: TCCR2 |= (1<<CS20)|(1<<CS22);
	       TCNT2 = 0x00;
    }
   }
  else if(timer==1)
  {
   switch(prescaler)
   {
    case 1:    TCCR1B |= (1<<CS10);
               TCNT1H = 0x00;
               TCNT1L = 0x00;
    case 8:    TCCR1B |= (1<<CS11);
               TCNT1H = 0x00;
               TCNT1L = 0x00;
    case 64:   TCCR1B |= (1<<CS10)|(1<<CS11);
               TCNT1H = 0x00;
               TCNT1L = 0x00;
    case 256:  TCCR1B |= (1<<CS12);
               TCNT1H = 0x00;
               TCNT1L = 0x00;
    case 1024: TCCR1B |= (1<<CS10)|(1<<CS12);
               TCNT1H = 0x00;
               TCNT1L = 0x00;
   }
  }
  }
  else if(clock_source==1)
  { 
   if(timer==0)
   {
    TCCR0 |= (1<<CS00)|(1<<CS01)|(1<<CS02);
    TCNT0 = 0x00;
   }
   else if(timer==2)
   { 
    TCCR2 |= (1<<CS20)|(1<<CS21)|(1<<CS22);
    TCNT2 = 0x00;
   }
   else if(timer==1)
   { 
    TCCR1B |= (1<<CS10)|(1<<CS11)|(1<<CS12);
    TCNT1H = 0x00;
    TCNT1L = 0x00;
   } 
  }  
 return 0;
}

   













