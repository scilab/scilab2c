/*
 Scilab2C FOSSEE IIT Bombay
 */
 
 
#ifndef __CMD_SERVO_DETACH_H__
#define __CMD_SERVO_DETACH_H__
 
#include "types.h"
//#include<Servo.h>

#ifdef  __cplusplus
extern "C" {
#endif

extern Servo servo1,servo2;
	
uint8 u8cmd_servo_detach(uint8 h, uint8 servo_no );

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /* __CMD_DCMOTOR_SETUP_H__ */
