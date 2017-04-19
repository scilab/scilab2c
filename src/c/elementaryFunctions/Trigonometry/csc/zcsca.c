#include "csc.h"
#include <math.h>

void zcsca(doubleComplex* in, int size,doubleComplex* out)
{
	int i = 0;
	for (i=0;i<size;i++)
	{
		out[i] = zcscs(in[i]);
	}
}
