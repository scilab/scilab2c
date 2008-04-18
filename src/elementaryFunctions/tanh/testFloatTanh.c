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

#include "testTanh.h"

void stanhsTest() {
  printf(">> Float scalar\n");
  printf("stanhs(0) = %f\n", stanhs(0.0f));
  printf("stanhs(PI) = %f\n", stanhs(FPI));
  printf("stanhs(PI/2) = %f\n", stanhs(FPI/2));
  printf("stanhs(PI/3) = %f\n", stanhs(FPI/3));
  printf("stanhs(PI/4) = %f\n", stanhs(FPI/4));
  printf("stanhs(PI/6) = %f\n", stanhs(FPI/6));
  printf("stanhs(-PI) = %f\n", stanhs(-FPI));
  printf("stanhs(-PI/2) = %f\n", stanhs(-FPI/2));
  printf("stanhs(-PI/3) = %f\n", stanhs(-FPI/3));
  printf("stanhs(-PI/4) = %f\n", stanhs(-FPI/4));
  printf("stanhs(-PI/6) = %f\n", stanhs(-FPI/6));
}

void ctanhsTest() {
  printf(">> Float Complex scalar\n");
  /* FIXME : Implement some test here ... */
}

void stanhaTest() {
  printf(">> Float array\n");
  /* FIXME : Implement some test here ... */
}

void ctanhaTest() {
  printf(">> Float Complex array\n");
  /* FIXME : Implement some test here ... */
}

int testTanh() {
  printf("\n>>>> Float Hyperbolic Tangeant Tests\n");
  stanhsTest();
  ctanhsTest();
  stanhaTest();
  ctanhaTest();
  return 0;
}

int main() {
  assert(testTanh() == 0);
  return 0;
}
