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

#include "matrixPow.h"
#include "eye.h"
#include "matrixMultiplication.h"


void spowma(float* in, int size, float expand, float* out){


	switch ((int)expand){
		case 0 : 
			seyea(out,size,size);
			break;
		case 1 : 
			{
				int i;
				for (i=0;i<size*size;i++) out[i]=in[i];
			}
			break;
		default : 
			{
				int i=0,j=0;	
				float* Pow;
				Pow=malloc((uint)(size*size)*sizeof(float));
				for (i=0;i<size*size;i++) out[i]=in[i];
				for (i=1; i<expand; i++){
					for (j=0;j<size*size;j++) Pow[j]=out[j];
					smulma(Pow,size,size,in,size,size,out);
				}
			}
			break;
	}
			
}
