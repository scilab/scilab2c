#include "secd.h"
#include <math.h>

void dsecda(double* in,int size,double* out)
{
   	int i=0;
   	for(i=0;i<size;i++)
	{
		out[i]=dsecds(in[i]);
	}
}
