/*
**  -*- C -*-
**
** testTanh.h
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Fri Mar 30 14:04:02 2007 jofret
** Last update Fri Mar 30 14:12:06 2007 jofret
**
** Copyright INRIA 2007
*/

#ifndef _TESTTANH_H_
#define _TESTTANH_H_

#include <stdio.h>
#include <assert.h>
#include "tanh.h"
#include "constant.h"

void stanhsTest(void);

void dtanhsTest(void);

void ctanhsTest(void);

void ztanhsTest(void);

void stanhaTest(void);

void dtanhaTest(void);

void ctanhaTest(void);

void ztanhaTest(void);

int testTanh(void);

#endif /* !_TESTTANH_H_ */
