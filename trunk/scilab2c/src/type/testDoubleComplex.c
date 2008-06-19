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

#define size 10000

static int matrixCreation(void) {
  double real[size];
  double imag[size];

  doubleComplex *Z;
  double extractedReal[size];
  double extractedImag[size];

  int i = 0;

   for (i = 0; i < size; ++i)
    {
      real[i] = i;
      imag[i] = size - i;
    }

  Z = DoubleComplexMatrix(real, imag, size);

  for (i = 0; i < size; ++i)
    {
      printf("Partie reelle = %f\n", zreals(Z[i]));
      assert(zreals(Z[i]) == i);
      printf("Partie imaginaire = %f\n", zimags(Z[i]));
      assert(zimags(Z[i]) == size - i);
    }

  zreala(Z, size, extractedReal);
  zimaga(Z, size, extractedImag);
  for (i = 0; i < size; ++i)
    {
      printf("Partie reelle = %f\n", extractedReal[i]);
      assert(extractedReal[i] == i);
      printf("Partie imaginaire = %f\n", extractedImag[i]);
      assert(extractedImag[i] == size - i);
   }

  return 0;
}

static int addAndDiff(void) {
  /* z = -3 + 25*%i */
  doubleComplex z = DoubleComplex(3.0,-25.0);
  /* y = -3.123456 + 25.123456*%i */
  doubleComplex y = DoubleComplex(-3.123456,25.123456);
  /* t = z + y */
  doubleComplex t = zadds(z,y);
  /* u = z - y */
  doubleComplex u = zdiffs(z,y);


  /* z = -3 + 25*%i */
  printf("Partie reelle = %f\n", zreals(z));
  assert(zreals(z) == 3.0);
  printf("Partie imaginaire = %f\n", zimags(z));
  assert(zimags(z) == -25.0);

  /* y = -3.123456 + 25.123456*%i */
  printf("Partie reelle = %f\n", zreals(y));
  assert(zreals(y) == -3.123456);
  printf("Partie imaginaire = %f\n", zimags(y));
  assert(zimags(y) == 25.123456);

  /* Try to have somme addition */
  printf("Partie reelle = %f\n", zreals(t));
  assert(zreals(t) == 3.0 + -3.123456);
  printf("Partie imaginaire = %f\n", zimags(t));
  assert(zimags(t) == -25.0 + 25.123456);

  /* Try to have somme diff */
  printf("Partie reelle = %f\n", zreals(u));
  assert(zreals(u) == 3.0 - -3.123456);
  printf("Partie imaginaire = %f\n", zimags(u));
  assert(zimags(u) == -25.0 - 25.123456);
  return 0;
}

static int timesAndDevide(void) {
  /* z1 = 1 + i */
  doubleComplex z1 = DoubleComplex(1.0, 1.0);
  /* z2 = 2 + i */
  doubleComplex z2 = DoubleComplex(2.0, 1.0);

  doubleComplex z1_times_z2 = ztimess(z1, z2);
  doubleComplex z1_devide_z2 = zdevides(z1, z2);

  /* z1 * z2 = 1 + 3i */
  printf("z1_times_z2 = %e + %ei\n", zreals(z1_times_z2), zimags(z1_times_z2));
  assert(zreals(z1_times_z2) == 1.0);
  assert(zimags(z1_times_z2) == 3.0);

  /* z1 / z2 = 0.6 + 0.2i */
  printf("z1_devide_z2 = %e + %ei\n", zreals(z1_devide_z2), zimags(z1_devide_z2));
  assert(zreals(z1_devide_z2) == 0.6);
  assert(zimags(z1_devide_z2) == 0.2);

  return 0;
}

int main(void) {
  matrixCreation();
  addAndDiff();
  timesAndDevide();
  return 0;
}
