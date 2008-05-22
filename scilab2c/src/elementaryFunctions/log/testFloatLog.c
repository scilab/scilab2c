/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "testLog.h"

void slogsTest(void) {
  /* FIXME : Implement some test here ... */
  printf(">> Float scalar\n");
  printf("slogs(0.1) = %f\n", slogs(0.1f));
}

int testLog(void) {
  printf("\n>>>> Float Logarithm Tests\n");
  slogsTest();
  /* FIXME : Implement some test here ... */
  /*
    clogsTest();
    slogaTest();
    clogaTest();
  */
  return 0;
}

int main(void) {
  assert(testLog() == 0);
  return 0;
}
