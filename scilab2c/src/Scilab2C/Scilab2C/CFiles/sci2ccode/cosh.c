#include <math.h>
#include "cosh.h"
#include "cos.h"


void zcosha(doubleComplex* x, int size, doubleComplex* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zcoshs(x[i]);
  }
}

float		scoshs(float x) {
  return (cosh(x));
}

void scosha(float* x, int size, float* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = scoshs(x[i]);
  }
}

double	       dcoshs(double x) {
  return (cosh(x));
}

void dcosha(double* x, int size, double* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dcoshs(x[i]);
  }
}

doubleComplex		zcoshs(doubleComplex z) {
  double real = zreals(z);
  double minusImag = -zimags(z);

  return (zcoss(DoubleComplex(minusImag, real)));
}
