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

#include "testCos.h"

void scossTest(void) {
  printf(">> Float scalar\n");
  printf("scoss(0) = %f\n", scoss(0.0f));
  printf("scoss(PI) = %f\n", scoss(FPI));
  printf("scoss(PI/2) = %f\n", scoss(FPI/2));
  printf("scoss(PI/3) = %f\n", scoss(FPI/3));
  printf("scoss(PI/4) = %f\n", scoss(FPI/4));
  printf("scoss(PI/6) = %f\n", scoss(FPI/6));
  printf("scoss(-PI) = %f\n", scoss(-FPI));
  printf("scoss(-PI/2) = %f\n", scoss(-FPI/2));
  printf("scoss(-PI/3) = %f\n", scoss(-FPI/3));
  printf("scoss(-PI/4) = %f\n", scoss(-FPI/4));
  printf("scoss(-PI/6) = %f\n", scoss(-FPI/6));
}

void ccossTest(void) {
  floatComplex pi_pi = FloatComplex(FPI, FPI);
  floatComplex pi_2_pi_2 = FloatComplex(FPI/2, FPI/2);
  floatComplex pi_2_pi_3 = FloatComplex(FPI/2, FPI/3);
  floatComplex pi_2_pi_4 = FloatComplex(FPI/2, FPI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = ccoss(pi_pi);
  printf("ccoss(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = ccoss(pi_2_pi_2);
  printf("ccoss(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = ccoss(pi_2_pi_3);
  printf("ccoss(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = ccoss(pi_2_pi_4);
  printf("ccoss(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void scosaTest(void) {
  float out[5];
  float in[5] = {FPI, FPI/2, FPI/3, FPI/4, FPI/6};
  int i = 0;

  printf(">> Float array\n");
  scosa(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("scosa(array) = %f\n", out[i]);
}

void ccosaTest(void) {
  floatComplex in[4];
  floatComplex out[4];
  int i = 0;

  in[0] = FloatComplex(FPI, FPI);
  in[1] = FloatComplex(FPI/2, FPI/2);
  in[2] = FloatComplex(FPI/2, FPI/3);
  in[3] = FloatComplex(FPI/2, FPI/4);

  ccosa(in, 4, out);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("ccosa(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

int testCos(void) {
  printf("\n>>>> Float Cosine Tests\n");
  scossTest();
  ccossTest();
  scosaTest();
  ccosaTest();
  return 0;
}

int main(void) {
  assert(testCos() == 0);
  return 0;
}
