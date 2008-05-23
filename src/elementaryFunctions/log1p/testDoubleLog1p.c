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

#include "testLog1p.h"

void dlog1psTest(void) {
  /* FIXME : Implement some test here ... */
  printf(">> Double scalar\n");
  printf("dlog1ps(0) = %e\n", dlog1ps((double) 0));
  printf("dlog1ps(-1) = %e\n", dlog1ps(-1.0));
  printf("dlog1ps(-2) = %e\n", dlog1ps(-2.0));
  printf("dlog1ps(-0.9) = %e\n", dlog1ps(-0.9));
}

int testLog1p(void) {
  printf("\n>>>> Double Logarithm x + 1 Tests\n");
  dlog1psTest();
  /* FIXME : Implement some test here ... */
  /*
    zlog1psTest();
    dlog1paTest();
    zlog1paTest();
  */
  return 0;
}

int main(void) {
  assert(testLog1p() == 0);
  return 0;
}
