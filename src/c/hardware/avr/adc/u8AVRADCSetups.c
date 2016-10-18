// Function to initialise ADC of AVR
//
// Calling Sequence
//     AVRSetupADC(uint8 prescalar, uint8 adc_ref)
//
// Parameters
//     prescalar: prescalar to be used for generating ADC clock (0-7)
//     adc_ref	: reference voltage to be used for ADC conversion
//              0 -> Voltage on VREF pin
//              1 -> Voltage on AVCC pin
//              2 -> Internal 2.56 reference voltage       
//
// Description
//     This function initialises ADc of AVR with given parameters. 'prescalar' is 
//     needed for deciding ADC clock. ADC clock should be between 50KHz and 200KHz
//     and it given as (MCU clock/2^prescalar). Select appropriate prescalar depending
//     on MCU clock. 'adc_ref' selects one of the available reference voltage sources
//     available
// Examples
//     AVRADCSetup(128,0)
//
// Authors
//     Siddhesh Wani
//

#include "AVRPeripheralADC.h"


void u8AVRADCSetups(uint8 prescalar, uint8 adc_ref)
{
    /*Set the prescalar value*/
    ADCSRA |= (prescalar & 0x07);

    /*Set the adc reference voltage*/
    ADMUX |= ((adc_ref & 0x03) << 6);

    /*Enable ADC hardware. Set ADEN bit*/
    ADCSRA |= (1<<7); 	

}

