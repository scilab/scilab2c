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

#include "testAsin.h"

void sasinsTest(void) {
  printf(">> Float scalar\n");
  printf("sasins(0) = %f\n", sasins(0.0f));
  printf("sasins(PI) = %f\n", sasins(FPI));
  printf("sasins(PI/2) = %f\n", sasins(FPI/2));
  printf("sasins(PI/3) = %f\n", sasins(FPI/3));
  printf("sasins(PI/4) = %f\n", sasins(FPI/4));
  printf("sasins(PI/6) = %f\n", sasins(FPI/6));
  printf("sasins(-PI) = %f\n", sasins(-FPI));
  printf("sasins(-PI/2) = %f\n", sasins(-FPI/2));
  printf("sasins(-PI/3) = %f\n", sasins(-FPI/3));
  printf("sasins(-PI/4) = %f\n", sasins(-FPI/4));
  printf("sasins(-PI/6) = %f\n", sasins(-FPI/6));
}

void casinsTest(void) {
  floatComplex pi_pi = FloatComplex(FPI, FPI);
  floatComplex pi_2_pi_2 = FloatComplex(FPI/2, FPI/2);
  floatComplex pi_2_pi_3 = FloatComplex(FPI/2, FPI/3);
  floatComplex pi_2_pi_4 = FloatComplex(FPI/2, FPI/4);
  floatComplex out;

  printf(">> Float Complex scalar\n");
  out = casins(pi_pi);
  printf("casins(PI + I*PI) = %f + I * %f\n", creals(out), cimags(out));
  out = casins(pi_2_pi_2);
  printf("casins(PI/2 + I*PI/2) = %f + I * %f\n", creals(out), cimags(out));
  out = casins(pi_2_pi_3);
  printf("casins(PI/2 + I*PI/3) = %f + I * %f\n", creals(out), cimags(out));
  out = casins(pi_2_pi_4);
  printf("casins(PI/2 + I*PI/4) = %f + I * %f\n", creals(out), cimags(out));
}

void sasinaTest(void) {
  float out[5];
  float in[5] = {FPI, FPI/2, FPI/3, FPI/4, FPI/6};
  int i = 0;

  printf(">> Float array\n");
  sasina(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("sasina(array) = %f\n", out[i]);
}

void casinaTest(void) {
  floatComplex in[4];
  floatComplex out[4];
  int i = 0;

  in[0] = FloatComplex(FPI, FPI);
  in[1] = FloatComplex(FPI/2, FPI/2);
  in[2] = FloatComplex(FPI/2, FPI/3);
  in[3] = FloatComplex(FPI/2, FPI/4);

  casina(in, 4, out);
  printf(">> Float Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("casina(array) = %e + I * %e\n", creals(out[i]), cimags(out[i]));
}

int testAsin(void) {
  printf("\n>>>> Float ArcSine Tests\n");
  sasinsTest();
  casinsTest();
  sasinaTest();
  casinaTest();
  return 0;
}

int main(void) {
  assert(testAsin() == 0);
  return 0;
}
