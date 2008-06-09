/*
**  -*- C -*-
**
** OpRc.c
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright Raffaele Nutricato 2007
*/
#ifndef __OPRC_H__
#define __OPRC_H__

#include "floatComplex.h"
#include "doubleComplex.h"

void d0d0OpRcd2(double in1, double in2, double* out);
void d2d0OpRcd2(double* in1, int* in1Size, double in2, double* out);
void d0d2OpRcd2(double in2, double* in1, int* in1Size, double* out);
void d2d2OpRcd2(double* in1, int* in1Size, double* in2, int* in2Size, double* out);

void s0s0OpRcs2(float in1, float in2, float* out);
void s2s0OpRcs2(float* in1, int* in1Size, float in2, float* out);
void s0s2OpRcs2(float in2, float* in1, int* in1Size, float* out);
void s2s2OpRcs2(float* in1, int* in1Size, float* in2, int* in2Size, float* out);

void z0z0OpRcz2(doubleComplex in1, doubleComplex in2, doubleComplex* out);
void z2z0OpRcz2(doubleComplex* in1, int* in1Size, doubleComplex in2, doubleComplex* out);
void z0z2OpRcz2(doubleComplex in2, doubleComplex* in1, int* in1Size, doubleComplex* out);
void z2z2OpRcz2(doubleComplex* in1, int* in1Size, doubleComplex* in2, int* in2Size, doubleComplex* out);

void c0c0OpRcc2(floatComplex in1, floatComplex in2, floatComplex* out);
void c2c0OpRcc2(floatComplex* in1, int* in1Size, floatComplex in2, floatComplex* out);
void c0c2OpRcc2(floatComplex in2, floatComplex* in1, int* in1Size, floatComplex* out);
void c2c2OpRcc2(floatComplex* in1, int* in1Size, floatComplex* in2, int* in2Size, floatComplex* out);
#endif /* !__OPRC_H__ */
