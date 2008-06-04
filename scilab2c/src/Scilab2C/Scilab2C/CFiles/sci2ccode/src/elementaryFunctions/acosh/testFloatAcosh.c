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

void sacoshsTest(void) {
  printf(">> Float scalar\n");
  printf("sacoshs(0) = %f\n", sacoshs(0.0f));
  printf("sacoshs(PI) = %f\n", sacoshs(FPI));
  printf("sacoshs(PI/2) = %f\n", sacoshs(FPI/2));
  printf("sacoshs(PI/3) = %f\n", sacoshs(FPI/3));
  printf("sacoshs(PI/4) = %f\n", sacoshs(FPI/4));
  printf("sacoshs(PI/6) = %f\n", sacoshs(FPI/6));
  printf("sacoshs(-PI) = %f\n", sacoshs(-FPI));
  printf("sacoshs(-PI/2) = %f\n", sacoshs(-FPI/2));
  printf("sacoshs(-PI/3) = %f\n", sacoshs(-FPI/3));
  printf("sacoshs(-PI/4) = %f\n", sacoshs(-FPI/4));
  printf("sacoshs(-PI/6) = %f\n", sacoshs(-FPI/6));
}

void cacoshsTest(void) {
  floatComplex pi_pi = FloatComplex(FPI, FPI);
  floatComplex pi_2_pi_2 = FloatComplex(FPI/2, FPI/2);
  floatComplex pi_2_pi_3 = FloatComplex(FPI/2, FPI/3);
  floatComplex pi_2_pi_4 = FloatComplex(FPI/2, FPI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = cacoshs(pi_pi);
  printf("cacoshs(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = cacoshs(pi_2_pi_2);
  printf("cacoshs(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = cacoshs(pi_2_pi_3);
  printf("cacoshs(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = cacoshs(pi_2_pi_4);
  printf("cacoshs(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void sacoshaTest(void) {
  float out[5];
  float in[5] = {FPI, FPI/2, FPI/3, FPI/4, FPI/6};
  int i = 0;

  printf(">> Float array\n");
  sacosha(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("sacosha(array) = %f\n", out[i]);
}

void cacoshaTest(void) {
  floatComplex in[4];
  floatComplex out[4];
  int i = 0;

  in[0] = FloatComplex(FPI, FPI);
  in[1] = FloatComplex(FPI/2, FPI/2);
  in[2] = FloatComplex(FPI/2, FPI/3);
  in[3] = FloatComplex(FPI/2, FPI/4);

  cacosha(in, 4, out);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("cacosha(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

int testAcosh(void) {
  printf("\n>>>> Float Hyperbolic ArcCosine Tests\n");
  sacoshsTest();
  cacoshsTest();
  sacoshaTest();
  cacoshaTest();
  return 0;
}

int main(void) {
  assert(testAcosh() == 0);
  return 0;
}
