#include "bin2dec.h"

void i8bin2deca(int8* in,int size,int8* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		out[i]=i8bin2decs(in[i]);
	}
}
