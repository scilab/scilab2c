// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function RPI_DigitalOut(pin, state)
// Function to output desired state on digital pins. 
//
// Calling Sequence
//     RPI_DigitalOut(pin, state)
//
// Parameters
//     pin : pin of RPi to be used 
//     state : desired state of the pin (0 -> LOW, 1 -> HIGH)
//
// Description
//     This fucntion is used for outputting the desired state on gpio pins of RPi. 'RPI_DigitalSetup' function must be called before this for setting up pin as output. 'pin' must be specified from list given. 'state' specifies the output state (0 -> Low, 1-> High)  
// Examples
//     RPI_DigitalOut(RPI_GPIO_P1_03,0) //Changes the state of pin 3 of header P1 as 'Low'.
//
// See also
//     RPI_DigitalSetup RPI_DigitalIn
//
//
// Authors
//     Siddhesh Wani
//
// -----------------------------------------------------------------
//Pins of header P1 which can be used as GPIO
supported_pins = [3,5,7,8,10,11,12,13,15,16,18,19,21,22,23,24,26,27,28,29,...
				  31,31,33,35,36,37,38,40];
	
PinIsGPIO = members(pin, supported_pins); //Check if output pin supports GPIO

//If given pin does not support GPIO functionality, raise the error
if(PinIsGPIO == 0)
	error(9999, 'SCI2CERROR: Given pin number doesnot support GPIO functionality.');
end
state = 1;

endfunction
