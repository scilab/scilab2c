#include "dec2oct.h"

void ddec2octa(double* in,int size,double* out)
{
	int i=0;
	for(i=0;i<size;i++)
	{	ddec2octs(in[i],&(out[i*15]));
}
}
