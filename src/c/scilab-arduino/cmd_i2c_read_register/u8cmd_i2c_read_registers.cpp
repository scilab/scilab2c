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


//this function reads data from the device register with given address
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
#include "cmd_i2c_read_register.h"
#include "Arduino.h"
#include "Wire.h"

uint16 u8cmd_i2c_read_registers(uint8 address, uint8 reg_adrs)
{
  long int reading;

  Wire.beginTransmission(address); // transmit to device address
  Wire.write(reg_adrs);      // sets register pointer to reg_adrs position
  Wire.endTransmission();      // stop transmitting

  //  request reading from sensor
  Wire.requestFrom(address, 2);    // request 2 bytes from slave device with address

  // receive reading from sensor
  if (2 <= Wire.available())  // if two bytes were received
  {
    reading = Wire.read();  // receive high byte (overwrites previous reading)
    reading = reading << 8;    // shift high byte to be high 8 bits
    reading |= Wire.read(); // receive low byte as lower 8 bits
  }
  
    return(reading);

}
