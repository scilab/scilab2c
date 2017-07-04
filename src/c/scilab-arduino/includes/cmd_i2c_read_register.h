#ifndef __CMD_I2C_READ_REGISTER_H__
#define __CMD_I2C_READ_REGISTER_H__
 
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
	
uint16 u8cmd_i2c_read_registers(uint8 address, uint8 reg_adrs);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* __CMD_I2C_READ_REGISTER_H__ */
