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

void ssinsTest() {
  printf(">> Float scalar\n");
  printf("ssins(0) = %f\n", ssins((float) 0));
  printf("ssins(PI) = %f\n", ssins(FPI));
  printf("ssins(PI/2) = %f\n", ssins(FPI/2));
  printf("ssins(PI/3) = %f\n", ssins(FPI/3));
  printf("ssins(PI/4) = %f\n", ssins(FPI/4));
  printf("ssins(PI/6) = %f\n", ssins(FPI/6));
  printf("ssins(-PI) = %f\n", ssins(-FPI));
  printf("ssins(-PI/2) = %f\n", ssins(-FPI/2));
  printf("ssins(-PI/3) = %f\n", ssins(-FPI/3));
  printf("ssins(-PI/4) = %f\n", ssins(-FPI/4));
  printf("ssins(-PI/6) = %f\n", ssins(-FPI/6));
}

void csinsTest(void) {
  floatComplex pi_pi = FloatComplex(FPI, FPI);
  floatComplex pi_2_pi_2 = FloatComplex(FPI/2, FPI/2);
  floatComplex pi_2_pi_3 = FloatComplex(FPI/2, FPI/3);
  floatComplex pi_2_pi_4 = FloatComplex(FPI/2, FPI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = csins(pi_pi);
  printf("csins(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = csins(pi_2_pi_2);
  printf("csins(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = csins(pi_2_pi_3);
  printf("csins(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = csins(pi_2_pi_4);
  printf("csins(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void ssinaTest(void) {
  float out[5];
  float in[5] = {FPI, FPI/2, FPI/3, FPI/4, FPI/6};
  int i = 0;

  printf(">> Float array\n");
  ssina(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("ssina(array) = %f\n", out[i]);
}

void csinaTest(void) {
  floatComplex in[4];
  floatComplex out[4];
  int i = 0;

  in[0] = FloatComplex(FPI, FPI);
  in[1] = FloatComplex(FPI/2, FPI/2);
  in[2] = FloatComplex(FPI/2, FPI/3);
  in[3] = FloatComplex(FPI/2, FPI/4);

  csina(in, 4, out);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("csina(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

int testSin() {
  printf("\n>>>> Float Sine Tests\n");
  ssinsTest();
  csinsTest();
  ssinaTest();
  csinaTest();
  return 0;
}

int main(void) {
  assert(testSin() == 0);
  return 0;
}
