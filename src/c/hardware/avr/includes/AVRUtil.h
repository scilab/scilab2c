//This file defines functions corresponding to delay functions
//
// Authors
//     Siddhesh Wani
//
#ifndef __AVRUTIL_H__
#define __AVRUTIL_H__

#include <avr/io.h>


#ifdef  __cplusplus
extern "C" {
#endif

#include "Types.h"
#include "avr/util.h"

uint8 U16AVRSleeps (uint16 delay);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRUTIL_H__ */
