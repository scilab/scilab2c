<<<<<<< HEAD
=======
/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Yash Pratap Singh Tomar
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

//This function writes data to the connected device
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
#include "cmd_i2c_write.h"
#include "Arduino.h"
#include "Wire.h"

void u8cmd_i2c_writes(uint8 address, uint8 data)
{
	
		Wire.beginTransmission(address);    //Begins transmission to the device connected to given address
		Wire.write(data);                   //sends data to slave device
  		Wire.endTransmission();             //Transmission ends
	
} 

