/*
 Scilab2C FOSSEE IIT BOMBAY
 */

#include "cmd_servo_move.h"
#include "Arduino.h"
#include<Servo.h>
Servo servo1,servo2;
void u8cmd_servo_move(uint8 h,uint8 servo_no,uint8 val)
{
    // h -> Board no. reserve for future use
    // servo_no -> pin no.(9 and 10).
    //val -> 0 to 180 angle of rotation
    if (val>=0 && val<=180)
     {
            if (servo_no==1)
            {
                servo1.write(val);
            }
            else if (servo_no==2) 
            {
               servo2.write(val);
            } 
    }
}

