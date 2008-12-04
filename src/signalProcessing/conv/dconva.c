#include "conv.h"

void dconva(double *in1, int size1, double *in2,int size2, double *out){
	int i;
	doubleComplex *in1Cpx, *in2Cpx, *result;

	in1Cpx=malloc(2*(unsigned int)size1*sizeof(double));	
	in2Cpx=malloc(2*(unsigned int)size2*sizeof(double));	
	for (i=0;i<size1;i++){
	in1Cpx[i]=DoubleComplex(in1[i],0);
	}
	for (i=0;i<size2;i++){
	in2Cpx[i]=DoubleComplex(in2[i],0);
	}
	result=malloc(2*(unsigned int)(size1+size2-1)*sizeof(double));

	zconva(in1Cpx,size1,in2Cpx,size2,result);
	zreala(result,size1+size2-1,out);

	free(result);
}


