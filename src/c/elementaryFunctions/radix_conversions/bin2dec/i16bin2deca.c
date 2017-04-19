#include "bin2dec.h"

void i16bin2deca(int16* in,int size,int16* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		out[i]=i16bin2decs(in[i]);
	}
}
