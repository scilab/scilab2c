/*
**  -*- C -*-
**
** OpMinus.h
** Made by  Raffael Nutricato
**
**
*/

#ifndef __OPMINUS_H__
#define __OPMINUS_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute OpMinus for different types .
*/

float s0s0OpMinuss0(float x1, float x2);
floatComplex s0c0OpMinusc0(float x1,floatComplex x2);
void s0s2OpMinuss2(float x2, float* x1,int* x1Size, float* y);
void s2s0OpMinuss2(float* x1,int* x1Size, float x2, float* y);
void s2s2OpMinuss2(float* x1,int* x1Size, float* x2,int* x2Size, float* y);

double d0d0OpMinusd0(double x1, double x2);
void d0d2OpMinusd2(double x2, double* x1,int* x1Size, double* y);
void d2d0OpMinusd2(double* x1,int* x1Size, double x2, double* y);
void d2d2OpMinusd2(double* x1,int* x1Size, double* x2,int* x2Size, double* y);

float    s0OpMinuss0(float x1);
void     s2OpMinuss2(float* in1,int* in1Size, float* out);
double   d0OpMinusd0(double x1);
void     d2OpMinusd2(double* in1,int* in1Size, double* out);

floatComplex c0OpMinusc0(floatComplex x1);
void c2OpMinusc2(floatComplex* in1,int* in1Size, floatComplex* out);
floatComplex c0c0OpMinusc0(floatComplex x1,floatComplex x2);
void c0c2OpMinusc2(floatComplex x1,floatComplex* x2, int* x2Size, floatComplex* y);
void c2c0OpMinusc2(floatComplex* x2, int* x2Size, floatComplex x1,floatComplex* y);
void c2c2OpMinusc2(floatComplex* x1,int* x1Size,floatComplex* x2, int* x2Size, floatComplex* y);

doubleComplex z0OpMinusz0(doubleComplex x1);
void z2OpMinusz2(doubleComplex* in1,int* in1Size, doubleComplex* out);
doubleComplex z0z0OpMinusz0(doubleComplex x1,doubleComplex x2);
void z0z2OpMinusz2(doubleComplex x1,doubleComplex* x2, int* x2Size, doubleComplex* y);
void z2z0OpMinusz2(doubleComplex* x2, int* x2Size, doubleComplex x1,doubleComplex* y);
void z2z2OpMinusz2(doubleComplex* x1,int* x1Size,doubleComplex* x2, int* x2Size, doubleComplex* y);

void z2d2OpMinusz2(doubleComplex* x2,int* x2Size,double* x1, int* x1Size, doubleComplex* y);
void d2z2OpMinusz2(double* x1,int* x1Size,doubleComplex* x2, int* x2Size, doubleComplex* y);
void c2s2OpMinusc2(floatComplex* x2,int* x2Size,float* x1, int* x1Size, floatComplex* y);
void s2c2OpMinusc2(float* x1,int* x1Size,floatComplex* x2, int* x2Size, floatComplex* y);

doubleComplex d0z0OpMinusz0(double x1,doubleComplex x2);
void s0c2OpMinusc2(float x1,floatComplex* x2, int* x2Size, floatComplex* y);
void d0z2OpMinusz2(double x1,doubleComplex* x2, int* x2Size, doubleComplex* y);

#endif /* !__OPMINUS_H__ */
