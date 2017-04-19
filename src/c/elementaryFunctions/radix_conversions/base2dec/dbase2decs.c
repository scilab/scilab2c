#include <string.h>
#include "base2dec.h"
#include <stdio.h>
#include <math.h>

double dbase2decs(double in,int base)
{
	int n=0,rem=0, base1=1;
	double out=0.0;
	n=(int)in;
	while (n!=0)
        {
    	    rem = n%10;
	    out = out + (rem * base1);
            n = n / 10 ;
            base1 = base1 * base;
        }
	return out;
}


