/*
**  -*- C -*-
**
** OpDotSlash.c
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright Raffaele Nutricato 2007
*/

/* Modified by Arnaud Torset */

#include "OpLogEq.h"



void s2s0OpLogEqs2(float* in1, int* in1Size, float in2, float* out)
{
   int rows = 0;
   int cols = 0;
   for (rows = 0; rows < in1Size[0];rows++)
   {
      for (cols = 0; cols < in1Size[1];cols++)
      {
         out[rows*in1Size[1]+cols] = (float) (in1[rows*in1Size[1]+cols] == in2);
      }
   }
}

void d2d0OpLogEqd2(double* in1, int* in1Size, double in2, double* out)
{
   int rows = 0;
   int cols = 0;
   for (rows = 0; rows < in1Size[0];rows++)
   {
      for (cols = 0; cols < in1Size[1];cols++)
      {
         out[rows*in1Size[1]+cols] = (double) (in1[rows*in1Size[1]+cols] == in2);
      }
   }
}


void c2c0OpLogEqs2(floatComplex* in1, int* in1Size, floatComplex in2, float* out)
{
   int rows = 0;
   int cols = 0;
   for (rows = 0; rows < in1Size[0];rows++)
   {
      for (cols = 0; cols < in1Size[1];cols++)
      {
         out[rows*in1Size[1]+cols] = (float) ((creals(in1[rows*in1Size[1]+cols]) == creals(in2)) && (cimags(in1[rows*in1Size[1]+cols]) == cimags(in2)) );
      }
   }
}


void z2z0OpLogEqd2(doubleComplex* in1, int* in1Size, doubleComplex in2, double* out)
{
   int rows = 0;
   int cols = 0;
   for (rows = 0; rows < in1Size[0];rows++)
   {
      for (cols = 0; cols < in1Size[1];cols++)
      {
         out[rows*in1Size[1]+cols] = (float) ((zreals(in1[rows*in1Size[1]+cols]) == zreals(in2)) && (zimags(in1[rows*in1Size[1]+cols]) == zimags(in2)) );
      }
   }
}


