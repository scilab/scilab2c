/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __NANMIN_H__
#define __NANMIN_H__


#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"
#include "int16.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dnanmina(double* in, int row, int col, double* pos);
double dnanminnpa(double* in, int row, int col);
double dnanmins(double in, double* pos);
double dnanminnps(double in);



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif  /*__NANMIN_H__*/
