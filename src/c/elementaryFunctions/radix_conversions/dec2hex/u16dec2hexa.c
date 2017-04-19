#include "dec2hex.h"

void u16dec2hexa(uint16* in,int size,char* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		u16dec2hexs(in[i],&(out[i*3]));
	}
}
