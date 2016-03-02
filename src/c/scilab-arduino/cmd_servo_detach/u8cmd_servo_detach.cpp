/*
 Scilab2C FOSSEE IIT BOMBAY
 */
#include "cmd_servo_detach.h"
#include "Arduino.h"
#include<Servo.h>
Servo servo1,servo2;
uint8 u8cmd_servo_detach(uint8 h,uint8 servo_no)
{
    // h -> Board no. reserve for future use
    // servo_no -> pin no.(9 and 10).
    if(servo_no == 1)
       {
        servo1.detach(); 
       }
       
    else
       {
        servo2.detach(); 
       }
       
    return 0;
}

