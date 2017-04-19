#include "dec2hex.h"

void i8dec2hexa(int8* in,int size,char* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		i8dec2hexs(in[i],&(out[i*3]));
	}
}
