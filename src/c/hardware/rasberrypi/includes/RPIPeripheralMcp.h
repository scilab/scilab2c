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
#ifndef __RPIPERIPHERALMCP_H__
#define __RPIPERIPHERALMCP_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "mcp23016.h"
#include "mcp23017.h"
#include "mcp23008.h"
#include "mcp23s17.h"
#include "mcp23s08.h"

uint8 u16RPI_mcp23008Setups(uint16 pinBase,uint8 addr);
uint8 u16RPI_mcp23016Setups(uint16 pinBase,uint8 addr);
uint8 u16RPI_mcp23017Setups(uint16 pinBase,uint8 addr);
uint8 u16RPI_mcp23s08Setups(uint16 pinBase,uint8 spiport,uint8 devId);
uint8 u16RPI_mcp23s17Setups(uint16 pinBase,uint8 spiport,uint8 devId);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__RPIPERIPHERALMCP_H__*/
