// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in


function state = AVRDigitalIn(port,pin)
// Function to get state (high\low) of a digital input pin on AVR
//
// Calling Sequence
//     state=AVRDigitalIn(port,pin)
//
// Parameters
//     port : port of microcontroller to be used
//     pin : pin of port (mentioned above) to be used
<<<<<<< HEAD
=======
//   Returns  
//     state : state of an input pin (HIGH\LOW)
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
//
// Description
//     Each AVR microcontroller has pins which can be configured as digital
//     inputs. These are normally divided among some 'ports' (group of pins).
//     User has to select one of these port and which pin of that port as 
//     digital input.      
//
<<<<<<< HEAD
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.
//
// Examples
//     pinA0 = AVRDigitalIn(1,0)   //To read state on pin 0 of port A
// See also
//     AVRDigitalOut AVRDigitalSetup
//
// Authors
//     Siddhesh Wani
//     Ashish Kamble
//
=======
// Examples
//     pinA0 = AVRDigitalIn(1,0)   //To read state on pin 0 of port A
//
// See also
//     AVRDigitalOut AVRDigitalSetup
//
//
// Authors
//     Siddhesh Wani Ashish Kamble
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

if((port==0)|(port>=5)) then 
disp("Error : Inavalid input argument ''port'' in AVRDigitalIn function.");
end
if(pin>=8) then 
disp("Error : Inavalid input argument ''pin'' in AVRDigitalIn function.");
end
state = 0;
endfunction
