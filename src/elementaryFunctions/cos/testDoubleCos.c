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

void dcossTest(void) {
  printf(">> Double scalar\n");
  printf("dcoss(0) = %e\n", dcoss(0.0));
  printf("dcoss(PI) = %e\n", dcoss(DPI));
  printf("dcoss(PI/2) = %e\n", dcoss(DPI/2));
  printf("dcoss(PI/3) = %e\n", dcoss(DPI/3));
  printf("dcoss(PI/4) = %e\n", dcoss(DPI/4));
  printf("dcoss(PI/6) = %e\n", dcoss(DPI/6));
  printf("dcoss(-PI) = %e\n", dcoss(-DPI));
  printf("dcoss(-PI/2) = %e\n", dcoss(-DPI/2));
  printf("dcoss(-PI/3) = %e\n", dcoss(-DPI/3));
  printf("dcoss(-PI/4) = %e\n", dcoss(-DPI/4));
  printf("dcoss(-PI/6) = %e\n", dcoss(-DPI/6));
}

void zcossTest(void) {
  doubleComplex pi_pi = DoubleComplex(DPI, DPI);
  doubleComplex pi_2_pi_2 = DoubleComplex(DPI/2, DPI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(DPI/2, DPI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(DPI/2, DPI/4);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zcoss(pi_pi);
  printf("zcoss(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zcoss(pi_2_pi_2);
  printf("zcoss(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zcoss(pi_2_pi_3);
  printf("zcoss(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zcoss(pi_2_pi_4);
  printf("zcoss(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
}

void dcosaTest(void) {
  double out[5];
  double in[5] = {DPI, DPI/2, DPI/3, DPI/4, DPI/6};
  int i = 0;

  printf(">> Double Array\n");
  dcosa(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("scosa(array) = %f\n", out[i]);

}

void zcosaTest(void) {
  doubleComplex in[4];
  doubleComplex out[4];
  int i = 0;

  in[0] = DoubleComplex(DPI, DPI);
  in[1] = DoubleComplex(DPI/2, DPI/2);
  in[2] = DoubleComplex(DPI/2, DPI/3);
  in[3] = DoubleComplex(DPI/2, DPI/4);

  zcosa(in, 4, out);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zcosa(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testCos(void) {
  printf("\n>>>> Double Cosine Tests\n");
  dcossTest();
  zcossTest();
  dcosaTest();
  zcosaTest();
  return 0;
}

int main(void) {
  assert(testCos() == 0);
  return 0;
}
