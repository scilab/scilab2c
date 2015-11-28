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

#include "statMin.h"

uint16 u16mina(uint16 *in, int size) {
  uint16 out = in[0];
  int i = 0;

  for (i = 1; i < size; ++i)
    {
      if (in[i]<out) 
         out = (uint16)in[i];
    }
  return out;

}
