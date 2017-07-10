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

#ifndef __INT_RPIPERIPHERALSETUP_H__
#define __INT_RPIPERIPHERALSETUP_H__

#include "RPIPeripheralSetup.h"

#ifdef  __cplusplus
extern "C" {
#endif

//pinNumbering
#define g2RPI_pinNumberingi80(seq,size) gRPI_pinNumberinga(seq,size[1]);
//getAlt
#define u80RPI_getAltu80(pin) u8RPI_getAlts(pin);
#define d0RPI_getAltu80(pin) u8RPI_getAlts(pin);
//pinModeAlt
#define u80u80RPI_pinModeAlt(pin,mode) u8RPI_pinModeAlts(pin,mode);
#define d0d0RPI_pinModeAlt(pin,mode) u8RPI_pinModeAlts(pin,mode);
//pinMode
#define u80g2RPI_pinMode(pin,mode,size) u8RPI_pinModes(pin,mode,size[1]);
#define d0g2RPI_pinMode(pin,mode,size) u8RPI_pinModes(pin,mode,size[1]);
//pullControl
#define u80g2RPI_pullControl(pin,mode,size) u8RPI_pullControls(pin,mode,size[1]);
#define d0g2RPI_pullControl(pin,mode,size) u8RPI_pullControls(pin,mode,size[1]);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__INT_RPIPERIPHERALSETUP_H__ */
