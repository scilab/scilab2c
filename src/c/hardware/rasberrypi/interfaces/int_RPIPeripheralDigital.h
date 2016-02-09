//This file defines constants corresponding to gpios.
//
// Authors
//     Siddhesh Wani
//

#ifndef __INT_RPIPERIPHERALGPIO_H__
#define __INT_RPIPERIPHERALGPIO_H__

#include "types.h"
#include "RPIPeripheralDigital.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define RPI_DigitalSetup(in1,in2) u8RPIDigitalSetups((uint8) in1, (uint8) in2);

#define RPI_DigitalIn(in1,in2) u8RPIDigitalIns((uint8) in1);

#define RPI_DigitalOut(in1,in2) u8RPIDigitalOuts((uint8) in1, (uint8) in2);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__RPIPERIPHERALGPIO_H__ */
