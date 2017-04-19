#include <math.h>
#include "sech.h"
#include "cosh.h"
#include "cos.h"


float ssechs(float in)
{
  return (1/cosh(in));
}
