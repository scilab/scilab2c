//This file defines interfaces corresponding to uitl function.
//
// Authors
//     Siddhesh Wani
//

#ifndef __INT_AVRUTIL_H__
#define __INT_AVRUTIL_H__

#include <avr/io.h>
#include "AVRUtil.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0sleepu80(in1) u16AVRSleeps ((uint16) in1);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__AVRPERIPHERALGPIO_H__ */
