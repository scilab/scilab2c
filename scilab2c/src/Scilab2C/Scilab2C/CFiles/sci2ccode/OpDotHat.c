/*
**  -*- C -*-
**
** OpDotSlash.c
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright Raffaele Nutricato 2007
*/

#include "OpDotHat.h"


float	s0s0OpDotHats0(float in1,float in2)
{
   return(pow(in1,in2));
}

void s0s2OpDotHats2(float in1,float* in2, int* in2Size, float* out)
{
   int i = 0;
   for (i = 0; i < in2Size[0]*in2Size[1]; ++i) 
   {
      out[i] = pow(in1,in2[i]);
   }
}

void s2s0OpDotHats2(float* in1,int* in1Size, float in2, float* out)
{
   int i = 0;
   for (i = 0; i < in1Size[0]*in1Size[1]; ++i) 
   {
      out[i] = pow(in1[i],in2);
   }
}

void s2s2OpDotHats2(float* in1,int* in1Size,float* in2, int* in2Size, float* out)
{
   int i = 0;
   for (i = 0; i < in1Size[0]*in1Size[1]; ++i) 
   {
      out[i] = pow(in1[i],in2[i]);
   }
}

double	d0d0OpDotHatd0(double in1,double in2)
{
   return(pow(in1,in2));
}

void d0d2OpDotHatd2(double in1,double* in2, int* in2Size, double* out)
{
   int i = 0;
   for (i = 0; i < in2Size[0]*in2Size[1]; ++i) 
   {
      out[i] = pow(in1,in2[i]);
   }
}

void d2d0OpDotHatd2(double* in1,int* in1Size, double in2, double* out)
{
   int i = 0;
   for (i = 0; i < in1Size[0]*in1Size[1]; ++i) 
   {
      out[i] = pow(in1[i],in2);
   }
}

void d2d2OpDotHatd2(double* in1,int* in1Size,double* in2, int* in2Size, double* out)
{
   int i = 0;
   for (i = 0; i < in1Size[0]*in1Size[1]; ++i) 
   {
      out[i] = pow(in1[i],in2[i]);
   }
}
