//This file defines constants corresponding to gpios.
//
// Authors
//     Siddhesh Wani
//

#ifndef __INT_AVRPERIPHERALADC_H__
#define __INT_AVRPERIPHERALADC_H__

#include <avr/io.h>
#include "AVRPeripheralADC.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define AVRADCSetup(in1,in2) u8AVRADCSetups((uint8) in1,\
                                                  (uint8) in2);

#define AVRReadADC(in1) u8AVRReadADCs((uint8) in1);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALADC_H__ */
