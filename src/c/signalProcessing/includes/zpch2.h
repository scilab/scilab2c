/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Ankit Raj
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

#ifndef __ZPCH2_H__
#define __ZPCH2_H__
#include "types.h"
#include "doubleComplex.h"

#ifdef __cplusplus
extern "C" {
#endif

double dzpch2s(double N, double A, double omegar,doubleComplex* zeros,doubleComplex* poles);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __ZPCH2_H__ */ 
