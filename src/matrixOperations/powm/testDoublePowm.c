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
#include <stdio.h>


static void dpowmaTest(void){
	double in[4]={1,5,4,2};
	double out[4];
	int i;
	
	dpowma(in, 2, 2, out);
	
	for (i=0;i<4;i++) printf("out[%d] = %f\n",i,out[i]);
	
}

/*
FIXME
static void zpowmaTest(void){
	double inR[4]={1,5,4,2};
	double inI[4]={2,1,-1,3};
	doubleComplex *in,out[4];
	int i;
	
	in=DoubleComplexMatrix(inR,inI,4);
	
	zpowma(in, 2, DoubleComplex(2,0), out);
	
	for (i=0;i<4;i++) printf("out[%d] = %f+%f*i\n",i,zreals(out[i]),zimags(out[i]));
	
}

*/

int main(void){
	dpowmaTest();
	return 0;
}
	
