/*
**  -*- C -*-
**
** testFind.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:50:15 2007 jofret
** Last update Mon Oct 22 15:47:15 2007 bruno
**
** Copyright INRIA 2007
*/

#include "testFind.h"

int sfindaTest() {
  int result = 0;
  float goodArray[5] = {0.,2.,3.,5.,10.};
  float badArray[5] = {0.,0.,0.,0.,0.};

  printf(">> Floats \n");
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
  double goodArray[5] = {0.,2.,3.,5.,10.};
  double badArray[5] = {0.,0.,0.,0.,0.};

  printf(">> Doubles \n");
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
  floatComplex goodArray[5];
  floatComplex badArray[5];
  /* Good values in goodArray */
  goodArray[0] = FloatComplex(0., 0.);
  goodArray[1] = FloatComplex(0., 2.);
  goodArray[2] = FloatComplex(3., 50.);
  goodArray[3] = FloatComplex(5., 10.);
  goodArray[4] = FloatComplex(10., -10.);
  /* Bad values in badArray */
  badArray[0] = FloatComplex(0., 0.);
  badArray[1] = FloatComplex(0., 0.);
  badArray[2] = FloatComplex(0., 0.);
  badArray[3] = FloatComplex(0., 0.);
  badArray[4] = FloatComplex(0., 0.);

  printf(">> Float Complex \n");
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
  doubleComplex goodArray[5];
  doubleComplex badArray[5];
  /* Good values in goodArray. */
  goodArray[0] = DoubleComplex(0., 0.);
  goodArray[1] = DoubleComplex(0., 2.);
  goodArray[2] = DoubleComplex(3., 50.);
  goodArray[3] = DoubleComplex(5., 10.);
  goodArray[4] = DoubleComplex(10., -10.);
  /* Bad values in badArray */
  badArray[0] = DoubleComplex(0., 0.);
  badArray[1] = DoubleComplex(0., 0.);
  badArray[2] = DoubleComplex(0., 0.);
  badArray[3] = DoubleComplex(0., 0.);
  badArray[4] = DoubleComplex(0., 0.);

  printf(">> Double Complex \n");
  if (zfinda(goodArray, 5) == NOT_FOUND) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    result = ERROR;
  }
  assert(zfinda(goodArray, 5) != NOT_FOUND);
  if (zfinda(goodArray, 5) != 1) {
    printf("ERROR ! : Test Failed (Element found in place %d instead of 1)\n", zfinda(goodArray, 5));
    result = ERROR;
  }
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
