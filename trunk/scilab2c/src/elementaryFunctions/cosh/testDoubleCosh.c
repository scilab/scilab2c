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

#include "testCosh.h"

void dcoshsTest(void) {
  printf(">> Double scalar\n");
  printf("dcoshs(0) = %e\n", dcoshs(0.0));
  printf("dcoshs(PI) = %e\n", dcoshs(DPI));
  printf("dcoshs(PI/2) = %e\n", dcoshs(DPI/2));
  printf("dcoshs(PI/3) = %e\n", dcoshs(DPI/3));
  printf("dcoshs(PI/4) = %e\n", dcoshs(DPI/4));
  printf("dcoshs(PI/6) = %e\n", dcoshs(DPI/6));
  printf("dcoshs(-PI) = %e\n", dcoshs(-DPI));
  printf("dcoshs(-PI/2) = %e\n", dcoshs(-DPI/2));
  printf("dcoshs(-PI/3) = %e\n", dcoshs(-DPI/3));
  printf("dcoshs(-PI/4) = %e\n", dcoshs(-DPI/4));
  printf("dcoshs(-PI/6) = %e\n", dcoshs(-DPI/6));
}

void zcoshsTest(void) {
  doubleComplex pi_pi = DoubleComplex(DPI, DPI);
  doubleComplex pi_2_pi_2 = DoubleComplex(DPI/2, DPI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(DPI/2, DPI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(DPI/2, DPI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zcoshs(pi_pi);
  printf("zcoshs(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zcoshs(pi_2_pi_2);
  printf("zcoshs(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zcoshs(pi_2_pi_3);
  printf("zcoshs(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zcoshs(pi_2_pi_4);
  printf("zcoshs(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void dcoshaTest(void) {
  double out[5];
  double in[5] = {DPI, DPI/2, DPI/3, DPI/4, DPI/6};
  int i = 0;

  printf(">> Double Array\n");
  dcosha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("scosha(array) = %f\n", out[i]);

}

void zcoshaTest(void) {
  doubleComplex in[4];
  doubleComplex out[4];
  int i = 0;

  in[0] = DoubleComplex(DPI, DPI);
  in[1] = DoubleComplex(DPI/2, DPI/2);
  in[2] = DoubleComplex(DPI/2, DPI/3);
  in[3] = DoubleComplex(DPI/2, DPI/4);

  zcosha(in, 4, out);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zcosha(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testCosh(void) {
  printf("\n>>>> Double Hyperbolic Cosine Tests\n");
  dcoshsTest();
  zcoshsTest();
  dcoshaTest();
  zcoshaTest();
  return 0;
}

int main(void) {
  assert(testCosh() == 0);
  return 0;
}
