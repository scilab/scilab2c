#include <math.h>
#include "cos.h"

float		scoss(float x) {
  return (cos(x));
}

double dcoss(double x) {
  return (cos(x));
}

floatComplex ccoss(floatComplex z) 
{
  float real = creals(z);
  float imag = cimags(z);

  return FloatComplex(scoss(real) * scoshs(imag),
		      -ssins(real) * ssinhs(imag));
}

doubleComplex zcoss(doubleComplex z) 
{
  double real = zreals(z);
  double imag = zimags(z);

  return DoubleComplex(dcoss(real) * dcoshs(imag),
		      -dsins(real) * dsinhs(imag));
}

void scosa(float* x, int size, float* y) 
{
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = scoss(x[i]);
  }
}

void dcosa(double* x, int size, double* y) 
{
   int i = 0;
   for (i = 0; i < size; ++i) 
   {
      y[i] = dcoss(x[i]);
   }
}

void ccosa(floatComplex* x, int size, floatComplex* y) 
{
  int i = 0;
  for (i = 0; i < size; ++i) 
  {
    y[i] = ccoss(x[i]);
  }
}

void zcosa(doubleComplex* x, int size, doubleComplex* y) 
{
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = zcoss(x[i]);
  }
}
