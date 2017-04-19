#include "dec2oct.h"

void u16dec2octa(uint16* in,int size,uint16* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{	u16dec2octs(in[i],&(out[i*15]));
}
}
