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

#include <assert.h>
#include <stdio.h>
#include "mean.h"

/* #define LOCAL_DEBUG */

static int smeansTest(void) {
  float value1 = 3.0f;
  float value2 = 1.123456789f;

  assert(smeans(value1) == 3.0f);
  assert(smeans(value2) == 1.123456789f);
  return 0;
}

static int smeanaTest(void) {
  float table1[3] = {3.0f, 3.0f, 3.0f};
  float table2[5] = {9.186784563f,
		     9.186784563f,
		     9.186784563f,
		     9.186784563f,
		     9.186784563f};

  assert(smeana(table1, 3) == 3.0f);
  assert(smeana(table2, 5) == 9.186784563f);
  assert(smeana(table2, 5) -  9.186784f < 1e-6);
  return 0;
}

static int cmeansTest(void) {
  floatComplex value1 = FloatComplex(3.0f, 3.0f);
  floatComplex value2 = FloatComplex(1.123456789f, 1.123456789f);

  assert(creals(cmeans(value1)) == 3.0f);
  assert(cimags(cmeans(value1)) == 3.0f);
  assert(creals(cmeans(value2)) == 1.123456789f);
  assert(cimags(cmeans(value2)) == 1.123456789f);
  return 0;
}

static int cmeanaTest(void) {
  floatComplex value1 = FloatComplex(3.0f, 3.0f);
  floatComplex table1[3];
  floatComplex value2 = FloatComplex(9.186784563f,9.186784563f);
  floatComplex table2[5];

  table1[0] = value1;
  table1[1] = value1;
  table1[2] = value1;

  table2[0] = value2;
  table2[1] = value2;
  table2[2] = value2;
  table2[3] = value2;
  table2[4] = value2;

#ifdef LOCAL_DEBUG
  printf("--------\n");
  printf("%e\n", cimags(cmeana(table1, 3)));
  printf("%e\n", creals(cmeana(table2, 5)));
  printf("%e\n", cimags(cmeana(table2, 5)));
  printf("%e\n", creals(cmeana(table2, 5)));
  printf("%e\n", cimags(cmeana(table2, 5)));
  printf("--------\n");
#endif
  assert(creals(cmeana(table1, 3)) == 3.0f);
  assert(cimags(cmeana(table1, 3)) == 3.0f);
  assert(creals(cmeana(table2, 5)) == 9.186784563f);
  assert(cimags(cmeana(table2, 5)) == 9.186784563f);
  assert(creals(cmeana(table2, 5)) -  9.186784f < 1e-6);
  assert(cimags(cmeana(table2, 5)) -  9.186784f < 1e-6);

  return 0;
}

static int testMean(void) {

  printf("\n>>>> Mean Tests\n");
  smeansTest();
  smeanaTest();
  cmeansTest();
  cmeanaTest();

  return 0;
}

int main(void) {
  assert(testMean() == 0);
  return 0;
}
