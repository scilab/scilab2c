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

#ifndef __ISEQUAL_H__
#define __ISEQUAL_H__
#include "types.h"
#include "doubleComplex.h"
#include "floatComplex.h"
#include "uint16.h"

#ifdef  __cplusplus
extern "C" {
#endif

char disequals(double inp1, double inp2);
char disequala(double* inp1, int size1r, int size1c, double* inp2, int size2r, int size2c);
char sisequals(float inp1, float inp2);
char sisequala(float* inp1, int size1r, int size1c, float* inp2, int size2r, int size2c);
char zisequals(doubleComplex inp1, doubleComplex inp2);
char zisequala(doubleComplex* inp1, int size1r, int size1c, doubleComplex* inp2, int size2r, int size2c);
char u16isequals(uint16 inp1, uint16 inp2);
char u16isequala(uint16* inp1, int size1r, int size1c, uint16* inp2, int size2r, int size2c);


#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__ISEQUAL_H__*/
