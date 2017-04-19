#include "dec2bin.h"

void i8dec2bina(int8* in,int size,int n,int8* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		i8dec2bins(in[i],n,&(out[i*15]));
	}
}
