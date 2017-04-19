#include "oct2dec.h"

void i8oct2deca(int8* in,int size,int8* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		out[i]=i8oct2decs(in[i]);
	}
}
