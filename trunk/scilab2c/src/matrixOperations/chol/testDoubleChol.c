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
#include <math.h>
#include <malloc.h>


static void dcholsTest(void){
	double in=4;
	double out;
		printf("\n >>> DCholS <<<\n");
	out=dchols(in);
	printf("result : %f\n",out);

}

static void dcholaTest(void){
	double in2[49]={0.2113249,0.7560439,0.0002211,0.3303271, 0.6653811,0.6283918,0.8497452 ,\
    0.6857310,0.8782165,0.0683740,0.5608486,0.6623569,0.7263507,0.1985144 ,\
    0.5442573,    0.2320748 ,   0.2312237,    0.2164633,    0.8833888,    0.6525135,    0.3076091  ,\
    0.9329616,    0.2146008 ,   0.312642  ,   0.3616361 ,   0.2922267 ,   0.5664249 ,   0.4826472  ,\
    0.3321719,    0.5935095,    0.5015342  ,  0.4368588  ,  0.2693125  ,  0.6325745  ,  0.4051954  ,\
    0.9184708,    0.0437334,    0.4818509   , 0.2639556   , 0.4148104   , 0.2806498   , 0.1280058  ,\
    0.7783129,    0.2119030,    0.1121355    ,0.6856896    ,0.1531217    ,0.6970851    ,0.8415518 };
	double in[9]= {0.722725308034569025040,0.8976796260103583335877,0.2427821881137788295746,\
			0.4337721113115549087524,0.9677053210325539112091,0.5068534435704350471497,\
			0.523297640960663557053,0.5596947595477104187012,0.5617307000793516635895};
	double res[9]={0.8501325238070644996213,0,0,\
			0.5102405791617476982225,0.8410468907315681308390,0,\
			0.6155483131232661886401,0.2920372626834314977451,0.3123222878611475739064};
	double out[9]={0}, out2[49]={0};
	int size=3;
	int i;
	
	printf("\n >>> DCholA <<<\n");
	dchola(in2,7,out2);
	for (i=0;i<49;i++)printf("out2[i]= %f\n",out2[i]);
	dchola(in,size,out);
	for (i=0;i<9;i++){ 
		if (out[i]>1e-16)  assert( (fabs(out[i]-res[i]) / fabs(out[i])) <1e-15);
	}
}


static void zcholsTest(void){
	doubleComplex in;
	double out;
	in=DoubleComplex(3,1);
		printf("\n >>> ZCholS <<<\n");
	out=zchols(in);
	printf("result : %f\n",out);

}



static void zcholaTest(void){
	double inR[9]= {9,4,2,4,5,1,2,1,4};
	double inI[9]= {1,-1,2,-1,-4,1,2,1,4};
	double resR[9]= {3,0,0,1.333333333333333259319,\
	1.763834207376393736766,0,0.6666666666666666296592,\
	0.1889822365046136265487,1.7525491637693282331867};
	double resI[9]= {0,0,0,- 0.3333333333333333148296,\
	0,0,0.6666666666666666296592,- 0.0629940788348712366052,0};
	doubleComplex *in, *out;
	int i;
	
		printf("\n >>> ZCholA <<<\n");
	in=DoubleComplexMatrix(inR,inI,9);
	
	out=malloc((uint)9*sizeof(doubleComplex));
	
	zchola(in,3,out);
	for (i=0;i<9;i++) printf("indice : %d   out : %f+%f *i\n",i,zreals(out[i]),zimags(out[i]));
	for (i=0;i<9;i++){
	if (zreals(out[i])>1e-16)
		assert( (fabs(zreals(out[i])-resR[i]) / fabs(zreals(out[i]))) <1e-15);
	if (zimags(out[i])>1e-16)	
		assert( (fabs(zimags(out[i])-resI[i]) / fabs(zimags(out[i]))) <1e-15);
	}
	free(out);
}


static int cholTest(void){
	printf("\n >>> Double Chol <<<\n");
	dcholsTest();
	dcholaTest();
	zcholsTest();
	zcholaTest();	
	return 0;
}


int main (void){
	assert(cholTest()==0);
	return 0;
}	
