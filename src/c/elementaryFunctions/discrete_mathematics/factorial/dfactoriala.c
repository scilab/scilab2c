#include "factorial.h"
#include <math.h>

void dfactoriala(double* in,int size,double* out)
{
   	int i=0;
  	for (i=0;i<size;i++)
	{
		out[i] = dfactorials(in[i]);
	}
}

