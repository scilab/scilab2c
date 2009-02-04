/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "isempty.h"
#include "length.h"

float		sisemptya(float* x, int size) {

	if (size!=0)
		printf("%f\n",x[0]);
		
	return (size==0) ? 1.0f : 0.0f;
  
}
