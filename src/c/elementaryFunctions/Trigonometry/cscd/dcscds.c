#include "cscd.h"
#include <math.h>

double dcscds(double in)
{
	double val;
	val = (M_PI) / 180.0;
   	double out;
	out=1/sin(in*val);
	return out;
}
