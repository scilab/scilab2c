/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "sign.h"

float ssigns(float num) {
  if (num > 0) {
    return 1.0f;
  }
  if (num < 0) {
    return -1.0f;
  }
  /* num == 0 */
  return 0.0f;
}
