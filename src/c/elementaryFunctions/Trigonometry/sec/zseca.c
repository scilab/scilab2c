#include "sec.h"
#include <math.h>

void zseca(doubleComplex* in, int size,doubleComplex* out)
{
	int i = 0;
	for (i=0;i<size;i++)
	{
		out[i] = zsecs(in[i]);
	}
}
