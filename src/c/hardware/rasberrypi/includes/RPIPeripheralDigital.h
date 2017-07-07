<<<<<<< HEAD
/* Copyright (C) 2017 - IIT Bombay - FOSSEE
=======
/* Copyright (C) 2016 - IIT Bombay - FOSSEE
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

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

<<<<<<< HEAD
#include "types.h"

uint8 u8RPI_digitalReads(uint8 pin);
uint8 RPI_digitalReadByte();
void u8RPI_digitalWrites(uint8 pin, uint8 state);
void u8RPI_digitalWriteBytes(uint8 value);
=======

#include "types.h"
#include "wiringPi.h"

extern int phy_pin[];

void u8RPIDigitalSetups(uint8 pin, uint8 direction);
void u8RPIDigitalOuts(uint8 pin, uint8 state);
uint8 u8RPIDigitalIns(uint8 pin);
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__RPIPERIPHERALGPIO_H__*/
