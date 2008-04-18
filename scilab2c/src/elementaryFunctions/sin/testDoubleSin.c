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

#include "testSin.h"

void dsinsTest() {
  printf(">> Double scalar\n");
  printf("dsins(0) = %e\n", dsins((double) 0));
  printf("dsins(PI) = %e\n", dsins(DPI));
  printf("dsins(PI/2) = %e\n", dsins(DPI/2));
  printf("dsins(PI/3) = %e\n", dsins(DPI/3));
  printf("dsins(PI/4) = %e\n", dsins(DPI/4));
  printf("dsins(PI/6) = %e\n", dsins(DPI/6));
  printf("dsins(-PI) = %e\n", dsins(-DPI));
  printf("dsins(-PI/2) = %e\n", dsins(-DPI/2));
  printf("dsins(-PI/3) = %e\n", dsins(-DPI/3));
  printf("dsins(-PI/4) = %e\n", dsins(-DPI/4));
  printf("dsins(-PI/6) = %e\n", dsins(-DPI/6));
}

void zsinsTest(void) {
  doubleComplex pi_pi = DoubleComplex(DPI, DPI);
  doubleComplex pi_2_pi_2 = DoubleComplex(DPI/2, DPI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(DPI/2, DPI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(DPI/2, DPI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zsins(pi_pi);
  printf("zsins(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zsins(pi_2_pi_2);
  printf("zsins(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zsins(pi_2_pi_3);
  printf("zsins(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zsins(pi_2_pi_4);
  printf("zsins(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void dsinaTest(void) {
  double out[5];
  double in[5] = {DPI, DPI/2, DPI/3, DPI/4, DPI/6};
  int i = 0;

  printf(">> Double Array\n");
  dsina(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("ssina(array) = %f\n", out[i]);

}

void zsinaTest(void) {
  doubleComplex in[4];
  doubleComplex out[4];
  int i = 0;

  in[0] = DoubleComplex(DPI, DPI);
  in[1] = DoubleComplex(DPI/2, DPI/2);
  in[2] = DoubleComplex(DPI/2, DPI/3);
  in[3] = DoubleComplex(DPI/2, DPI/4);

  zsina(in, 4, out);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zsina(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testSin() {
  printf("\n>>>> Double Sine Tests\n");
  dsinsTest();
  zsinsTest();
  dsinaTest();
  zsinaTest();
  return 0;
}

int main(void) {
  assert(testSin() == 0);
  return 0;
}
