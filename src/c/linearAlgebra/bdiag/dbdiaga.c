/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Sandeep Gupta
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

/*This function performs the block-diagonalization of matrix A.*/

/*--------------------------------------------------------------------------*/
/* [Ab [,X [,bs]]]=bdiag(A [,rMax]) */
/*--------------------------------------------------------------------------*/

#include <stdio.h>
#include "string.h"
#include "stdlib.h"
#include "lapack.h"

