#include "coth.h"
#include <math.h>

void zcotha(doubleComplex* in, int size,doubleComplex* out)
{
	int i = 0;
	for (i=0;i<size;i++)
	{
		out[i] = zcoths(in[i]);
	}
}
