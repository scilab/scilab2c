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

#ifndef __INT_RPIPERIPHERALPWM_H__
#define __INT_RPIPERIPHERALPWM_H__

#include "types.h"
#include "RPIPeripheralPWM.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define u80u160RPI_pwmWrite(pin,value) u8RPI_pwmWrites(pin,value);
#define u320RPI_pwmRange(value) u32RPI_pwmRanges(value);
#define g2RPI_pwmMode(mode) gRPI_pwmModea(mode);
#define u160RPI_pwmClock(divisor) u16RPI_pwmClocks(divisor);
#define u80u160RPI_pwmToneWrite(pin,value) u8RPI_pwmToneWrites(pin,value);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALPWM_H__ */
