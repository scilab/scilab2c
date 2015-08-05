/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */


#include "multiplication.h"

uint16 u16mulv(uint16* in1, uint16* in2, int size)
{
  uint16 out = 0;
  int i = 0;
  
  for (i = 0 ; i < size ; ++i)
    {
      out += u16muls(in1[i], in2[i]);
    }

  return out;
}
