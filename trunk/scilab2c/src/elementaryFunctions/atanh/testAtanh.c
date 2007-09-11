/*
**  -*- C -*-
**
** testAtanh.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Dec  8 15:05:44 2006 jofret
** Last update Thu Sep  6 15:09:45 2007 bruno
**
** Copyright INRIA 2006
*/

#include "testAtanh.h"

void satanhsTest() {
  printf(">> Float scalar\n");
  printf("satanhs(0) = %f\n", satanhs((float) 0));
  printf("satanhs(PI) = %f\n", satanhs(PI));
  printf("satanhs(PI/2) = %f\n", satanhs(PI/2));
  printf("satanhs(PI/3) = %f\n", satanhs(PI/3));
  printf("satanhs(PI/4) = %f\n", satanhs(PI/4));
  printf("satanhs(PI/6) = %f\n", satanhs(PI/6));
  printf("satanhs(-PI) = %f\n", satanhs(-PI));
  printf("satanhs(-PI/2) = %f\n", satanhs(-PI/2));
  printf("satanhs(-PI/3) = %f\n", satanhs(-PI/3));
  printf("satanhs(-PI/4) = %f\n", satanhs(-PI/4));
  printf("satanhs(-PI/6) = %f\n", satanhs(-PI/6));
}

void datanhsTest() {
  printf(">> Double scalar\n");
  printf("datanhs(0) = %e\n", datanhs((double) 0));
  printf("datanhs(PI) = %e\n", datanhs(PI));
  printf("datanhs(PI/2) = %e\n", datanhs(PI/2));
  printf("datanhs(PI/3) = %e\n", datanhs(PI/3));
  printf("datanhs(PI/4) = %e\n", datanhs(PI/4));
  printf("datanhs(PI/6) = %e\n", datanhs(PI/6));
  printf("datanhs(-PI) = %e\n", datanhs(-PI));
  printf("datanhs(-PI/2) = %e\n", datanhs(-PI/2));
  printf("datanhs(-PI/3) = %e\n", datanhs(-PI/3));
  printf("datanhs(-PI/4) = %e\n", datanhs(-PI/4));
  printf("datanhs(-PI/6) = %e\n", datanhs(-PI/6));
}

int testAtanh() {
  printf("\n>>>> Atanhgeant Tests\n");
  satanhsTest();
  datanhsTest();
  /* FIXME : Implement some test here ... */
  /*
    catanhsTest();
    zatanhsTest();
    satanhaTest();
    datanhaTest();
    catanhaTest();
    zatanhaTest();
  */
  return 0;
}

int main() {
  assert(testAtanh() == 0);
  return 0;
}
