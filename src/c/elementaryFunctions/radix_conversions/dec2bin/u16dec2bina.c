#include "dec2bin.h"

void u16dec2bina(uint16* in,int size,int n,uint16* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		u16dec2bins(in[i],n,&(out[i*15]));
	}
}
