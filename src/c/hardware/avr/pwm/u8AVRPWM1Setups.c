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
//Function to Setup PWM output for OC1A or OC1B pin.

#include "AVRPeripheralPWM.h"

uint8 u8AVRPWM1Setups(uint8 waveform_mode, uint8 output_mode, uint8 output_pin)
{
 switch(waveform_mode)
 {
  case 0:
        TCCR1A |= (1<<WGM11);
        TCCR1B |= (1<<WGM13);
        break;

 case 1:
        TCCR1A |= (1<<WGM11);
        TCCR1B |= (1<<WGM12)|(1<<WGM13);
        break;

 case 2:
        TCCR1B |= (1<<WGM12)|(1<<WGM13);
        break;
 }
 if(output_pin==0)
 {
  switch(output_mode)
  {
   case 0:
         TCCR1A |= (1<<COM1A1);
         break;
 
   case 1:
         TCCR1A |= (1<<COM1A0)|(1<<COM1A1);
         break;

   case 2:
         TCCR1A |= (1<<COM1A0);
         break;
  }
 }
 else if(output_pin==1)
      {
       switch(output_mode==0)
       {
        case 0: 
              TCCR1A |= (1<<COM1B1);
              break;
 
        case 1:
              TCCR1A |= (1<<COM1B0)|(1<<COM1B1);
              break;

        case 2:
              TCCR1A |= (1<<COM1B0);
              break;
       }
      }
 return 0;
}
