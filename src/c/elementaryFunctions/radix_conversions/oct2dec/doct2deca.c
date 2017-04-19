#include "oct2dec.h"

void doct2deca(double* in,int size,double* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		out[i]=doct2decs(in[i]);
	}
}
