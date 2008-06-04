/*
**  -*- C -*-
**
** 
** Made by  Raffaele.Nutricato@tiscali.it
**
** Copyright Raffaele Nutricato
*/

#ifndef __OPSTAR_H__
#define __OPSTAR_H__


#include "floatComplex.h"
#include "doubleComplex.h"


float ssOpStarss1(float x1, float x2);
void ssOpStarsa1(float x1,float* x2, int size, float* y);
void ssOpStaraa1(float* x1,int x1rows, int x1cols, float* x2, int x2cols, float* y);
double ddOpStarss1(double x1,double x2);
void ddOpStarsa1(double x1,double* x2, int size, double* y);
void ddOpStaraa1(double* x1,int x1rows, int x1cols, double* x2, int x2cols, double* y);
floatComplex s0c0OpStarc0(float x2, floatComplex x1);
floatComplex c0s0OpStarc0(floatComplex x1, float x2);
floatComplex c0c0OpStarc0(floatComplex x1, floatComplex x2);
void s0c2OpStarc2(float x1,floatComplex* x2, int* x2Size, floatComplex* y);
void c0s2OpStarc2(floatComplex x1,float* x2, int* x2Size, floatComplex* y);
void s2c0OpStarc2(float* x2, int* x2Size, floatComplex x1, floatComplex* y);
void c0c2OpStarc2(floatComplex x1,floatComplex* x2, int* x2Size, floatComplex* y);
void c2c0OpStarc2(floatComplex* x2, int* x2Size,floatComplex x1, floatComplex* y);
void c2s2OpStarc2(floatComplex* x1,int* x1Size, float* x2, int* x2Size, floatComplex* y);
void c2c2OpStarc2(floatComplex* x1,int* x1Size, floatComplex* x2, int* x2Size, floatComplex* y);
doubleComplex d0z0OpStarz0(double x2, doubleComplex x1);
doubleComplex z0d0OpStarz0(doubleComplex x1, double x2);
doubleComplex z0z0OpStarz0(doubleComplex x1, doubleComplex x2);
void z0d2OpStarz2(doubleComplex x1,double* x2, int* x2Size, doubleComplex* y);
void d2z0OpStarz2(double* x2, int* x2Size, doubleComplex x1, doubleComplex* y);
void d0z2OpStarz2(double x1,doubleComplex* x2, int* x2Size, doubleComplex* y);
void z0z2OpStarz2(doubleComplex x1,doubleComplex* x2, int* x2Size, doubleComplex* y);
void z2z0OpStarz2(doubleComplex* x2, int* x2Size,doubleComplex x1, doubleComplex* y);
void z2d2OpStarz2(doubleComplex* x1,int* x1Size, double* x2, int* x2Size, doubleComplex* y);
void z2z2OpStarz2(doubleComplex* x1,int* x1Size, doubleComplex* x2, int* x2Size, doubleComplex* y);
float s2s2OpStars0(float* x1,int* x1Size, float* x2,int* x2Size);
double d2d2OpStard0(double* x1,int* x1Size, double* x2,int* x2Size);
floatComplex c2c2OpStarc0(floatComplex* x1,int* x1Size, floatComplex* x2,int* x2Size);
doubleComplex z2z2OpStarz0(doubleComplex* x1,int* x1Size, doubleComplex* x2,int* x2Size);
#endif /* !__OPSTAR_H__ */
