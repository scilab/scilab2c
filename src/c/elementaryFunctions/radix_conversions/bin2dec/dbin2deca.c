#include "bin2dec.h"

void dbin2deca(double* in,int size,double* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		out[i]=dbin2decs(in[i]);
	}
}
