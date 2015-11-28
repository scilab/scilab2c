function AVRReadADC(channel)
// Function to get voltage on analog pin on AVR
//
// Calling Sequence
//     u8AVRReadADCs(channel)
//
// Parameters
//     channel 	: Select which channel is to be read. Values from 0-7 select one 
//	             of the pins ADC0-ADC7. For other possible channel values refer
//               datasheet
//   Returns->  
//     result 	: Digital value for the voltage present on channel selected
//
// Description
//     This function returns digital value for present on adc pins. 'channel' 
//     selects which of the ADC0-ADC7 is to be used for reading analog value.
//     Apart from reading just ADC0-ADC7 other it can also read differential 
//     voltages between some pins. For channel values for those options, please 
//     refer datasheet.      
//
// Examples
//     adc_result = u8AVRReadADC(0)   //Read ADC0
//
// Authors
//     Siddhesh Wani
//


// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.
endfunction
