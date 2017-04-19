#include <string.h>
#include <math.h>
#include "dec2oct.h"
#include <stdio.h>

void ddec2octs(double in,double* out)
{
	int i=0,j=0,tmp=0;
	int quotient;
	quotient=(int)in;
	while(quotient!=0)
	{
		out[i++]= quotient%8;
        	quotient=quotient/8;
	}
	j=i-1;
	i=0;
	
	while(i<j)
	{
		tmp=out[i];
		out[i]=out[j];
		out[j]=tmp;
		i++;
		j--;
	}	
}
