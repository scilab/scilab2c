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

/* Function to setup digital pins. 

 Calling Sequence
     u8RPI_DigitalSetup(pin,direction)

 Parameters
     pin : pin of RPi to be used 
     direction : direction to be set for pin (0 -> INPUT, 1 -> OUTPUT)

 Description
     There are few pins available on RPi as Gpio or digital io. These pins can be used as digital output or input. Pin name must be provided from list provided. Please refer '' for complete list of pins. Direction can be 0 or 1 depending upon desired function (Input/output)
 Examples
     RPI_DigitalSetup(RPI_GPIO_P1_03,0) //Sets pin 3 of header P1 as input

 See also
     RPI_DigitalIn RPI_DigitalOut
*/

#include "types.h"
#include "RPIPeripheralDigital.h"

uint8 u8RPIDigitalSetups(uint8 pin, uint8 direction)
{
	if(direction == 1) //Pin to be used as output
	{
    	bcm2835_gpio_fsel(pin, BCM2835_GPIO_FSEL_OUTP);
	}
	else
	{
		bcm2835_gpio_fsel(pin, BCM2835_GPIO_FSEL_INPT);
	}
}
