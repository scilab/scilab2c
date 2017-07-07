/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
<<<<<<< HEAD
 Author:  Jorawar Singh, Siddhesh Wani
=======
 Author: Siddhesh Wani
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

<<<<<<< HEAD
=======

>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
#ifndef __INT_RPIPERIPHERALTIMING_H__
#define __INT_RPIPERIPHERALTIMING_H__

#include "types.h"
#include "RPIPeripheralTiming.h"

#ifdef  __cplusplus
extern "C" {
#endif

<<<<<<< HEAD
#define u320RPI_delay(time) u32RPI_delays(time);
#define d0RPI_delay(time) u32RPI_delays(time);

#define u320RPI_delayMicro(time) u32RPI_delayMicros(time);
#define d0RPI_delayMicro(time) u32RPI_delayMicros(time);

#define RPI_millisu320() RPI_millis();
#define RPI_microsu320() RPI_micros();
=======
#define RPI_DelayMicro(in1) u16RPIDelayMicros((uint16) in1)
#define RPI_DelayMilli(in1) u16RPIDelayMillis((uint16) in1)
#define RPI_GetMicro() u32RPIGetMicros()
#define RPI_GetMillis() u32RPIGetMillis()

>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

#ifdef  __cplusplus
} /* extern "C" */
#endif

<<<<<<< HEAD
#endif /* !__INT_RPIPERIPHERALTIMING_H__ */
=======
#endif /* !__RPIPERIPHERALTIMING_H__ */
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
