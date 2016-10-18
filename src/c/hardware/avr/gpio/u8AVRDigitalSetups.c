// Function to decide direction of a digital pin on AVR
//
// Calling Sequence
//     AVRDigitalSetup(port,pin,direction)
//
// Parameters
//     port : port of microcontroller to be used (1 for PORTA, 2 for PORTB,...)
//     pin : pin of port (mentioned above) to be used
//     direction : direction to be set for pin (0 for input, 1 for output)
//
// Description
//     Each AVR microcontroller has pins which can be configured as digital
//     outputs/inputs. These are normally divided among some 'ports' (group of pins).
//     User has to select one of these port and which pin of that port to be 
//     used as digital output/input. Also, desired direction must be specified as 
//     'INPUT' or 'OUTPUT'.     
//
// Examples
//     AVRDigitalSetup(1,0,1)
//
// Authors
//     Siddhesh Wani
//

#include "AVRPeripheralGPIO.h"


void u8AVRDigitalSetups(uint8 port,uint8 pin,uint8 direction)
{
    
    if (direction == INPUT)
    {/*Set pin as input*/      
	if(port == PORT_A)
   	{
	    DDRA = DDRA & ~(1<<pin);
   	}
	if(port == PORT_B)
   	{
	    DDRB = DDRB & ~(1<<pin);
   	}
	if(port == PORT_C)
   	{
	    DDRC = DDRC & ~(1<<pin);
   	}
	if(port == PORT_D)
   	{
	    DDRD = DDRD & ~(1<<pin);
   	}
    }
    else
    {/*Set pin as output*/
	if(port == PORT_A)
   	{
	    DDRA = DDRA | (1<<pin);
   	}
	if(port == PORT_B)
   	{
	    DDRB = DDRB | (1<<pin);
   	}
	if(port == PORT_C)
   	{
	    DDRC = DDRC | (1<<pin);
   	}
	if(port == PORT_D)
   	{
	    DDRD = DDRD | (1<<pin);
   	}
    }
}

