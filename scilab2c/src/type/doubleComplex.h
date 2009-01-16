/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __DOUBLECOMPLEX_H__
#define __DOUBLECOMPLEX_H__

#ifdef __STDC_VERSION__
#  ifndef STDC
#    define STDC
#  endif
#  if __STDC_VERSION__ >= 199901L
#    ifndef STDC99
#      define STDC99
#    endif
#  endif
#endif

#include <stdlib.h>
#include <stdbool.h>

#ifndef STDC99
/*
** Hand made Double Complex definition
** {
*/
struct  double_complex
{
  double real;
  double imag;
};

typedef struct double_complex doubleComplex;
/*
** }
*/
#else
/*
** Standard C99 Complex
** {
*/
#include <complex.h>

typedef double complex doubleComplex;
/*
** }
*/
#endif

double		zreals(doubleComplex);
double		zimags(doubleComplex);
void		zreala(doubleComplex *in, int size, double *out);
void		zimaga(doubleComplex *in, int size, double *out);
doubleComplex	DoubleComplex(double, double);
doubleComplex*	DoubleComplexMatrix(double*, double*, int);
bool		zisreals(doubleComplex);
bool		zisimags(doubleComplex);
doubleComplex	zadds(doubleComplex, doubleComplex);
doubleComplex	zdiffs(doubleComplex, doubleComplex);
doubleComplex	ztimess(doubleComplex, doubleComplex);
doubleComplex	zdevides(doubleComplex, doubleComplex);

#endif /* !__DOUBLECOMPLEX_H__ */
