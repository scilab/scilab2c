#include "dec2oct.h"

void u8dec2octa(uint8* in,int size,uint8* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{	u8dec2octs(in[i],&(out[i*15]));
}
}
