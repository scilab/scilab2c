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

#include "testAcosh.h"

void dacoshsTest(void) {
  printf(">> Double scalar\n");
  printf("dacoshs(0) = %e\n", dacoshs(0.0));
  printf("dacoshs(PI) = %e\n", dacoshs(DPI));
  printf("dacoshs(PI/2) = %e\n", dacoshs(DPI/2));
  printf("dacoshs(PI/3) = %e\n", dacoshs(DPI/3));
  printf("dacoshs(PI/4) = %e\n", dacoshs(DPI/4));
  printf("dacoshs(PI/6) = %e\n", dacoshs(DPI/6));
  printf("dacoshs(-PI) = %e\n", dacoshs(-DPI));
  printf("dacoshs(-PI/2) = %e\n", dacoshs(-DPI/2));
  printf("dacoshs(-PI/3) = %e\n", dacoshs(-DPI/3));
  printf("dacoshs(-PI/4) = %e\n", dacoshs(-DPI/4));
  printf("dacoshs(-PI/6) = %e\n", dacoshs(-DPI/6));
}

void zacoshsTest(void) {
  doubleComplex pi_pi = DoubleComplex(DPI, DPI);
  doubleComplex pi_2_pi_2 = DoubleComplex(DPI/2, DPI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(DPI/2, DPI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(DPI/2, DPI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zacoshs(pi_pi);
  printf("zacoshs(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zacoshs(pi_2_pi_2);
  printf("zacoshs(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zacoshs(pi_2_pi_3);
  printf("zacoshs(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zacoshs(pi_2_pi_4);
  printf("zacoshs(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void dacoshaTest(void) {
  double out[5];
  double in[5] = {DPI, DPI/2, DPI/3, DPI/4, DPI/6};
  int i = 0;

  printf(">> Double Array\n");
  dacosha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("sacosha(array) = %f\n", out[i]);

}

void zacoshaTest(void) {
  doubleComplex in[4];
  doubleComplex out[4];
  int i = 0;

  in[0] = DoubleComplex(DPI, DPI);
  in[1] = DoubleComplex(DPI/2, DPI/2);
  in[2] = DoubleComplex(DPI/2, DPI/3);
  in[3] = DoubleComplex(DPI/2, DPI/4);

  zacosha(in, 4, out);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zacosha(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testAcosh(void) {
  printf("\n>>>> Double Hyperbolic ArcCosine Tests\n");
  dacoshsTest();
  zacoshsTest();
  dacoshaTest();
  zacoshaTest();
  return 0;
}

int main(void) {
  assert(testAcosh() == 0);
  return 0;
}
