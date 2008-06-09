/*
**  -*- C -*-
**
** DotStar.h
** Made by  Raffael Nutricato
**
**
*/


#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute DotStar for different types .
*/

float		ssOpDotStarss1(float in1,float in2);
void		ssOpDotStarsa1(float in1,float* in2, int size, float* out);
void		ssOpDotStaraa1(float* in1,float* in2, int size, float* out);

double	ddOpDotStarss1(double in1,double in2);
void		ddOpDotStarsa1(double in1,double* in2, int size, double* out);
void		ddOpDotStaraa1(double* in1,double* in2, int size, double* out);

floatComplex s0c0OpDotStarc0(float x2,floatComplex x1);
floatComplex c0s0OpDotStarc0(floatComplex x1,float x2);
floatComplex c0c0OpDotStarc0(floatComplex x1, floatComplex x2);
void c0s2OpDotStarc2(floatComplex x1,float* x2, int* x2Size, floatComplex* y);
void c2c0OpDotStarc2(floatComplex* x2, int* x2Size, floatComplex x1,floatComplex* y);
void s2c0OpDotStarc2(float* x2, int* x2Size, floatComplex x1,floatComplex* y);
void s0c2OpDotStarc2(float x1,floatComplex* x2, int* x2Size, floatComplex* y);
void c0c2OpDotStarc2(floatComplex x1,floatComplex* x2, int* x2Size, floatComplex* y);
void c2s2OpDotStarc2(floatComplex* x1,int* x1Size,float* x2, int* x2Size, floatComplex* y);
void c2c2OpDotStarc2(floatComplex* x1,int* x1Size,floatComplex* x2, int* x2Size, floatComplex* y);

doubleComplex z0d0OpDotStarz0(doubleComplex x1, double x2);
doubleComplex d0z0OpDotStarz0(double x2,doubleComplex x1);
doubleComplex z0z0OpDotStarz0(doubleComplex x1, doubleComplex x2);
void z0d2OpDotStarz2(doubleComplex x1,double* x2, int* x2Size, doubleComplex* y);
void z2z0OpDotStarz2(doubleComplex* x2, int* x2Size, doubleComplex x1, doubleComplex* y);
void d2z0OpDotStarz2(double* x2, int* x2Size, doubleComplex x1, doubleComplex* y);
void d0z2OpDotStarz2(double x1,doubleComplex* x2, int* x2Size, doubleComplex* y);
void z0z2OpDotStarz2(doubleComplex x1,doubleComplex* x2, int* x2Size, doubleComplex* y);
void z2d2OpDotStarz2(doubleComplex* x1,int* x1Size,double* x2, int* x2Size, doubleComplex* y);
void z2z2OpDotStarz2(doubleComplex* x1,int* x1Size,doubleComplex* x2, int* x2Size, doubleComplex* y);
