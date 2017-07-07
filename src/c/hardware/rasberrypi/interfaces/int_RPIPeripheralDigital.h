/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
<<<<<<< HEAD
 Author: Siddhesh Wani, Jorawar Singh
=======
 Author: Siddhesh Wani
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
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

<<<<<<< HEAD
#define u80RPI_digitalReadu80(pin) u8RPI_digitalReads(pin);
#define d0RPI_digitalReadd0(pin) u8RPI_digitalReads(pin);

#define RPI_digitalReadByteu80() RPI_digitalReadByte();
#define u80u80RPI_digitalWrite(pin,state) u8RPI_digitalWrites(pin,state);
#define d0d0RPI_digitalWrite(pin,state) u8RPI_digitalWrites(pin,state);

#define u80RPI_digitalWriteByte(value) u8RPI_digitalWriteBytes(value);
=======
#define RPI_DigitalSetup(in1,in2) u8RPIDigitalSetups((uint8) in1, (uint8) in2);

#define RPI_DigitalIn(in1) u8RPIDigitalIns((uint8) in1);

#define RPI_DigitalOut(in1,in2) u8RPIDigitalOuts((uint8) in1, (uint8) in2);
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

#ifdef  __cplusplus
} /* extern "C" */
#endif

<<<<<<< HEAD
#endif /* !__INT_RPIPERIPHERALGPIO_H__ */
=======
#endif /* !__RPIPERIPHERALGPIO_H__ */
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
