/* This file declares functions and constants related to GPIO pins*/

#ifndef __RPIPERIPHERALGPIO_H__
#define __RPIPERIPHERALGPIO_H__

#ifdef  __cplusplus
extern "C" {
#endif


#include "types.h"
#include "bcm2835.h"

uint8 u8RPIDigitalSetups(uint8 pin, uint8 direction);
uint8 u8RPIDigitalOuts(uint8 pin, uint8 state);
uint8 u8RPIDigitalIns(uint8 pin);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  //__RPIPERIPHERALGPIO_H__
