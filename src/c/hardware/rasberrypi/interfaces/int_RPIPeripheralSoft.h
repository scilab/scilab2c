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

#ifndef __INT_RPIPERIPHERALSOFT_H__
#define __INT_RPIPERIPHERALSOFT_H__

#include "types.h"
#include "RPIPeripheralSoft.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define u80u160u160RPI_softPwmCreateu80(pin,ival,range) u8RPI_softPwmCreates(pin,ival,range);
#define u80RPI_softPwmStop(pin) u8RPI_softPwmStops(pin);
#define u80u160RPI_softPwmWrite(pin,value) u8RPI_softPwmWrites(pin,value);
#define u80RPI_softToneCreateu80(pin) u8RPI_softToneCreates(pin);
#define u80RPI_softToneStop(pin) u8RPI_softToneStops(pin);
#define u80u320RPI_softToneWrite(pin,value) u8RPI_softToneWrites(pin,value);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALSOFT_H__ */
