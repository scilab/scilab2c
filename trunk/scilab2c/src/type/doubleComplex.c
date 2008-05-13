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

#include "doubleComplex.h"

#ifndef STDC99
/*
** \function zreals
** \brief Return a Complex Real Part .
*/
double zreals(doubleComplex z) {
  return z.real;
}

/*
** \function zimags
** \brief Return a Complex Imaginary Part .
*/
double zimags(doubleComplex z) {
  return z.imag;
}
#else
/*
** \function zreals
** \brief Return a Complex Real Part .
*/
double zreals(doubleComplex z) {
  return creal(z);
}

/*
** \function zimags
** \brief Return a Complex Imaginary Part .
*/
double zimags(doubleComplex z) {
  return cimag(z);
}


#endif

/*
** \function DoubleComplex
** \brief construct a Double Complex .
*/
doubleComplex DoubleComplex(double real, double imag) {
  doubleComplex z;
#ifndef STDC99
  z.real = real;
  z.imag = imag;
#else
  z = real + I * imag;
#endif
  return z;
}

/*
** \function DoubleComplex
** \brief construct a Double Complex Matrix.
*/
doubleComplex *DoubleComplexMatrix(double* real, double* imag, int size) {
  doubleComplex *z = malloc((uint) size * sizeof(doubleComplex));
  int i = 0;

  for(i = 0; i < size; ++i)
    {
      z[i] = DoubleComplex(real[i], imag[i]);
    }
  return z;
}

/*
** \function isreal
** \brief check if complex is real .
*/
bool zisreals(doubleComplex z) {
  if (zimags(z) == 0)
    return true;
  return false;
}

/*
** \function isimag
** \brief check if complex is pure imaginary .
*/
bool zisimags(doubleComplex z) {
  if (zreals(z) == 0)
    return true;
  return false;
}

/*
** Operators
** {
*/

/*
** \function zadds
** \brief add 2 Complex numbers.
*/
doubleComplex zadds(doubleComplex z1, doubleComplex z2) {
#ifndef STDC99
  return DoubleComplex(z1.real + z2.real, z1.imag + z2.imag);
#else
  return z1 + z2;
#endif
}

/*
** \function zdiffs
** \brief diff 2 Complex numbers.
*/
doubleComplex zdiffs(doubleComplex z1, doubleComplex z2) {
#ifndef STDC99
  return DoubleComplex(z1.real - z2.real, z1.imag - z2.imag);
#else
  return z1 - z2;
#endif
}

/*
** \function ztimess
** \brief Multiply 2 Complex numbers.
*/
doubleComplex ztimess(doubleComplex z1, doubleComplex z2) {
#ifndef STDC99
  return DoubleComplex(z1.real*z2.real - z1.imag*z2.imag,
		       z1.real*z2.imag + z2.real*z1.imag);
#else
  return z1 * z2;
#endif
}




/*
** }
*/
