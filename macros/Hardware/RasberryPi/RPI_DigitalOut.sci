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

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for RPi.

endfunction
