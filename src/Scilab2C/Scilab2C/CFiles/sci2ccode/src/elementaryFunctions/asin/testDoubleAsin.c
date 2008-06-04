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

void dasinsTest(void) {
  printf(">> Double scalar\n");
  printf("dasins(0) = %e\n", dasins(0.0));
  printf("dasins(PI) = %e\n", dasins(DPI));
  printf("dasins(PI/2) = %e\n", dasins(DPI/2));
  printf("dasins(PI/3) = %e\n", dasins(DPI/3));
  printf("dasins(PI/4) = %e\n", dasins(DPI/4));
  printf("dasins(PI/6) = %e\n", dasins(DPI/6));
  printf("dasins(-PI) = %e\n", dasins(-DPI));
  printf("dasins(-PI/2) = %e\n", dasins(-DPI/2));
  printf("dasins(-PI/3) = %e\n", dasins(-DPI/3));
  printf("dasins(-PI/4) = %e\n", dasins(-DPI/4));
  printf("dasins(-PI/6) = %e\n", dasins(-DPI/6));
  printf("dasins(1) = %e\n", dasins(1));
  printf("dasins(-1) = %e\n", dasins(-1));
}

void zasinsTest(void) {
  doubleComplex pi_pi = DoubleComplex(DPI, DPI);
  doubleComplex pi_2_pi_2 = DoubleComplex(DPI/2, DPI/2);
  doubleComplex pi_2_pi_3 = DoubleComplex(DPI/2, DPI/3);
  doubleComplex pi_2_pi_4 = DoubleComplex(DPI/2, DPI/4);
  doubleComplex zero_zero = DoubleComplex(0.0, 0.0);
  doubleComplex one_and_i = DoubleComplex(1.0, 1.0);
  doubleComplex asin_one_and_i = DoubleComplex(0.6662394324925152711003,
					       1.0612750619050357325790);
  doubleComplex out;

  printf(">> Double Complex scalar\n");
  out = zasins(pi_pi);
  printf("zasins(PI + I*PI) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasins(pi_2_pi_2);
  printf("zasins(PI/2 + I*PI/2) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasins(pi_2_pi_3);
  printf("zasins(PI/2 + I*PI/3) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasins(pi_2_pi_4);
  printf("zasins(PI/2 + I*PI/4) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasins(zero_zero);
  printf("zasins(0 + I*0) = %e + I * %e\n", zreals(out), zimags(out));
  out = zasins(one_and_i);
  printf("zasins(1 + I*1) = %.25e + I * %.25e\n", zreals(out), zimags(out));
  printf("zasins(1 + I*1) = %.25e + I * %.25e\n", zreals(asin_one_and_i), zimags(asin_one_and_i));
  /* assert(zreals(out) == zreals(asin_one_and_i)); */
  /* assert(zimags(out) == zimags(asin_one_and_i)); */
}

void dasinaTest(void) {
  double out[5];
  double in[5] = {DPI, DPI/2, DPI/3, DPI/4, DPI/6};
  int i = 0;

  printf(">> Double Array\n");
  dasina(in, 5, out);
  for (i = 0 ; i < 5 ; ++i)
    printf("sasina(array) = %f\n", out[i]);

}

void zasinaTest(void) {
  doubleComplex in[4];
  doubleComplex out[4];
  int i = 0;

  in[0] = DoubleComplex(DPI, DPI);
  in[1] = DoubleComplex(DPI/2, DPI/2);
  in[2] = DoubleComplex(DPI/2, DPI/3);
  in[3] = DoubleComplex(DPI/2, DPI/4);

  zasina(in, 4, out);
  printf(">> Double Complex Array\n");
  for (i = 0 ; i < 4 ; ++i)
    printf("zasina(array) = %e + I * %e\n", zreals(out[i]), zimags(out[i]));
}

int testAsin(void) {
  printf("\n>>>> Double ArcSine Tests\n");
  dasinsTest();
  zasinsTest();
  dasinaTest();
  zasinaTest();
  return 0;
}

int main(void) {
  assert(testAsin() == 0);
  return 0;
}
