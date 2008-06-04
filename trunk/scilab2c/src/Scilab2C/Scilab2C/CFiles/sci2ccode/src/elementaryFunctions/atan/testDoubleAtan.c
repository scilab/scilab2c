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

void datansTest() {
  printf(">> Double scalar\n");
  printf("datans(0) = %e\n", datans(0.0));
  printf("datans(PI) = %e\n", datans(DPI));
  printf("datans(PI/2) = %e\n", datans(DPI/2));
  printf("datans(PI/3) = %e\n", datans(DPI/3));
  printf("datans(PI/4) = %e\n", datans(DPI/4));
  printf("datans(PI/6) = %e\n", datans(DPI/6));
  printf("datans(-PI) = %e\n", datans(-DPI));
  printf("datans(-PI/2) = %e\n", datans(-DPI/2));
  printf("datans(-PI/3) = %e\n", datans(-DPI/3));
  printf("datans(-PI/4) = %e\n", datans(-DPI/4));
  printf("datans(-PI/6) = %e\n", datans(-DPI/6));
}

int testAtan() {
  printf("\n>>>> Double Arc Tangeant Tests\n");
  datansTest();
  /* FIXME : Implement some test here ... */
  /*
    zatansTest();
    datanaTest();
    zatanaTest();
  */
  return 0;
}

int main() {
  assert(testAtan() == 0);
  return 0;
}
