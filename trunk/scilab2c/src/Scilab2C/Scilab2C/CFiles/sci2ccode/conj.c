/*
**  -*- C -*-
**
** 
** Made by  Raffaele.Nutricato@tiscali.it
**
** Copyright Raffaele Nutricato
*/

#include "conj.h"


floatComplex c0conjc0(floatComplex in)
{
   floatComplex out;
   out = FloatComplex(creals(in),-cimags(in));
   return (out);
}

doubleComplex z0conjz0(doubleComplex in)
{
   doubleComplex out;
   out = DoubleComplex(zreals(in),-zimags(in));
   return (out);
}

void c2conjc2(floatComplex* in, int* insize, floatComplex* out)
{
   int i;
   
   for (i=0;i<insize[0]*insize[1];i++)
   {
      out[i] = FloatComplex(creals(in[i]),-cimags(in[i]));
   }
}

void z2conjz2(doubleComplex* in, int* insize, doubleComplex* out)
{
   int i;
   
   for (i=0;i<insize[0]*insize[1];i++)
   {
      out[i] = DoubleComplex(zreals(in[i]),-zimags(in[i]));
   }
}
