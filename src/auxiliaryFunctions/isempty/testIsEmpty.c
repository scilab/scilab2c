/*
**  -*- C -*-
**
** testIsEmpty.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 16:07:57 2007 jofret
** Last update Fri Apr 27 09:00:55 2007 jofret
**
** Copyright INRIA 2007
*/

#include "testIsEmpty.h"

int sisemptyaTest() {
  int result = 0;

  printf(">> Float array\n");

  float empty[5] = {0., 0., 0., 0., 0.};
  float full[5] = {1., 2., 3., 0., 0.};

  if (sisemptya(empty, 5) == false) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  assert (sisemptya(empty, 5) == true);

  if (sisemptya(full, 5) == true) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    result = ERROR;
  }
  assert(sisemptya(full, 5) == false);

  return result;
}

int disemptyaTest() {
  int result = 0;

  printf(">> Double array\n");

  double empty[5] = {0., 0., 0., 0., 0.};
  double full[5] = {1., 2., 3., 0., 0.};

  if (disemptya(empty, 5) == false) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  assert(disemptya(empty, 5) == true);

  if (disemptya(full, 5) == true) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    result = ERROR;
  }
  assert(disemptya(full, 5) == false);

  return result;
}

int cisemptyaTest() {
  int result = 0;
  printf(">> Float Complex array\n");

  floatComplex empty[5] = {FloatComplex(0., 0.),
			   FloatComplex(0., 0.),
			   FloatComplex(0., 0.),
			   FloatComplex(0., 0.),
			   FloatComplex(0., 0.)};
  floatComplex full[5] = {FloatComplex(0.,1.),
			  FloatComplex(0., 2.),
			  FloatComplex(0., 3.),
			  FloatComplex(0., 0.),
			  FloatComplex(0., 0.)};

  if (cisemptya(empty, 5) == false) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  assert (cisemptya(empty, 5) == true);

  if (cisemptya(full, 5) == true) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    result = ERROR;
  }
  assert(cisemptya(full, 5) == false);


  return result;
}

int zisemptyaTest() {
  int result = 0;

  printf(">> Double Complex array\n");
  doubleComplex empty[5] = {DoubleComplex(0., 0.),
			   DoubleComplex(0., 0.),
			   DoubleComplex(0., 0.),
			   DoubleComplex(0., 0.),
			   DoubleComplex(0., 0.)};
  doubleComplex full[5] = {DoubleComplex(0.,1.),
			  DoubleComplex(0., 2.),
			  DoubleComplex(0., 3.),
			  DoubleComplex(0., 0.),
			  DoubleComplex(0., 0.)};

  if (zisemptya(empty, 5) == false) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  assert (zisemptya(empty, 5) == true);

  if (zisemptya(full, 5) == true) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    result = ERROR;
  }
  assert(zisemptya(full, 5) == false);


  return result;
}


int testIsEmpty() {
  int sisemptyaTestStatus, disemptyaTestStatus = 0;
  int cisemptyaTestStatus, zisemptyaTestStatus = 0;
  printf("\n>>>> IsEmpty Tests\n");
  sisemptyaTestStatus = sisemptyaTest();
  disemptyaTestStatus = disemptyaTest();
  cisemptyaTestStatus = cisemptyaTest();
  zisemptyaTestStatus = zisemptyaTest();

  return (sisemptyaTestStatus + disemptyaTestStatus +
	  cisemptyaTestStatus + zisemptyaTestStatus);
}

int main(void) {
  assert(testIsEmpty() == 0);
  return 0;
}
