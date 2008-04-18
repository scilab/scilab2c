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

void sasinhsTest(void) {
  printf(">> Float scalar\n");
  printf("sasinhs(0) = %f\n", sasinhs(0.0f));
  printf("sasinhs(PI) = %f\n", sasinhs(FPI));
  printf("sasinhs(PI/2) = %f\n", sasinhs(FPI/2));
  printf("sasinhs(PI/3) = %f\n", sasinhs(FPI/3));
  printf("sasinhs(PI/4) = %f\n", sasinhs(FPI/4));
  printf("sasinhs(PI/6) = %f\n", sasinhs(FPI/6));
  printf("sasinhs(-PI) = %f\n", sasinhs(-FPI));
  printf("sasinhs(-PI/2) = %f\n", sasinhs(-FPI/2));
  printf("sasinhs(-PI/3) = %f\n", sasinhs(-FPI/3));
  printf("sasinhs(-PI/4) = %f\n", sasinhs(-FPI/4));
  printf("sasinhs(-PI/6) = %f\n", sasinhs(-FPI/6));
}

void casinhsTest(void) {
  floatComplex pi_pi = FloatComplex(FPI, FPI);
  floatComplex pi_2_pi_2 = FloatComplex(FPI/2, FPI/2);
  floatComplex pi_2_pi_3 = FloatComplex(FPI/2, FPI/3);
  floatComplex pi_2_pi_4 = FloatComplex(FPI/2, FPI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = casinhs(pi_pi);
  printf("casinhs(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = casinhs(pi_2_pi_2);
  printf("casinhs(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = casinhs(pi_2_pi_3);
  printf("casinhs(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = casinhs(pi_2_pi_4);
  printf("casinhs(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void sasinhaTest(void) {
  float out[5];
  float in[5] = {FPI, FPI/2, FPI/3, FPI/4, FPI/6};
  int i = 0;

  printf(">> Float array\n");
  sasinha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("sasinha(array) = %f\n", out[i]);
}

void casinhaTest(void) {
  floatComplex in[4];
  floatComplex out[4];
  int i = 0;

  in[0] = FloatComplex(FPI, FPI);
  in[1] = FloatComplex(FPI/2, FPI/2);
  in[2] = FloatComplex(FPI/2, FPI/3);
  in[3] = FloatComplex(FPI/2, FPI/4);

  casinha(in, 4, out);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("casinha(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

int testAsinh(void) {
  printf("\n>>>> Float Hyperbolic ArcSine Tests\n");
  sasinhsTest();
  casinhsTest();
  sasinhaTest();
  casinhaTest();
  return 0;
}

int main(void) {
  assert(testAsinh() == 0);
  return 0;
}
