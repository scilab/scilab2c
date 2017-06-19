/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 * Author: Ukasha Noor
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __GCD_H__
#define __GCD_H__

#include "types.h"

#ifdef  __cplusplus
extern "C" {
#endif

int8 u8gcds(int8 *in,int size);

void dgcda(double *in,int size,double *out);

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif
