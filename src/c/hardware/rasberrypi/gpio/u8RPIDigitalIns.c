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

/* Function to read the state of the gpio pin */

#include "types.h"
#include "RPIPeripheralDigital.h"

/*pin is reduced by one as array index starts from 0 and pin no starts from 1*/
uint8 u8RPIDigitalIns(uint8 pin)
{
	uint8 state = 0;
	state = digitalRead(phy_pin[pin-1]);
	return (state);
}
