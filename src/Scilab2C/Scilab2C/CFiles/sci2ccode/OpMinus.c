/*
**  -*- C -*-
**
** OpMinus.c
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright Raffaele Nutricato 2007
*/

#include "OpMinus.h"

float s0OpMinuss0(float x1)
{
   return(-x1);
}

void s2OpMinuss2(float* in1,int* in1Size, float* out)
{
  int i = 0;
  for (i = 0; i < in1Size[0]*in1Size[1]; ++i) 
  {
    out[i] = -in1[i];
  }
}

double d0OpMinusd0(double x1)
{
   return(-x1);
}

void d2OpMinusd2(double* in1,int* in1Size, double* out)
{
  int i = 0;
  for (i = 0; i < in1Size[0]*in1Size[1]; ++i) 
  {
    out[i] = -in1[i];
  }
}



float s0s0OpMinuss0(float x1, float x2)
{
   return(x1-x2);
}

void s0s2OpMinuss2(float x2, float* x1,int* x1Size, float* y)
{
  int i = 0;
  for (i = 0; i < x1Size[0]*x1Size[1]; ++i) {
    y[i] = x2-x1[i];
  }
}

void s2s0OpMinuss2(float* x1,int* x1Size, float x2, float* y)
{
  int i = 0;
  for (i = 0; i < x1Size[0]*x1Size[1]; ++i) {
    y[i] = x1[i]-x2;
  }
}

void s2s2OpMinuss2(float* x1,int* x1Size, float* x2,int* x2Size, float* y)
{
  int i = 0;
  for (i = 0; i < x1Size[0]*x1Size[1]; ++i) 
  {
    y[i] = x1[i]-x2[i];
  }
}


double d0d0OpMinusd0(double x1, double x2)
{
   return(x1-x2);
}

void d0d2OpMinusd2(double x2, double* x1,int* x1Size, double* y)
{
  int i = 0;
  for (i = 0; i < x1Size[0]*x1Size[1]; ++i) {
    y[i] = x2-x1[i];
  }
}

void d2d0OpMinusd2(double* x1,int* x1Size, double x2, double* y)
{
  int i = 0;
  for (i = 0; i < x1Size[0]*x1Size[1]; ++i) {
    y[i] = x1[i]-x2;
  }
}

void d2d2OpMinusd2(double* x1,int* x1Size, double* x2,int* x2Size, double* y)
{
  int i = 0;
  for (i = 0; i < x1Size[0]*x1Size[1]; ++i) {
    y[i] = x1[i]-x2[i];
  }
}


floatComplex c0OpMinusc0(floatComplex x1)
{
   floatComplex x2;
   x2 = FloatComplex(-creals(x1),-cimags(x1));
   return(x2);
}

void c2OpMinusc2(floatComplex* in1,int* in1Size, floatComplex* out)
{
  int i = 0;
  for (i = 0; i < in1Size[0]*in1Size[1]; ++i) 
  {
    out[i] = FloatComplex(-creals(in1[i]),-cimags(in1[i]));
  }
}

floatComplex s0c0OpMinusc0(float x1,floatComplex x2)
{
   return(cdiffs(FloatComplex(x1,0),x2));
}

doubleComplex d0z0OpMinusz0(double x1,doubleComplex x2)
{
   return(zdiffs(DoubleComplex(x1,0),x2));
}

floatComplex c0c0OpMinusc0(floatComplex x1,floatComplex x2)
{
   return(cdiffs(x1,x2));
}

doubleComplex z0z0OpMinusz0(doubleComplex x1,doubleComplex x2)
{
   return(zdiffs(x1,x2));
}

void c0c2OpMinusc2(floatComplex x1,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = cdiffs(x1,x2[i]);
  }
}

void c2c0OpMinusc2(floatComplex* x2, int* x2Size, floatComplex x1,floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = cdiffs(x1,x2[i]);
  }
}

void c2c2OpMinusc2(floatComplex* x1,int* x1Size,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = cdiffs(x1[i],x2[i]);
  }
}

doubleComplex z0OpMinusz0(doubleComplex x1)
{
   return(ztimess(DoubleComplex(-1,0),x1));
}

void z2OpMinusz2(doubleComplex* in1,int* in1Size, doubleComplex* out)
{
  int i = 0;
  for (i = 0; i < in1Size[0]*in1Size[1]; ++i) 
  {
    out[i] = ztimess(DoubleComplex(-1,0),in1[i]);
  }
}

void z0z2OpMinusz2(doubleComplex x1,doubleComplex* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = zdiffs(x1,x2[i]);
  }
}

void z2z0OpMinusz2(doubleComplex* x2, int* x2Size, doubleComplex x1,doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = zdiffs(x1,x2[i]);
  }
}

void z2z2OpMinusz2(doubleComplex* x1,int* x1Size,doubleComplex* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = zdiffs(x1[i],x2[i]);
  }
}

void z2d2OpMinusz2(doubleComplex* x2,int* x2Size,double* x1, int* x1Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = zdiffs(DoubleComplex(x1[i],0),x2[i]);
  }
}

void d2z2OpMinusz2(double* x1,int* x1Size,doubleComplex* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = zdiffs(DoubleComplex(x1[i],0),x2[i]);
  }
}


void c2s2OpMinusc2(floatComplex* x2,int* x2Size,float* x1, int* x1Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = cdiffs(FloatComplex(x1[i],0),x2[i]);
  }
}

void s2c2OpMinusc2(float* x1,int* x1Size,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = cdiffs(FloatComplex(x1[i],0),x2[i]);
  }
}

void s0c2OpMinusc2(float x1,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = cdiffs(FloatComplex(x1,0),x2[i]);
  }
}


void d0z2OpMinusz2(double x1,doubleComplex* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = zdiffs(DoubleComplex(x1,0),x2[i]);
  }
}

