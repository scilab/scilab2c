#include <math.h>
#include "sinh.h"
#include "sin.h"

float ssinhs(float x) {
  return (sinh(x));
}

double dsinhs(double x) {
  return (sinh(x));
}

floatComplex csinhs(floatComplex z) 
{
  float real = creals(z);
  float imag = cimags(z);

  floatComplex result = csins(FloatComplex(-imag, real));
  return (FloatComplex(cimags(result), -creals(result)));
}

doubleComplex	zsinhs(doubleComplex z) {
  double real = zreals(z);
  double imag = zimags(z);

  doubleComplex result = zsins(DoubleComplex(-imag, real));
  return (DoubleComplex(zimags(result), -zreals(result)));
}

void ssinha(float* x, int size, float* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ssinhs(x[i]);
  }
}

void dsinha(double* x, int size, double* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = dsinhs(x[i]);
  }
}

void csinha(floatComplex* x, int size, floatComplex* y) 
{
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = csinhs(x[i]);
  }
}

void zsinha(doubleComplex* x, int size, doubleComplex* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zsinhs(x[i]);
  }
}

