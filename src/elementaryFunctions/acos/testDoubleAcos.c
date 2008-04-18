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

void dacossTest(void) {
  printf(">> Double scalar\n");
  printf("dacoss(0) = %e\n", dacoss((double) 0));
  printf("dacoss(PI) = %e\n", dacoss(DPI));
  printf("dacoss(PI/2) = %e\n", dacoss(DPI/2));
  printf("dacoss(PI/3) = %e\n", dacoss(DPI/3));
  printf("dacoss(PI/4) = %e\n", dacoss(DPI/4));
  printf("dacoss(PI/6) = %e\n", dacoss(DPI/6));
  printf("dacoss(-PI) = %e\n", dacoss(-DPI));
  printf("dacoss(-PI/2) = %e\n", dacoss(-DPI/2));
  printf("dacoss(-PI/3) = %e\n", dacoss(-DPI/3));
  printf("dacoss(-PI/4) = %e\n", dacoss(-DPI/4));
  printf("dacoss(-PI/6) = %e\n", dacoss(-DPI/6));
}

void zacossTest(void) {
  doubleComplex pi_pi = DoubleComplex(DPI, DPI);
  doubleComplex pi_2_pi_2 = DoubleComplex(DPI/2, DPI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(DPI/2, DPI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(DPI/2, DPI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zacoss(pi_pi);
  printf("zacoss(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zacoss(pi_2_pi_2);
  printf("zacoss(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zacoss(pi_2_pi_3);
  printf("zacoss(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zacoss(pi_2_pi_4);
  printf("zacoss(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void dacosaTest(void) {
  double out[5];
  double in[5] = {DPI, DPI/2, DPI/3, DPI/4, DPI/6};
  int i = 0;

  printf(">> Double Array\n");
  dacosa(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("sacosa(array) = %f\n", out[i]);

}

void zacosaTest(void) {
  doubleComplex in[4];
  doubleComplex out[4];
  int i = 0;

  in[0] = DoubleComplex(DPI, DPI);
  in[1] = DoubleComplex(DPI/2, DPI/2);
  in[2] = DoubleComplex(DPI/2, DPI/3);
  in[3] = DoubleComplex(DPI/2, DPI/4);

  zacosa(in, 4, out);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zacosa(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testAcos(void) {
  printf("\n>>>> Double ArcCosine Tests\n");
  dacossTest();
  zacossTest();
  dacosaTest();
  zacosaTest();
  return 0;
}

int main(void) {
  assert(testAcos() == 0);
  return 0;
}
