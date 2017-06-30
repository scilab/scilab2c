/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author:  Jorawar Singh, Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_RPIPERIPHERALI2C_H__
#define __INT_RPIPERIPHERALI2C_H__

#include "types.h"
#include "RPIPeripheralI2C.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define u160RPI_I2CSetupi80(arrd) u16RPI_I2CSetups(arrd);
#define u160RPI_I2CReadi80(fd) u16RPI_I2CReads(fd);
#define u160u160RPI_I2CReadReg8i80(fd,reg) u16RPI_I2CReadReg8s(fd,reg);
#define u160u160RPI_I2CReadReg16i80(fd,reg) u16RPI_I2CReadReg16s(fd,reg);
#define u160u160RPI_I2CWritei80(fd,data) u16RPI_I2CWrites(fd,data);
#define u160u160u160RPI_I2CWriteReg8i80(fd,reg,data) u16RPI_I2CWriteReg8s(fd,reg,data);
#define u160u160u160RPI_I2CWriteReg16i80(fd,reg,data) u16RPI_I2CWriteReg16s(fd,reg,data);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALI2C_H__ */
