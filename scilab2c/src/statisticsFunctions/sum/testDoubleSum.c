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

static int dsumsTest(void) {
  double value1 = 3.0f;
  double value2 = 1.123456789f;

  assert(dsums(value1) == 3.0f);
  assert(dsums(value2) == 1.123456789f);
  return 0;
}

static int dsumaTest(void) {
  double table1[3] = {3.0, 3.0, 3.0};
  double table2[5] = {9.186784563,
		     9.186784563,
		     9.186784563,
		     9.186784563,
		     9.186784563};

  assert(dsuma(table1, 3) == 9.0);
#ifdef LOCAL_DEBUG
  printf("%e\n", dsuma(table2, 5));
  printf("%e\n", 9.186784563 + 9.186784563 + 9.186784563 + 9.186784563 + 9.186784563);
  printf("%e\n", (dsuma(table2, 5) - (9.186784563 + 9.186784563 + 9.186784563 + 9.186784563 + 9.186784563)) / dsuma(table2, 5));
#endif
  assert((dsuma(table2, 5) - (9.186784563 + 9.186784563 + 9.186784563 + 9.186784563 + 9.186784563)) / dsuma(table2, 5) == 0.0);
  return 0;
}

static int zsumsTest(void) {
  doubleComplex value1 = DoubleComplex(3.0, 3.0);
  doubleComplex value2 = DoubleComplex(1.123456789, 1.123456789);

  assert(zreals(zsums(value1)) == 3.0);
  assert(zimags(zsums(value1)) == 3.0);
  assert(zreals(zsums(value2)) == 1.123456789);
  assert(zimags(zsums(value2)) == 1.123456789);
  return 0;
}

static int zsumaTest(void) {
  doubleComplex value1 = DoubleComplex(3.0, 3.0);
  doubleComplex table1[3];
  doubleComplex value2 = DoubleComplex(9.186784563, 9.186784563);
  doubleComplex table2[5];

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
  printf("%e\n", zimags(zsuma(table1, 3)));
  printf("%e\n", zreals(zsuma(table2, 5)));
  printf("%e\n", zimags(zsuma(table2, 5)));
  printf("%e\n", zreals(zsuma(table2, 5)));
  printf("%e\n", zimags(zsuma(table2, 5)));
  printf("--------\n");
#endif
  assert(zreals(zsuma(table1, 3)) == 9.0);
  assert(zimags(zsuma(table1, 3)) == 9.0);
  assert(zreals(zsuma(table2, 5)) == (9.186784563 + 9.186784563 + 9.186784563 + 9.186784563 + 9.186784563));
  assert(zimags(zsuma(table2, 5)) == (9.186784563 + 9.186784563 + 9.186784563 + 9.186784563 + 9.186784563));

  return 0;
}

static int testSum(void) {

  printf("\n>>>> Sum Tests\n");
  dsumsTest();
  dsumaTest();
  zsumsTest();
  zsumaTest();

  return 0;
}



int main(void) {
  assert(testSum() == 0);
  return 0;
}
