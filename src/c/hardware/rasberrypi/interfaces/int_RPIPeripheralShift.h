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

#ifndef __INT_RPIPERIPHERALSHIFT_H__
#define __INT_RPIPERIPHERALSHIFT_H__

#include "types.h"
#include "RPIPeripheralShift.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define u80u80u80RPI_shiftInu80(dpin,cpin,order) u8RPI_shiftIns(dpin,cpin,order);
#define d0d0d0RPI_shiftInu80(dpin,cpin,order) u8RPI_shiftIns(dpin,cpin,order);

#define u80u80u80u80RPI_shiftOut(dpin,cpin,order,val) u8RPI_shiftOuts(dpin,cpin,order,val);
#define d0d0d0d0RPI_shiftOut(dpin,cpin,order,val) u8RPI_shiftOuts(dpin,cpin,order,val);

#define u160u80u80u80u80RPI_sr595Setupi80(pinBase,nPins,dP,cP,lP) u16RPI_sr595Setups(pinBase,nPins,dP,cP,lP);
#define d0d0d0d0d0RPI_sr595Setupi80(pinBase,nPins,dP,cP,lP) u16RPI_sr595Setups(pinBase,nPins,dP,cP,lP);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALSHIFT_H__ */
