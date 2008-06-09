/*
**  -*- C -*-
**
** OpDotStar.c
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright Raffaele Nutricato 2007
*/

#include "OpDotStar.h"

float ssOpDotStarss1(float x1, float x2){
   return(x1*x2);
}

void ssOpDotStarsa1(float x1,float* x2, int size, float* y){
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = x1*(float)x2[i];
  }
}

void ssOpDotStaraa1(float* x1,float* x2, int size, float* y){
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = x1[i]*x2[i];
  }
}


double ddOpDotStarss1(double x1,double x2){
   return(x1*x2);
}

void ddOpDotStarsa1(double x1,double* x2, int size, double* y){
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = x1*x2[i];
  }
}

void ddOpDotStaraa1(double* x1,double* x2, int size, double* y){
  int i = 0;
  for (i = 0; i < size; ++i) {
    y[i] = x1[i]*x2[i];
  }
}

floatComplex s0c0OpDotStarc0(float x2,floatComplex x1)
{
   return(ctimess(x1,FloatComplex(x2,0)));
}

floatComplex c0s0OpDotStarc0(floatComplex x1,float x2)
{
   return(ctimess(x1,FloatComplex(x2,0)));
}

floatComplex c0c0OpDotStarc0(floatComplex x1, floatComplex x2)
{
   return(ctimess(x1,x2));
}

void c0s2OpDotStarc2(floatComplex x1,float* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = ctimess(x1,FloatComplex(x2[i],0));
  }
}

void c2c0OpDotStarc2(floatComplex* x2, int* x2Size, floatComplex x1,floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = ctimess(x1,x2[i]);
  }
}

void s2c0OpDotStarc2(float* x2, int* x2Size, floatComplex x1,floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = ctimess(x1,FloatComplex(x2[i],0));
  }
}

void s0c2OpDotStarc2(float x1,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = ctimess(FloatComplex(x1,0),x2[i]);
  }
}

void c0c2OpDotStarc2(floatComplex x1,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = ctimess(x1,x2[i]);
  }
}

void c2s2OpDotStarc2(floatComplex* x1,int* x1Size,float* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = ctimess(x1[i],FloatComplex(x2[i],0));
  }
}


void c2c2OpDotStarc2(floatComplex* x1,int* x1Size,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = ctimess(x1[i],x2[i]);
  }
}


doubleComplex z0d0OpDotStarz0(doubleComplex x1, double x2)
{
   return(ztimess(x1,DoubleComplex(x2,0)));
}

doubleComplex d0z0OpDotStarz0(double x2,doubleComplex x1)
{
   return(ztimess(x1,DoubleComplex(x2,0)));
}

doubleComplex z0z0OpDotStarz0(doubleComplex x1, doubleComplex x2)
{
   return(ztimess(x1,x2));
}

void z0d2OpDotStarz2(doubleComplex x1,double* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = ztimess(x1,DoubleComplex(x2[i],0));
  }
}

void d2z0OpDotStarz2(double* x2, int* x2Size, doubleComplex x1, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = ztimess(x1,DoubleComplex(x2[i],0));
  }
}

void z2z0OpDotStarz2(doubleComplex* x2, int* x2Size, doubleComplex x1, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = ztimess(x1,x2[i]);
  }
}

void d0z2OpDotStarz2(double x1,doubleComplex* x2, int* x2Size, doubleComplex* y){
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = ztimess(DoubleComplex(x1,0),x2[i]);
  }
}

void z0z2OpDotStarz2(doubleComplex x1,doubleComplex* x2, int* x2Size, doubleComplex* y){
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = ztimess(x1,x2[i]);
  }
}

void z2d2OpDotStarz2(doubleComplex* x1,int* x1Size,double* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = ztimess(x1[i],DoubleComplex(x2[i],0));
  }
}

void z2z2OpDotStarz2(doubleComplex* x1,int* x1Size,doubleComplex* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = ztimess(x1[i],x2[i]);
  }
}
