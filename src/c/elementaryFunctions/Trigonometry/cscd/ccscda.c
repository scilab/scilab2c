#include "csc.h"
#include "cscd.h"
#include <math.h>

void ccscda(floatComplex* in, int size,floatComplex* out)
{
	int i = 0;
	for (i=0;i<size;i++)
	{
		out[i] = ccscds(in[i]);
	}
}
