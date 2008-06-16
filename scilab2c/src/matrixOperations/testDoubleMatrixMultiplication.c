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

int testFloatMultiplication(void);

static void zmulmaTest(void) {
  double realM1[4] = {1.0, 2.0, 3.0, 4.0};
  double imagM1[4] = {1.0, 2.0, 3.0, 4.0};
  double realM3[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
  double imagM3[6] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};

  doubleComplex *M1;
  doubleComplex *M2;
  doubleComplex M1_mul_M2[4];
  doubleComplex *M3;
  doubleComplex *M4;
  doubleComplex M3_mul_M4[4];
  doubleComplex miscM3_mul_M4[9];

  int i = 0;

  printf("\n>>>> Matrix Complex Double Multiplication Tests\n");

  M1 = DoubleComplexMatrix(realM1, imagM1, 4);
  M2 = DoubleComplexMatrix(realM1, imagM1, 4);

  /*
    [ 1+1.%i 3+3.%i] * [ 1+1.%i 3+3.%i] = [ 14.%i 30.%i ]
    [ 2+2.%i 4+4.%i]   [ 2+2.%i 4+4.%i]   [ 20.%i 44.%i ]
  */
  zmulma(M1, 2, 2, M2, 2, 2, M1_mul_M2);
  for (i = 0; i < 4; ++i)
    {
      printf("M1_mul_M2[%d] = %e + %e i\n", i, zreals(M1_mul_M2[i]), zimags(M1_mul_M2[i]));
    }
  for (i = 0; i < 4; ++i)
    {
      assert(zreals(M1_mul_M2[i]) == 0.0);
    }
  assert(zimags(M1_mul_M2[0]) == 14.0);
  assert(zimags(M1_mul_M2[1]) == 20.0);
  assert(zimags(M1_mul_M2[2]) == 30.0);
  assert(zimags(M1_mul_M2[3]) == 44.0);

  M3 = DoubleComplexMatrix(realM3, imagM3, 6);
  M4 = DoubleComplexMatrix(realM3, imagM3, 6);

  /*
    [ 1+1.%i 3+3.%i 5+5.%i ] * [ 1+1.%i 4+4.%i ] = [ 44.%i  98.%i ]
    [ 2+2.%i 4+4.%i 6+6.%i ]   [ 2+2.%i 5+5.%i ]   [ 56.%i 128.%i ]
			       [ 3+3.%i 6+6.%i ]
   */
  zmulma(M3, 2, 3, M4, 3, 2, M3_mul_M4);
  for (i = 0; i < 4; ++i)
    {
      printf("M3_mul_M4[%d] = %e + %e i\n", i, zreals(M3_mul_M4[i]), zimags(M3_mul_M4[i]));
    }
  for (i = 0; i < 4; ++i)
    {
      assert(zreals(M3_mul_M4[i]) == 0.0);
    }
  assert(zimags(M3_mul_M4[0]) == 44.0);
  assert(zimags(M3_mul_M4[1]) == 56.0);
  assert(zimags(M3_mul_M4[2]) == 98.0);
  assert(zimags(M3_mul_M4[3]) == 128.0);

  /*
    [ 1+1.%i 4+4.%i ] * [ 1+1.%i 3+3.%i 5+5.%i ] = [ 18.%i 38.%i  58.%i ]
    [ 2+2.%i 5+5.%i ]   [ 2+2.%i 4+4.%i 6+6.%i ]   [ 24.%i 52.%i  80.%i ]
    [ 3+3.%i 6+6.%i ]				   [ 30.%i 66.%i 102.%i ]
   */
  zmulma(M3, 3, 2, M4, 2, 3, miscM3_mul_M4);
  for (i = 0; i < 9; ++i)
    {
      printf("miscM3_mul_M4[%d] = %e + %e i\n", i, zreals(miscM3_mul_M4[i]), zimags(miscM3_mul_M4[i]));
    }
  for (i = 0; i < 9; ++i)
    {
      assert(zreals(miscM3_mul_M4[i]) == 0.0);
    }
  assert(zimags(miscM3_mul_M4[0]) == 18.0);
  assert(zimags(miscM3_mul_M4[1]) == 24.0);
  assert(zimags(miscM3_mul_M4[2]) == 30.0);
  assert(zimags(miscM3_mul_M4[3]) == 38.0);
  assert(zimags(miscM3_mul_M4[4]) == 52.0);
  assert(zimags(miscM3_mul_M4[5]) == 66.0);
  assert(zimags(miscM3_mul_M4[6]) == 58.0);
  assert(zimags(miscM3_mul_M4[7]) == 80.0);
  assert(zimags(miscM3_mul_M4[8]) == 102.0);
}

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
  double miscM7_by_M8[9];

  int i = 0;

  printf("\n>>>> Matrix Real Double Multiplication Tests\n");
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

  /*
    [ 1 5 ]  * [ 1 5 4 ] = [ 16 15 34 ]
    [ 4 3 ]    [ 3 2 6 ]   [ 13 26 34 ]
    [ 2 6 ]		   [ 20 22 44 ]
  */
  dmulma(M7, 3, 2, M8, 2, 3, miscM7_by_M8);
  for (i = 0; i < 9; ++i) {
    printf("miscM7_by_M8[%d] = %e\n", i, miscM7_by_M8[i]);
  }
  assert(miscM7_by_M8[0] == 16.0);
  assert(miscM7_by_M8[1] == 13.0);
  assert(miscM7_by_M8[2] == 20.0);
  assert(miscM7_by_M8[3] == 15.0);
  assert(miscM7_by_M8[4] == 26.0);
  assert(miscM7_by_M8[5] == 22.0);
  assert(miscM7_by_M8[6] == 34.0);
  assert(miscM7_by_M8[7] == 34.0);
  assert(miscM7_by_M8[8] == 44.0);
}

static int testDoubleMultiplication(void) {

  printf("\n>>>> Matrix Double Multiplication Tests\n");
  dmulmaTest();
  zmulmaTest();
  return 0;
}



int main(void) {
  assert(testFloatMultiplication() == 0);
  assert(testDoubleMultiplication() == 0);
  return 0;
}
