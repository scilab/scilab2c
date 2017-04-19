#include "sech.h"
#include <math.h>
void ssecha(float* in,int size,float* out)
{
	int i=0;
   	for(i=0;i<size;i++)
	{
		out[i]=ssechs(in[i]);
	}
}
