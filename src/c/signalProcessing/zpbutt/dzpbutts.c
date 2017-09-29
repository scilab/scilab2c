/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ankit Raj
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
#include<stdio.h>
#include<math.h>
#include "zpbutt.h"
#include "doubleComplex.h"
#define PI 3.14159265
double dzpbutts(double n,double fl,doubleComplex* out)
{
  double e= PI/(2.0*(n));
  int k;
  double rl,cpx,gain;
  for(k=1;k<=n;k++)
  {
    double v=2.0*(double)k+(n)-1.0;
    rl=(fl)*cos(e*v);
    cpx=(fl)*sin(e*v);
    out[k-1]=DoubleComplex(rl,cpx);
  }
  gain=pow(fl,n);

return gain;
  
}

