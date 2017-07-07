/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
<<<<<<< HEAD
 Author: Siddhesh Wani, Jorawar Singh
=======
 Author: Siddhesh Wani
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

/* This file declares functions and constants related to rasberrypi*/

#ifndef __RPIPERIPHERALTIMING_H__
#define __RPIPERIPHERALTIMING_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "wiringPi.h"

<<<<<<< HEAD
void u32RPI_delays(uint32 time);
void u32RPI_delayMicros(uint32 time);
uint32 RPI_millis();
uint32 RPI_micros();
=======
void u16RPIDelayMillis(uint16 time);
void u16RPIDelayMicros(uint16 time);
uint32 u32RPIGetMillis();
uint32 u32RPIGetMicros();
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__RPIPERIPHERALTIMING_H__*/
