#include "cosd.h"
#include <math.h>

void dcosda(double* in,int size,double* out)
{
	double val=0.0;
   	val =3.14159265/180.0;
   	int i=0;
  	for (i=0;i<size;i++)
	{
		out[i] = cos(in[i]*val);
	}
}

