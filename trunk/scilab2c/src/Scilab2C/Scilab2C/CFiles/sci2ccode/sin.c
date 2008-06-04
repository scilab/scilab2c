#include <math.h>
#include "sin.h"

float		ssins(float x) {
  return (sin(x));
}

double dsins(double x) {
  return (sin(x));
}

floatComplex	csins(floatComplex z) 
{
  float real = creals(z);
  float imag = cimags(z);

  return(FloatComplex(ssins(real) * scoshs(imag), scoss(real) * ssinhs(imag)));
}

doubleComplex	zsins(doubleComplex z) 
{
  double real = zreals(z);
  double imag = zimags(z);

  return(DoubleComplex(dsins(real) * dcoshs(imag), dcoss(real) * dsinhs(imag)));
}


void ssina(float* x, int size, float* y) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = ssins(x[i]);
  }
}

void dsina(double* x, int size, double* y) {
  int i = 0;
  for (i = 0; i < size; ++i) 
  {
    y[i] = dsins(x[i]);
  }
}

void csina(floatComplex* x, int size, floatComplex* y) 
{
  int i = 0;
  for (i = 0; i < size; ++i) 
  {
    y[i] = csins(x[i]);
  }
}

void zsina(doubleComplex* x, int size, doubleComplex* y) 
{
  int i = 0;
  for (i = 0; i < size; ++i) 
  {
    y[i] = zsins(x[i]);
  }
}

