#ifndef __INT_CMD_I2C_WRITE_H__
#define __INT_CMD_I2C_WRITE_H__
 
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0d0cmd_i2c_write(in1, in2) u8cmd_i2c_writes((uint8)in1, (uint8)in2)

#define u80d0cmd_i2c_write(in1, in2) u8cmd_i2c_writes((uint8)in1, (uint8)in2)

									

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* __INT_CMD_I2C_WRITE_H__ */
