/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author:  Jorawar Singh, Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_RPIPERIPHERALMCP_H__
#define __INT_RPIPERIPHERALMCP_H__

#include "types.h"
#include "RPIPeripheralMcp.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define u160u80RPI_mcp23008Setupu80(pinBase,addr) u16RPI_mcp23008Setups(pinBase,addr);
#define d0d0RPI_mcp23008Setupu80(pinBase,addr) u16RPI_mcp23008Setups(pinBase,addr);

#define u160u80RPI_mcp23016Setupu80(pinBase,addr) u16RPI_mcp23016Setups(pinBase,addr);
#define d0d0RPI_mcp23016Setupu80(pinBase,addr) u16RPI_mcp23016Setups(pinBase,addr);

#define u160u80RPI_mcp23017Setupu80(pinBase,addr) u16RPI_mcp23017Setups(pinBase,addr);
#define d0d0RPI_mcp23017Setupu80(pinBase,addr) u16RPI_mcp23017Setups(pinBase,addr);

#define u160u80u80RPI_mcp23s08Setupu80(pinBase,spiport,devId) u16RPI_mcp23s08Setups(pinBase,spiport,devId);
#define d0d0d0RPI_mcp23s08Setupu80(pinBase,spiport,devId) u16RPI_mcp23s08Setups(pinBase,spiport,devId);

#define u160u80u80RPI_mcp23s17Setupu80(pinBase,spiport,devId) u16RPI_mcp23s17Setups(pinBase,spiport,devId);
#define d0d0d0RPI_mcp23s17Setupu80(pinBase,spiport,devId) u16RPI_mcp23s17Setups(pinBase,spiport,devId);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALMCP_H__ */
