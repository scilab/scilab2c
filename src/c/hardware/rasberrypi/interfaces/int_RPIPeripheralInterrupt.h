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

#ifndef __INT_RPIPERIPHERALINTERRUPT_H__
#define __INT_RPIPERIPHERALINTERRUPT_H__

#include "types.h"
#include "RPIPeripheralInterrupt.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define u80i160RPI_waitForInterrupti80(pin,time) u8RPI_waitForInterrupts(pin,time);
#define d0d0RPI_waitForInterrupti80(pin,time) u8RPI_waitForInterrupts(pin,time);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALINTERRUPT_H__ */
