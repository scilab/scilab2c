#include "bin2dec.h"

void u8bin2deca(uint8* in,int size,uint8* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		out[i]=u8bin2decs(in[i]);
	}
}
