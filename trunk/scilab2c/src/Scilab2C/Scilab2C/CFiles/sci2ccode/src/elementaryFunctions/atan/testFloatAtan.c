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

#include "testAtan.h"

void satansTest() {
  printf(">> Float scalar\n");
  printf("satans(0) = %f\n", satans(0.0f));
  printf("satans(PI) = %f\n", satans(FPI));
  printf("satans(PI/2) = %f\n", satans(FPI/2));
  printf("satans(PI/3) = %f\n", satans(FPI/3));
  printf("satans(PI/4) = %f\n", satans(FPI/4));
  printf("satans(PI/6) = %f\n", satans(FPI/6));
  printf("satans(-PI) = %f\n", satans(-FPI));
  printf("satans(-PI/2) = %f\n", satans(-FPI/2));
  printf("satans(-PI/3) = %f\n", satans(-FPI/3));
  printf("satans(-PI/4) = %f\n", satans(-FPI/4));
  printf("satans(-PI/6) = %f\n", satans(-FPI/6));
}

int testAtan() {
  printf("\n>>>> Float Arc tangeant Tests\n");
  satansTest();
  /* FIXME : Implement some test here ... */
  /*
    catansTest();
    satanaTest();
    catanaTest();
  */
  return 0;
}

int main() {
  assert(testAtan() == 0);
  return 0;
}
