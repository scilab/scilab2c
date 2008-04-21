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

void dlogsTest(void) {
  /* FIXME : Implement some test here ... */
  printf(">> Double scalar\n");
  printf("dlogs(0) = %e\n", dlogs(0.0));
}

int testLog(void) {
  printf("\n>>>> Double Logarithm Tests\n");
  dlogsTest();
  /* FIXME : Implement some test here ... */
  /*
    zlogsTest();
    dlogaTest();
    zlogaTest();
  */
  return 0;
}

int main(void) {
  assert(testLog() == 0);
  return 0;
}
