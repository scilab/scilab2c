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



#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "hilbert.h"


static void dhilbertaTest(void){
	int i;
	double in[16]={1, 2, 3, 4, 5,6,7,8,9, 10,11,12,13,14,15,16};
	/*double resR[4]={1,2,3,4};
	double resI[4]={1,-1,-1,1};*/	
	doubleComplex *out;	
	
	out = malloc((uint)9*sizeof(doubleComplex));
	dhilberta(in, 1, 9, out);
	
	for (i=0;i<9;i++){
		printf("%f+%f *i\n",zreals (out[i]),zimags(out[i]));
		/*assert( (fabs(zreals(out[i])-resR[i]) / fabs(zreals(out[i])) )<1e-16);
		assert( (fabs(zimags(out[i])-resI[i]) / fabs(zimags(out[i])) )<1e-16);*/
	}

}

static void shilbertaTest(void){
	int i;
	float in[4]={1.0f, 2.0f, 3.0f, 4.0f};
	/*float resR[4]={1.0f,2.0f,3.0f,4.0f};
	float resI[4]={1.0f,-1.0f,-1.0f,1.0f};	*/
	floatComplex out[4];	
	
	
	shilberta(in, 1, 4, out);
	
	for (i=0;i<4;i++){
		printf("%f+%f *i\n",creals (out[i]),cimags(out[i]));
		/*assert( (fabs(creals(out[i])-resR[i]) / fabs(creals(out[i])) )<1e-6);
		assert( (fabs(cimags(out[i])-resI[i]) / fabs(cimags(out[i])) )<1e-6);*/
	}
}

static int hilbertTest(void){
	dhilbertaTest();
	shilbertaTest();
	return 0;
}


int main (void){
	assert(hilbertTest()==0);
	return 0;
}




