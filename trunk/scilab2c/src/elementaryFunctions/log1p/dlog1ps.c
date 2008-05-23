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

#include "log1p.h"
#include "log.h"

double		dlog1ps(double in) {
  static double A = -1.0/3.0;
  static double B = 0.5;

  if(in < -1)
    {/* got NaN */
      return (in - in) / (in - in); /* NaN */
    }
  else if(A <= in && in <= B)
    {/* use the function log((1+g)/(1-g)) with g = x/(x + 2) */
      double Temp = 0;
      Temp = in / ( in + 2);
      /*
return lnp1m1(Temp);
      */
      return 0;
    }
  else
    {/* use the standard formula */
      return dlogs(in + 1);
    }
}
