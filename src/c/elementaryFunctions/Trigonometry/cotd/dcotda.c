#include "cotd.h"
#include <math.h>
#define PI 3.14159265

void dcotda(double* in,int size,double* out)
{
   	double val;
   	int i=0;
   	val = PI / 180.0;
   	for(i=0;i<size;i++)
	{
		out[i]=1/tan(in[i]*val);
  		/*printf("The cotangent of %lf degrees is %lf \n", in[i], out[i]);*/
	}
}

