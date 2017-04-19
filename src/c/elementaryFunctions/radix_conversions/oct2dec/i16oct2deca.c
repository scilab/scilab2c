#include "oct2dec.h"

void i16oct2deca(int16* in,int size,int16* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		out[i]=i16oct2decs(in[i]);
	}
}
