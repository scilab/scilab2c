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

void zatansTest() {
 doubleComplex pi_pi = DoubleComplex(DPI, DPI);
  doubleComplex pi_2_pi_2 = DoubleComplex(DPI/2, DPI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(DPI/2, DPI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(DPI/2, DPI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zatans(pi_pi);
  printf("zatans(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zatans(pi_2_pi_2);
  printf("zatans(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zatans(pi_2_pi_3);
  printf("zatans(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zatans(pi_2_pi_4);
  printf("zatans(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void datanaTest(void) {
  double out[5];
  double in[5] = {DPI, DPI/2, DPI/3, DPI/4, DPI/6};
  int i = 0;

  printf(">> Double Array\n");
  datana(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("satana(array) = %f\n", out[i]);

}

void zatanaTest(void) {
  doubleComplex in[4];
  doubleComplex out[4];
  int i = 0;

  in[0] = DoubleComplex(DPI, DPI);
  in[1] = DoubleComplex(DPI/2, DPI/2);
  in[2] = DoubleComplex(DPI/2, DPI/3);
  in[3] = DoubleComplex(DPI/2, DPI/4);

  zatana(in, 4, out);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zatana(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testAtan() {
  printf("\n>>>> Double Arc Tangeant Tests\n");
  datansTest();
  zatansTest();
  datanaTest();
  zatanaTest();

  return 0;
}

int main() {
  assert(testAtan() == 0);
  return 0;
}
