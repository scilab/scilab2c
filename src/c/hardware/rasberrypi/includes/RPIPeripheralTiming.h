/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
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

void u16RPIDelayMillis(uint16 time);
void u16RPIDelayMicros(uint16 time);
uint32 u32RPIGetMillis();
uint32 u32RPIGetMicros();

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__RPIPERIPHERALTIMING_H__*/
