/* This file declares functions and constants related to rasberrypi*/

#ifndef __RPIPERIPHERALUTIL_H__
#define __RPIPERIPHERALUTIL_H__

#ifdef  __cplusplus
extern "C" {
#endif

#include "types.h"
#include "bcm2835.h"

uint8 u16RPIDelayMillis(uint16 time);
uint8 u16RPIDelayMicros(uint16 time);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  //__RPIPERIPHERALUTIL_H__
