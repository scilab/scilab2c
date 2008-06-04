/*
**  -*- C -*-
**
** OpPlus.h
** Made by  Raffael Nutricato
**
**
*/

#ifndef __OPPLUS_H__
#define __OPPLUS_H__

#include <string.h>
#include "floatComplex.h"
#include "doubleComplex.h"

/*
** Compute OpPlus for different types .
*/

float		ssOpPlusss1(float in1,float in2);
void		ssOpPlussa1(float in1,float* in2, int size, float* out);
void     ssOpPlusaa1(float* x1,float* x2, int size, float* y);

double	ddOpPlusss1(double in1,double in2);
void		ddOpPlussa1(double in1,double* in2, int size, double* out);
void     ddOpPlusaa1(double* x1,double* x2, int size, double* y);
double   d0OpPlusd0(double x1);
void     d2OpPlusd2(double* in1,int* in1Size, double* out);

floatComplex c0OpPlusc0(floatComplex x1);
void c2OpPlusc2(floatComplex* in1,int* in1Size, floatComplex* out);
floatComplex c0c0OpPlusc0(floatComplex x1,floatComplex x2);
void s0c2OpPlusc2(float x1,floatComplex* x2, int* x2Size, floatComplex* y);
void c0c2OpPlusc2(floatComplex x1,floatComplex* x2, int* x2Size, floatComplex* y);
void c2c0OpPlusc2(floatComplex* x2, int* x2Size, floatComplex x1,floatComplex* y);
void c2c2OpPlusc2(floatComplex* x1,int* x1Size,floatComplex* x2, int* x2Size, floatComplex* y);
floatComplex c0s0OpPlusc0(floatComplex x1,float x2);
floatComplex s0c0OpPlusc0(float x2,floatComplex x1);

doubleComplex z0OpPlusz0(doubleComplex x1);
void z2OpPlusz2(doubleComplex* in1,int* in1Size, doubleComplex* out);
doubleComplex z0d0OpPlusz0(doubleComplex x1,double x2);
doubleComplex d0z0OpPlusz0(double x1,doubleComplex x2);
doubleComplex z0z0OpPlusz0(doubleComplex x1,doubleComplex x2);
void d0z2OpPlusz2(double x1,doubleComplex* x2, int* x2Size, doubleComplex* y);
void z0z2OpPlusz2(doubleComplex x1,doubleComplex* x2, int* x2Size, doubleComplex* y);
void z2z0OpPlusz2(doubleComplex* x2, int* x2Size, doubleComplex x1,doubleComplex* y);
void z2z2OpPlusz2(doubleComplex* x1,int* x1Size,doubleComplex* x2, int* x2Size, doubleComplex* y);
void g0g0OpPlusg2(char x1,char x2, char* y); /*RN pensa alla possibilita' di avere sempre e solo stringhe e mai caratteri.*/
void g2g2OpPlusg2(char* x1,int* x1Size,char* x2, int* x2Size, char* y);


void z2d2OpPlusz2(doubleComplex* x2,int* x2Size,double* x1, int* x1Size, doubleComplex* y);
void d2z2OpPlusz2(double* x1,int* x1Size,doubleComplex* x2, int* x2Size, doubleComplex* y);
void c2s2OpPlusc2(floatComplex* x2,int* x2Size,float* x1, int* x1Size, floatComplex* y);
void s2c2OpPlusc2(float* x1,int* x1Size,floatComplex* x2, int* x2Size, floatComplex* y);


#endif /* !__OPPLUS_H__ */
