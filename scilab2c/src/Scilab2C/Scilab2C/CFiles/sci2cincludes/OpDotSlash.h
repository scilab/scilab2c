/*
**  -*- C -*-
**
** DotSlash.h
** Made by  Raffael Nutricato
**
**
*/


#ifndef __OPDOTSLASH_H__
#define __OPDOTSLASH_H__

#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute DotSlash for different types .
*/

float s0s0OpDotSlashs0(float x1, float x2);
void s0s2OpDotSlashs2(float x1,float* x2, int* x2Size, float* y);
void s2s0OpDotSlashs2(float* x2, int* x2Size,float x1, float* y);
void s2s2OpDotSlashs2(float* x1,int* x1Size,float* x2, int* x2Size, float* y);
double d0d0OpDotSlashd0(double x1, double x2);
void d0d2OpDotSlashd2(double x1,double* x2, int* x2Size, double* y);
void d2d0OpDotSlashd2(double* x2, int* x2Size,double x1, double* y);
void d2d2OpDotSlashd2(double* x1,int* x1Size,double* x2, int* x2Size, double* y);

/*
//~ floatComplex c0c0OpDotSlashc0(floatComplex x1, floatComplex x2);
//~ void c0c2OpDotSlashc2(floatComplex x1,floatComplex* x2, int* x2Size, floatComplex* y);
//~ void c2c2OpDotSlashc2(floatComplex* x1,int* x1Size,floatComplex* x2, int* x2Size, floatComplex* y);

//~ doubleComplex z0z0OpDotSlashz0(doubleComplex x1, doubleComplex x2);
//~ void z0z2OpDotSlashz2(doubleComplex x1,doubleComplex* x2, int* x2Size, doubleComplex* y);
//~ void z2z2OpDotSlashz2(doubleComplex* x1,int* x1Size,doubleComplex* x2, int* x2Size, doubleComplex* y);
*/
#endif /* !__OPDOTSLASH_H__ */
