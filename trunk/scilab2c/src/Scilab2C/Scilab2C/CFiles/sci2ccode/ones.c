/*
**  -*- C -*-
**
** OpEqual.c
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright Raffaele Nutricato 2007
*/

#include "ones.h"
void ddonesss1(double in1, double in2, double* out) 
{
  int i = 0;
  for (i = 0 ; i < (((int) in1) * ((int) in2)) ; i++) 
  {
    out[i] = 1;
  }
}

double d0d0onesd0(double in1, double in2)
{
   /*RN anche qui c'e' da capire se questi casi banali possono essere eliminati.*/
   return 1;
}

void ssonesss1(float in1, float in2, float* out) 
{
  int i = 0;
  for (i = 0 ; i < (((int) in1) * ((int) in2)) ; i++) 
  {
    out[i] = 1;
  }
}

float s0s0oness0(float in1, float in2)
{
   /*RN anche qui c'e' da capire se questi casi banali possono essere eliminati.*/
   return 1;
}
