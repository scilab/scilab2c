/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani, Jorawar Singh
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

/* This file declares functions and constants related to rasberrypi*/

#ifndef __RPIPERIPHERALI2C_H__
#define __RPIPERIPHERALI2C_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "wiringPiI2C.h"

int8 u16RPI_I2CSetups(uint8 arrd);
int8 u16RPI_I2CReads(uint16 fd);
int8 u16RPI_I2CReadReg8s(uint16 fd,uint16 reg);
int8 u16RPI_I2CReadReg16s(uint16 fd,uint16 reg);
int8 u16RPI_I2CWrites(uint16 fd,uint16 data);
int8 u16RPI_I2CWriteReg8s(uint16 fd,uint16 reg,uint16 data);
int8 u16RPI_I2CWriteReg16s(uint16 fd,uint16 reg,uint16 data);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__RPIPERIPHERALI2C_H__*/
