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

float cdista(floatComplex* in1,floatComplex* in2, int lines, int columns){
	int i;
	float accu=0;
	for (i=0;i<lines*columns;i++){
		accu+=spows(creals(in1[i])-creals(in2[i]),2);
		accu+=spows(cimags(in1[i])-cimags(in2[i]),2);
	}
	
	return ssqrts(accu);
}
