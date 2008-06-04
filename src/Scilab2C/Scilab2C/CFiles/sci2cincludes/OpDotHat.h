/*
**  -*- C -*-
**
** DotHat.h
** Made by  Raffaele Nutricato
**
**
*/

#ifndef __OPDOTHAT_H__
#define __OPDOTHAT_H__

#include "floatComplex.h"
#include "doubleComplex.h"
#include "math.h"

/*
** Compute DotHat for different types .
*/

float	s0s0OpDotHats0(float in1,float in2);
void s0s2OpDotHats2(float in1,float* in2, int* in2Size, float* out);
void s2s0OpDotHats2(float* in1,int* in1Size, float in2, float* out);
void s2s2OpDotHats2(float* in1,int* in1Size,float* in2, int* in2Size, float* out);
double d0d0OpDotHatd0(double in1,double in2);
void d0d2OpDotHatd2(double in1,double* in2, int* in2Size, double* out);
void d2d0OpDotHatd2(double* in1,int* in1Size, double in2, double* out);
void d2d2OpDotHatd2(double* in1,int* in1Size,double* in2, int* in2Size, double* out);

#endif /* !__OPDOTHAT_H__ */
