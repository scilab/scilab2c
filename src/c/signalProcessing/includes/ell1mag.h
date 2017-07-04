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

#ifndef __ELL1MAG_H__
#define __ELL1MAG_H__
#include "types.h"
#include "doubleComplex.h"

#ifdef __cplusplus
extern "C" {
#endif

void zell1maga(double eps,double m1,doubleComplex* z,int size,double* oup);
void dell1maga(double eps,double m1,double* z,int size,double* oup);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /*__ELL1MAG_H__*/
