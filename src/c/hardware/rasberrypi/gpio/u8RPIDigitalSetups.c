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

/* Function to setup digital pins 
	direction = 1 -> output
*/

#include "types.h"
#include "RPIPeripheralDigital.h"


/*This array maps pin numbers on RPi board, with actual physical pin numbers
on processor, required by BCM2835 library*/
int phy_pin[] = {0, 0, 2, 0, 3, 0, 4, 14, 0, 15,  		/*Pin 1 to 10*/
				17, 18, 27, 0, 22, 23, 0, 24, 10, 0,  	/*Pin 11 to 20*/
				9, 25, 11, 8, 0, 7 };					/*Pin 21 to 26*/

/*pin is reduced by one as arrayiindex starts from 0 and pin no starts from 1*/
uint8 u8RPIDigitalSetups(uint8 pin, uint8 direction)
{
	if(direction == 1) //Pin to be used as output
	{
    	bcm2835_gpio_fsel(phy_pin[pin-1], BCM2835_GPIO_FSEL_OUTP);
	}
	else
	{
		bcm2835_gpio_fsel(phy_pin[pin-1], BCM2835_GPIO_FSEL_INPT);
	}

	return 0;
}
