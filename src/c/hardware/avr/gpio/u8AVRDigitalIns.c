// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

// Function to get current state (high\low) of a digital pin on AVR
//
// Calling Sequence
//     u8AVRDigitalIns(port,pin)
//
// Parameters
//     port : port of microcontroller to be used (1 for PORTA, 2 for PORTB,...)
//     pin : pin of port (mentioned above) to be used
//   Returns->  
//     state : state of the pin (0 for low and 1 for high)
//
// Description
//     Each AVR microcontroller has pins which can be configured as digital
//     outputs. These are normally divided among some 'ports' (group of pins).
//     User has to select one of these port and which pin of that port is to 
//     be read. Function returns current state of the pin '1' (high) or '0' (low).
//          
//
// Examples
//     state = u8AVRDigitalIns(1,0)
//
// Authors
//     Siddhesh Wani
//


#include "AVRPeripheralGPIO.h"

uint8 u8AVRDigitalIns(uint8 port,uint8 pin)
{
    unsigned int state = 0;
    if(port == PORT_A)
    {
	state  = bit_is_clear(PINA,pin);
        return !state;
    }
    if(port == PORT_B)
    {
        state  = bit_is_clear(PINB,pin);
        return !state;
    }
    if(port == PORT_C)
    {
        state  = bit_is_clear(PINC,pin);
	return !state;    
    }
    if(port == PORT_D)
    {
        state  = bit_is_clear(PIND,pin);
	return !state;
    }

}
