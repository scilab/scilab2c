#include <math.h>
#include "coth.h"
#include "cosh.h"
#include "cos.h"
#include "sinh.h"
#include "sin.h"

double	       dcoths(double in) {
  return (cosh(in)/sinh(in));
}
