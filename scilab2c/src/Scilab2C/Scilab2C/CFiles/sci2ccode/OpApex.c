/* #include <math.h>*/
#include "OpApex.h"

float		sOpApexs(float x) {
  return (x);
}

double dOpApexs(double x) {
  return (x);
}


void sOpApexa(float* x, int xrows,int xcols, float* y) 
{
   int i = 0;
   int j = 0;
   for (i = 0; i < xrows; i++)
   {
      for (j = 0; j < xcols; j++)
      {
         y[j*xrows+i] = x[i*xcols+j];
      }
   }
}

void dOpApexa(double* x, int xrows,int xcols, double* y) 
{
   int i = 0;
   int j = 0;
   for (i = 0; i < xrows; i++)
   {
      for (j = 0; j < xcols; j++)
      {
         y[j*xrows+i] = x[i*xcols+j];
      }
   }
}


floatComplex c0OpApexc0(floatComplex x) 
{
  return (c0conjc0(x));
}

void c2OpApexc2(floatComplex* x, int* xSize, floatComplex* y) 
{
   int i = 0;
   int j = 0;
   int xrows = xSize[0];
   int xcols = xSize[1];
   
   for (i = 0; i < xrows; i++)
   {
      for (j = 0; j < xcols; j++)
      {
         y[j*xrows+i] = c0conjc0(x[i*xcols+j]);
      }
   }
}

doubleComplex z0OpApexz0(doubleComplex x) 
{
  return (z0conjz0(x));
}


void z2OpApexz2(doubleComplex* x, int* xSize, doubleComplex* y) 
{
   int i = 0;
   int j = 0;
   int xrows = xSize[0];
   int xcols = xSize[1];
   
   for (i = 0; i < xrows; i++)
   {
      for (j = 0; j < xcols; j++)
      {
         y[j*xrows+i] = z0conjz0(x[i*xcols+j]);
         /*~ y[j*xrows+i] = x[i*xcols+j];*/
      }
   }
}
