#include "coth.h"
#include <math.h>

void ccotha(floatComplex* in, int size,floatComplex* out)
{
	int i = 0;
	for (i=0;i<size;i++)
	{
		out[i] = ccoths(in[i]);
	}
	return out;
}
