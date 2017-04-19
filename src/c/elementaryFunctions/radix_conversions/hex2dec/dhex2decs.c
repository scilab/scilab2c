#include <string.h>
#include "hex2dec.h"
#include <stdio.h>
#include <math.h>

double dhex2decs(double in)
{
	int n=0,rem=0, base=1;
	double out=0.0;
	n=(int)in;
	while (n!=0)
        {
    	    rem = n%10;
	    out = out + (rem * base);
            n = n / 10 ;
            base = base * 16;
        }
	return out;
}


