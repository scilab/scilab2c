 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

#ifndef __CALERF_H__
#define __CALERF_H__
#include "types.h"
#include "floatComplex.h"
#include "doubleComplex.h"
#include "uint8.h"
#include "uint16.h"
#include "int16.h"
#include "erf.h"
#include "erfc.h"
#include "erfcx.h"
#include "calerf.h"

#ifdef  __cplusplus
extern "C" {
#endif

double dcalerfs (double inp1, double inp2);
void dcalerfa(double* inp1, int size,double inp2, double* out);

float scalerfs (float inp1, double inp2);
void scalerfa(float* inp1, int size,double inp2, float* out);


#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__CALERF_H__*/
