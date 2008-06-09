/*
**  -*- C -*-
**
** cosh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Tue Dec  5 15:49:18 2006 jofret
** Last update Mon Oct 22 09:33:12 2007 bruno
**
** Copyright INRIA 2006
*/

#ifndef __COSH_H__
#define __COSH_H__

#include "floatComplex.h"
#include "doubleComplex.h"

void zcosha(doubleComplex* x, int size, doubleComplex* y);
float scoshs(float x);
void scosha(float* x, int size, float* y);
double dcoshs(double x);
void dcosha(double* x, int size, double* y);
doubleComplex zcoshs(doubleComplex z);

#endif /* !__COSH_H__ */

