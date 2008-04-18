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

void scoshsTest(void) {
  printf(">> Float scalar\n");
  printf("scoshs(0) = %f\n", scoshs(0.0f));
  printf("scoshs(PI) = %f\n", scoshs(FPI));
  printf("scoshs(PI/2) = %f\n", scoshs(FPI/2));
  printf("scoshs(PI/3) = %f\n", scoshs(FPI/3));
  printf("scoshs(PI/4) = %f\n", scoshs(FPI/4));
  printf("scoshs(PI/6) = %f\n", scoshs(FPI/6));
  printf("scoshs(-PI) = %f\n", scoshs(-FPI));
  printf("scoshs(-PI/2) = %f\n", scoshs(-FPI/2));
  printf("scoshs(-PI/3) = %f\n", scoshs(-FPI/3));
  printf("scoshs(-PI/4) = %f\n", scoshs(-FPI/4));
  printf("scoshs(-PI/6) = %f\n", scoshs(-FPI/6));
}

void ccoshsTest(void) {
  floatComplex pi_pi = FloatComplex(FPI, FPI);
  floatComplex pi_2_pi_2 = FloatComplex(FPI/2, FPI/2);
  floatComplex pi_2_pi_3 = FloatComplex(FPI/2, FPI/3);
  floatComplex pi_2_pi_4 = FloatComplex(FPI/2, FPI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = ccoshs(pi_pi);
  printf("ccoshs(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = ccoshs(pi_2_pi_2);
  printf("ccoshs(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = ccoshs(pi_2_pi_3);
  printf("ccoshs(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = ccoshs(pi_2_pi_4);
  printf("ccoshs(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void scoshaTest(void) {
  float out[5];
  float in[5] = {FPI, FPI/2, FPI/3, FPI/4, FPI/6};
  int i = 0;

  printf(">> Float array\n");
  scosha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("scosha(array) = %f\n", out[i]);
}

void ccoshaTest(void) {
  floatComplex in[4];
  floatComplex out[4];
  int i = 0;

  in[0] = FloatComplex(FPI, FPI);
  in[1] = FloatComplex(FPI/2, FPI/2);
  in[2] = FloatComplex(FPI/2, FPI/3);
  in[3] = FloatComplex(FPI/2, FPI/4);

  ccosha(in, 4, out);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("ccosha(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

int testCosh(void) {
  printf("\n>>>> Hyperbolic Cosine Tests\n");
  scoshsTest();
  ccoshsTest();
  scoshaTest();
  ccoshaTest();
  return 0;
}

int main(void) {
  assert(testCosh() == 0);
  return 0;
}
