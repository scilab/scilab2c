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

#ifndef __AVRUTIL_H__
#define __AVRUTIL_H__

#include <avr/io.h>


#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "util/delay.h"

uint8 u16AVRSleeps (uint16 delay);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRUTIL_H__ */
