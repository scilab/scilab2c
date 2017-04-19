#include "dec2hex.h"

void u8dec2hexa(uint8* in,int size,char* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		u8dec2hexs(in[i],&(out[i*3]));
	}
}
