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

/* This file declares functions and constants related to Setup*/

#ifndef __RPIPERIPHERALSOFT_H__
#define __RPIPERIPHERALSOFT_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "softPwm.h"
#include "softTone.h"

uint8 u8RPI_softPwmCreates(uint8 pin,uint16 ival,uint16 range);
void u8RPI_softPwmStops(uint8 pin);
void u8RPI_softPwmWrites(uint8 pin,uint16 value);
uint8 u8RPI_softToneCreates(uint8 pin);
void u8RPI_softToneStops(uint8 pin);
void u8RPI_softToneWrites(uint8 pin,uint32 value);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__RPIPERIPHERALSOFT_H__*/
