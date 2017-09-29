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

#ifndef __RPIPERIPHERALGERTBOARD_H__
#define __RPIPERIPHERALGERTBOARD_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "gertboard.h"

int8 RPI_gertboardSPISetup();
uint16 u16RPI_gertboardAnalogReads(uint16 pin);
int8 u16RPI_gertboardAnalogSetups(uint16 pinBase);
void u16RPI_gertboardAnalogWrites(uint16 pin,uint16 value);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__RPIPERIPHERALGERTBOARD_H__*/
