#include "dec2hex.h"

void i16dec2hexa(int16* in,int size,char* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		i16dec2hexs(in[i],&(out[i*3]));
	}
}
