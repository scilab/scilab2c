#include "cmd_i2c_write.h"
#include "Arduino.h"
#include "Wire.h"

void u8cmd_i2c_writes(uint8 address, uint8 data)
{
	
		Wire.beginTransmission(address);    //Begins transmission to the device connected to given address
		Wire.write(data);                   //sends data to slave device
  		Wire.endTransmission();             //Transmission ends
	
} 

