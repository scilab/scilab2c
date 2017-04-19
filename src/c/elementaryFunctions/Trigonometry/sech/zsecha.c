#include "sech.h"
#include <math.h>

void zsecha(doubleComplex* in, int size,doubleComplex* out)
{
	int i = 0;
	for (i=0;i<size;i++)
	{
		out[i] = zsechs(in[i]);
	}
}
