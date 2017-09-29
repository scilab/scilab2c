/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

/* This file declares functions and constants related to GPIO pins*/

#ifndef __RPIPERIPHERALGPIO_H__
#define __RPIPERIPHERALGPIO_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"

uint8 u8RPI_digitalReads(uint8 pin);
uint8 RPI_digitalReadByte();
void u8RPI_digitalWrites(uint8 pin, uint8 state);
void u8RPI_digitalWriteBytes(uint8 value);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__RPIPERIPHERALGPIO_H__*/
