#include "cscd.h"
#include <math.h>

float scscds(float in)
{
   	float out,val;
	val=(M_PI)/180.0;
	out=1/sin(in*val);
	return out;
}
