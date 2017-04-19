#include "dec2oct.h"

void i8dec2octa(int8* in,int size,int8* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{	i8dec2octs(in[i],&(out[i*15]));
}
}
