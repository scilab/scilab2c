#include "csc.h"
#include "cscd.h"
#include <math.h>

void zcscda(doubleComplex* in, int size,doubleComplex* out)
{
	int i = 0;
	for (i=0;i<size;i++)
	{
		out[i] = zcscds(in[i]);
	}
}
