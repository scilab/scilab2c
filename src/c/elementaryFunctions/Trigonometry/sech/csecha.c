#include "sech.h"
#include <math.h>

void csecha(floatComplex* in, int size,floatComplex* out)
{
	int i = 0;
	for (i=0;i<size;i++)
	{
		out[i] = csechs(in[i]);
	}
}
