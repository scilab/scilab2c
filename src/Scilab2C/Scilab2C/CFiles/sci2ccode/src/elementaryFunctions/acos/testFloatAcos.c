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

#include "testAcos.h"

void sacossTest(void) {
  printf(">> Float scalar\n");
  printf("sacoss(0) = %f\n", sacoss((float) 0));
  printf("sacoss(PI) = %f\n", sacoss(FPI));
  printf("sacoss(PI/2) = %f\n", sacoss(FPI/2));
  printf("sacoss(PI/3) = %f\n", sacoss(FPI/3));
  printf("sacoss(PI/4) = %f\n", sacoss(FPI/4));
  printf("sacoss(PI/6) = %f\n", sacoss(FPI/6));
  printf("sacoss(-PI) = %f\n", sacoss(-FPI));
  printf("sacoss(-PI/2) = %f\n", sacoss(-FPI/2));
  printf("sacoss(-PI/3) = %f\n", sacoss(-FPI/3));
  printf("sacoss(-PI/4) = %f\n", sacoss(-FPI/4));
  printf("sacoss(-PI/6) = %f\n", sacoss(-FPI/6));
}

void cacossTest(void) {
  floatComplex pi_pi = FloatComplex(FPI, FPI);
  floatComplex pi_2_pi_2 = FloatComplex(FPI/2, FPI/2);
  floatComplex pi_2_pi_3 = FloatComplex(FPI/2, FPI/3);
  floatComplex pi_2_pi_4 = FloatComplex(FPI/2, FPI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = cacoss(pi_pi);
  printf("cacoss(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = cacoss(pi_2_pi_2);
  printf("cacoss(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = cacoss(pi_2_pi_3);
  printf("cacoss(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = cacoss(pi_2_pi_4);
  printf("cacoss(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void sacosaTest(void) {
  float out[5];
  float in[5] = {FPI, FPI/2, FPI/3, FPI/4, FPI/6};
  int i = 0;

  printf(">> Float array\n");
  sacosa(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("sacosa(array) = %f\n", out[i]);
}

void cacosaTest(void) {
  floatComplex in[4];
  floatComplex out[4];
  int i = 0;

  in[0] = FloatComplex(FPI, FPI);
  in[1] = FloatComplex(FPI/2, FPI/2);
  in[2] = FloatComplex(FPI/2, FPI/3);
  in[3] = FloatComplex(FPI/2, FPI/4);

  cacosa(in, 4, out);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("cacosa(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

int testAcos(void) {
  printf("\n>>>> Float ArcCosine Tests\n");
  sacossTest();
  cacossTest();
  sacosaTest();
  cacosaTest();
  return 0;
}

int main(void) {
  assert(testAcos() == 0);
  return 0;
}
