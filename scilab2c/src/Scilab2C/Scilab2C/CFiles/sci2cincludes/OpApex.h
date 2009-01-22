/*
**  -*- C -*-
**
** OpApex.h
** Made by  Raffael Nutricato
**
**
*/


#ifndef __OPAPEX_H__
#define __OPAPEX_H__

#include "floatComplex.h"
#include "doubleComplex.h"
#include "int_conj.h"
#include "conj.h"

/*
** Compute OpApex for different types .
*/

float	 sOpApexs(float in);
double dOpApexs(double in);
void   sOpApexa(float* x, int xrow,int xcols, float* y);
void	 dOpApexa(double* in, int xrow, int xcols, double* out);

floatComplex c0OpApexc0(floatComplex x);
void c2OpApexc2(floatComplex* x, int* xSize, floatComplex* y);
doubleComplex z0OpApexz0(doubleComplex x);
void z2OpApexz2(doubleComplex* x, int* xSize, doubleComplex* y);

#endif /* !__OPAPEX_H__ */
