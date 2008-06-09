/*
**  -*- C -*-
**
** 
** Made by  Raffaele.Nutricato@tiscali.it
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 10:01:54 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __OPLOGLT_H__
#define __OPLOGLT_H__

#include "floatComplex.h"
#include "doubleComplex.h"

#define s0s0OpLogLts0(in1,in2) \
 (float)  (in1 < in2)
void s2s0OpLogLts2(float* in1, int* in1Size, float in2, float* out);

#define d0d0OpLogLtd0(in1,in2) \
 (double)  (in1 < in2)
void d2d0OpLogLtd2(double* in1, int* in1Size, double in2, double* out);

#endif /* !__OPLOGLT_H__ */
