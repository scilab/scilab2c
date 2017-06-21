/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

/*
//         cosh(z) = 0.5 (exp(|z|) + exp(-|z|))
//                 = 0.5 ( y + 1/y ) with y = exp(|z|)
*/

#include <math.h>
#include "cosh.h"
#include "exp.h"
#include "abs.h"
#include "types.h"

float	       i16coshs(int16 x) {
  double y = i16exps(i16abss(x));
  return (0.5 * (y + 1.0/y));
}
