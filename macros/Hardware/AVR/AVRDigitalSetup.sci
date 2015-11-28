function AVRDigitalSetup(port,pin,direction)
// Function to decide direction of a digital pin on AVR
//
// Calling Sequence
//     AVRDigitalSetup(port,pin,direction)
//
// Parameters
//     port : port of microcontroller to be used
//     pin : pin of port (mentioned above) to be used
//     direction : direction to be set for pin (INPUT\OUTPUT)
//
// Description
//     Each AVR microcontroller has pins which can be configured as digital
//     outputs/inputs. These are normally divided among some 'ports' (group of pins).
//     User has to select one of these port and which pin of that port to be 
//     used as digital output/input. Also, desired direction must be specified as 
//     'INPUT' or 'OUTPUT'.     
//
// Examples
//     AVRDigitalSetup('A',0,OUTPUT)
//
// See also
//     AVRDigitalIn AVRDigitalOut
//
//
// Authors
//     Siddhesh Wani
//

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.
endfunction
