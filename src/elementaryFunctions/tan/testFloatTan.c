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

#include "testTan.h"

void stansTest() {
  printf(">> Float scalar\n");
  printf("stans(0) = %f\n", stans(0.0f));
  printf("stans(PI) = %f\n", stans(FPI));
  printf("stans(PI/2) = %f\n", stans(FPI/2));
  printf("stans(PI/3) = %f\n", stans(FPI/3));
  printf("stans(PI/4) = %f\n", stans(FPI/4));
  printf("stans(PI/6) = %f\n", stans(FPI/6));
  printf("stans(-PI) = %f\n", stans(-FPI));
  printf("stans(-PI/2) = %f\n", stans(-FPI/2));
  printf("stans(-PI/3) = %f\n", stans(-FPI/3));
  printf("stans(-PI/4) = %f\n", stans(-FPI/4));
  printf("stans(-PI/6) = %f\n", stans(-FPI/6));
}

int testTan() {
  printf("\n>>>> Float Tangeant Tests\n");
  stansTest();
  /* FIXME : Implement some test here ... */
  /*
    ctansTest();
    stanaTest();
    ctanaTest();
  */
  return 0;
}

int main() {
  assert(testTan() == 0);
  return 0;
}
