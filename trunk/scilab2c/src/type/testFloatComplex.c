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

static int matrixCreation(void) {
  float real[size];
  float imag[size];

  floatComplex *Z;
  float extractedReal[size];
  float extractedImag[size];

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

  creala(Z, size, extractedReal);
  cimaga(Z, size, extractedImag);
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

static int timesAndDevide(void) {
  /* z1 = 1 + i */
  floatComplex z1 = FloatComplex(1.0f, 1.0f);
  /* z2 = 2 + i */
  floatComplex z2 = FloatComplex(2.0f, 1.0f);

  floatComplex z1_times_z2 = ctimess(z1, z2);
  floatComplex z1_devide_z2 = cdevides(z1, z2);

  /* z1 * z2 = 1 + 3i */
  printf("z1_times_z2 = %e + %ei\n", creals(z1_times_z2), cimags(z1_times_z2));
  assert(creals(z1_times_z2) == 1.0f);
  assert(cimags(z1_times_z2) == 3.0f);

  /* z1 / z2 = 0.6 + 0.2i */
  printf("z1_devide_z2 = %e + %ei\n", creals(z1_devide_z2), cimags(z1_devide_z2));
  assert(creals(z1_devide_z2) == 0.6f);
  assert(cimags(z1_devide_z2) == 0.2f);

  return 0;
}

int main(void) {
  matrixCreation();
  addAndDiff();
  timesAndDevide();
  return 0;
}
