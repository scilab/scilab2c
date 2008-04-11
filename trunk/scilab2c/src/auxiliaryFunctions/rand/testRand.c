/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "testRand.h"

int srandsTest() {

  float nan = 0. / 0.;
  float result = nan;

  printf(">> Float \n");
  result = srands();

  assert(&result != &nan);
  return 0;
}

int drandsTest() {

  double nan = 0. / 0.;
  double result = nan;

  printf(">> Double\n");
  result = drands();

  assert(&result != &nan);

  return 0;
}

int crandsTest() {

  floatComplex nan_nan = FloatComplex(0./0., 0./0.);
  floatComplex result = nan_nan;

  printf(">> Float Complex\n");
  result = crands();

  assert(&result != &nan_nan);

  return 0;
}

int zrandsTest() {
  doubleComplex nan_nan = DoubleComplex(0./0., 0./0.);
  doubleComplex result = nan_nan;

  printf(">> Double Complex\n");
  result = zrands();

  assert(&result != &nan_nan);

  return 0;
}


int testRand() {
  int srandsTestStatus, drandsTestStatus = 0;
  int crandsTestStatus, zrandsTestStatus = 0;
  printf("\n>>>> Rand Tests\n");
  srandsTestStatus = srandsTest();
  drandsTestStatus = drandsTest();
  crandsTestStatus = crandsTest();
  zrandsTestStatus = zrandsTest();

  return (srandsTestStatus + drandsTestStatus +
	  crandsTestStatus + zrandsTestStatus);
}

int main(void) {
  assert(testRand() == 0);
  return 0;
}
