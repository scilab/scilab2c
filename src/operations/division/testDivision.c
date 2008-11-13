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
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "division.h"
#define SIZE 10000000
/*
#define LOCAL_DEBUG 
*/
static void zdividesTest(void) {
  doubleComplex M1;
  doubleComplex M2;
  doubleComplex M1_by_M2;
  doubleComplex num, den;
  int i = 0;

  srand(1);
  for (i = 0; i < SIZE; ++i) {
    M1 = DoubleComplex((double) rand(), (double) rand());
    M2 = DoubleComplex((double) rand(), (double) rand());

    num = DoubleComplex(zreals(M1)*zreals(M2) + zimags(M1)*zimags(M2) , -zreals(M1)*zimags(M2) + zreals(M2)*zimags(M1));

    den = DoubleComplex(zreals(M2)*zreals(M2) + zimags(M2)*zimags(M2) , 0);


    M1_by_M2 = zdivides(M1, M2);
#ifdef LOCAL_DEBUG
    printf("erreurR = %e\n", fabs(zreals(M1_by_M2) - zreals(num)/zreals(den) )/fabs(zreals(M1_by_M2)));
    printf("erreurI = %e\n", fabs(zimags(M1_by_M2) - zimags(num)/zreals(den) )/fabs(zimags(M1_by_M2)));
#endif
  if (zreals(M1_by_M2)<1e-14 && (zreals(M1)*zreals(M2) - zimags(M1)*zimags(M2)) < 1e-18 ) 
	assert(1);
  else 
    assert( fabs(zreals(M1_by_M2) - zreals(num)/zreals(den) )/fabs(zreals(M1_by_M2)) <= 1e-15);

  if (  zimags(M1_by_M2) < 1e-14 && (zreals(M1)*zimags(M2) + zimags(M1)*zreals(M2)) < 1e-18 )
        assert ( 1 ) ;
  else
    assert( fabs(zimags(M1_by_M2) - zimags(num)/zreals(den) )/fabs(zimags(M1_by_M2)) <= 1e-15);
  }
}

static void cdividesTest(void) {
  floatComplex M1;
  floatComplex M2;
  floatComplex M1_by_M2;
  floatComplex num, den;
  int i = 0;

  srand(1);
  for (i = 0; i < SIZE; ++i) {
    M1 = FloatComplex((float) rand(), (float) rand());
    M2 = FloatComplex((float) rand(), (float) rand());

    num = FloatComplex(creals(M1)*creals(M2) + cimags(M1)*cimags(M2) , -creals(M1)*cimags(M2) + creals(M2)*cimags(M1));

    den = FloatComplex(creals(M2)*creals(M2) + cimags(M2)*cimags(M2) , 0);

    M1_by_M2 = cdivides(M1, M2);
#ifdef LOCAL_DEBUG
    printf("erreurR = %e\n", creals(M1_by_M2) - (creals(num)/creals(den))/creals(M1_by_M2));
    printf("erreurI = %e\n", cimags(M1_by_M2) - (cimags(num)/creals(den))/cimags(M1_by_M2));
#endif
  if (creals(M1_by_M2)<1e-14 && (creals(M1)*creals(M2) - cimags(M1)*cimags(M2)) < 1e-18 ) 
	assert(1);
  else 
    assert( fabs(creals(M1_by_M2) - creals(num)/creals(den) )/fabs(creals(M1_by_M2)) <= 1e-6);

  if (  cimags(M1_by_M2) < 1e-14 && (creals(M1)*cimags(M2) + cimags(M1)*creals(M2)) < 1e-18 )
        assert ( 1 ) ;
  else
    assert( fabs(cimags(M1_by_M2) - cimags(num)/creals(den) )/fabs(cimags(M1_by_M2)) <= 1e-6);
  }
}


static int testDivision(void) {

  printf("\n>>>> Division Tests\n");
 
  printf("\n>>>> Floats Tests\n");	
  cdividesTest();
 printf("\n>>>> Doubles Tests\n");	
  zdividesTest();

  return 0;
}



int main(void) {
  assert(testDivision() == 0);
  return 0;
}
