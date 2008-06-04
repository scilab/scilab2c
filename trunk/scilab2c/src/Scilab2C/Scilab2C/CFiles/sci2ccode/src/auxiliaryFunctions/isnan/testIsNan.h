/*
**  -*- C -*-
**
** testIsNan.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Wed Feb 14 16:07:57 2007 jofret
** Last update Mon May  7 11:29:30 2007 jofret
**
** Copyright INRIA 2007
*/

#ifndef __TESTISNAN_H__
#define __TESTISNAN_H__

#include <stdio.h>
#include <assert.h>
#include "isnan.h"

#define ERROR 51

int sisnansTest(void);

int disnansTest(void);

int cisnansTest(void);

int zisnansTest(void);

int testIsNan(void);

#endif /* ! __TESTISNAN_H__ */
