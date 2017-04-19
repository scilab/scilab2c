#include <math.h>
#include "cotd.h"

double dcotds(double in)
{
if(in==0)
printf("Inf\n");
  return (1/tan((M_PI/180.0)*in));
}
