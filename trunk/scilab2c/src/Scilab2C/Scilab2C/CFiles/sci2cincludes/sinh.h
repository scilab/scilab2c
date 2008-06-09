/*
**  -*- C -*-
**
** sinh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 09:24:13 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __SINH_H__
#define __SINH_H__

#include "floatComplex.h"
#include "doubleComplex.h"
#include <math.h>
#include "sin.h"

float ssinhs(float x);
double dsinhs(double x);
floatComplex csinhs(floatComplex z);
doubleComplex	zsinhs(doubleComplex z);

void ssinha(float* x, int size, float* y);
void dsinha(double* x, int size, double* y);
void csinha(floatComplex* x, int size, floatComplex* y);
void zsinha(doubleComplex* x, int size, doubleComplex* y);


#endif /* !__SINH_H__ */
