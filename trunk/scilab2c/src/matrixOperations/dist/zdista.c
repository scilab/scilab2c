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
 

#include "dist.h"
#include "pow.h"
#include "sqrt.h"

double zdista(doubleComplex* in1,doubleComplex* in2, int lines, int columns){
	int i;
	double accu=0;
	for (i=0;i<lines*columns;i++){
		accu+=dpows(zreals(in1[i])-zreals(in2[i]),2);
		accu+=dpows(zimags(in1[i])-zimags(in2[i]),2);
	}
	
	return dsqrts(accu);
}
