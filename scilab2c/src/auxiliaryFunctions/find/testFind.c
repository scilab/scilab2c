/*
**  -*- C -*-
**
** testFind.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:50:15 2007 jofret
** Last update Tue Apr 24 18:13:42 2007 jofret
**
** Copyright INRIA 2007
*/

#include "testFind.h"

int sfindaTest() {
  int result = 0;

  printf(">> Floats \n");
  float goodArray[5] = {0.,2.,3.,5.,10.};
  float badArray[5] = {0.,0.,0.,0.,0.};
  if (sfinda(goodArray, 5) == NOT_FOUND) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    result = ERROR;
  }
  assert(sfinda(goodArray, 5) != NOT_FOUND);
  assert(sfinda(goodArray, 5) == 1);
  if (sfinda(badArray, 5) != NOT_FOUND) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  assert(sfinda(badArray, 5) == NOT_FOUND);
  return result;
}

int dfindaTest() {
  printf(">> Doubles \n");
  double goodArray[5] = {0.,2.,3.,5.,10.};
  double badArray[5] = {0.,0.,0.,0.,0.};
  assert(dfinda(goodArray, 5) != NOT_FOUND);
  assert(dfinda(goodArray, 5) == 1);
  if (dfinda(goodArray, 5) == NOT_FOUND) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    return ERROR;
  }
  assert(dfinda(badArray, 5) == NOT_FOUND);
  if (dfinda(badArray, 5) != NOT_FOUND) {
    printf("ERROR ! : Test Failed (empty array)\n");
    return ERROR;
  }
  return 0;
}

int cfindaTest() {
  int result = 0;
  printf(">> Float Complex \n");
  floatComplex goodArray[5] = {FloatComplex(0., 0.),
				FloatComplex(0., 2.),
				FloatComplex(3., 50.),
				FloatComplex(5., 10.),
				FloatComplex(10., -10.)};
  floatComplex badArray[5] = {FloatComplex(0., 0.),
			       FloatComplex(0., 0.),
			       FloatComplex(0., 0.),
			       FloatComplex(0., 0.),
			       FloatComplex(0., 0.)};
  if (cfinda(goodArray, 5) == NOT_FOUND) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    result = ERROR;
  }
  assert(cfinda(goodArray, 5) != NOT_FOUND);
  assert(cfinda(goodArray, 5) == 1);
  if (cfinda(badArray, 5) != NOT_FOUND) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  assert(cfinda(badArray, 5) == NOT_FOUND);
  return result;
}

int zfindaTest() {
 int result = 0;
  printf(">> Double Complex \n");
 doubleComplex goodArray[5] = {DoubleComplex(0., 0.),
				DoubleComplex(0., 2.),
				DoubleComplex(3., 50.),
				DoubleComplex(5., 10.),
				DoubleComplex(10., -10.)};
  doubleComplex badArray[5] = {DoubleComplex(0., 0.),
			       DoubleComplex(0., 0.),
			       DoubleComplex(0., 0.),
			       DoubleComplex(0., 0.),
			       DoubleComplex(0., 0.)};
  if (zfinda(goodArray, 5) == NOT_FOUND) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    result = ERROR;
  }
  assert(zfinda(goodArray, 5) != NOT_FOUND);
  assert(zfinda(goodArray, 5) == 1);
  if (zfinda(badArray, 5) != NOT_FOUND) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  assert(zfinda(badArray, 5) == NOT_FOUND);
  return result;
}

int testFind() {
  int sfindaStatus, dfindaStatus = 0;
  int cfindaStatus, zfindaStatus = 0;

  printf(">>>> Find Tests\n");
  sfindaStatus = sfindaTest();
  dfindaStatus = dfindaTest();
  cfindaStatus = cfindaTest();
  zfindaStatus = zfindaTest();

  return (sfindaStatus + dfindaStatus +
	  cfindaStatus + zfindaStatus);
}

int main(void) {
  assert(testFind() == 0);
  return 0;
}
