/*
**  -*- C -*-
**
** OpDotSlash.c
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright Raffaele Nutricato 2007
*/

#include "OpDotSlash.h"

float s0s0OpDotSlashs0(float x1, float x2){
   return(x1/x2);
}

void s0s2OpDotSlashs2(float x1,float* x2, int* x2Size, float* y){
  int i = 0;
  for (i = 0; i < x2Size[0]*x2Size[1]; ++i) {
    y[i] = x1/(float)x2[i];
  }
}

void s2s0OpDotSlashs2(float* x2, int* x2Size,float x1, float* y){
  int i = 0;
  for (i = 0; i < x2Size[0]*x2Size[1]; ++i) {
    y[i] = (float)x2[i]/x1;
  }
}

void s2s2OpDotSlashs2(float* x1, int* x1Size, float* x2, int* x2Size, float* y){
  int i = 0;
  for (i = 0; i < x2Size[0]*x2Size[1]; ++i) {
    y[i] = (float)x1[i]/(float)x2[i];
  }
}


double d0d0OpDotSlashd0(double x1, double x2){
   return(x1/x2);
}

void d0d2OpDotSlashd2(double x1,double* x2, int* x2Size, double* y){
  int i = 0;
  for (i = 0; i < x2Size[0]*x2Size[1]; ++i) {
    y[i] = x1/(double)x2[i];
  }
}

void d2d0OpDotSlashd2(double* x2, int* x2Size,double x1, double* y){
  int i = 0;
  for (i = 0; i < x2Size[0]*x2Size[1]; ++i) {
    y[i] = (double)x2[i]/x1;
  }
}

void d2d2OpDotSlashd2(double* x1, int* x1Size, double* x2, int* x2Size, double* y){
  int i = 0;
  for (i = 0; i < x2Size[0]*x2Size[1]; ++i) {
    y[i] = (double)x1[i]/(double)x2[i];
  }
}

/*
floatComplex c0c0OpDotSlashc0(floatComplex x1, floatComplex x2)
{
   return(x1/x2);
}

void c0c2OpDotSlashc2(floatComplex x1,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = x1/(floatComplex)x2[i];
  }
}

void c2c2OpDotSlashc2(floatComplex* x1,int* x1Size,floatComplex* x2, int* x2Size, floatComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = x1[i]/x2[i];
  }
}

doubleComplex z0z0OpDotSlashz0(doubleComplex x1, doubleComplex x2)
{
   return(x1/x2);
}

void z0z2OpDotSlashz2(doubleComplex x1,doubleComplex* x2, int* x2Size, doubleComplex* y){
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
   
  for (i = 0; i < size; ++i) {
    y[i] = x1/(doubleComplex)x2[i];
  }
}

void z2z2OpDotSlashz2(doubleComplex* x1,int* x1Size,doubleComplex* x2, int* x2Size, doubleComplex* y)
{
  int i = 0;
  int size;
  size = x2Size[0]*x2Size[1];
  for (i = 0; i < size; ++i) {
    y[i] = x1[i]/x2[i];
  }
}
*/
