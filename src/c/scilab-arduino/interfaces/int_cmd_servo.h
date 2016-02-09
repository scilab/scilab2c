/*
 Scilab2C FOSSEE IIT BOMBAY
 */
 
 
#ifndef __INT_CMD_SERVO_H__
#define __INT_CMD_SERVO_H__
 
#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif


#define d0d0cmd_servo_attachu80(in1,in2)  u8cmd_servo_attach((uint8)in1,(uint8)in2);

#define d0d0cmd_servo_detachu80(in1,in2)  u8cmd_servo_detach((uint8)in1,(uint8)in2);

#define d0d0d0cmd_servo_moveu80(in1,in2,in3) u8cmd_servo_move((uint8)in1,(uint8)in2,(uint8)in3);	


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* __INT_CMD_DCMOTOR_H__ */
