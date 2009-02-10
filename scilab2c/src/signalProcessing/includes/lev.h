/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __LEV_H__
#define __LEV_H__

#include "floatComplex.h"
#include "doubleComplex.h"



/* 
   function Scilab : 
   [out1,y,out3]=lev(in)
   y : result of the function
*/
float sleva (float* in,int size, float* out1, float* out3);
double dleva (double* in, int size, double* out1, double* out3);
floatComplex cleva (floatComplex* in,int size, floatComplex* out1, floatComplex* out3);
doubleComplex zleva (doubleComplex* in,int size, doubleComplex* out1, doubleComplex* out3);


/* 
   function Scilab : 
   [out1,y]=lev(in)
   y : result of the function
*/
float sleva2 (float* in,int size, float* out1);
double dleva2 (double* in, int size, double* out1);
floatComplex cleva2 (floatComplex* in,int size, floatComplex* out1);
doubleComplex zleva2 (doubleComplex* in,int size, doubleComplex* out1);



#endif /*__LEV_H__*/

