#ifndef __CMD_I2C_WRITE_H__
#define __CMD_I2C_WRITE_H__
 
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
	
void u8cmd_i2c_writes(uint8 address, uint8 data);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* __CMD_I2C_WRITE_H__ */
