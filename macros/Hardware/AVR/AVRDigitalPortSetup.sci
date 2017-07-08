// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function AVRDigitalPortSetup(port,direction)
// Function to decide direction of port on AVR
//
// Calling Sequence
//     AVRDigitalPortSetup(port,direction)
//
// Parameters
//     port      : port of microcontroller to be used(1 for PORTA, 2 for PORTB,...)
//     direction : direction to be set for pin (0 for INPUT, 1 for OUTPUT)
//
// Description
//     Each AVR microcontroller has pins which can be configured as digital
//     outputs/inputs. These are normally divided among some 'ports' (group of pins).
//     User has to select one of these port and which pin of that port to be 
//     used as digital output/input. Also, desired direction must be specified as 
//     'INPUT' or 'OUTPUT'.     
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.
//
// Examples
//     AVRDigitalPortSetup(1,0); //This function will make PortA as input port
//
// See also
//     AVRDigitalIn AVRDigitalOut
//
// Authors
//     Siddhesh Wani
//     Ashish Kamble
//

if((port==0)|(port>=5)) then 
disp("Error : Invalid input argument ''port'' in AVRDigitalPortSetup function.");
end
if(direction>=2) then 
disp("Error : Invalid input argument ''direction'' in AVRDigitalPortSetup function.");
end
endfunction
