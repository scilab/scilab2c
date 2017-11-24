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

#ifndef __CMD_I2C_READ_H__
#define __CMD_I2C_READ_H__
 
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
	
float u8cmd_i2c_reads(uint8 address, uint8 bytes);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* __CMD_I2C_READ_H__ */