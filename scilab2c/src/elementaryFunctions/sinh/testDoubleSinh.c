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

#include "testSinh.h"

void dsinhsTest() {
  printf(">> Double scalar\n");
  printf("dsinhs(0) = %e\n", dsinhs((double) 0));
  printf("dsinhs(PI) = %e\n", dsinhs(DPI));
  printf("dsinhs(PI/2) = %e\n", dsinhs(DPI/2));
  printf("dsinhs(PI/3) = %e\n", dsinhs(DPI/3));
  printf("dsinhs(PI/4) = %e\n", dsinhs(DPI/4));
  printf("dsinhs(PI/6) = %e\n", dsinhs(DPI/6));
  printf("dsinhs(-PI) = %e\n", dsinhs(-DPI));
  printf("dsinhs(-PI/2) = %e\n", dsinhs(-DPI/2));
  printf("dsinhs(-PI/3) = %e\n", dsinhs(-DPI/3));
  printf("dsinhs(-PI/4) = %e\n", dsinhs(-DPI/4));
  printf("dsinhs(-PI/6) = %e\n", dsinhs(-DPI/6));
}

void zsinhsTest(void) {
  doubleComplex pi_pi = DoubleComplex(DPI, DPI);
  doubleComplex pi_2_pi_2 = DoubleComplex(DPI/2, DPI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(DPI/2, DPI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(DPI/2, DPI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zsinhs(pi_pi);
  printf("zsinhs(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zsinhs(pi_2_pi_2);
  printf("zsinhs(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zsinhs(pi_2_pi_3);
  printf("zsinhs(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zsinhs(pi_2_pi_4);
  printf("zsinhs(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void dsinhaTest(void) {
  double out[5];
  double in[5] = {DPI, DPI/2, DPI/3, DPI/4, DPI/6};
  int i = 0;

  printf(">> Double array\n");
  dsinha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("dsinha(array) = %f\n", out[i]);
}

void zsinhaTest(void) {
  doubleComplex in[4];
  doubleComplex out[4];
  int i = 0;

  in[0] = DoubleComplex(DPI, DPI);
  in[1] = DoubleComplex(DPI/2, DPI/2);
  in[2] = DoubleComplex(DPI/2, DPI/3);
  in[3] = DoubleComplex(DPI/2, DPI/4);

  zsinha(in, 4, out);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zsinha(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testSinh() {
  printf("\n>>>> Double Hyperbolic Sine Tests\n");
  dsinhsTest();
  zsinhsTest();
  dsinhaTest();
  zsinhaTest();
  return 0;
}

int main() {
  assert(testSinh() == 0);
  return 0;
}
