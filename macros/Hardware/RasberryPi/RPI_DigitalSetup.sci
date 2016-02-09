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
//     RPI_DigitalSetup(RPI_GPIO_P1_03,0) //Sets pin 3 of header P1 as input
//
// See also
//     RPI_DigitalIn RPI_DigitalOut
//
//
// Authors
//     Siddhesh Wani
//

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.

endfunction
