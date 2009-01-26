/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "variance.h"
#include "assert.h"
static int test(void){
	double matrice[20]={1,5,9,4,8,2,6,1,5,9,3,7,2,6,1,4,8,3,7,2};
	double out, *outColumns, *outRows;
	double result= 7.5026315789473692063893;
	double resultColumns[5]= {1.6666666666666667406815 ,1.6666666666666667406815   ,12.916666666666666074548   ,1.6666666666666667406815   ,16.666666666666667850905};
	double resultRows[4]={10.300000000000000710543  ,  10.300000000000000710543  ,  6.7000000000000001776357 ,   6.7000000000000001776357};
	int i;
	
	outColumns= malloc((uint)5*sizeof(double));
	outRows= malloc((uint)4*sizeof(double));
	
	
	out = dvariancea(matrice,20);
	drowvariancea(matrice,5,4,outRows);
	dcolumnvariancea(matrice,5,4,outColumns);
	
	
	printf("Variance \n");
	printf("%f\n",out);
	printf("Row Variance \n");
	for (i=0;i<4;i++) printf("%f\n",outRows[i]);	
	printf("Column Variance \n");
	for (i=0;i<5;i++) printf("%f\n",outColumns[i]);
	
	
	assert(fabs(out-result)/fabs(out) <1e-16);
	for (i=0;i<4;i++)assert(fabs(outRows[i]-resultRows[i])/fabs(outRows[i]) <1e-16);
	
	for (i=0;i<5;i++)assert(fabs(outColumns[i]-resultColumns[i])/fabs(outColumns[i]) <1e-16);
	
	return 0;
}


static int testDoubleVariance   (void) {
  printf("\n\n\n\n*********************\n");
  printf("***** Double  Tests Nono****\n");
  printf("*********************\n");
	assert(test()==0);


  return 0;
}

int main(void) {
  assert(testDoubleVariance () == 0);
  return 0;
}

