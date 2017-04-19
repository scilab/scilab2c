#include "sech.h"
#include <math.h>
void dsecha(double* in,int size,double* out)
{
	int i=0;
   	for(i=0;i<size;i++)
	{
		out[i]=dsechs(in[i]);
	}
}
