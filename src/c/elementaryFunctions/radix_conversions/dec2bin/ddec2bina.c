#include "dec2bin.h"

void ddec2bina(double* in,int size,int n,double* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		ddec2bins(in[i],n,&(out[i*15]));
	}
}
