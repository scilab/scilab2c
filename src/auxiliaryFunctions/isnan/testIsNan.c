/*
**  -*- C -*-
**
** testIsNan.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 16:07:57 2007 jofret
** Last update Mon May  7 16:07:09 2007 jofret
**
** Copyright INRIA 2007
*/

/* FIXME : Must improve isnan rules and remove define. */
#define NDEBUG

#include "testIsNan.h"

int sisnansTest() {
  int result = 0;

  printf(">> Float \n");

  float nan = 0. / 0.;
  float full = 1.23456789;

  if (sisnans(nan) == false) {
    printf("ERROR ! : Test Failed (Must be nan)\n");
    result = ERROR;
  }
  assert (sisnans(nan) == true);

  if (sisnans(full) == true) {
    printf("ERROR ! : Test Failed (Must not be nan)\n");
    result = ERROR;
  }
  assert(sisnans(full) == false);

  return result;
}

int disnansTest() {
  int result = 0;

  printf(">> Double\n");

  double nan = 0. / 0.;
  double full = 1.456789321861;

  if (disnans(nan) == false) {
    printf("ERROR ! : Test Failed (Must be nan)\n");
    result = ERROR;
  }
  assert(disnans(nan) == true);

  if (disnans(full) == true) {
    printf("ERROR ! : Test Failed (non nan array)\n");
    result = ERROR;
  }
  assert(disnans(full) == false);

  return result;
}

int cisnansTest() {
  int result = 0;
  printf(">> Float Complex\n");

  floatComplex nan_nan = FloatComplex(0./0., 0./0.);
  floatComplex nan_real = FloatComplex(0. / 0. , 1.123456789);
  floatComplex real_nan = FloatComplex(1.123456789 , 0. / 0.);

  floatComplex full = FloatComplex(0.,1.);

  if (cisnans(nan_nan) == false) {
    printf("ERROR ! : Test Failed (Must be nan)\n");
    result = ERROR;
  }
  assert (cisnans(nan_nan) == true);

 if (cisnans(nan_real) == true) {
    printf("ERROR ! : Test Failed (Must not be nan)\n");
    result = ERROR;
  }
  assert(cisnans(nan_real) == false);

 if (cisnans(real_nan) == true) {
    printf("ERROR ! : Test Failed (Must not be nan)\n");
    result = ERROR;
  }
  assert(cisnans(real_nan) == false);

  if (cisnans(full) == true) {
    printf("ERROR ! : Test Failed (Must not be nan)\n");
    result = ERROR;
  }
  assert(cisnans(full) == false);


  return result;
}

int zisnansTest() {
  int result = 0;

  printf(">> Double Complex\n");
  floatComplex nan_nan = FloatComplex(0./0., 0./0.);
  floatComplex nan_real = FloatComplex(0. / 0. , 1.123456789);
  floatComplex real_nan = FloatComplex(1.123456789 , 0. / 0.);

  floatComplex full = FloatComplex(0.,1.);

  if (cisnans(nan_nan) == false) {
    printf("ERROR ! : Test Failed (Must be nan)\n");
    result = ERROR;
  }
  assert (cisnans(nan_nan) == true);

 if (cisnans(nan_real) == true) {
    printf("ERROR ! : Test Failed (Must not be nan)\n");
    result = ERROR;
  }
  assert(cisnans(nan_real) == false);

 if (cisnans(real_nan) == true) {
    printf("ERROR ! : Test Failed (Must not be nan)\n");
    result = ERROR;
  }
  assert(cisnans(real_nan) == false);

  if (cisnans(full) == true) {
    printf("ERROR ! : Test Failed (Must not be nan)\n");
    result = ERROR;
  }
  assert(cisnans(full) == false);


  return result;
}


int testIsNan() {
  int sisnansTestStatus, disnansTestStatus = 0;
  int cisnansTestStatus, zisnansTestStatus = 0;
  printf("\n>>>> IsNan Tests\n");
  sisnansTestStatus = sisnansTest();
  disnansTestStatus = disnansTest();
  cisnansTestStatus = cisnansTest();
  zisnansTestStatus = zisnansTest();

  return (sisnansTestStatus + disnansTestStatus +
	  cisnansTestStatus + zisnansTestStatus);
}

int main(void) {
  assert(testIsNan() == 0);
  return 0;
}
