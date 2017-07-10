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

#ifndef __INT_RPIPERIPHERALPCF_H__
#define __INT_RPIPERIPHERALPCF_H__

#include "types.h"
#include "RPIPeripheralPcf.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define u160u80RPI_pcf8574Setupu80(pinBase,addr) u16RPI_pcf8574Setups(pinBase,addr);
#define d0d0RPI_pcf8574Setupu80(pinBase,addr) u16RPI_pcf8574Setups(pinBase,addr);

#define u160u80RPI_pcf8591Setupu80(pinBase,addr) u16RPI_pcf8591Setups(pinBase,addr);
#define d0d0RPI_pcf8591Setupu80(pinBase,addr) u16RPI_pcf8591Setups(pinBase,addr);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALPCF_H__ */
