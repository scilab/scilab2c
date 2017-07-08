// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function adc_result = AVRReadADC(channel)
// Function to get voltage on analog pin on AVR
//
// Calling Sequence
//     u8AVRReadADCs(channel)
//
// Parameters
//     channel 	: Select which channel is to be read. Values from 0-7 select one of the pins ADC0-ADC7. For other possible channel values refer datasheet
//
// Description
//     This function returns digital value for present on adc pins. 'channel' 
//     selects which of the ADC0-ADC7 is to be used for reading analog value.
//     Apart from reading just ADC0-ADC7 other it can also read differential 
//     voltages between some pins. For channel values for those options, please 
//     refer datasheet.      
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.
//
// Examples
//     adc_result = u8AVRReadADC(0)   //Read ADC0
// Authors
//     Siddhesh Wani
//     Ashish Kamble
//

if(channel>=8) then 
disp("Error : Inavlid input argument ''channel'' in AVRReadADC function.");
end
adc_result = 0;   //adc_result has been initialised to avoid runtime error.
endfunction
