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

#ifndef __RPIPERIPHERALSETUP_H__
#define __RPIPERIPHERALSETUP_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "wiringPi.h"

int8 gRPI_pinNumberinga(char* seq,int size);
uint8 u8RPI_getAlts(uint8 pin);
void u8RPI_pinModeAlts(uint8 pin,uint8 mode);
void u8RPI_pinModes(uint8 pin,char* mode,int size);
void u8RPI_pullControls(uint8 pin,char* mode,int size);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__RPIPERIPHERALSETUP_H__*/
