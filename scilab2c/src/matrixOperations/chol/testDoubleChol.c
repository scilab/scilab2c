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
 
 
 #include <assert.h>
 #include <stdio.h>
 #include "chol.h"

static void dcholsTest(void){
	double in=4;
	double out;

	out=dchols(in);
	printf("result : %f\n",out);

}

static void dcholaTest(void){
	double in[4]= {2,1,1,4};
	double out[4];
	int size=2;
	int i;
	
	dchola(in,size,out);
	for (i=0;i<4;i++) printf("indice : %d   out : %f\n",i,out[i]);
}

static int cholTest(void){
	dcholsTest();
	dcholaTest();
	return 0;
}


int main (void){
	assert(cholTest()==0);
	return 0;
}	
