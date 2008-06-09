/*
**  -*- C -*-
**
** OpRc.c
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright Raffaele Nutricato 2007
*/

#include "OpRc.h"

void d0d0OpRcd2(double in1, double in2, double* out)
{
   out[0] = in1;
   out[1] = in2;
}

void d2d0OpRcd2(double* in1, int* in1Size, double in2, double* out)
{
   int i;
   for (i = 0; i < in1Size[1]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[1]] = in2;  
}

void d0d2OpRcd2(double in2, double* in1, int* in1Size, double* out)
{
   int i;
   for (i = 0; i < in1Size[1]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[1]] = in2;  
}

void d2d2OpRcd2(double* in1, int* in1Size, double* in2, int* in2Size, double* out)
{
   int cntrow;
   int offsetrow;
   int cntcol1;
   int cntcol2;
   for (cntrow = 0; cntrow < in1Size[0]; cntrow++)
   {
      offsetrow = cntrow * (in1Size[1]+in2Size[1]);
      for (cntcol1 = 0; cntcol1 < in1Size[1]; cntcol1++)
      {
         out[offsetrow+cntcol1] = in1[cntrow*in1Size[1]+cntcol1];
      }
      for (cntcol2 = 0; cntcol2 < in2Size[1]; cntcol2++)
      {
         out[offsetrow+in1Size[1]+cntcol2] = in2[cntrow*in2Size[1]+cntcol2];
      }
   }
}

void s0s0OpRcs2(float in1, float in2, float* out)
{
   out[0] = in1;
   out[1] = in2;
}

void s2s0OpRcs2(float* in1, int* in1Size, float in2, float* out)
{
   int i;
   for (i = 0; i < in1Size[1]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[1]] = in2;  
}

void s0s2OpRcs2(float in2, float* in1, int* in1Size, float* out)
{
   int i;
   for (i = 0; i < in1Size[1]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[1]] = in2;  
}

void s2s2OpRcs2(float* in1, int* in1Size, float* in2, int* in2Size, float* out)
{
   int cntrow;
   int offsetrow;
   int cntcol1;
   int cntcol2;
   for (cntrow = 0; cntrow < in1Size[0]; cntrow++)
   {
      offsetrow = cntrow * (in1Size[1]+in2Size[1]);
      for (cntcol1 = 0; cntcol1 < in1Size[1]; cntcol1++)
      {
         out[offsetrow+cntcol1] = in1[cntrow*in1Size[1]+cntcol1];
      }
      for (cntcol2 = 0; cntcol2 < in2Size[1]; cntcol2++)
      {
         out[offsetrow+in1Size[1]+cntcol2] = in2[cntrow*in2Size[1]+cntcol2];
      }
   }
}

void z0z0OpRcz2(doubleComplex in1, doubleComplex in2, doubleComplex* out)
{
   out[0] = in1;
   out[1] = in2;
}

void z2z0OpRcz2(doubleComplex* in1, int* in1Size, doubleComplex in2, doubleComplex* out)
{
   int i;
   for (i = 0; i < in1Size[1]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[1]] = in2;  
}

void z0z2OpRcz2(doubleComplex in2, doubleComplex* in1, int* in1Size, doubleComplex* out)
{
   int i;
   for (i = 0; i < in1Size[1]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[1]] = in2;  
}

void z2z2OpRcz2(doubleComplex* in1, int* in1Size, doubleComplex* in2, int* in2Size, doubleComplex* out)
{
   int cntrow;
   int offsetrow;
   int cntcol1;
   int cntcol2;
   for (cntrow = 0; cntrow < in1Size[0]; cntrow++)
   {
      offsetrow = cntrow * (in1Size[1]+in2Size[1]);
      for (cntcol1 = 0; cntcol1 < in1Size[1]; cntcol1++)
      {
         out[offsetrow+cntcol1] = in1[cntrow*in1Size[1]+cntcol1];
      }
      for (cntcol2 = 0; cntcol2 < in2Size[1]; cntcol2++)
      {
         out[offsetrow+in1Size[1]+cntcol2] = in2[cntrow*in2Size[1]+cntcol2];
      }
   }
}

void c0c0OpRcc2(floatComplex in1, floatComplex in2, floatComplex* out)
{
   out[0] = in1;
   out[1] = in2;
}

void c2c0OpRcc2(floatComplex* in1, int* in1Size, floatComplex in2, floatComplex* out)
{
   int i;
   for (i = 0; i < in1Size[1]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[1]] = in2;  
}

void c0c2OpRcc2(floatComplex in2, floatComplex* in1, int* in1Size, floatComplex* out)
{
   int i;
   for (i = 0; i < in1Size[1]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[1]] = in2;  
}

void c2c2OpRcc2(floatComplex* in1, int* in1Size, floatComplex* in2, int* in2Size, floatComplex* out)
{
   int cntrow;
   int offsetrow;
   int cntcol1;
   int cntcol2;
   for (cntrow = 0; cntrow < in1Size[0]; cntrow++)
   {
      offsetrow = cntrow * (in1Size[1]+in2Size[1]);
      for (cntcol1 = 0; cntcol1 < in1Size[1]; cntcol1++)
      {
         out[offsetrow+cntcol1] = in1[cntrow*in1Size[1]+cntcol1];
      }
      for (cntcol2 = 0; cntcol2 < in2Size[1]; cntcol2++)
      {
         out[offsetrow+in1Size[1]+cntcol2] = in2[cntrow*in2Size[1]+cntcol2];
      }
   }
}
