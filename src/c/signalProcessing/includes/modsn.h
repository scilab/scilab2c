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

#ifndef __MODSN_H__
#define __MODSN_H__
#include "types.h"
#include "doubleComplex.h"

#ifdef __cplusplus
extern "C" {
#endif

double dmodsns(double uu, double emmc);
doubleComplex zmodsns(doubleComplex uu,double emmc);
void dmodsna(double* uu,int size,double emmc,double* sn);
void zmodsna(doubleComplex* uu,int size,double emmc,doubleComplex* sn);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __MODSN_H__ */
