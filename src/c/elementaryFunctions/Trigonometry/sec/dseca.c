#include "sec.h"
#include <math.h>

void dseca(double* in,int size,double* out)
{
   	int i=0;
   	for(i=0;i<size;i++)
	{
		out[i]=1/cos(in[i]);
   	}
}
