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

#include "testLog10.h"

void dlog10sTest(void) {
  /* FIXME : Implement some test here ... */
  printf(">> Double scalar\n");
  printf("dlog10s(0) = %e\n", dlog10s(0.0));
}

int testLog10(void) {
  printf("\n>>>> Double 10-Based Logarithm Tests\n");
  dlog10sTest();
  /* FIXME : Implement some test here ... */
  /*
    zlog10sTest();
    dlog10aTest();
    zlog10aTest();
  */
  return 0;
}

int main(void) {
  assert(testLog10() == 0);
  return 0;
}
