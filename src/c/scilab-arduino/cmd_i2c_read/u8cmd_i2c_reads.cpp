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
