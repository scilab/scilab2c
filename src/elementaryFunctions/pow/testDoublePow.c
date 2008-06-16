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

#include <math.h>
#include "testPow.h"

void dpowsTest(void) {
  /* FIXME : Implement some test here ... */
  printf(">> Double scalar\n");
  printf("0^0 = %e\n", dpows(0.0, 0.0));
  printf("PI^PI = %e\n", dpows(DPI, DPI));
  printf("PI/2^PI = %e\n", dpows(DPI/2, DPI));
  printf("PI/3^PI = %e\n", dpows(DPI/3, DPI));
  printf("PI/4^PI = %e\n", dpows(DPI/4, DPI));
  printf("PI/6^PI = %e\n", dpows(DPI/6, DPI));
  printf("-PI^PI = %e\n", dpows(-DPI, DPI));
  printf("-PI/2^PI = %e\n", dpows(-DPI/2, DPI));
  printf("-PI/3^PI = %e\n", dpows(-DPI/3, DPI));
  printf("-PI/4^PI = %e\n", dpows(-DPI/4, DPI));
  printf("-PI/6^PI = %e\n", dpows(-DPI/6, DPI));
}

void zpowsTest(void) {
  doubleComplex result;

   printf(">> Double Complex scalar\n");
   result = zpows(DoubleComplex(-DPI, 0.0), DoubleComplex(DPI, 0.0));
   printf("-PI^PI = %e + %e i\n", zreals(result), zimags(result));
}

int testPow(void) {
  printf("\n>>>> Double Powonential Tests\n");
  dpowsTest();
  zpowsTest();
  /* FIXME : Implement some test here ... */
  /*
    dpowaTest();
    zpowaTest();
  */
  return 0;
}

int main(void) {
  assert(testPow() == 0);
  return 0;
}
