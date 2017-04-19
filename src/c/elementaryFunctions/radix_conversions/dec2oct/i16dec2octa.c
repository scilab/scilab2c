#include "dec2oct.h"

void i16dec2octa(int16* in,int size,int16* out)
{
	int i=0;
	for(i=0;i<size;i++)
		{
i16dec2octs(in[i],&(out[i*15]));
}
}
