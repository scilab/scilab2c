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

int16 u16signs(uint16 num) {
  if (num > 0) {
    return (int16)1;
  }
  if (num < 0) {
    return (int16)-1;
  }
  /* num == 0 */
  return (int16)0;
}
