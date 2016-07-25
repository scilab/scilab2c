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

/* Function to send float data on specified serial port. */
     
#include "types.h"
#include "RPIPeripheralSerial.h"

uint8 sRPISerialSendDatas(int fd, float data)
{
	uint8 count;

	union float_bytes{
		float float_data;
		unsigned char bytes[sizeof(float)];
	} in_data;
	in_data.float_data = data;

	for(count=0; count<sizeof(float); count++)
	{
		//Send lsb first
		serialPutchar(fd, (uint8) in_data.bytes[count]);	
	}
	
	return 0;
} 
