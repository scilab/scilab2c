/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Organization: FOSSEE, IIT Bombay
 Author: Shamik Guha
 Email: toolbox@scilab.in
*/
#include <string.h>
#include "bin2dec.h"
#include <stdlib.h>
#include <stdio.h>
uint8 u8bin2decs(uint8 in)
{   
    int base=1, rem=0;
    uint8 out=0;
    int in1;
    in1=(int)in;
    while (in1 != 0)
    {
        rem = in1 % 10;
        out = out + (rem * base);
        in1 = in1 / 10 ;
        base = base * 2;
    }
	return out;
   // printf("Decimal equivalent is: %f \n",out);
}

