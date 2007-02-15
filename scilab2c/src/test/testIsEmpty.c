/*
**  -*- C -*-
**
** testIsEmpty.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 16:07:57 2007 jofret
** Last update Thu Feb 15 17:17:01 2007 jofret
**
** Copyright INRIA 2007
*/

#include <stdio.h>
#include <stdbool.h>

#define ERROR 51

bool		sisEmptya(float*, int);
bool		disEmptya(double*, int);

int sisemptyaTest() {
  printf(">> Float array\n");
  float empty[5] = {0., 0., 0., 0., 0.};
  float full[5] = {1., 2., 3., 0., 0.};

  if (sisEmptya(empty, 5) == false) {
    printf("ERROR ! : Test Failed (empty array)\n");
    return ERROR;
  }

  if (sisEmptya(full, 5) == true) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    return ERROR;
  }

  return 0;
}

int disemptyaTest() {
  printf(">> Double array\n");

  double empty[5] = {0., 0., 0., 0., 0.};
  double full[5] = {1., 2., 3., 0., 0.};

  if (disEmptya(empty, 5) == false) {
    printf("ERROR ! : Test Failed (empty array)\n");
    return ERROR;
  }

  if (disEmptya(full, 5) == true) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    return ERROR;
  }

  return 0;
}

int cisemptyaTest() {
  printf(">> Float Complex array\n");

  return 0;
}

int zisemptyaTest() {
  printf(">> Double Complex array\n");
  return 0;
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
