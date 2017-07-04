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

/* Function to check for data availability at specified port. Returns no of 
	bytes to be read */
     
#include "types.h"
#include "RPIPeripheralSerial.h"

int16 i16RPISerialDataAvails(int fd)
{
	int bytes = 0;
	bytes = serialDataAvail(fd);

	return bytes;
} 
