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
//Function to Setup PWM output for OC2 pin.

#include "AVRPeripheralPWM.h"

uint8 u8AVRPWM2Setups(uint8 waveform_mode, uint8 output_mode)
{
 switch(waveform_mode)
 {
   case 0:
         TCCR2 |= (1<<WGM20);
         break;
 
   case 1:
         TCCR2 |= (1<<WGM20)|(1<<WGM21);
         break;
 
   case 2:
         TCCR2 |= (1<<WGM21);
         break;
  }
 switch(output_mode)
 {
   case 0:
         TCCR2 |= (1<<COM21);
         break;
  
   case 1:
         TCCR2 |= (1<<COM20)|(1<<COM21);
         break;
 
   case 2:
         TCCR2 |= (1<<COM20);
         break;
 }
 return 0;
}
