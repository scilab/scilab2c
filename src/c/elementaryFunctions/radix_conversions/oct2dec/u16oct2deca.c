#include "oct2dec.h"

void u16oct2deca(uint16* in,int size,uint16* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		out[i]=u16oct2decs(in[i]);
	}
}
