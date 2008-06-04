/*
**  -*- C -*-
**
** zeros.c
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright Raffaele Nutricato 2007
*/

#include "zeros.h"
void d0d0zerosd2(double in1, double in2, double* out) 
{
  int i = 0;
  for (i = 0 ; i < (((int) in1) * ((int) in2)) ; i++) 
  {
    out[i] = 0;
  }
}

double d0d0zerosd0(double in1, double in2)
{
   /*RN anche qui c'e' da capire se questi casi banali possono essere eliminati.*/
   return 0;
}

void s0s0zeross2(float in1, float in2, float* out) 
{
  int i = 0;
  for (i = 0 ; i < (((int) in1) * ((int) in2)) ; i++) 
  {
    out[i] = 0;
  }
}

double s0s0zeross0(float in1, float in2)
{
   /*RN anche qui c'e' da capire se questi casi banali possono essere eliminati.*/
   return 0;
}

