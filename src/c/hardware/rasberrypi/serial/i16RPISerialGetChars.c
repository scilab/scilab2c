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

/* Function to read character from spcified serial port (file descriptor). 
   This function will block execution for 10 secs if no character is available,
   and will return -1 in that case*/
     
#include "types.h"
#include "RPIPeripheralSerial.h"

int16 i16RPISerialGetChars(int fd)
{
	int data = 0;
	
	data = serialGetchar(fd);

	return data;
} 
