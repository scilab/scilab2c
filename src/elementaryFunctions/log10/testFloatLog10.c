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

void slog10sTest(void) {
  /* FIXME : Implement some test here ... */
  printf(">> Float scalar\n");
  printf("slog10s(0) = %f\n", slog10s(0.0f));
}

int testLog10(void) {
  printf("\n>>>> 10-Based Logarithm Tests\n");
  slog10sTest();
  /* FIXME : Implement some test here ... */
  /*
    clog10sTest();
    slog10aTest();
    clog10aTest();
  */
  return 0;
}

int main(void) {
  assert(testLog10() == 0);
  return 0;
}
