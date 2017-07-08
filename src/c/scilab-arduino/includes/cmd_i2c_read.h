#ifndef __CMD_I2C_READ_H__
#define __CMD_I2C_READ_H__
 
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
	
float u8cmd_i2c_reads(uint8 address, uint8 bytes);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* __CMD_I2C_READ_H__ */
