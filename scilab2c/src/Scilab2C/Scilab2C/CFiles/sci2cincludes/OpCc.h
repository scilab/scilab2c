/*
**  -*- C -*-
**
** OpCc.c
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright Raffaele Nutricato 2007
*/
#include "floatComplex.h"
#include "doubleComplex.h"

void s0s0OpCcs2(float in1, float in2, float* out);
void s2s0OpCcs2(float* in1, int* in1Size, float in2, float* out);
void s0s2OpCcs2(float in2, float* in1, int* in1Size, float* out);
void s2s2OpCcs2(float* in1, int* in1Size, float* in2, int* in2Size, float* out);

void d0d0OpCcd2(double in1, double in2, double* out);
void d2d0OpCcd2(double* in1, int* in1Size, double in2, double* out);
void d0d2OpCcd2(double in2, double* in1, int* in1Size, double* out);
void d2d2OpCcd2(double* in1, int* in1Size, double* in2, int* in2Size, double* out);

void c0c0OpCcc2(floatComplex in1, floatComplex in2, floatComplex* out);
void c2c0OpCcc2(floatComplex* in1, int* in1Size, floatComplex in2, floatComplex* out);
void c0c2OpCcc2(floatComplex in2, floatComplex* in1, int* in1Size, floatComplex* out);
void c2c2OpCcc2(floatComplex* in1, int* in1Size, floatComplex* in2, int* in2Size, floatComplex* out);

void z0z0OpCcz2(doubleComplex in1, doubleComplex in2, doubleComplex* out);
void z2z0OpCcz2(doubleComplex* in1, int* in1Size, doubleComplex in2, doubleComplex* out);
void z0z2OpCcz2(doubleComplex in2, doubleComplex* in1, int* in1Size, doubleComplex* out);
void z2z2OpCcz2(doubleComplex* in1, int* in1Size, doubleComplex* in2, int* in2Size, doubleComplex* out);

