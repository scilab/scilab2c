/*
**  -*- C -*-
**
** testPythag.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:50:15 2007 jofret
** Last update Tue Apr 24 11:35:22 2007 jofret
**
** Copyright INRIA 2007
*/

#include "testPythag.h"

int spythagsTest() {
  printf(">> Floats \n");
  float value1 = -3;
  float value2 = 4;
  assert(spythags(value1, value2) == 5);
  assert(spythags(0, 0) == 0);
  assert(spythags(-3, 0) == 3);
  assert(spythags(3, 0) == 3);
  return 0;
}

int dpythagsTest() {
  printf(">> Doubles \n");
  double value1 = -3;
  double value2 = 4;
  assert(dpythags(value1, value2) == 5);
  assert(dpythags(0, 0) == 0);
  assert(dpythags(-3, 0) == 3);
  assert(dpythags(3, 0) == 3);
  return 0;
}

int testPythag() {
  int spythagsStatus, dpythagsStatus = 0;

  printf(">>>> Pythag Tests\n");
  spythagsStatus = spythagsTest();
  dpythagsStatus = dpythagsTest();

  return (spythagsStatus + dpythagsStatus);
}

int main(void) {
  assert(testPythag() == 0);
  return 0;
}
