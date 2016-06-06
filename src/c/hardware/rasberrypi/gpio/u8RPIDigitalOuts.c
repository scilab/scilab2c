/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
 
/* Function to change the output state of the gpio pin

 Calling Sequence
     u8RPI_DigitalOuts(pin,state)

 Parameters
     pin : pin of RPi to be used 
     state : desired output state for pin (0 -> LOW, 1 -> HIGH)

 Description
     There are few pins available on RPi as Gpio or digital i/o. These pins can be used as digital output or input. 'Pin' name must be provided from list provided. Please refer '' for complete list of pins. 'state' can be 0 or 1 depending upon desired output (Low/High). RPI_DigitalSetup with appropriate arguments must be called before using this function.
 Examples
     u8RPI_DigitalOuts(RPI_GPIO_P1_03,1) //Sets pin 3 of header P1 as 'high' output
*/


#include "types.h"
#include "RPIPeripheralDigital.h"


uint8 u8RPIDigitalOuts(uint8 pin, uint8 state)
{
	if (state == 0)  //low output
		bcm2835_gpio_clr(pin);
	if (state == 1)  //high output
		bcm2835_gpio_set(pin);
}
