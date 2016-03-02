/*
 Scilab2C FOSSEE IIT Bombay
 */
 
 
#ifndef __CMD_SERVO_MOVE_H__
#define __CMD_SERVO_MOVE_H__
 
#include "types.h"
//#include<Servo.h>

#ifdef  __cplusplus
extern "C" {
#endif

extern Servo servo1,servo2;
	
uint8 u8cmd_servo_move(uint8 h, uint8 servo_no,uint8 val);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* __CMD_DCMOTOR_SETUP_H__ */
