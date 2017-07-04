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

#ifndef __AMELL_H__
#define __AMELL_H__
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

double damells(double u,double x);
void damella(double* u,int size,double x,double* oup);

#ifdef __cplusplus
} /* extern "c" */
#endif

#endif /*__AMELL_H__*/
