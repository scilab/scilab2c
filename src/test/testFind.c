/*
**  -*- C -*-
**
** testFind.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 15:50:15 2007 jofret
** Last update Wed Feb 14 17:08:08 2007 jofret
**
** Copyright INRIA 2007
*/

#include <stdio.h>
#include "notFound.h"

#define ERROR 42

int		sfinda(float*, int);

int sfindaTest() {
  printf(">> Floats \n");
  float goodArray[5] = {0.,2.,3.,5.,10.};
  float badArray[5] = {0.,0.,0.,0.,0.};
  if (sfinda(goodArray, 5) != 1) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    return ERROR;
  }
  if (sfinda(badArray, 5) != NOT_FOUND) {
    printf("ERROR ! : Test Failed (empty array)\n");
    return ERROR;
  }
  return 0;
}

int dfindaTest() {
  printf(">> Doubles \n");
  /* FIXME : Implement some test here ... */
  return 0;
}

int cfindaTest() {
  printf(">> Float Complex \n");
  /* FIXME : Implement some test here ... */
  return 0;
}

int zfindaTest() {
  printf(">> Double Complex \n");
  /* FIXME : Implement some test here ... */
  return 0;
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
