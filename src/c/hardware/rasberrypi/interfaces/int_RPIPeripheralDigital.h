/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_RPIPERIPHERALGPIO_H__
#define __INT_RPIPERIPHERALGPIO_H__

#include "types.h"
#include "RPIPeripheralDigital.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define RPI_DigitalSetup(in1,in2) u8RPIDigitalSetups((uint8) in1, (uint8) in2);

#define RPI_DigitalIn(in1) u8RPIDigitalIns((uint8) in1);

#define RPI_DigitalOut(in1,in2) u8RPIDigitalOuts((uint8) in1, (uint8) in2);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__RPIPERIPHERALGPIO_H__ */
