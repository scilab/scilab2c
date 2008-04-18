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

void dtanhsTest() {
  printf(">> Double scalar\n");
  printf("dtanhs(0) = %e\n", dtanhs(0.0));
  printf("dtanhs(PI) = %e\n", dtanhs(DPI));
  printf("dtanhs(PI/2) = %e\n", dtanhs(DPI/2));
  printf("dtanhs(PI/3) = %e\n", dtanhs(DPI/3));
  printf("dtanhs(PI/4) = %e\n", dtanhs(DPI/4));
  printf("dtanhs(PI/6) = %e\n", dtanhs(DPI/6));
  printf("dtanhs(-PI) = %e\n", dtanhs(-DPI));
  printf("dtanhs(-PI/2) = %e\n", dtanhs(-DPI/2));
  printf("dtanhs(-PI/3) = %e\n", dtanhs(-DPI/3));
  printf("dtanhs(-PI/4) = %e\n", dtanhs(-DPI/4));
  printf("dtanhs(-PI/6) = %e\n", dtanhs(-DPI/6));
}

void ztanhsTest() {
  printf(">> Double Complex scalar\n");
  /* FIXME : Implement some test here ... */
}

void dtanhaTest() {
  printf(">> Double array\n");
  /* FIXME : Implement some test here ... */
}

void ztanhaTest() {
  printf(">> Double Complex array\n");
  /* FIXME : Implement some test here ... */
}

int testTanh() {
  printf("\n>>>> Double Hyperbolic Tangeant Tests\n");
  dtanhsTest();
  ztanhsTest();
  dtanhaTest();
  ztanhaTest();
  return 0;
}

int main() {
  assert(testTanh() == 0);
  return 0;
}
