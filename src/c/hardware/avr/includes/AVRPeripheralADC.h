//This file defines constants corresponding to gpios and digital input functions.
//
// Authors
//     Siddhesh Wani
//

#ifndef __AVRPERIPHERALADC_H__
#define __AVRPERIPHERALADC_H__

#include <avr/io.h>
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

//Function prototypes
uint8 u8AVRADCSetups(uint8 prescalar, uint8 adc_ref);

uint16 u8AVRReadADCs(uint8 channel);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALGPIO_H__ */
