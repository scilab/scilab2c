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

#include "testAtanh.h"

void satanhsTest() {
  printf(">> Float scalar\n");
  printf("satanhs(0) = %f\n", satanhs((float) 0));
  printf("satanhs(PI) = %f\n", satanhs(FPI));
  printf("satanhs(PI/2) = %f\n", satanhs(FPI/2));
  printf("satanhs(PI/3) = %f\n", satanhs(FPI/3));
  printf("satanhs(PI/4) = %f\n", satanhs(FPI/4));
  printf("satanhs(PI/6) = %f\n", satanhs(FPI/6));
  printf("satanhs(-PI) = %f\n", satanhs(-FPI));
  printf("satanhs(-PI/2) = %f\n", satanhs(-FPI/2));
  printf("satanhs(-PI/3) = %f\n", satanhs(-FPI/3));
  printf("satanhs(-PI/4) = %f\n", satanhs(-FPI/4));
  printf("satanhs(-PI/6) = %f\n", satanhs(-FPI/6));
}

int testAtanh() {
  printf("\n>>>> Float Hyperbolic Arctangeant Tests\n");
  satanhsTest();
  /* FIXME : Implement some test here ... */
  /*
    catanhsTest();
    satanhaTest();
    catanhaTest();
  */
  return 0;
}

int main() {
  assert(testAtanh() == 0);
  return 0;
}
