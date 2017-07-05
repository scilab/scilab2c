// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function count = AVRGetTimerValue(timer)
// Function to get timer count
//
// Parameters
//     timer : timer whose current count is to be returned 
//             0 for timer0
//             1 for timer1
//             2 for timer2
//              
// Description
//     This function returns the count value of a desired timer.By knowing the count value 
//     certain interrupt action can be taken.
//
// Examples
//     AVRGetTimerValue(0);   //returns present count of the TCNT0 counter
//
// See also
//     AVRTimerSetup
//
// Authors
//     Ashish Kamble
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.

if(timer>=3) then 
disp("Error : Invalid input argument ''timer'' in AVRGetTimerValue function.");
end
count = 0; 
endfunction
