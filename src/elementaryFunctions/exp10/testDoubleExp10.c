/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "testExp10.h"

void dexp10sTest(void) {
  printf(">> Double scalar\n");
  printf("dexp10s(0) = %e\n", dexp10s(0.0));
  printf("dexp10s(PI) = %e\n", dexp10s(DPI));
  printf("dexp10s(PI/2) = %e\n", dexp10s(DPI/2));
  printf("dexp10s(PI/3) = %e\n", dexp10s(DPI/3));
  printf("dexp10s(PI/4) = %e\n", dexp10s(DPI/4));
  printf("dexp10s(PI/6) = %e\n", dexp10s(DPI/6));
  printf("dexp10s(-PI) = %e\n", dexp10s(-DPI));
  printf("dexp10s(-PI/2) = %e\n", dexp10s(-DPI/2));
  printf("dexp10s(-PI/3) = %e\n", dexp10s(-DPI/3));
  printf("dexp10s(-PI/4) = %e\n", dexp10s(-DPI/4));
  printf("dexp10s(-PI/6) = %e\n", dexp10s(-DPI/6));
}

void zexp10sTest(void) {
  doubleComplex result;

  printf(">> Double complex scalar\n");
  result = zexp10s(DoubleComplex(1.0, 1.0));
  printf("dexp10s(0) = %e + %e i\n", zreals(result), zimags(result));

}

int testExp10(void) {
  printf("\n>>>> Double 10-Base Exponential Tests\n");
  dexp10sTest();
  zexp10sTest();
  /* FIXME : Implement some test here ... */
  /*
    dexp10aTest();
    zexp10aTest();
  */
  return 0;
}

int main(void) {
  assert(testExp10() == 0);
  return 0;
}
