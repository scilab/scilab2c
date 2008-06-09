/*
**  -*- C -*-
**
** sabss.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Feb  8 10:26:22 2007 jofret
** Last update Fri Apr 20 15:56:25 2007 jofret
**
** Copyright INRIA 2007
*/

#include "abs.h"

double dabss(double num) {
  if (num >= 0) {
    return num;
  }
  return -num;
}
