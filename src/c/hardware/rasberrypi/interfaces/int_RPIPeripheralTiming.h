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

#ifndef __INT_RPIPERIPHERALTIMING_H__
#define __INT_RPIPERIPHERALTIMING_H__

#include "types.h"
#include "RPIPeripheralTiming.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define u320RPI_delay(time) u32RPI_delays(time);
#define d0RPI_delay(time) u32RPI_delays(time);

#define u320RPI_delayMicro(time) u32RPI_delayMicros(time);
#define RPI_millisu320() RPI_millis();
#define RPI_microsu320() RPI_micros();

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALTIMING_H__ */
