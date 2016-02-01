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

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.

endfunction
