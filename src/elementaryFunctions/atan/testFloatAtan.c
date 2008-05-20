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

#include "testAtan.h"

void satansTest() {
  printf(">> Float scalar\n");
  printf("satans(0) = %f\n", satans(0.0f));
  printf("satans(PI) = %f\n", satans(FPI));
  printf("satans(PI/2) = %f\n", satans(FPI/2));
  printf("satans(PI/3) = %f\n", satans(FPI/3));
  printf("satans(PI/4) = %f\n", satans(FPI/4));
  printf("satans(PI/6) = %f\n", satans(FPI/6));
  printf("satans(-PI) = %f\n", satans(-FPI));
  printf("satans(-PI/2) = %f\n", satans(-FPI/2));
  printf("satans(-PI/3) = %f\n", satans(-FPI/3));
  printf("satans(-PI/4) = %f\n", satans(-FPI/4));
  printf("satans(-PI/6) = %f\n", satans(-FPI/6));
}

void catansTest(void) {
  floatComplex pi_pi = FloatComplex(FPI, FPI);
  floatComplex pi_2_pi_2 = FloatComplex(FPI/2, FPI/2);
  floatComplex pi_2_pi_3 = FloatComplex(FPI/2, FPI/3);
  floatComplex pi_2_pi_4 = FloatComplex(FPI/2, FPI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = catans(pi_pi);
  printf("catans(PI + I*PI) = %e + I * %e\n", creals(out), cimags(out));
  out = catans(pi_2_pi_2);
  printf("catans(PI/2 + I*PI/2) = %e + I * %e\n", creals(out), cimags(out));
  out = catans(pi_2_pi_3);
  printf("catans(PI/2 + I*PI/3) = %e + I * %e\n", creals(out), cimags(out));
  out = catans(pi_2_pi_4);
  printf("catans(PI/2 + I*PI/4) = %e + I * %e\n", creals(out), cimags(out));
}

void satanaTest(void) {
  float out[5];
  float in[5] = {FPI, FPI/2, FPI/3, FPI/4, FPI/6};
  int i = 0;

  printf(">> Float Array\n");
  satana(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("satana(array) = %f\n", out[i]);

}

void catanaTest(void) {
  floatComplex in[4];
  floatComplex out[4];
  int i = 0;

  in[0] = FloatComplex(FPI, FPI);
  in[1] = FloatComplex(FPI/2, FPI/2);
  in[2] = FloatComplex(FPI/2, FPI/3);
  in[3] = FloatComplex(FPI/2, FPI/4);

  catana(in, 4, out);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("catana(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}
int testAtan() {
  printf("\n>>>> Float Arc tangeant Tests\n");
  satansTest();
  catansTest();
  satanaTest();
  catanaTest();

  return 0;
}

int main() {
  assert(testAtan() == 0);
  return 0;
}
