#include "factorial.h"
#include <math.h>

void sfactoriala(float* in,int size,float* out)
{
   	int i=0;
  	for (i=0;i<size;i++)
	{
		out[i] = dfactorials(in[i]);
	}
}

