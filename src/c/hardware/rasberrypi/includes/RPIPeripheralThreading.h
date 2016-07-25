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
#ifndef __RPIPERIPHERALTHREADING_H__
#define __RPIPERIPHERALTHREADING_H__

#include "types.h"
#include "wiringPi.h" 

#ifdef  __cplusplus
extern "C" {
#endif

uint16 RPIThreadCreate(void (*threadFunction));

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALTHREADING_H__*/
