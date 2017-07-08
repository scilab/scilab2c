#include "cmd_i2c_dev.h"
#include "Arduino.h"
#include "Wire.h"


uint8 u8cmd_i2c_devs(uint8 address)
{
       Wire.begin(); 
       return((uint8)address); 
}
