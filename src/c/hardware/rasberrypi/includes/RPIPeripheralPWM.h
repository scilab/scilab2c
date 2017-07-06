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
#ifndef __RPIPERIPHERALPWM_H__
#define __RPIPERIPHERALPWM_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"

void u8RPI_pwmWrites(uint8 pin,uint16 value);
void u32RPI_pwmRanges(uint32 value);
void gRPI_pwmModea(char* mode,int size);
void u16RPI_pwmClocks(uint16 divisor);
void u8RPI_pwmToneWrites(uint8 pin,uint16 value);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALPWM_H__*/
