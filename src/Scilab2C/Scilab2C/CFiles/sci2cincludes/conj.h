/*
**  -*- C -*-
**
** sin.h
** Made by Raffaele Nutricato
**
*/

#ifndef __CONJ_H__
#define __CONJ_H__

#include "floatComplex.h"
#include "doubleComplex.h"

floatComplex  c0conjc0(floatComplex in);
doubleComplex z0conjz0(doubleComplex in);
void c2conjc2(floatComplex* in, int* insize, floatComplex* out);
void z2conjz2(doubleComplex* in, int* insize, doubleComplex* out);

#endif /* !__CONJ_H__ */
