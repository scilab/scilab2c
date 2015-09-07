/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "abs.h"

void	u8absa(uint8 *in, int size, uint8* out) {
  int i = 0;
  for (i = 0; i < size; ++i) {
    out[i] = u8abss(in[i]);
  }
}
