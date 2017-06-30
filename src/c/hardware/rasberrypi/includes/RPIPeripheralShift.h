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
#ifndef __RPIPERIPHERALSHIFT_H__
#define __RPIPERIPHERALSHIFT_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "wiringShift.h"
#include "sr595.h"

uint8 u8RPI_shiftIns(uint8 dpin,uint8 cpin,uint8 order);
void u8RPI_shiftOuts(uint8 dpin,uint8 cpin,uint8 order,uint8 val);
int8 u16RPI_sr595Setups(uint16 pinBase,uint8 nPins,uint8 dP,uint8 cP,uint8 lP);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALSHIFT_H__*/
