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

#include "testAsinh.h"

void dasinhsTest(void) {
  printf(">> Double scalar\n");
  printf("dasinhs(0) = %e\n", dasinhs(0.0));
  printf("dasinhs(PI) = %e\n", dasinhs(DPI));
  printf("dasinhs(PI/2) = %e\n", dasinhs(DPI/2));
  printf("dasinhs(PI/3) = %e\n", dasinhs(DPI/3));
  printf("dasinhs(PI/4) = %e\n", dasinhs(DPI/4));
  printf("dasinhs(PI/6) = %e\n", dasinhs(DPI/6));
  printf("dasinhs(-PI) = %e\n", dasinhs(-DPI));
  printf("dasinhs(-PI/2) = %e\n", dasinhs(-DPI/2));
  printf("dasinhs(-PI/3) = %e\n", dasinhs(-DPI/3));
  printf("dasinhs(-PI/4) = %e\n", dasinhs(-DPI/4));
  printf("dasinhs(-PI/6) = %e\n", dasinhs(-DPI/6));
}

void zasinhsTest(void) {
  doubleComplex pi_pi = DoubleComplex(DPI, DPI);
  doubleComplex pi_2_pi_2 = DoubleComplex(DPI/2, DPI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(DPI/2, DPI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(DPI/2, DPI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zasinhs(pi_pi);
  printf("zasinhs(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasinhs(pi_2_pi_2);
  printf("zasinhs(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasinhs(pi_2_pi_3);
  printf("zasinhs(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasinhs(pi_2_pi_4);
  printf("zasinhs(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void dasinhaTest(void) {
  double out[5];
  double in[5] = {DPI, DPI/2, DPI/3, DPI/4, DPI/6};
  int i = 0;

  printf(">> Double Array\n");
  dasinha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("sasinha(array) = %f\n", out[i]);

}

void zasinhaTest(void) {
  doubleComplex in[4];
  doubleComplex out[4];
  int i = 0;

  in[0] = DoubleComplex(DPI, DPI);
  in[1] = DoubleComplex(DPI/2, DPI/2);
  in[2] = DoubleComplex(DPI/2, DPI/3);
  in[3] = DoubleComplex(DPI/2, DPI/4);

  zasinha(in, 4, out);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zasinha(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testAsinh(void) {
  printf("\n>>>> Double Hyperbolic ArcSine Tests\n");
  dasinhsTest();
  zasinhsTest();
  dasinhaTest();
  zasinhaTest();
  return 0;
}

int main(void) {
  assert(testAsinh() == 0);
  return 0;
}
