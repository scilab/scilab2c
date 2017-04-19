#include "dec2base.h"

void ddec2basea(double* in,int size,int base,int n,char* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		ddec2bases(in[i],base,n,&(out[i*3]));
	}
}
