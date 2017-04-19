#include <string.h>
#include "bin2dec.h"
#include <stdlib.h>
#include <stdio.h>
int16 i16bin2decs(int16 in)
{   
    int base=1, rem=0;
    int16 out=0;
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

