// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function AVRPWM1Setup(waveform_mode,output_mode,output_pin)
//Function to Setup OC1A or OC1B pin for required PWM mode
//Description
//	Every Micro controller has PWM pins which can generate varying voltages
//	from 0V-5V.This function helps to use OC1A or OC1B pin to produces required 
//	output waveform by setting the waveform mode and otput mode.
//
//Parameters
//	waveform_mode:
//                   0 for Phase correct PWM Mode
//                   1 for Fast PWM Mode 
//                   2 for CTC Mode
//
//	output_mode:
//            For Phase Correct PWM Mode:
//                   0 for Clear OC1A or OC1B on compare match when up-counting. Set OC1A or OC1B
//                   on compare match when down-counting.                   
//                   1 for Set OC1A or OC1B on compare match when up-counting. Clear OC1A or OC1B 
//                   on compare match when down-counting.                   
// 
//            For Fast PWM Mode:
//                   0 for non-inverted output i.e Clear OC1A or OC1B on compare match, set  OC1A
//                   OC1B at BOTTOM.    
//                   1 for inverted output i.e Set OC1A or OC1B on compare match, clear OC1A or OC1B
//                   at BOTTOM. 
//        
//            For CTC Mode:
//                   0 to Clear OC1A or OC1B on compare match
//                   1 to Set OC1A or OC1B on compare match
//                   2 to toggle OC1A or OC1B on compare match
//
//      output_pin: 
//                   0 for selecting OC1A as output pin 
//                   1 for selecting OC1B as output pin
//
//Example
//    AVRPWM1Setup(2,0,0);  //This function will select CTC mode and will clear OC1A or OC1B 
//                            on compare match.Also as defined the output will be produced at 
//                            0C1A pin.
//See also
//     AVRPWM1SetDuty
//
//Authors
//     Ashish Kamble
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.

if(waveform_mode>=3) then 
disp("Error : Invalid input argument ''waveform_mode'' in AVRPWM1Setup function.");
end
if(waveform_mode==0|waveform_mode==1) then
{
 //if((type(output_mode)~=8)|(output_mode>=2)) then
 //disp("Error : Invalid input argument ''output_mode'' in AVRPWM1Setup function.");
 //end 
}
end
if(waveform_mode==2) then
{
 if((type(output_mode)~=8)|(output_mode>=3)) then
 disp("Error : Invalid input argument ''output_mode'' in AVRPWM1Setup function.");
 end
}
end
if(output_pin>=2) then 
disp("Error : Invalid input argument ''output_pin'' in AVRPWM1Setup function.");
end
endfunction
