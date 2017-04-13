function state = RPI_DigitalIn(pin)
// Function to read current state on digital pins. 
//
// Calling Sequence
//     state = RPI_DigitalIn(pin)
//
// Parameters
//     pin : pin of RPi to be used 
//     state : current state of the pin (0 -> LOW, 1 -> HIGH)
//
// Description
//     This fucntion is used for reading the current state on gpio pins of RPi. 'RPI_DigitalSetup' function must be called before this for setting up pin as input. 'pin' must be specified from list given. 'state' specifies the input state (0 -> Low, 1-> High)  
// Examples
//     RPI_DigitalIn(RPI_GPIO_P1_03) //Reads the state of pin 3 of header P1.
//
// See also
//     RPI_DigitalSetup RPI_DigitalOut
//
//
// Authors
//     Siddhesh Wani
//
// -----------------------------------------------------------------
//Pins of header P1 which can be used as GPIO
supported_pins = [3,5,7,8,10,11,12,13,15,16,18,19,21,22,23,24,26,27,28,29,...
				  31,31,33,35,36,37,38,40];
	
PinIsGPIO = members(pin, supported_pins); //Check if input pin supports GPIO

//If given pin does not support GPIO functionality, raise the error
if(PinIsGPIO == 0)
	error(9999, 'SCI2CERROR: Given pin number doesnot support GPIO functionality.');
end
state = 1;
endfunction
