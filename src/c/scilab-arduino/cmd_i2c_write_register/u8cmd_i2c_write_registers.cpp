#include "cmd_i2c_write_register.h"
#include "Arduino.h"
#include "Wire.h"

void u8cmd_i2c_write_registers(uint8 address, uint8 reg_adrs, uint8 data)
{


		Wire.beginTransmission(address); //Begins transmission to the device connected to given address
		Wire.write(reg_adrs); 	         //sets register pointer to reg_adrs position
  		Wire.write(data);                //writes given data on reg_adrs position
  		Wire.endTransmission();          //Transmission ends


} 

