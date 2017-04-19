#include "dec2hex.h"

void ddec2hexa(double* in,int size,char* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{
		ddec2hexs(in[i],&(out[i*3]));
	}
}
