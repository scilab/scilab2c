/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Jorawar Singh, Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#include "RPIPeripheralSetup.h"
#include "stdio.h"

int8 gRPI_pinNumberinga(char* seq,int size){
    uint8 out;
    if (seq[0]=='w'){
        out=wiringPiSetup();
    }
    else if (seq[0]=='G'){
        out=wiringPiSetupGpio();
    }
    else if (seq[0]=='P'){
        out=wiringPiSetupPhys();
    }
    return (out);
}
