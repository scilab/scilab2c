/*
**  -*- C -*-
**
** OpPlus.c
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright Raffaele Nutricato 2007
*/

#include "OpPlus.h"

float ssOpPlusss1(float x1, float x2){
   return(x1+x2);
}

void ssOpPlussa1(float x1,float* x2, int size, float* y){
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = x1+(float)x2[i];
  }
}

void ssOpPlusaa1(float* x1,float* x2, int size, float* y){
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = x1[i]+x2[i];
  }
}


double ddOpPlusss1(double x1,double x2){
   return(x1+x2);
}

void ddOpPlussa1(double x1,double* x2, int size, double* y){
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = x1+x2[i];
  }
}

void ddOpPlusaa1(double* x1,double* x2, int size, double* y){
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = x1[i]+x2[i];
  }
}

double d0OpPlusd0(double x1)
{
   return(x1);
}

void d2OpPlusd2(double* in1,int* in1Size, double* out)
{
  int i = 0;
  for (i = 0; i < in1Size[0]*in1Size[1]; ++i) 
  {
    out[i] = in1[i];
  }
}
floatComplex c0OpPlusc0(floatComplex x1)
{
   return(x1);
}

void c2OpPlusc2(floatComplex* in1,int* in1Size, floatComplex* out)
{
  int i = 0;
  for (i = 0; i < in1Size[0]*in1Size[1]; ++i) 
  {
    out[i] = in1[i];
  }
}

floatComplex c0c0OpPlusc0(floatComplex x1,floatComplex x2)
{
   return(cadds(x1,x2));
}

floatComplex c0s0OpPlusc0(floatComplex x1,float x2)
{
   return(cadds(x1,FloatComplex(x2,0)));
}

floatComplex s0c0OpPlusc0(float x2,floatComplex x1)
{
   return(cadds(x1,FloatComplex(x2,0)));
}

void s0c2OpPlusc2(float x1,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = cadds(FloatComplex(x1,0),x2[i]);
  }
}

void c0c2OpPlusc2(floatComplex x1,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = cadds(x1,x2[i]);
  }
}

void c2c0OpPlusc2(floatComplex* x2, int* x2Size, floatComplex x1,floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = cadds(x1,x2[i]);
  }
}

void c2c2OpPlusc2(floatComplex* x1,int* x1Size,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = cadds(x1[i],x2[i]);
  }
}

doubleComplex z0OpPlusz0(doubleComplex x1)
{
   return(x1);
}

void z2OpPlusz2(doubleComplex* in1,int* in1Size, doubleComplex* out)
{
  int i = 0;
  for (i = 0; i < in1Size[0]*in1Size[1]; ++i) 
  {
    out[i] = in1[i];
  }
}

doubleComplex d0z0OpPlusz0(double x1,doubleComplex x2)
{
   return(zadds(x2,DoubleComplex(x1,0)));
}

doubleComplex z0d0OpPlusz0(doubleComplex x1,double x2)
{
   return(zadds(x1,DoubleComplex(x2,0)));
}

doubleComplex z0z0OpPlusz0(doubleComplex x1,doubleComplex x2)
{
   return(zadds(x1,x2));
}

void d0z2OpPlusz2(double x1,doubleComplex* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = zadds(DoubleComplex(x1,0),x2[i]);
  }
}

void z0z2OpPlusz2(doubleComplex x1,doubleComplex* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = zadds(x1,x2[i]);
  }
}

void z2z0OpPlusz2(doubleComplex* x2, int* x2Size, doubleComplex x1,doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = zadds(x1,x2[i]);
  }
}

void z2d2OpPlusz2(doubleComplex* x2,int* x2Size,double* x1, int* x1Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = zadds(DoubleComplex(x1[i],0),x2[i]);
  }
}

void d2z2OpPlusz2(double* x1,int* x1Size,doubleComplex* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = zadds(DoubleComplex(x1[i],0),x2[i]);
  }
}


void c2s2OpPlusc2(floatComplex* x2,int* x2Size,float* x1, int* x1Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = cadds(FloatComplex(x1[i],0),x2[i]);
  }
}

void s2c2OpPlusc2(float* x1,int* x1Size,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = cadds(FloatComplex(x1[i],0),x2[i]);
  }
}


void z2z2OpPlusz2(doubleComplex* x1,int* x1Size,doubleComplex* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = zadds(x1[i],x2[i]);
  }
}

void g0g0OpPlusg2(char x1, char x2, char* y)
{
   y[0] = x1;
   y[1] = x2;
}

void g2g2OpPlusg2(char* x1,int* x1Size,char* x2, int* x2Size, char* y)
{
  int i = 0;
  int j = 0;
  for (i = 0; i < x1Size[1]-1; ++i,++j) 
  {
    y[j] = x1[i];
  }
  for (i = 0; i < x2Size[1]; ++i,++j) 
  {
    y[j] = x2[i];
  }
}
