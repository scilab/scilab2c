// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_PinISR(pin, edgetype, fn)
// Function to assign a function to be run when an interrupt occurs on 
// specified pin. 
//
// Calling Sequence
//	   RPI_PinISR(pin, edgetype, fn)
//
// Parameters
//	   pin : pin whose interrupt is to be configured
//	   edgetype: edge on which interrupt is to be monitored
//				1 -> Falling egde
//				2 -> Rising egde
//				3 -> Both egde
//	   fn: name of the function to be executed on interrupt occurance 	
// Description
//     This functions monitors interrupt on specified pin for specified edge,
//	   When that interrupt occurs, function specified by 'fn' is executed.
// Examples
//		RPI_PinISR(12, 0, Pin12ISR) //executes 'Pin12ISR' on falling edge on 
//										pin 12
// See also
//     RPI_ThreadCreate RPI_DigitalSetup
//
//
// Authors
//     Siddhesh Wani
// -----------------------------------------------------------------

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.

//Pins of header P1 which can be used as GPIO
supported_pins = [3,5,7,8,10,11,12,13,15,16,18,19,21,22,23,24,26,27,28,29,...
				  31,31,33,35,36,37,38,40];
	
PinIsGPIO = members(pin, supported_pins); //Check if input pin supports GPIO

//If given pin does not support GPIO functionality, raise the error
if(PinIsGPIO == 0)
	error(9999, 'SCI2CERROR: Given pin number doesnot support GPIO functionality.');
end
EdgeTypeSupported = members(edgetype,[1 2 3]);

if(EdgeTypeSupported == 0)
	error(9999, 'SCI2CERROR: Given edgetype is incorrect. Please specify correct edgetype from [1,2,3]')
end

endfunction
