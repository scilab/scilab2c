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

//This function establishes I2C communication between arduino and given device

>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
#include "cmd_i2c_dev.h"
#include "Arduino.h"
#include "Wire.h"

<<<<<<< HEAD

uint8 u8cmd_i2c_devs(uint8 address)
{
       Wire.begin(); 
       return((uint8)address); 
=======
uint8 u8cmd_i2c_devs(uint8 address)
{
       Wire.begin(); 					//To initiate connection
       return((uint8)address); 				//Returns address to create a device object
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
}
