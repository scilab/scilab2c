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
#include "doubleComplex.h"

int matrixCreation(void);
int addAndDiff(void);

int matrixCreation(void) {
  int size = 10000;
  double real[size];
  double imag[size];

  int i = 0;

   for (i = 0; i < size; ++i)
    {
      real[i] = i;
      imag[i] = size - i;
    }

  doubleComplex *Z = DoubleComplexMatrix(real, imag, size);

  for (i = 0; i < size; ++i)
    {
      printf("Partie reelle = %f\n", zreals(Z[i]));
      assert(zreals(Z[i]) == i);
      printf("Partie imaginaire = %f\n", zimags(Z[i]));
      assert(zimags(Z[i]) == size - i);
    }


  return 0;
}

int addAndDiff(void) {
  /* z = -3 + 25*%i */
  doubleComplex z = DoubleComplex(3,-25);
  /* y = -3.123456 + 25.123456*%i */
  doubleComplex y = DoubleComplex(-3.123456,25.123456);
  /* t = z + y */
  doubleComplex t = zadds(z,y);
  /* u = z - y */
  doubleComplex u = zdiffs(z,y);


  /* z = -3 + 25*%i */
  printf("Partie reelle = %f\n", zreals(z));
  assert(zreals(z) == (double)3);
  printf("Partie imaginaire = %f\n", zimags(z));
  assert(zimags(z) == (double)-25);

  /* y = -3.123456 + 25.123456*%i */
  printf("Partie reelle = %f\n", zreals(y));
  assert(zreals(y) == (double)-3.123456);
  printf("Partie imaginaire = %f\n", zimags(y));
  assert(zimags(y) == (double)25.123456);

  /* Try to have somme addition */
  printf("Partie reelle = %f\n", zreals(t));
  assert(zreals(t) == (double)3 + (double)-3.123456);
  printf("Partie imaginaire = %f\n", zimags(t));
  assert(zimags(t) == (double)-25 + (double)25.123456);

  /* Try to have somme diff */
  printf("Partie reelle = %f\n", zreals(u));
  assert(zreals(u) == (double)3 - (double)-3.123456);
  printf("Partie imaginaire = %f\n", zimags(u));
  assert(zimags(u) == (double)-25 - (double)25.123456);
  return 0;
}

int main(void) {
  addAndDiff();
  matrixCreation();
  return 0;
}
