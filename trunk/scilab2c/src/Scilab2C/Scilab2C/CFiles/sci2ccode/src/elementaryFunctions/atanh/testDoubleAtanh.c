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

#include "testAtanh.h"

void datanhsTest() {
  printf(">> Double scalar\n");
  printf("datanhs(0) = %e\n", datanhs((double) 0));
  printf("datanhs(PI) = %e\n", datanhs(DPI));
  printf("datanhs(PI/2) = %e\n", datanhs(DPI/2));
  printf("datanhs(PI/3) = %e\n", datanhs(DPI/3));
  printf("datanhs(PI/4) = %e\n", datanhs(DPI/4));
  printf("datanhs(PI/6) = %e\n", datanhs(DPI/6));
  printf("datanhs(-PI) = %e\n", datanhs(-DPI));
  printf("datanhs(-PI/2) = %e\n", datanhs(-DPI/2));
  printf("datanhs(-PI/3) = %e\n", datanhs(-DPI/3));
  printf("datanhs(-PI/4) = %e\n", datanhs(-DPI/4));
  printf("datanhs(-PI/6) = %e\n", datanhs(-DPI/6));
}

int testAtanh() {
  printf("\n>>>> Double Hyperbolic Arctangeant Tests\n");
  datanhsTest();
  /* FIXME : Implement some test here ... */
  /*
    zatanhsTest();
    datanhaTest();
    zatanhaTest();
  */
  return 0;
}

int main() {
  assert(testAtanh() == 0);
  return 0;
}
