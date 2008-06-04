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

#ifndef __OPLOGLE_H__
#define __OPLOGLE_H__

#include "floatComplex.h"
#include "doubleComplex.h"

#define s0s0OpLogLes0(in1,in2) \
 (float)  (in1 <= in2)
void s2s0OpLogLes2(float* in1, int* in1Size, float in2, float* out);

#define d0d0OpLogLed0(in1,in2) \
 (double)  (in1 <= in2)
void d2d0OpLogLed2(double* in1, int* in1Size, double in2, double* out);

#endif /* !__OPLOGLE_H__ */
