//This file defines functions prototypes related to Timer.
//
// Authors
//     Siddhesh Wani
//

#ifndef __AVRPERIPHERALTIMER_H__
#define __AVRPERIPHERALTIMER_H__

#include <avr/io.h>
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

//Function prototypes
uint8 u8AVRTimerSetups(uint8 timer, uint8 prescalar);

uint8 u8AVRGetTimerValue(uint8 timer);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALTIMER_H__ */
