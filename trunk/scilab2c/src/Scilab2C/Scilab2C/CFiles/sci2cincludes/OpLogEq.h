/*
**  -*- C -*-
**
** 
** Made by  Raffaele.Nutricato@tiscali.it
**
** Copyright Raffaele Nutricato
*/

#ifndef __OPLOGEQ_H__
#define __OPLOGEQ_H__

#include "floatComplex.h"
#include "doubleComplex.h"

#define s0s0OpLogEqs0(in1,in2) \
 (float)  (in1 == in2)
void s2s0OpLogEqs2(float* in1, int* in1Size, float in2, float* out);

#define d0d0OpLogEqd0(in1,in2) \
 (double)  (in1 == in2)
void d2d0OpLogEqd2(double* in1, int* in1Size, double in2, double* out);
#endif /* !__OPLOGGT_H__ */
