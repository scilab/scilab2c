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

void ssinhsTest() {
  printf(">> Float scalar\n");
  printf("ssinhs(0) = %f\n", ssinhs(0.0f));
  printf("ssinhs(PI) = %f\n", ssinhs(FPI));
  printf("ssinhs(PI/2) = %f\n", ssinhs(FPI/2));
  printf("ssinhs(PI/3) = %f\n", ssinhs(FPI/3));
  printf("ssinhs(PI/4) = %f\n", ssinhs(FPI/4));
  printf("ssinhs(PI/6) = %f\n", ssinhs(FPI/6));
  printf("ssinhs(-PI) = %f\n", ssinhs(-FPI));
  printf("ssinhs(-PI/2) = %f\n", ssinhs(-FPI/2));
  printf("ssinhs(-PI/3) = %f\n", ssinhs(-FPI/3));
  printf("ssinhs(-PI/4) = %f\n", ssinhs(-FPI/4));
  printf("ssinhs(-PI/6) = %f\n", ssinhs(-FPI/6));
}

void csinhsTest(void) {
  floatComplex pi_pi = FloatComplex(FPI, FPI);
  floatComplex pi_2_pi_2 = FloatComplex(FPI/2, FPI/2);
  floatComplex pi_2_pi_3 = FloatComplex(FPI/2, FPI/3);
  floatComplex pi_2_pi_4 = FloatComplex(FPI/2, FPI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = csinhs(pi_pi);
  printf("csinhs(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = csinhs(pi_2_pi_2);
  printf("csinhs(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = csinhs(pi_2_pi_3);
  printf("csinhs(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = csinhs(pi_2_pi_4);
  printf("csinhs(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void ssinhaTest(void) {
  float out[5];
  float in[5] = {FPI, FPI/2, FPI/3, FPI/4, FPI/6};
  int i = 0;

  printf(">> Float array\n");
  ssinha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("ssinha(array) = %f\n", out[i]);
}

void csinhaTest(void) {
  floatComplex in[4];
  floatComplex out[4];
  int i = 0;

  in[0] = FloatComplex(FPI, FPI);
  in[1] = FloatComplex(FPI/2, FPI/2);
  in[2] = FloatComplex(FPI/2, FPI/3);
  in[3] = FloatComplex(FPI/2, FPI/4);

  csinha(in, 4, out);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("csinha(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

int testSinh() {
  printf("\n>>>> Hyperbolic Sine Tests\n");
  ssinhsTest();
  csinhsTest();
  ssinhaTest();
  csinhaTest();
  return 0;
}

int main() {
  assert(testSinh() == 0);
  return 0;
}
