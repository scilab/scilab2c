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

#ifndef __RPIPERIPHERALTIMING_H__
#define __RPIPERIPHERALTIMING_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "wiringPi.h"

void u32RPI_delays(uint32 time);
void u32RPI_delayMicros(uint32 time);
uint32 RPI_millis();
uint32 RPI_micros();

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__RPIPERIPHERALTIMING_H__*/
