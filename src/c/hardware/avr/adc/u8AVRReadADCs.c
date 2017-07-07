// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

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
//     Ashish Kamble


#include "AVRPeripheralADC.h"

uint8 u8AVRReadADCs(uint8 channel)
{

uint8 i;

  ADCH=0x00;

  i=channel&0x07;
  ADMUX=i|0x60;                //i|0x40 for 10 bits
  ADCSRA|=1<<ADSC;

  while(ADCSRA & (1<<ADSC));       // wait for conv. to complete
  uint8 temp=ADCH;      //unsigned int temp=ADC;   for 10 bits

  return temp;
	
}










/*Set ADC conversion channel*/
//    ADMUX |= (channel & 0x1F);

	/*Start ADC conversion. Set 'ADSC' bit*/
//	ADCSRA |= (1<<6);

	/*Wait for conversion to complete. Check 'ADIF' bit*/
//    while(!(ADCSRA & (1<<4)));

	/*Clear ADIF flag*/
//    ADCSRA |= (1<<4);

	/*ADC conversion result is stored in ADCH/L registers*/
//	return (ADC);


