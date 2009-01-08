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
 
#include <malloc.h>
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "logm.h"

static void dlogmaTest(void){
}


static void zlogmaTest(void){
	int i;
	double inD[9]={0.2113249,0.3303271 ,   0.8497452 , 0.7560439,    0.6653811  ,  0.6857310 ,0.0002211 ,   0.6283918 ,   0.8782165};
	doubleComplex *in, *out;
	in=malloc((uint)9*sizeof(doubleComplex));
	out=malloc((uint)9*sizeof(doubleComplex));
	
	for(i=0;i<9;i++) in[i]=DoubleComplex(inD[i],0);

	zlogma(in,3,out);
	for(i=0;i<9;i++) printf("out[%d] = %f + %f *i\n",i,zreals(out[i]),zimags(out[i]));
}

static int logmTest(void){
	dlogmaTest();
	zlogmaTest();
	return 0;
}

int main (void){
	assert(logmTest()==0);
	return 0;
}


