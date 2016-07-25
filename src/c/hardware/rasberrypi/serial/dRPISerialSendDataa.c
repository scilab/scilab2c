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

/* Function to send double data array/matrix on specified serial port. */
     
#include "types.h"
#include "RPIPeripheralSerial.h"

uint8 dRPISerialSendDataa(int fd, double* data, int size)
{
	int count = 0;
	
	for (count = 0; count < size; count++)
	{
		dRPISerialSendDatas(fd, data[count]);
	}

	return 0;
} 
