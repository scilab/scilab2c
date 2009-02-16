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
#include <assert.h>
#include <math.h>


static void dpowmaTest(void){
	double in[4]={1,5,4,2};
	double out[4];
	int i;
	
	dpowma(in, 2, 2, out);
	
	for (i=0;i<4;i++) printf("out[%d] = %f\n",i,out[i]);
	
}

/* FIXME : assert à10^-12 */
static void zpowmaTest(void){
	double inR[9]={1,2,3,4,5,6,7,8,9};
	double inI[9]={1,2,3,4,5,6,7,8,9};
	double resultR[9]={- 4.7115011361608578610571,- 2.0782061409646632732517,0.5550888542315330909105,
	- 2.3202132490900626571317,- 2.4412168031527574640904,- 2.5622203572154611528333,
	0.0710746379807356554181,- 2.80422746534086453352,- 5.6795295686624518438634};
	double resultI[9]={- 12.188702380084603049681,- 4.0827818504168584823333,4.0231386792508754268738,
	- 3.0919079733956360556135,- 2.5964710348850239540752,- 2.1010340963744131848046,
	6.0048864332933264975622,- 1.1101602193531934226201,- 8.2252068719997026846613};
	doubleComplex *in,out[9];
	int i;
	
	in=DoubleComplexMatrix(inR,inI,9);
	
	zpowma(in, 3, DoubleComplex(1,1), out);
	
	for (i=0;i<9;i++) printf("out[%d] = %f+%f*i\n",i,zreals(out[i]),zimags(out[i]));
	
	for (i=0;i<9;i++){
		assert( (fabs(zreals(out[i])-resultR[i])/ fabs(zreals(out[i])) ) <1e-12);
		assert( (fabs(zimags(out[i])-resultI[i])/ fabs(zimags(out[i])) ) <1e-13);
	}
	
}


int main(void){
	dpowmaTest();
	zpowmaTest();
	return 0;
}
	
