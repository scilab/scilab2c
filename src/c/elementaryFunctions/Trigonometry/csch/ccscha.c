#include "csch.h"
#include <math.h>

void ccscha(floatComplex* in, int size,floatComplex* out)
{
	int i = 0;
	for (i=0;i<size;i++)
	{
		out[i] = ccschs(in[i]);
	}
}
