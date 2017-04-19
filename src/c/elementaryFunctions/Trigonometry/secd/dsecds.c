#include <math.h>
#include "sec.h"
#include "secd.h"

double	       dsecds(double in) 
{
  return (1/cos((M_PI/180.0)*in));
}
