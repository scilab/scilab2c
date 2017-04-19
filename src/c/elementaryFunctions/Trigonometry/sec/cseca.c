#include "sec.h"
#include <math.h>

void cseca(floatComplex* in, int size,floatComplex* out)
{
	int i = 0;
	for (i=0;i<size;i++)
	{
		out[i] = csecs(in[i]);
	}
}
