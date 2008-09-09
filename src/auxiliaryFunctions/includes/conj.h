/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#ifndef __CONJ_H__
#define __CONJ_H__

#include "floatComplex.h"
#include "doubleComplex.h"

floatComplex cconjs( floatComplex in ) ;

void cconja  ( floatComplex* in , int size, floatComplex* out );

doubleComplex zconjs ( doubleComplex in) ;

void zconja ( doubleComplex* in , int size, doubleComplex* out ) ;
#endif /* !__CONJ_H__ */
