#include "csch.h"
#include <math.h>

void zcscha(doubleComplex* in, int size,doubleComplex* out)
{
	int i = 0;
	for (i=0;i<size;i++)
	{
		out[i] = zcschs(in[i]);
	}
}
