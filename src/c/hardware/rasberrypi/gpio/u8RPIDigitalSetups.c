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
	direction = 0 -> input
*/

#include "types.h"
#include "RPIPeripheralDigital.h"


/*This array maps pin numbers on RPi board, with pin numbers corrsponding
to WiringPi library*/
int phy_pin[] = {17, 17, 8, 17, 9, 17, 7, 15, 17, 16,  	/*Pin 1 to 10*/
				0, 1, 2, 17, 3, 4, 17, 5, 12, 17, 	 	/*Pin 11 to 20*/
				13, 6, 14, 10, 17, 11 };				/*Pin 21 to 26*/

/*pin is reduced by one as arrayiindex starts from 0 and pin no starts from 1*/
uint8 u8RPIDigitalSetups(uint8 pin, uint8 direction)
{
	if(direction == 1) //Pin to be used as output
	{
    	pinMode(phy_pin[pin-1], OUTPUT);
	}
	else
	{
	    pinMode(phy_pin[pin-1], INPUT);
	}

	return 0;
}
