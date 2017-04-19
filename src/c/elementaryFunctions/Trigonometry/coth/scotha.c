#include "coth.h"
#include <math.h>

void scotha(float* in,int size,float* out)
{
   	float val;
   	int i=0;
   	for(i=0;i<size;i++)
	{
		out[i]=cosh(in[i])/sinh(in[i]);
  		/*printf("The cotangent of %lf is %lf\n", in[i], out[i]);*/
	}
}

