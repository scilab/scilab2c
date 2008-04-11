/*
**  -*- C -*-
**
** testRand.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 16:07:57 2007 jofret
** Last update Thu Nov  8 16:03:15 2007 bruno
**
** Copyright INRIA 2007
*/

#ifndef __TESTRAND_H__
#define __TESTRAND_H__

#include <stdio.h>
#include <assert.h>
#include "rand.h"

#define ERROR 51

int srandsTest(void);

int drandsTest(void);

int crandsTest(void);

int zrandsTest(void);

int testRand(void);

#endif /* ! __TESTRAND_H__ */
