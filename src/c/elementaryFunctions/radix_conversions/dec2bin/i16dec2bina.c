#include "dec2bin.h"

void i16dec2bina(int16* in,int size,int n,int16* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		i16dec2bins(in[i],n,&(out[i*15]));
	}
}
