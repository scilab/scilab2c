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

void slog1psTest(void) {
  /* FIXME : Implement some test here ... */
  printf(">> Float scalar\n");
  printf("slog1ps(0) = %f\n", slog1ps((float) 0));
}

int testLog1p(void) {
  printf("\n>>>> Float Logarithm x + 1 Tests\n");
  slog1psTest();
  /* FIXME : Implement some test here ... */
  /*
    clog1psTest();
    slog1paTest();
    clog1paTest();
  */
  return 0;
}

int main(void) {
  assert(testLog1p() == 0);
  return 0;
}
