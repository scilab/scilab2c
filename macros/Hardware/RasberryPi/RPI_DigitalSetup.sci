function RPI_DigitalSetup(pin, direction)
// Function to setup digital pins. 
//
// Calling Sequence
//     RPI_DigitalSetup(pin,direction)
//
// Parameters
//     pin : pin of RPi to be used 
//     direction : direction to be set for pin (0 -> INPUT, 1 -> OUTPUT)
//
// Description
//     There are few pins available on RPi as Gpio or digital io. These pins can be used as digital output or input. Pin name must be provided from list provided. Please refer '' for complete list of pins. Direction can be 0 or 1 depending upon desired function (Input/output)
// Examples
//     RPI_DigitalSetup(3,0) //Sets pin 3 of header P1 as input
//
// See also
//     RPI_DigitalIn RPI_DigitalOut
//
//
// Authors
//     Siddhesh Wani
// -----------------------------------------------------------------
//Pins of header P1 which can be used as GPIO
supported_pins = [3,5,7,8,10,11,12,13,15,16,18,19,21,22,23,24,26]
	
PinIsGPIO = members(pin, supported_pins); //Check if input pin supports GPIO

//If given pin does not support GPIO functionality, raise the error
if(PinIsGPIO == 0)
	error(9999, 'SCI2CERROR: Given pin number doesnot support GPIO functionality.');
end
endfunction
