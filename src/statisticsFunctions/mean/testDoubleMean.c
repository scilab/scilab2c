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

static int dmeansTest(void) {
  double value1 = 3.0f;
  double value2 = 1.123456789f;

  assert(dmeans(value1) == 3.0f);
  assert(dmeans(value2) == 1.123456789f);
  return 0;
}

static int dmeanaTest(void) {
  double table1[3] = {3.0, 3.0, 3.0};
  double table2[5] = {9.186784563,
		     9.186784563,
		     9.186784563,
		     9.186784563,
		     9.186784563};

  assert(dmeana(table1, 3) == 3.0);
  assert(dmeana(table2, 5) == 9.186784563);
  return 0;
}

static int zmeansTest(void) {
  doubleComplex value1 = DoubleComplex(3.0, 3.0);
  doubleComplex value2 = DoubleComplex(1.123456789, 1.123456789);

  assert(zreals(zmeans(value1)) == 3.0);
  assert(zimags(zmeans(value1)) == 3.0);
  assert(zreals(zmeans(value2)) == 1.123456789);
  assert(zimags(zmeans(value2)) == 1.123456789);
  return 0;
}

static int zmeanaTest(void) {
  doubleComplex value1 = DoubleComplex(3.0, 3.0);
  doubleComplex table1[3];
  doubleComplex value2 = DoubleComplex(9.186784563,9.186784563);
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
  printf("%e\n", zimags(zmeana(table1, 3)));
  printf("%e\n", zreals(zmeana(table2, 5)));
  printf("%e\n", zimags(zmeana(table2, 5)));
  printf("%e\n", zreals(zmeana(table2, 5)));
  printf("%e\n", zimags(zmeana(table2, 5)));
  printf("--------\n");
#endif
  assert(zreals(zmeana(table1, 3)) == 3.0);
  assert(zimags(zmeana(table1, 3)) == 3.0);
  assert(zreals(zmeana(table2, 5)) == 9.186784563);
  assert(zimags(zmeana(table2, 5)) == 9.186784563);

  return 0;
}

static int testMean(void) {

  printf("\n>>>> Mean Tests\n");
  dmeansTest();
  dmeanaTest();
  zmeansTest();
  zmeanaTest();

  return 0;
}



int main(void) {
  assert(testMean() == 0);
  return 0;
}
