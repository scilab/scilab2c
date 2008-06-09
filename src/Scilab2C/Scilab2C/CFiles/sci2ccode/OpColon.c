/*
**  -*- C -*-
**
** 
** Made by  Raffaele.Nutricato@tiscali.it
**
** Copyright Raffaele Nutricato
*/

#include "OpColon.h"


double d0d0OpColond0(double in1, double in2) 
{
  double i;
  double out = 0;
  int j=0;
  for (i = in1 ; i <= in2 ; i+=1) 
  {
    out = i;
    j++;
  }
  return out;
}

float c0c0OpColons0(floatComplex in1, floatComplex in2) 
{
  float i = 0;
  float out = 0;
  int j=0;
  for (i = creals(in1) ; i <= creals(in2) ; i+=1) 
  {
    out = i;
    j++;
  }
  return out;
}

double z0z0OpColond0(doubleComplex in1, doubleComplex in2) 
{
  int i = 0;
  int j = 0;
  double out = 0;
  for (i = ((int) zreals(in1)) ; i <= ((int) zreals(in2)) ; i++) 
  {
    out = i;
    j++;
  }
  return out;
}

void s0s0OpColons2(float in1, float in2, float* out) 
{
  float i;
  int j=0;
  for (i = in1 ; i <= in2 ; i+=1) 
  {
    out[j] = i;
    j++;
  }
}

void d0d0OpColond2(double in1, double in2, double* out) 
{
  double i;
  int j=0;
  for (i = in1 ; i <= in2 ; i+=1) 
  {
    out[j] = i;
    j++;
  }
}

void c0c0OpColons2(floatComplex in1, floatComplex in2, float* out) 
{
  float i = 0;
  int j=0;
  for (i = creals(in1) ; i <= creals(in2) ; i+=1) 
  {
    out[j] = i;
    j++;
  }
}

void z0z0OpColond2(doubleComplex in1, doubleComplex in2, double* out) 
{
  int i = 0;
  int j = 0;
  for (i = ((int) zreals(in1)) ; i <= ((int) zreals(in2)) ; i++) 
  {
    out[j] = i;
    j++;
  }
}

float s0s0s0OpColons0(float in1, float in2, float in3) 
{
   float i;
   float out=0;
   int j=0;
   if (in2 >= 0)
   {
      for (i = in1 ; i <= in3 ; i+=in2) 
      {
         out = i;
         j++;
      }
   }
   else
   {
      for (i = in1 ; i >= in3 ; i+=in2) 
      {
         out = i;
         j++;
      }
   }
   return (out);
}

double d0d0d0OpColond0(double in1, double in2, double in3) 
{
  double i;
  double out=0;
  int j=0;
   if (in2 >= 0)
   {
      for (i = in1 ; i <= in3 ; i+=in2) 
      {
         out = i;
         j++;
      }
   }
   else
   {
      for (i = in1 ; i >= in3 ; i+=in2) 
      {
         out = i;
         j++;
      }
   }
  return out;
}

float c0c0c0OpColons0(floatComplex in1, floatComplex in3, floatComplex in2) 
{
  float i = 0;
  float out = 0;
  int j=0;
  
   if (creals(in2) >= 0)
   {
      for (i = creals(in1) ; i <= creals(in2) ; i+=creals(in3)) 
      {
         out = i;
         j++;
      }
   }
   else
   {
      for (i = creals(in1) ; i >= creals(in2) ; i+=creals(in3)) 
      {
         out = i;
         j++;
      }
   }
   
   return out;
}

double z0z0z0OpColond0(doubleComplex in1, doubleComplex in3, doubleComplex in2) 
{
  int i = 0;
  int j = 0;
  double out = 0;
   if (zreals(in2) >= 0)
   {
      for (i = zreals(in1) ; i <= zreals(in2) ; i+=zreals(in3)) 
      {
         out = i;
         j++;
      }
   }
   else
   {
      for (i = zreals(in1) ; i >= zreals(in2) ; i+=zreals(in3)) 
      {
         out = i;
         j++;
      }
   }
  return out;
}

void s0s0s0OpColons2(float in1, float in2, float in3, float* out) 
{
   float i;
   int j=0;
   if (in2 >= 0)
   {
      for (i = in1 ; i <= in3 ; i+=in2) 
      {
         out[j] = i;
         j++;
      }
   }
   else
   {
      for (i = in1 ; i >= in3 ; i+=in2)
      {
         out[j] = i;
         j++;
      }
   }
}

void d0d0d0OpColond2(double in1, double in2, double in3, double* out) 
{
  double i;
  int j=0;
  if (in2 >= 0)
   {
      for (i = in1 ; i <= in3; i += in2) 
      {
         out[j] = i;
         //~ out[j] = i;
         //~ out[j] = i;
         //~ out[j] = i;
         //~ out[j] = i;
         //~ out[j] = i;
         //~ out[j] = i;
         //~ out[j] = i;
         //~ printf("%f\n",out[j]);
         //~ printf("%f\n",out[j]);
         //~ printf("%f\n",out[j]);
         //~ printf("%f\n",out[j]);
         //~ printf("%f\n",out[j]);
         //~ printf("%f\n",out[j]);
         //~ printf("%f\n",out[j]);
         //~ printf("%f\n",out[j]);
         //~ printf("%f\n",out[j]);
         //~ printf("%f\n",out[j]);
         //~ printf("%f\n",out[j]);
         //~ printf("%f\n",out[j]);
         //~ out[j] = i;
         //~ out[j] = i;
         j++;
      }
   }
   else
   {
      for (i = in1 ; i >= in3 ; i+=in2) 
      {
         out[j] = i;
         j++;
      }
   }
}

void c0c0c0OpColons2(floatComplex in1, floatComplex in3, floatComplex in2, float* out) 
{
  float i = 0;
  int j=0;
  
   if (creals(in2) >= 0)
   {
      for (i = creals(in1) ; i <= creals(in2) ; i+=creals(in3)) 
      {
         out[j] = i;
         j++;
      }
   }
   else
   {
      for (i = creals(in1) ; i >= creals(in2) ; i+=creals(in3)) 
      {
         out[j] = i;
         j++;
      }
   }
}

void z0z0z0OpColond2(doubleComplex in1, doubleComplex in3, doubleComplex in2, double* out) 
{
   int i = 0;
   int j = 0;
  
   if (zreals(in2) >= 0)
   {
      for (i = zreals(in1) ; i <= zreals(in2) ; i+=zreals(in3)) 
      {
         out[j] = i;
         j++;
      }
   }
   else
   {
      for (i = zreals(in1) ; i >= zreals(in2) ; i+=zreals(in3)) 
      {
         out[j] = i;
         j++;
      }
   }
}
