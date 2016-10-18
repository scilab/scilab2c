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
#ifndef __RPIPERIPHERALPWM_H__
#define __RPIPERIPHERALPWM_H__

#include "types.h"
#include "wiringPi.h"

#ifdef  __cplusplus
extern "C" {
#endif

void u8RPIHardPWMWrites(uint8 pin, uint16 value);
void u8RPIHardPWMSetRanges(uint16 value);
void u8RPIHardPWMSetModes(uint8 mode);
void u8RPIHardPWMSetClocks(uint16 clk_divisor);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALPWM_H__*/
