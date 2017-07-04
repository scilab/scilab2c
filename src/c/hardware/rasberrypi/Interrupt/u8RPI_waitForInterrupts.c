/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Jorawar Singh, Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "RPIPeripheralInterrupt.h"
#include "RPI_wfi.h"
#include <sys/time.h>
#include <math.h>
#include <stdlib.h>

int8 u8RPI_waitForInterrupts(uint8 pin,int16 time){
    __RPI_wfi=0;
    if (wiringPiISR(pin,3,&RPI_wfi)<0){
        return -1;
    }
    if (time==-1){
        while (__RPI_wfi==0){;}
        return 1;
    }
    else{
        struct timeval time1,time2;
        int nDigits;
        double t1,t2;
        gettimeofday(&time1, NULL);
        nDigits=floor(log10(abs(time1.tv_usec)))+1;
        t1=time1.tv_sec+time1.tv_usec/nDigits;
        t2=t1;
        while (__RPI_wfi==0 && t2-t1<time){
            gettimeofday(&time2,NULL);
            nDigits=floor(log10(abs(time2.tv_usec)))+1;
            t2=time2.tv_sec+time2.tv_usec/nDigits;
        }
        if (__RPI_wfi==0){return 0;}
        else{return 1;}
    }
}
