#include "csc.h"
#include <math.h>

void ccsca(floatComplex* in, int size,floatComplex* out)
{
	int i = 0;
	for (i=0;i<size;i++)
	{
		out[i] = ccscs(in[i]);
	}
}
