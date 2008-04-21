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

#include "testSqrt.h"

void ssqrtsTest() {
  printf(">> Float scalar\n");
  printf("ssqrts(0) = %f\n", ssqrts(0.0f));
  printf("ssqrts(PI) = %f\n", ssqrts(FPI));
  printf("ssqrts(PI/2) = %f\n", ssqrts(FPI/2));
  printf("ssqrts(PI/3) = %f\n", ssqrts(FPI/3));
  printf("ssqrts(PI/4) = %f\n", ssqrts(FPI/4));
  printf("ssqrts(PI/6) = %f\n", ssqrts(FPI/6));
  printf("ssqrts(-PI) = %f\n", ssqrts(-FPI));
  printf("ssqrts(-PI/2) = %f\n", ssqrts(-FPI/2));
  printf("ssqrts(-PI/3) = %f\n", ssqrts(-FPI/3));
  printf("ssqrts(-PI/4) = %f\n", ssqrts(-FPI/4));
  printf("ssqrts(-PI/6) = %f\n", ssqrts(-FPI/6));
}

int testSqrt() {
  printf("\n>>>> Float Square Root Tests\n");
  ssqrtsTest();
  /* FIXME : Implement some test here ... */
  /*
    csqrtsTest();
    ssqrtaTest();
    csqrtaTest();
  */
  return 0;
}

int main() {
  assert(testSqrt() == 0);
  return 0;
}
