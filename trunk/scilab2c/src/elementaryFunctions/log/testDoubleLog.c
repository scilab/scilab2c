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

#include <assert.h>
#include <math.h>
#include "testLog.h"

void dlogsTest(void) {
  double value = 0;
  double maxValue = 1;
  double increment = 1e-3;
  printf(">> Double scalar\n");
  while (value <= maxValue)
    {
      printf("dlogs(%e) = %e\n", value, dlogs(value));
      assert(dlogs(value) == log(value));
      value += increment;
    }
}

void zlogsTest(void) {
  doubleComplex z;
  doubleComplex result;
  double real_z = 0;
  double imag_z = 1;
  double increment = 1e-3;

  printf(">> Complex Double scalar\n");
  while (imag_z > 0)
    {
      z = DoubleComplex(real_z, imag_z);
      result =  zlogs(z);
      printf("dlogs(%e +  %e I) = %e + %e I \n", real_z, imag_z, zreals(result), zimags(result));
      real_z += increment;
      imag_z -= increment;
    }
}

int testLog(void) {
  printf("\n>>>> Double Logarithm Tests\n");
  dlogsTest();
  zlogsTest();
  /* FIXME : Implement some test here ... */
  /*
    dlogaTest();
    zlogaTest();
  */
  return 0;
}

int main(void) {
  assert(testLog() == 0);
  return 0;
}
