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

#ifndef __INT_RPIPERIPHERALGERTBOARD_H__
#define __INT_RPIPERIPHERALGERTBOARD_H__

#include "types.h"
#include "RPIPeripheralGertboard.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define RPI_gertboardSPISetupi80() RPI_gertboardSPISetup();

#define u160RPI_gertboardAnalogSetupi80(pinBase) u16RPI_gertboardAnalogSetups(pinBase);
#define d0RPI_gertboardAnalogSetupi80(pinBase) u16RPI_gertboardAnalogSetups(pinBase);

#define u160RPI_gertboardAnalogReadu160(pin) u160RPI_gertboardAnalogReads(pin);
#define d0RPI_gertboardAnalogReadu160(pin) u160RPI_gertboardAnalogReads(pin);

#define u160u160RPI_gertboardAnalogWrite(pin,value) u160RPI_gertboardAnalogWrites(pin,value);
#define d0d0RPI_gertboardAnalogWrite(pin,value) u160RPI_gertboardAnalogWrites(pin,value);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALGERTBOARD_H__ */
