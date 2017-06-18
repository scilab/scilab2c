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
//Function to Setup PWM output for OC0 pin.


#include "AVRPeripheralPWM.h"


uint8 u8AVRPWM0Setups(uint8 waveform_mode, uint8 output_mode)
{
 switch(waveform_mode)
 {
  case 0:
         TCCR0 |= (1<<WGM00);
         break;
 
  case 1:
         TCCR0 |= (1<<WGM00)|(1<<WGM01);
         break;
 
  case 2:
         TCCR0 |= (1<<WGM01);
         break;
 }
 switch(output_mode)
 {
  case 0:
         TCCR0 |= (1<<COM01);
         break;
  
  case 1:
         TCCR0 |= (1<<COM00)|(1<<COM01);
         break;
 
  case 2:
         TCCR0 |= (1<<COM00);
         break;        
 }
 return 0;
}

