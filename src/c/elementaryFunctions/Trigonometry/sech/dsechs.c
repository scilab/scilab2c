#include <math.h>
#include "sech.h"
#include "cosh.h"
#include "cos.h"


double dsechs(double in)
{
  return (1/cosh(in));
}
