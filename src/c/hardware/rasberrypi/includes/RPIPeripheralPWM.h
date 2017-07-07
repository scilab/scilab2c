 /* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
<<<<<<< HEAD
 Author: Siddhesh Wani, Jorawar Singh
=======
 Author: Siddhesh Wani
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __RPIPERIPHERALPWM_H__
#define __RPIPERIPHERALPWM_H__

<<<<<<< HEAD
=======
#include "types.h"
#include "wiringPi.h"

>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
#ifdef  __cplusplus
extern "C" {
#endif

<<<<<<< HEAD
#include "types.h"

void u8RPI_pwmWrites(uint8 pin,uint16 value);
void u32RPI_pwmRanges(uint32 value);
void gRPI_pwmModea(char* mode,int size);
void u16RPI_pwmClocks(uint16 divisor);
void u8RPI_pwmToneWrites(uint8 pin,uint16 value);
=======
void u8RPIHardPWMWrites(uint8 pin, uint16 value);
void u8RPIHardPWMSetRanges(uint16 value);
void u8RPIHardPWMSetModes(uint8 mode);
void u8RPIHardPWMSetClocks(uint16 clk_divisor);
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALPWM_H__*/
