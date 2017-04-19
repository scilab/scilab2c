#include "dec2bin.h"

void u8dec2bina(uint8* in,int size,int n,uint8* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		u8dec2bins(in[i],n,&(out[i*15]));
	}
}
