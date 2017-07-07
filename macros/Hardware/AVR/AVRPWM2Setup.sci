// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function AVRPWM2Setup(waveform_mode,output_mode)
//Function to Setup OC2 pin for required PWM mode
<<<<<<< HEAD
//
//Parameters
//	waveform_mode: integer, from 0 to 2
//      output_mode: integer, from 0 to 1 (or 2) depending on the waveform_mode
//    
=======
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
//Description
//	Every Micro controller has PWM pins which can generate varying voltages
//	from 0V-5V.This function helps to use OC2 pin to produces required 
//	output waveform by setting the waveform mode and otput mode.
//
<<<<<<< HEAD
//	waveform_mode can take values-
//	<itemizedlist>
//      <listitem><para>0   -> for Phase correct PWM Mode</para></listitem>
//      <listitem><para>1   -> for Fast PWM Mode</para></listitem>
//      <listitem><para>2   -> for CTC Mode</para></listitem>
//      </itemizedlist>
//
//	output_mode can take values-
//      <itemizedlist>
//      For Phase correct PWM Mode:
//	<listitem><para>0 for Clear OC2 on compare match when up-counting. Set OC2 on compare match when down-counting.</para></listitem>
//	<listitem><para>1 for Set OC2 on compare match when up-counting. Clear OC2 on compare match when down-counting.</para></listitem>
//      For Fast PWM Mode:
//	<listitem><para>0 for non-inverted output i.e Clear OC2 on compare match, set OC2 at BOTTOM.</para></listitem>
//	<listitem><para>1 for inverted output i.e Set OC2 on compare match, clear OC2 at BOTTOM.</para></listitem>
//      For CTC Mode:
//	<listitem><para>0 to Clear OC2 on compare match</para></listitem>
//	<listitem><para>1 to Set OC2 on compare match</para></listitem>
//	<listitem><para>2 to toggle OC2 on compare match</para></listitem>
//      </itemizedlist>
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.
//
=======
//Parameters
//	waveform_mode:
//                   0 for Phase correct PWM Mode
//                   1 for Fast PWM Mode 
//                   2 for CTC Mode
//output_mode:
//      For Phase Correct PWM Mode:
//                   0 for Clear OC2 on compare match when up-counting. Set OC2 on compare
//                   match when down-counting.
//                   1 for Set OC2 on compare match when up-counting. Clear OC2 on compare
//                   match when down-counting.
// 
//      For Fast PWM Mode:
//                   0 for non-inverted output i.e Clear OC2 on compare match, set OC2 at BOTTOM.
//                   1 for inverted output i.e Set OC2 on compare match, clear OC2 at BOTTOM.
//        
//      For CTC Mode:
//                   0 to Clear OC2 on compare match
//                   1 to Set OC2 on compare match
//                   2 to toggle OC2 on compare match
//    
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
//Example
//    AVRPWM2Setup(2,0);     //This function will select CTC waveform mode and will clear OC2 on    
//                           compare match 
//See also
//     AVRPWM2SetDuty
//
//Authors
//     Ashish Kamble
//
<<<<<<< HEAD
=======
//This is curretly dummy function. It provides no functionality but is required 
//for providing support for generating C code for AVR.
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

if(waveform_mode>=3) then 
disp("Error : Invalid input argument ''waveform_mode'' in AVRPWM2Setup function.");
end
if((waveform_mode==0)|(waveform_mode==1)) then
{
 //if((type(output_mode)~=8)|(output_mode>=2)) then
 //disp("Error : Invalid input argument ''output_mode'' in AVRPWM2Setup function.");
 //end
}
end
if(waveform_mode==2) then
{
 if((type(output_mode)~=8)|(output_mode>=3)) then 
 disp("Error : Invalid input argument ''output_mode'' in AVRPWM2Setup function.");
 end
}
end

endfunction
