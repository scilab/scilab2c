function state = AVRDigitalIn(port,pin)
// Function to get state (high\low) of a digital input pin on AVR
//
// Calling Sequence
//     state=AVRDigitalIn(port,pin)
//
// Parameters
//     port : port of microcontroller to be used
//     pin : pin of port (mentioned above) to be used
//   Returns  
//     state : state of an input pin (HIGH\LOW)
//
// Description
//     Each AVR microcontroller has pins which can be configured as digital
//     inputs. These are normally divided among some 'ports' (group of pins).
//     User has to select one of these port and which pin of that port as 
//     digital input.      
//
// Examples
//     pinA0 = AVRDigitalIn(1,0)   //To read state on pin 0 of port A
//
// See also
//     AVRDigitalOut AVRDigitalSetup
//
//
// Authors
//     Siddhesh Wani
//

// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.
endfunction
