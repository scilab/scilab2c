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
 
 
#ifndef __DETERM_H__
#define __DETERM_H__
 
#include "doubleComplex.h"
#include "floatComplex.h"

 

	
double ddeterma (double *in, int size);
 
float sdeterma (float *in, int size);
 
doubleComplex zdeterma (doubleComplex *in, int size); 
 
floatComplex cdeterma (floatComplex *in, int size); 


#endif /* __DETERM_H__ */
 
