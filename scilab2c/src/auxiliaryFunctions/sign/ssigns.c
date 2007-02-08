/*
**  -*- C -*-
**
** ssigns.c
** Made by  Bruno JOFRET <bruno.jofret@inria.fr>
**
** Started on  Thu Feb  8 10:26:22 2007 jofret
** Last update Thu Feb  8 15:58:54 2007 jofret
**
** Copyright INRIA 2007
*/

#include "sign.h"

int ssigns(float num) {
  if (num >= 0) {
    return 1;
  }
  return -1;
}
