#ifndef __INT_CMD_I2C_WRITE_REGISTER_H__
#define __INT_CMD_I2C_WRITE_REGISTER_H__
 
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0d0d0cmd_i2c_write_register(in1, in2, in3) u8cmd_i2c_write_registers((uint8)in1, (uint8)in2, (uint8)in3)
									
#define u80d0d0cmd_i2c_write_register(in1, in2, in3) u8cmd_i2c_write_registers((uint8)in1, (uint8)in2, (uint8)in3)


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* __INT_CMD_I2C_WRITE_REGISTER_H__ */
