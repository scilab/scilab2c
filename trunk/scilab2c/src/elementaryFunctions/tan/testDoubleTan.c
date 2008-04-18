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

#include "testTan.h"

void dtansTest() {
  printf(">> Double scalar\n");
  printf("dtans(0) = %e\n", dtans(0.0));
  printf("dtans(PI) = %e\n", dtans(DPI));
  printf("dtans(PI/2) = %e\n", dtans(DPI/2));
  printf("dtans(PI/3) = %e\n", dtans(DPI/3));
  printf("dtans(PI/4) = %e\n", dtans(DPI/4));
  printf("dtans(PI/6) = %e\n", dtans(DPI/6));
  printf("dtans(-PI) = %e\n", dtans(-DPI));
  printf("dtans(-PI/2) = %e\n", dtans(-DPI/2));
  printf("dtans(-PI/3) = %e\n", dtans(-DPI/3));
  printf("dtans(-PI/4) = %e\n", dtans(-DPI/4));
  printf("dtans(-PI/6) = %e\n", dtans(-DPI/6));
}

int testTan() {
  printf("\n>>>> Double Tangeant Tests\n");
  dtansTest();
  /* FIXME : Implement some test here ... */
  /*
    ztansTest();
    dtanaTest();
    ztanaTest();
  */
  return 0;
}

int main() {
  assert(testTan() == 0);
  return 0;
}
