/*
**  -*- C -*-
**
** OpStar.c
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright Raffaele Nutricato 2007
*/

#include "OpStar.h"

float ssOpStarss1(float x1, float x2){
   return(x1*x2);
}

void ssOpStarsa1(float x1,float* x2, int size, float* y){
  int i = 0;
  for (i = 0; i < size; ++i) 
  {
    y[i] = x1*(float)x2[i];
  }
}

void ssOpStaraa1(float* x1,int x1rows, int x1cols, float* x2, int x2cols, float* y)
{
   int i = 0;
   int j = 0;
   int z = 0;
   for (i = 0; i < x1rows; ++i) 
   {
      for (j = 0; j < x2cols; j++)
      {
         y[i*x2cols+j] = 0;
         for (z = 0; z < x1cols; z++)
         {
            y[i*x2cols+j] = y[i*x2cols+j] + x1[i*x1cols+z]*x2[z*x2cols+j];
         }
      }
   }
}

double ddOpStarss1(double x1,double x2){
   return(x1*x2);
}

void ddOpStarsa1(double x1,double* x2, int size, double* y){
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = x1*x2[i];
  }
}

void ddOpStaraa1(double* x1,int x1rows, int x1cols, double* x2, int x2cols, double* y)
{
   int i = 0;
   int j = 0;
   int z = 0;
   for (i = 0; i < x1rows; i++) 
   {
      for (j = 0; j < x2cols; j++)
      {
         y[i*x2cols+j] = 0;
         for (z = 0; z < x1cols; z++)
         {
            y[i*x2cols+j] = y[i*x2cols+j] + x1[i*x1cols+z]*x2[z*x2cols+j];
         }
      }
   }
}

floatComplex s0c0OpStarc0(float x2, floatComplex x1)
{
   return(ctimess(x1,FloatComplex(x2,0)));
}

floatComplex c0s0OpStarc0(floatComplex x1, float x2)
{
   return(ctimess(x1,FloatComplex(x2,0)));
}

floatComplex c0c0OpStarc0(floatComplex x1, floatComplex x2)
{
   return(ctimess(x1,x2));
}

void c0s2OpStarc2(floatComplex x1,float* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) 
  {
    y[i] = ctimess(x1,FloatComplex(x2[i],0));
  }
}

void s2c0OpStarc2(float* x2, int* x2Size, floatComplex x1, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) 
  {
    y[i] = ctimess(x1,FloatComplex(x2[i],0));
  }
}

void s0c2OpStarc2(float x1,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) 
  {
    y[i] = ctimess(FloatComplex(x1,0),x2[i]);
  }
}

void c0c2OpStarc2(floatComplex x1,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) 
  {
    y[i] = ctimess(x1,x2[i]);
  }
}

void c2c0OpStarc2(floatComplex* x2, int* x2Size,floatComplex x1, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) 
  {
    y[i] = ctimess(x1,x2[i]);
  }
}

void c2s2OpStarc2(floatComplex* x1,int* x1Size, float* x2, int* x2Size, floatComplex* y)
{
   int i = 0;
   int j = 0;
   int z = 0;
   int x1rows = x1Size[0];
   int x1cols = x1Size[1];
   int x2cols = x2Size[1];
   for (i = 0; i < x1rows; ++i) 
   {
      for (j = 0; j < x2cols; j++)
      {
         y[i*x2cols+j] = FloatComplex(0,0);
         for (z = 0; z < x1cols; z++)
         {
            y[i*x2cols+j] = cadds(y[i*x2cols+j],ctimess(x1[i*x1cols+z],FloatComplex(x2[z*x2cols+j],0)));
         }
      }
   }
}

void c2c2OpStarc2(floatComplex* x1,int* x1Size, floatComplex* x2, int* x2Size, floatComplex* y)
{
   int i = 0;
   int j = 0;
   int z = 0;
   int x1rows = x1Size[0];
   int x1cols = x1Size[1];
   int x2cols = x2Size[1];
   for (i = 0; i < x1rows; ++i) 
   {
      for (j = 0; j < x2cols; j++)
      {
         y[i*x2cols+j] = FloatComplex(0,0);
         for (z = 0; z < x1cols; z++)
         {
            y[i*x2cols+j] = cadds(y[i*x2cols+j],ctimess(x1[i*x1cols+z],x2[z*x2cols+j]));
         }
      }
   }
}

doubleComplex d0z0OpStarz0(double x2, doubleComplex x1)
{
   return(ztimess(x1,DoubleComplex(x2,0)));
}

doubleComplex z0d0OpStarz0(doubleComplex x1, double x2)
{
   return(ztimess(x1,DoubleComplex(x2,0)));
}

doubleComplex z0z0OpStarz0(doubleComplex x1, doubleComplex x2)
{
   return(ztimess(x1,x2));
}

void z0d2OpStarz2(doubleComplex x1,double* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) 
  {
    y[i] = ztimess(x1,DoubleComplex(x2[i],0));
  }
}

void d2z0OpStarz2(double* x2, int* x2Size, doubleComplex x1, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) 
  {
    y[i] = ztimess(x1,DoubleComplex(x2[i],0));
  }
}

void d0z2OpStarz2(double x1,doubleComplex* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) 
  {
    y[i] = ztimess(DoubleComplex(x1,0),x2[i]);
  }
}

void z0z2OpStarz2(doubleComplex x1,doubleComplex* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) 
  {
    y[i] = ztimess(x1,x2[i]);
  }
}

void z2z0OpStarz2(doubleComplex* x2, int* x2Size,doubleComplex x1, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) 
  {
    y[i] = ztimess(x1,x2[i]);
  }
}

void z2d2OpStarz2(doubleComplex* x1,int* x1Size, double* x2, int* x2Size, doubleComplex* y)
{
   int i = 0;
   int j = 0;
   int z = 0;
   int x1rows = x1Size[0];
   int x1cols = x1Size[1];
   int x2cols = x2Size[1];
   for (i = 0; i < x1rows; ++i) 
   {
      for (j = 0; j < x2cols; j++)
      {
         y[i*x2cols+j] = DoubleComplex(0,0);
         for (z = 0; z < x1cols; z++)
         {
            y[i*x2cols+j] = zadds(y[i*x2cols+j],ztimess(x1[i*x1cols+z],DoubleComplex(x2[z*x2cols+j],0)));
         }
      }
   }
}

void z2z2OpStarz2(doubleComplex* x1,int* x1Size, doubleComplex* x2, int* x2Size, doubleComplex* y)
{
   int i = 0;
   int j = 0;
   int z = 0;
   int x1rows = x1Size[0];
   int x1cols = x1Size[1];
   int x2cols = x2Size[1];
   for (i = 0; i < x1rows; ++i) 
   {
      for (j = 0; j < x2cols; j++)
      {
         y[i*x2cols+j] = DoubleComplex(0,0);
         for (z = 0; z < x1cols; z++)
         {
            y[i*x2cols+j] = zadds(y[i*x2cols+j],ztimess(x1[i*x1cols+z],x2[z*x2cols+j]));
         }
      }
   }
}



float s2s2OpStars0(float* x1,int* x1Size, float* x2,int* x2Size)
{
   int i = 0;
   int j = 0;
   int z = 0;
   float y = 0;
   int x1rows = x1Size[0];
   int x1cols = x1Size[1];
   int x2cols = x2Size[1];
   for (i = 0; i < x1rows; ++i) 
   {
      for (j = 0; j < x2cols; j++)
      {
         y = 0;
         for (z = 0; z < x1cols; z++)
         {
            y += x1[i*x1cols+z]*x2[z*x2cols+j];
         }
      }
   }
   return(y);
}

double d2d2OpStard0(double* x1,int* x1Size, double* x2,int* x2Size)
{
   int i = 0;
   int j = 0;
   int z = 0;
   int x1rows = x1Size[0];
   int x1cols = x1Size[1];
   int x2cols = x2Size[1];
   double y = 0;
   for (i = 0; i < x1rows; ++i) 
   {
      for (j = 0; j < x2cols; j++)
      {
         y = 0;
         for (z = 0; z < x1cols; z++)
         {
            y += x1[i*x1cols+z]*x2[z*x2cols+j];
         }
      }
   }
   return(y);
}

floatComplex c2c2OpStarc0(floatComplex* x1,int* x1Size, floatComplex* x2,int* x2Size)
{
   int i = 0;
   int j = 0;
   int z = 0;
   int x1rows = x1Size[0];
   int x1cols = x1Size[1];
   int x2cols = x2Size[1];
   floatComplex y = FloatComplex(0,0);
   for (i = 0; i < x1rows; ++i) 
   {
      for (j = 0; j < x2cols; j++)
      {
         y = FloatComplex(0,0);
         for (z = 0; z < x1cols; z++)
         {
            y = cadds(y,ctimess(x1[i*x1cols+z],x2[z*x2cols+j]));
         }
      }
   }
   return(y);
}

doubleComplex z2z2OpStarz0(doubleComplex* x1,int* x1Size, doubleComplex* x2,int* x2Size)
{
   int i = 0;
   int j = 0;
   int z = 0;
   int x1rows = x1Size[0];
   int x1cols = x1Size[1];
   int x2cols = x2Size[1];
   doubleComplex y = DoubleComplex(0,0);
   for (i = 0; i < x1rows; ++i) 
   {
      for (j = 0; j < x2cols; j++)
      {
         y = DoubleComplex(0,0);
         for (z = 0; z < x1cols; z++)
         {
            y = zadds(y,ztimess(x1[i*x1cols+z],x2[z*x2cols+j]));
         }
      }
   }
   return(y);
}
