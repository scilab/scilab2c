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
#include "sum.h"

/* #define LOCAL_DEBUG */

static int ssumsTest(void) {
  float value1 = 3.0f;
  float value2 = 1.123456789f;

  assert(ssums(value1) == 3.0f);
  assert(ssums(value2) == 1.123456789f);
  return 0;
}

static int ssumaTest(void) {
  float table1[3] = {3.0f, 3.0f, 3.0f};
  float table2[5] = {9.186784563f,
		     9.186784563f,
		     9.186784563f,
		     9.186784563f,
		     9.186784563f};

  assert(ssuma(table1, 3) == 9.0f);
#ifdef LOCAL_DEBUG
  printf("%e\n",ssuma(table2, 5));
  printf("%e\n", 9.186784f + 9.186784f + 9.186784f + 9.186784f + 9.186784f);
  printf("%e\n", (ssuma(table2, 5) - (9.186784f + 9.186784f + 9.186784f + 9.186784f + 9.186784f)) / ssuma(table2, 5));
#endif
  assert((ssuma(table2, 5) - (9.186784f + 9.186784f + 9.186784f + 9.186784f + 9.186784f)) / ssuma(table2, 5) < 1e-6);
  return 0;
}

static int csumsTest(void) {
  floatComplex value1 = FloatComplex(3.0f, 3.0f);
  floatComplex value2 = FloatComplex(1.123456789f, 1.123456789f);

  assert(creals(csums(value1)) == 3.0f);
  assert(cimags(csums(value1)) == 3.0f);
  assert(creals(csums(value2)) == 1.123456789f);
  assert(cimags(csums(value2)) == 1.123456789f);
  return 0;
}

static int csumaTest(void) {
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
  printf("%e\n", cimags(csuma(table1, 3)));
  printf("%e\n", creals(csuma(table2, 5)));
  printf("%e\n", cimags(csuma(table2, 5)));
  printf("%e\n", creals(csuma(table2, 5)));
  printf("%e\n", cimags(csuma(table2, 5)));
  printf("--------\n");
#endif
  assert(creals(csuma(table1, 3)) == 9.0f);
  assert(cimags(csuma(table1, 3)) == 9.0f);
  assert(creals(csuma(table2, 5)) == 9.186784563f + 9.186784563f + 9.186784563f + 9.186784563f + 9.186784563f);
  assert(cimags(csuma(table2, 5)) == 9.186784563f + 9.186784563f + 9.186784563f + 9.186784563f + 9.186784563f);

  return 0;
}

static int testSum(void) {

  printf("\n>>>> Sum Tests\n");
  ssumsTest();
  ssumaTest();
  csumsTest();
  csumaTest();

  return 0;
}

int main(void) {
  assert(testSum() == 0);
  return 0;
}
