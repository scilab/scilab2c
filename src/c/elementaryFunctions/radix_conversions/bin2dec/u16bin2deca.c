#include "bin2dec.h"

void u16bin2deca(uint16* in,int size,uint16* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		out[i]=u16bin2decs(in[i]);
	}
}
