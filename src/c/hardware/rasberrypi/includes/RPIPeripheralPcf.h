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
#ifndef __RPIPERIPHERALPCF_H__
#define __RPIPERIPHERALPCF_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "pcf8574.h"
#include "pcf8591.h"

uint8 u16RPI_pcf8574Setups(uint16 pinBase,uint8 addr);
uint8 u16RPI_pcf8591Setups(uint16 pinBase,uint8 addr);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALPCF_H__*/
