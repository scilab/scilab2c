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

#include "testSqrt.h"

void dsqrtsTest() {
  printf(">> Double scalar\n");
  printf("dsqrts(0) = %e\n", dsqrts(0.0));
  printf("dsqrts(PI) = %e\n", dsqrts(DPI));
  printf("dsqrts(PI/2) = %e\n", dsqrts(DPI/2));
  printf("dsqrts(PI/3) = %e\n", dsqrts(DPI/3));
  printf("dsqrts(PI/4) = %e\n", dsqrts(DPI/4));
  printf("dsqrts(PI/6) = %e\n", dsqrts(DPI/6));
  printf("dsqrts(-PI) = %e\n", dsqrts(-DPI));
  printf("dsqrts(-PI/2) = %e\n", dsqrts(-DPI/2));
  printf("dsqrts(-PI/3) = %e\n", dsqrts(-DPI/3));
  printf("dsqrts(-PI/4) = %e\n", dsqrts(-DPI/4));
  printf("dsqrts(-PI/6) = %e\n", dsqrts(-DPI/6));
}

int testSqrt() {
  printf("\n>>>> Double Square Root Tests\n");
  dsqrtsTest();
  /* FIXME : Implement some test here ... */
  /*
    zsqrtsTest();
    dsqrtaTest();
    zsqrtaTest();
  */
  return 0;
}

int main() {
  assert(testSqrt() == 0);
  return 0;
}
