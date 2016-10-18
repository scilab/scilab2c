/*
 Scilab2C FOSSEE IIT BOMBAY
 */

#include "cmd_servo_attach.h"
#include "Arduino.h"
#include<Servo.h>
Servo servo1,servo2;
void u8cmd_servo_attach(uint8 h,uint8 servo_no)
{
    // h -> Board no. reserve for future use
    // servo_no -> pin no.(9 and 10).
    if(servo_no == 1)
       {
        servo1.attach(9); 
        servo1.write(0);
       }
    else
       {
        servo2.attach(10); 
        servo2.write(0);    
       }
    
}

