#include <string.h>
#include "oct2dec.h"
#include <stdio.h>
#include <math.h>

int16 i16oct2decs(int16 in) /* Function to convert octal to decimal */
{
	int n=0,rem=0, base=1;
	int16 out=0;
	n=(int)in;
	while (n!=0)
        {
    	    rem = n%10;
	    out = out + (rem * base);
            n = n / 10 ;
            base = base * 8;
        }
	return out;
}


