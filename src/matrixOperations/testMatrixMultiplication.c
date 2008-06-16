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

#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "matrixMultiplication.h"


#define LOCAL_DEBUG

/*
  static void zaddmaTest(void) {
  doubleComplex M1[SIZE];
  doubleComplex M2[SIZE];
  doubleComplex M1_mul_M2[SIZE];

  int i = 0;

  srand(1);
  for (i = 0; i < SIZE; ++i) {
  M1[i] = DoubleComplex((double) rand(), (double) rand());
  M2[i] = DoubleComplex((double) rand(), (double) rand());
  }
  zaddma(M1, SIZE, M2, SIZE, M1_and_M2);
  for (i = 0; i < SIZE; ++i) {
  #ifdef LOCAL_DEBUG
  printf("M1_and_M2 = %e + %e i\n", zreals(M1_and_M2[i]), zimags(M1_and_M2[i]));
  #endif
  assert(zreals(M1_and_M2[i]) -  (zreals(M1[i]) + zreals(M2[i])) == 0);
  assert(zimags(M1_and_M2[i]) -  (zimags(M1[i]) + zimags(M2[i])) == 0);
  }
  }

  static void caddmaTest(void) {
  floatComplex M1[SIZE];
  floatComplex M2[SIZE];
  floatComplex M1_and_M2[SIZE];

  int i = 0;

  srand(1);
  for (i = 0; i < SIZE; ++i) {
  M1[i] = FloatComplex((float) rand(), (float) rand());
  M2[i] = FloatComplex((float) rand(), (float) rand());
  }
  caddma(M1, SIZE, M2, SIZE, M1_and_M2);
  for (i = 0; i < SIZE; ++i) {
  #ifdef LOCAL_DEBUG
  printf("M1_and_M2 = %e + %e i\n", creals(M1_and_M2[i]), cimags(M1_and_M2[i]));
  #endif
  assert(fabsf(creals(M1_and_M2[i]) -  (creals(M1[i]) + creals(M2[i]))) / creals(M1_and_M2[i]) < 1e-07);
  assert(fabsf(cimags(M1_and_M2[i]) -  (cimags(M1[i]) + cimags(M2[i]))) / cimags(M1_and_M2[i]) < 1e-07);
  }
  }

*/
static void dmulmaTest(void) {
  double M1[4] = {1.0, 2.0, 3.0, 4.0};
  double M2[4] = {1.0, 2.0, 3.0, 4.0};
  double M1_by_M2[4];
  double M3[4] = {1.0, 0.0, 1.0, 0.0};
  double M4[4] = {0.0, 1.0, 0.0, 1.0};
  double M3_by_M4[4];
  double M5[4] = {1.0, 0.0, 0.0, 1.0};
  double M6[4] = {42.0, 51.0, 69.0, 1664.0};
  double M5_by_M6[4];
  double M7[6] = {1.0, 4.0, 2.0, 5.0, 3.0, 6.0};
  double M8[6] = {1.0, 3.0, 5.0, 2.0, 4.0, 6.0};
  double M7_by_M8[4];

 int i = 0;

  printf("\n>>>> Matrix Double Multiplication Tests\n");
  /*
    [ 1 3 ]  * [ 1 3 ] = [ 7 15 ]
    [ 2 4 ]    [ 2 4 ]   [10 22 ]
  */
  dmulma(M1, 2, 2, M2, 2, 2, M1_by_M2);
  for (i = 0; i < 4; ++i) {
    printf("M1_by_M2[%d] = %e\n", i, M1_by_M2[i]);
  }
  assert(M1_by_M2[0] == 7.0);
  assert(M1_by_M2[1] == 10.0);
  assert(M1_by_M2[2] == 15.0);
  assert(M1_by_M2[3] == 22.0);
  /*
    [ 1 1 ]  * [ 0 0 ] = [ 1 1 ]
    [ 0 0 ]    [ 1 1 ]   [ 0 0 ]
  */
  dmulma(M3, 2, 2, M4, 2, 2, M3_by_M4);
  for (i = 0; i < 4; ++i) {
    printf("M3_by_M4[%d] = %e\n", i, M3_by_M4[i]);
  }
  assert(M3_by_M4[0] == 1.0);
  assert(M3_by_M4[1] == 0.0);
  assert(M3_by_M4[2] == 1.0);
  assert(M3_by_M4[3] == 0.0);

  /*
    [ 1 0 ]  * [ 42   69 ] = [ 42   69 ]
    [ 0 1 ]    [ 51 1664 ]   [ 51 1664 ]
  */
  dmulma(M5, 2, 2, M6, 2, 2, M5_by_M6);
  for (i = 0; i < 4; ++i) {
    printf("M5_by_M6[%d] = %e\n", i, M5_by_M6[i]);
  }
  assert(M5_by_M6[0] == 42.0);
  assert(M5_by_M6[1] == 51.0);
  assert(M5_by_M6[2] == 69.0);
  assert(M5_by_M6[3] == 1664.0);

  /*
    [ 1 2 3 ]  * [ 1 2 ] = [ 22 28 ]
    [ 4 5 6 ]    [ 3 4 ]   [ 49 64 ]
		 [ 5 6 ]
  */
  dmulma(M7, 2, 3, M8, 3, 2, M7_by_M8);
  for (i = 0; i < 4; ++i) {
    printf("M7_by_M8[%d] = %e\n", i, M7_by_M8[i]);
  }
  assert(M7_by_M8[0] == 22.0);
  assert(M7_by_M8[1] == 49.0);
  assert(M7_by_M8[2] == 28.0);
  assert(M7_by_M8[3] == 64.0);
}

static void smulmaTest(void) {
  float M1[4] = {1.0f, 2.0f, 3.0f, 4.0f};
  float M2[4] = {1.0f, 2.0f, 3.0f, 4.0f};
  float M1_by_M2[4];
  float M3[4] = {1.0f, 0.0f, 1.0f, 0.0f};
  float M4[4] = {0.0f, 1.0f, 0.0f, 1.0f};
  float M3_by_M4[4];
  float M5[4] = {1.0f, 0.0f, 0.0f, 1.0f};
  float M6[4] = {42.0f, 51.0f, 69.0f, 1664.0f};
  float M5_by_M6[4];
  float M7[6] = {1.0f, 4.0f, 2.0f, 5.0f, 3.0f, 6.0f};
  float M8[6] = {1.0f, 3.0f, 5.0f, 2.0f, 4.0f, 6.0f};
  float M7_by_M8[4];
  int i = 0;

  printf("\n>>>> Matrix Float Multiplication Tests\n");
  /*
    [ 1 3 ]  * [ 1 3 ] = [ 7 15 ]
    [ 2 4 ]    [ 2 4 ]   [10 22 ]
  */
  smulma(M1, 2, 2, M2, 2, 2, M1_by_M2);
  for (i = 0; i < 4; ++i) {
    printf("M1_by_M2[%d] = %e\n", i, M1_by_M2[i]);
  }
  assert(M1_by_M2[0] == 7.0f);
  assert(M1_by_M2[1] == 10.0f);
  assert(M1_by_M2[2] == 15.0f);
  assert(M1_by_M2[3] == 22.0f);
  /*
    [ 1 1 ]  * [ 0 0 ] = [ 1 1 ]
    [ 0 0 ]    [ 1 1 ]   [ 0 0 ]
  */
  smulma(M3, 2, 2, M4, 2, 2, M3_by_M4);
  for (i = 0; i < 4; ++i) {
    printf("M3_by_M4[%d] = %e\n", i, M3_by_M4[i]);
  }
  assert(M3_by_M4[0] == 1.0f);
  assert(M3_by_M4[1] == 0.0f);
  assert(M3_by_M4[2] == 1.0f);
  assert(M3_by_M4[3] == 0.0f);

  /*
    [ 1 0 ]  * [ 42   69 ] = [ 42   69 ]
    [ 0 1 ]    [ 51 1664 ]   [ 51 1664 ]
  */
  smulma(M5, 2, 2, M6, 2, 2, M5_by_M6);
  for (i = 0; i < 4; ++i) {
    printf("M5_by_M6[%d] = %e\n", i, M5_by_M6[i]);
  }
  assert(M5_by_M6[0] == 42.0f);
  assert(M5_by_M6[1] == 51.0f);
  assert(M5_by_M6[2] == 69.0f);
  assert(M5_by_M6[3] == 1664.0f);

  /*
    [ 1 2 3 ]  * [ 1 2 ] = [ 22 28 ]
    [ 4 5 6 ]    [ 3 4 ]   [ 49 64 ]
		 [ 5 6 ]
  */
  smulma(M7, 2, 3, M8, 3, 2, M7_by_M8);
  for (i = 0; i < 4; ++i) {
    printf("M7_by_M8[%d] = %e\n", i, M7_by_M8[i]);
  }
  assert(M7_by_M8[0] == 22.0f);
  assert(M7_by_M8[1] == 49.0f);
  assert(M7_by_M8[2] == 28.0f);
  assert(M7_by_M8[3] == 64.0f);
}

static int testMultiplication(void) {

  printf("\n>>>> Matrix Multiplication Tests\n");
  dmulmaTest();
  smulmaTest();
  /*
    cmulmaTest();
    zmulmaTest();
  */
  return 0;
}



int main(void) {
  assert(testMultiplication() == 0);
  return 0;
}
