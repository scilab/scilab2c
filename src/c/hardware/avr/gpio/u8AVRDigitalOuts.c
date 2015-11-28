// Function to change state (high\low) of a digital output pin on AVR
//
// Calling Sequence
//     u8AVRDigitalOuts(port,pin,state)
//
// Parameters
//     port : port of microcontroller to be used (1 for PORTA, 2 for PORTB,...)
//     pin : pin of port (mentioned above) to be used
//     state : state to be outputed on pin (0 for low and 1 for high)
//
// Description
//     Each AVR microcontroller has pins which can be configured as digital
//     outputs. These are normally divided among some 'ports' (group of pins).
//     User has to select one of these port and which pin of that port as 
//     digital output. Also, desired output state must be specified as 
//     '1' (high) or '0' (low).     
//
// Examples
//     u8AVRDigitalOuts(1,0,1)
//
// Authors
//     Siddhesh Wani
//


#include "AVRPeripheralGPIO.h"

uint8 u8AVRDigitalOuts(uint8 port,uint8 pin,uint8 state)
{
    if(state == LOW)
    {/*Make output pin high*/
	if(port == PORT_A)
	{
	    PORTA = PORTA & ~(1<<pin);
	}
	if(port == PORT_B)
	{
	    PORTB = PORTB & ~(1<<pin);
	}
	if(port == PORT_C)
	{
	    PORTC = PORTC & ~(1<<pin);
	}
	if(port == PORT_D)
	{
	    PORTD = PORTD & ~(1<<pin);
	}
    }
    else
    {/*Make output pin high*/
	if(port == PORT_A)
	{
	    PORTA = PORTA | (1<<pin);
	}
	if(port == PORT_B)
	{
	    PORTB = PORTB | (1<<pin);
	}
	if(port == PORT_C)
	{
	    PORTC = PORTC | (1<<pin);
	}
	if(port == PORT_D)
	{
	    PORTD = PORTD | (1<<pin);
	}
    }
return 0;
}
