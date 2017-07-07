// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function AVRADCSetup(prescaler,adc_ref)
// Function to initialise ADC of AVR
//
// Calling Sequence
//     AVRADCSetup(uint8 prescaler, uint8 adc_ref)
//
// Parameters
//     prescaler: prescaler to be used for generating ADC clock (0-7)
//     adc_ref	: reference voltage to be used for ADC conversion
//              0 -> Voltage on VREF pin
//              1 -> Voltage on AVCC pin
//              2 -> Internal 2.56 reference voltage       
//
// Description
//     This function initialises ADc of AVR with given parameters. 'prescaler' is 
//     needed for deciding ADC clock. ADC clock should be between 50KHz and 200KHz
//     and it given as (MCU clock/2^prescaler). Select appropriate prescaler depending
//     on MCU clock. 'adc_ref' selects one of the available reference voltage sources
//     available
// Examples
//     AVRADCSetup(128,0)
// See also
//     AVRReadADC
//
// Authors
//     Siddhesh Wani Ashish Kamble
//
// This is curretly dummy function. It provides no functionality but is required 
// for providing support for generating C code for AVR.

if(prescaler>=8)
disp("Error : Invalid input argument ''prescaler'' in AVRADCSetup function.");
end
if(adc_ref>=3) then 
disp("Error : Invalid input argument ''adc_ref'' in AVRADCSetup function.");
end
endfunction
