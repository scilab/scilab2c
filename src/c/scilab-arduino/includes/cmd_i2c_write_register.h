#ifndef __CMD_I2C_WRITE_REGISTER_H__
#define __CMD_I2C_WRITE_REGISTER_H__
 
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif
	
void u8cmd_i2c_write_registers(uint8 address, uint8 reg_adrs, uint8 data);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* __CMD_I2C_WRITE_REGISTER_H__ */
