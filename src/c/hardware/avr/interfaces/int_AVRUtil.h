// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Author: Siddhesh Wani
// Email: toolbox@scilab.in


#ifndef __INT_AVRUTIL_H__
#define __INT_AVRUTIL_H__

#include <avr/io.h>
#include "AVRUtil.h"

#ifdef  __cplusplus
extern "C" {
#endif

//#define d0sleepu80(in1) u16AVRSleeps ((uint16) in1);

#define AVRSleep(in1) u16AVRSleeps ((uint16) in1);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALGPIO_H__ */
