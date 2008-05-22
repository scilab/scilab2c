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

#include "testLog.h"

void dlogsTest(void) {
  double value = 0;
  double maxValue = 1;
  double increment = 1e-3;
  printf(">> Double scalar\n");
  while (value <= maxValue)
    {
      printf("dlogs(%e) = %e\n", value, dlogs(value));
      value += increment;
    }
}

void zlogsTest(void) {
  doubleComplex result;

  printf(">> Complex Double scalar\n");
  result =  zlogs(DoubleComplex(-0.1, 0));
  printf("dlogs(-0.1) = %e + %e I \n", zreals(result), zimags(result));
  result =  zlogs(DoubleComplex(0, 0));
  printf("dlogs(-0.1) = %e + %e I \n", zreals(result), zimags(result));
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
