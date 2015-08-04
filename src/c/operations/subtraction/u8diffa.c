/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "subtraction.h"

void u8diffa(uint8* in1, int size1, uint8* in2, int size2, uint8* out) {
  int i = 0;
  for (i = 0; i < size1 && i < size2; ++i) {
    out[i] = u8diffs(in1[i], in2[i]);
  }
}
