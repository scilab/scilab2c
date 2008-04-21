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

#include "testExp10.h"

void sexp10sTest(void) {
  printf(">> Float scalar\n");
  printf("sexp10s(0) = %f\n", sexp10s(0.0f));
  printf("sexp10s(PI) = %f\n", sexp10s(FPI));
  printf("sexp10s(PI/2) = %f\n", sexp10s(FPI/2));
  printf("sexp10s(PI/3) = %f\n", sexp10s(FPI/3));
  printf("sexp10s(PI/4) = %f\n", sexp10s(FPI/4));
  printf("sexp10s(PI/6) = %f\n", sexp10s(FPI/6));
  printf("sexp10s(-PI) = %f\n", sexp10s(-FPI));
  printf("sexp10s(-PI/2) = %f\n", sexp10s(-FPI/2));
  printf("sexp10s(-PI/3) = %f\n", sexp10s(-FPI/3));
  printf("sexp10s(-PI/4) = %f\n", sexp10s(-FPI/4));
  printf("sexp10s(-PI/6) = %f\n", sexp10s(-FPI/6));
}

int testExp10(void) {
  printf("\n>>>> Float 10-Base Exponential Tests\n");
  sexp10sTest();
  /* FIXME : Implement some test here ... */
  /*
    cexp10sTest();
    sexp10aTest();
    cexp10aTest();
  */
  return 0;
}

int main(void) {
  assert(testExp10() == 0);
  return 0;
}
