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

#include "testExp.h"

void dexpsTest(void) {
  /* FIXME : Implement some test here ... */
  printf(">> Double scalar\n");
  printf("dexps(0) = %e\n", dexps(0.0));
  printf("dexps(PI) = %e\n", dexps(DPI));
  printf("dexps(PI/2) = %e\n", dexps(DPI/2));
  printf("dexps(PI/3) = %e\n", dexps(DPI/3));
  printf("dexps(PI/4) = %e\n", dexps(DPI/4));
  printf("dexps(PI/6) = %e\n", dexps(DPI/6));
  printf("dexps(-PI) = %e\n", dexps(-DPI));
  printf("dexps(-PI/2) = %e\n", dexps(-DPI/2));
  printf("dexps(-PI/3) = %e\n", dexps(-DPI/3));
  printf("dexps(-PI/4) = %e\n", dexps(-DPI/4));
  printf("dexps(-PI/6) = %e\n", dexps(-DPI/6));
}

int testExp(void) {
  printf("\n>>>> Double Exponential Tests\n");
  dexpsTest();
  /* FIXME : Implement some test here ... */
  /*
    zexpsTest();
    dexpaTest();
    zexpaTest();
  */
  return 0;
}

int main(void) {
  assert(testExp() == 0);
  return 0;
}
