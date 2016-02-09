//
// Authors
//     Siddhesh Wani
//

#ifndef __INT_RPIPERIPHERALUTIL_H__
#define __INT_RPIPERIPHERALUTIL_H__

#include "types.h"
#include "RPIPeripheralUtil.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define RPI_DelayMicro(in1) u16RPIDelayMicros((uint16) in1);
#define RPI_DelayMilli(in1) u16RPIDelayMillis((uint16) in1);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* !__RPIPERIPHERALUTIL_H__ */
