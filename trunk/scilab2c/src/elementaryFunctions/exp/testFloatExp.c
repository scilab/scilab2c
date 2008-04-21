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

void sexpsTest(void) {
  /* FIXME : add some tests there */
  printf(">> Float scalar\n");
  printf("sexps(0) = %f\n", sexps(0.0f));
  printf("sexps(PI) = %f\n", sexps(FPI));
  printf("sexps(PI/2) = %f\n", sexps(FPI/2));
  printf("sexps(PI/3) = %f\n", sexps(FPI/3));
  printf("sexps(PI/4) = %f\n", sexps(FPI/4));
  printf("sexps(PI/6) = %f\n", sexps(FPI/6));
  printf("sexps(-PI) = %f\n", sexps(-FPI));
  printf("sexps(-PI/2) = %f\n", sexps(-FPI/2));
  printf("sexps(-PI/3) = %f\n", sexps(-FPI/3));
  printf("sexps(-PI/4) = %f\n", sexps(-FPI/4));
  printf("sexps(-PI/6) = %f\n", sexps(-FPI/6));
}

int testExp(void) {
  printf("\n>>>> Exponential Tests\n");
  sexpsTest();
  /* FIXME : Implement some test here ... */
  /*
    cexpsTest();
    sexpaTest();
    cexpaTest();
  */
  return 0;
}

int main(void) {
  assert(testExp() == 0);
  return 0;
}
