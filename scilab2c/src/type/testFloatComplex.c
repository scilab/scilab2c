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

#include <stdio.h>
#include <assert.h>
#include <float.h>
#include <complex.h>
#include "floatComplex.h"

#define size 10000

int matrixCreation(void);
int addAndDiff(void);

int matrixCreation(void) {
  float real[size];
  float imag[size];

  floatComplex *Z;

  int i = 0;

  for (i = 0; i < size; ++i)
    {
      real[i] = (float) i;
      imag[i] = (float) (size - i);
    }

  Z = FloatComplexMatrix(real, imag, size);

  for (i = 0; i < size; ++i)
    {
      printf("Partie reelle = %f\n", creals(Z[i]));
      assert(creals(Z[i]) == i);
      printf("Partie imaginaire = %f\n", cimags(Z[i]));
      assert(cimags(Z[i]) == size - i);
    }


  return 0;
}

int addAndDiff(void) {
  /* z = -3 + 25*%i */
  floatComplex z = FloatComplex((float)3, (float)-25);
  /* y = -3.123456 + 25.123456*%i */
  floatComplex y = FloatComplex((float)-3.123,(float)25.123);
  /* t = z + y */
  floatComplex t = cadds(z,y);
  /* u = z - y */
  floatComplex u = cdiffs(z,y);


  /* z = -3 + 25*%i */
  printf("Partie reelle = %f\n", creals(z));
  assert(creals(z) == (float)3);
  printf("Partie imaginaire = %f\n", cimags(z));
  assert(cimags(z) == (float)-25);

  /* y = -3.123456 + 25.123456*%i */
  printf("Partie reelle = %f\n", creals(y));
  assert(creals(y) == (float)-3.123);
  printf("Partie imaginaire = %f\n", cimags(y));
  assert(cimags(y) == (float)25.123);

  /* Try to have somme addition */
  printf("Partie reelle = %f\n", creals(t));
  assert(creals(t) == (float)3 + (float)-3.123);
  printf("Partie imaginaire = %f\n", cimags(t));
  assert(cimags(t) == (float)-25 + (float)25.123);

  /* Try to have somme diff */
  printf("Partie reelle = %f\n", creals(u));
  assert(creals(u) == (float)3 - (float)-3.123);
  printf("Partie imaginaire = %f\n", cimags(u));
  assert(cimags(u) == (float)-25 - (float)25.123);

  return 0;
}

int main(void) {
  addAndDiff();
  matrixCreation();
  return 0;
}
