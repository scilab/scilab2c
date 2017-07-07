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


//This function reads data from I2C bus. 
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
#include "cmd_i2c_read.h"
#include "Arduino.h"
#include "Wire.h"

float u8cmd_i2c_reads(uint8 address, uint8 bytes)
{
	
  		float c;				   	   //variable declaration to save received data

		//  request reading from sensor
  		Wire.requestFrom(address, bytes);          // request no. of bytes(given) from slave device with address

                // receive reading from sensor
		while (Wire.available())		   //If data is received
     		c = Wire.read(); 			   //Save received data in variable
		return(c);
	
}
