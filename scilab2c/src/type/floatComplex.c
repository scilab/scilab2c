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

#include <stdio.h>
#include <stdlib.h>
#include "floatComplex.h"

#ifndef STDC99
/*
** \function real
** \brief Return a Complex Real Part .
*/
float creals(floatComplex z) {
  return z.real;
}

/*
** \function imag
** \brief Return a Complex Imaginary Part .
*/
float cimags(floatComplex z) {
  return z.imag;
}
#else
/*
** \function real
** \brief Return a Complex Real Part .
*/
float creals(floatComplex z) {
  return crealf(z);
}

/*
** \function imag
** \brief Return a Complex Imaginary Part .
*/
float cimags(floatComplex z) {
  return cimagf(z);
}
#endif

/*
** \function creala
** \brief Return a Complex Real Part array.
*/
void creala(floatComplex* z, int size, float* out) {
  int i = 0;

  for (i = 0 ; i < size ; ++i)
    {
      out[i] = creals(z[i]);
    }
}

/*
** \function cimaga
** \brief Return a Complex Imaginary Part array.
*/
void cimaga(floatComplex* z, int size, float* out) {
  int i = 0;

  for (i = 0 ; i < size ; ++i)
    {
      out[i] = cimags(z[i]);
    }
}

/*
** \function FloatComplex
** \brief construct a Float Complex .
*/
floatComplex FloatComplex(float a, float b) {
  floatComplex z;
#ifndef STDC99
  z.real = a;
  z.imag = b;
#else
  z = a + I * b;
#endif
  return z;
}

/*
** \function FloatComplexMatrix
** \brief construct a Float Complex Matrix.
*/
floatComplex *FloatComplexMatrix(float* real, float* imag, int size) {
  floatComplex *z = malloc((uint) size * sizeof(floatComplex));
  int i = 0;

  for(i = 0; i < size; ++i)
    {
      z[i] = FloatComplex(real[i], imag[i]);
    }
  return z;
}

/*
** \function isreal
** \brief check if complex is real .
*/
bool cisreals(floatComplex z) {
  if (cimags(z) == 0)
    return true;
  return false;
}

/*
** \function isimag
** \brief check if complex is pure imaginary .
*/
bool cisimags(floatComplex z) {
  if (creals(z) == 0)
    return true;
  return false;
}

/*
** Operators
** {
*/

/*
** \function ctimess
** \brief Multiply 2 Complex numbers.
*/
floatComplex ctimess(floatComplex z1, floatComplex z2) {
#ifndef STDC99
  return FloatComplex(z1.real*z2.real - z1.imag*z2.imag,
		      z1.real*z2.imag + z2.real*z1.imag);
#else
  return z1 * z2;
#endif
}

/*
** \function cdivides
** \brief Divide 2 Complex numbers.
*/
floatComplex cdevides(floatComplex z1, floatComplex z2) {
#ifndef STDC99
  return FloatComplex((z1.real*z2.real + z1.imag*z2.imag) / (z2.real*z2.real + z2.imag* z2.imag),
		      (z1.imag*z2.real - z1.real*z2.imag) / (z2.real*z2.real + z2.imag* z2.imag));
#else
  return z1 / z2;
#endif
}



/*
** }
*/
