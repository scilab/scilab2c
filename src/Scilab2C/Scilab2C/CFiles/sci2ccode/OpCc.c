/*
**  -*- C -*-
**
** OpCc.c
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright Raffaele Nutricato 2007
*/

#include "OpCc.h"

void d0d0OpCcd2(double in1, double in2, double* out)
{
   out[0] = in1;
   out[1] = in2;
}

void d2d0OpCcd2(double* in1, int* in1Size, double in2, double* out)
{
   int i;
   for (i = 0; i < in1Size[0]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[0]] = in2;  
}

void d0d2OpCcd2(double in2, double* in1, int* in1Size, double* out)
{
   int i;
   for (i = 0; i < in1Size[0]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[0]] = in2;  
}


void d2d2OpCcd2(double* in1, int* in1Size, double* in2, int* in2Size, double* out)
{
   /* I assume that number of columns of in1 and in2 are the same. */
   int cntrow;
   int cntcol;
   
   for (cntrow = 0; cntrow < in1Size[0]; cntrow++)
   {
      for (cntcol = 0; cntcol < in1Size[1]; cntcol++)
      {
         out[cntrow*in1Size[1]+cntcol] = in1[cntrow*in1Size[1]+cntcol];
      }
   }

   for (cntrow = 0; cntrow < in2Size[0]; cntrow++)
   {
      for (cntcol = 0; cntcol < in1Size[1]; cntcol++)
      {
         out[(in1Size[0]+cntrow)*in1Size[1]+cntcol] = in2[cntrow*in1Size[1]+cntcol];
      }
   }   
}

void s0s0OpCcs2(float in1, float in2, float* out)
{
   out[0] = in1;
   out[1] = in2;
}

void s2s0OpCcs2(float* in1, int* in1Size, float in2, float* out)
{
   int i;
   for (i = 0; i < in1Size[0]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[0]] = in2;  
}

void s0s2OpCcs2(float in2, float* in1, int* in1Size, float* out)
{
   int i;
   for (i = 0; i < in1Size[0]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[0]] = in2;  
}


void s2s2OpCcs2(float* in1, int* in1Size, float* in2, int* in2Size, float* out)
{
   /* I assume that number of columns of in1 and in2 are the same. */
   int cntrow;
   int cntcol;
   
   for (cntrow = 0; cntrow < in1Size[0]; cntrow++)
   {
      for (cntcol = 0; cntcol < in1Size[1]; cntcol++)
      {
         out[cntrow*in1Size[1]+cntcol] = in1[cntrow*in1Size[1]+cntcol];
      }
   }

   for (cntrow = 0; cntrow < in2Size[0]; cntrow++)
   {
      for (cntcol = 0; cntcol < in1Size[1]; cntcol++)
      {
         out[(in1Size[0]+cntrow)*in1Size[1]+cntcol] = in2[cntrow*in1Size[1]+cntcol];
      }
   }   
}

void z0z0OpCcz2(doubleComplex in1, doubleComplex in2, doubleComplex* out)
{
   out[0] = in1;
   out[1] = in2;
}

void z2z0OpCcz2(doubleComplex* in1, int* in1Size, doubleComplex in2, doubleComplex* out)
{
   int i;
   for (i = 0; i < in1Size[0]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[0]] = in2;  
}

void z0z2OpCcz2(doubleComplex in2, doubleComplex* in1, int* in1Size, doubleComplex* out)
{
   int i;
   for (i = 0; i < in1Size[0]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[0]] = in2;  
}


void z2z2OpCcz2(doubleComplex* in1, int* in1Size, doubleComplex* in2, int* in2Size, doubleComplex* out)
{
   /* I assume that number of columns of in1 and in2 are the same. */
   int cntrow;
   int cntcol;
   
   for (cntrow = 0; cntrow < in1Size[0]; cntrow++)
   {
      for (cntcol = 0; cntcol < in1Size[1]; cntcol++)
      {
         out[cntrow*in1Size[1]+cntcol] = in1[cntrow*in1Size[1]+cntcol];
      }
   }

   for (cntrow = 0; cntrow < in2Size[0]; cntrow++)
   {
      for (cntcol = 0; cntcol < in1Size[1]; cntcol++)
      {
         out[(in1Size[0]+cntrow)*in1Size[1]+cntcol] = in2[cntrow*in1Size[1]+cntcol];
      }
   }   
}

void c0c0OpCcc2(floatComplex in1, floatComplex in2, floatComplex* out)
{
   out[0] = in1;
   out[1] = in2;
}

void c2c0OpCcc2(floatComplex* in1, int* in1Size, floatComplex in2, floatComplex* out)
{
   int i;
   for (i = 0; i < in1Size[0]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[0]] = in2;  
}

void c0c2OpCcc2(floatComplex in2, floatComplex* in1, int* in1Size, floatComplex* out)
{
   int i;
   for (i = 0; i < in1Size[0]; i++)
   {
      out[i] = in1[i];
   }
   out[in1Size[0]] = in2;  
}


void c2c2OpCcc2(floatComplex* in1, int* in1Size, floatComplex* in2, int* in2Size, floatComplex* out)
{
   /* I assume that number of columns of in1 and in2 are the same. */
   int cntrow;
   int cntcol;
   
   for (cntrow = 0; cntrow < in1Size[0]; cntrow++)
   {
      for (cntcol = 0; cntcol < in1Size[1]; cntcol++)
      {
         out[cntrow*in1Size[1]+cntcol] = in1[cntrow*in1Size[1]+cntcol];
      }
   }

   for (cntrow = 0; cntrow < in2Size[0]; cntrow++)
   {
      for (cntcol = 0; cntcol < in1Size[1]; cntcol++)
      {
         out[(in1Size[0]+cntrow)*in1Size[1]+cntcol] = in2[cntrow*in1Size[1]+cntcol];
      }
   }   
}
