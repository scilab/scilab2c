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

/* Function to send string on specified serial port. */
     
#include "types.h"
#include "RPIPeripheralSerial.h"

uint8 gRPISerialSendDatas(int fd, uint8* data, int size)
{
	int count = 0;

	while(data[count] != '\0')
	{
		serialPutchar(fd, data[count]);	
	}
	
	return 0;
} 
