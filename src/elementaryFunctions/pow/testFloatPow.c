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

#include "testPow.h"

void spowsTest(void) {
  /* FIXME : add some tests there */
  printf(">> Float scalar\n");
  printf("0^0 = %f\n", spows(0.0f, 0.0f));
  printf("PI^PI = %f\n", spows(FPI, FPI));
  printf("PI/2^PI = %f\n", spows(FPI/2, FPI));
  printf("PI/3^PI = %f\n", spows(FPI/3, FPI));
  printf("PI/4^PI = %f\n", spows(FPI/4, FPI));
  printf("PI/6^PI = %f\n", spows(FPI/6, FPI));
  printf("-PI^PI = %f\n", spows(-FPI, FPI));
  printf("-PI/2^PI = %f\n", spows(-FPI/2, FPI));
  printf("-PI/3^PI = %f\n", spows(-FPI/3, FPI));
  printf("-PI/4^PI = %f\n", spows(-FPI/4, FPI));
  printf("-PI/6^PI = %f\n", spows(-FPI/6, FPI));
}

int testPow(void) {
  printf("\n>>>> Powonential Tests\n");
  spowsTest();
  /* FIXME : Implement some test here ... */
  /*
    cpowsTest();
    spowaTest();
    cpowaTest();
  */
  return 0;
}

int main(void) {
  assert(testPow() == 0);
  return 0;
}
