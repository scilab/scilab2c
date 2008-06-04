/*
**  -*- C -*-
**
** 
** Made by  Raffaele.Nutricato@tiscali.it
**
** Copyright Raffaele Nutricato
*/

#ifndef __OPCOLON_H__
#define __OPCOLON_H__

#include "floatComplex.h"
#include "doubleComplex.h"

float  s0s0OpColons0(float in1, float in2);
double d0d0OpColond0(double in1, double in2);
float  c0c0OpColons0(floatComplex in1, floatComplex in2);
double z0z0OpColond0(doubleComplex in1, doubleComplex in2);

void s0s0OpColons2(float in1, float in2, float* out);
void d0d0OpColond2(double in1, double in2, double* out);
void c0c0OpColons2(floatComplex in1, floatComplex in2, float* out);
void z0z0OpColond2(doubleComplex in1, doubleComplex in2, double* out);

float  s0s0s0OpColons0(float in1, float in2, float in3);
double d0d0d0OpColond0(double in1, double in2, double in3);
float  c0c0c0OpColons0(floatComplex in1, floatComplex in3, floatComplex in2);
double z0z0z0OpColond0(doubleComplex in1, doubleComplex in3, doubleComplex in2);

void s0s0s0OpColons2(float in1, float in2, float in3,float* out);
void d0d0d0OpColond2(double in1, double in2, double in3, double* out);
void c0c0c0OpColons2(floatComplex in1, floatComplex in3, floatComplex in2, float* out);
void z0z0z0OpColond2(doubleComplex in1, doubleComplex in3, doubleComplex in2, double* out);

#endif /* !__OPCOLON_H__ */
