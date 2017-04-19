#include "dec2base.h"

void sdec2basea(float* in,int size,int base,int n,char* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		sdec2bases(in[i],base,n,&(out[i*3]));
	}
}
