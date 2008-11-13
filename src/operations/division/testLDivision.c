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
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "division.h"
/*
#define SIZE 10000000

#define LOCAL_DEBUG 
*/

/*
static void sldivsTest()
{
	float M1;
	float M2;
	int i=0,j=0;

	srand(20);
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			M1=(float)rand();
			M2=(float)rand();
			printf("%f \\ %f = %1.7f\n" , M1, M2, sldivs(M1,M2));
		}
	}		

}


static void dldivsTest()
{
	double M1;
	double M2;
	int i=0,j=0;

	srand(20);
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			M1=(double)rand();
			M2=(double)rand();
			printf("%f \\ %f = %1.7f\n" , M1, M2, dldivs(M1,M2));
		}
	}		

}


static void cldivsTest()
{
	floatComplex M1;
	floatComplex M2;
	int i=0,j=0;

	srand(20);
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			M1=FloatComplex((float)rand(),(float)rand());
			M2=FloatComplex((float)rand(),(float)rand());
			printf("(%f + %f *%%i)\\ (%f + %f *%%i) = %1.7f + %1.7f i\n" , creals(M1),cimags(M1),creals(M2),cimags(M2),creals(cldivs(M1,M2)),cimags(cldivs(M1,M2)));
		}
	}		

}


static void zldivsTest()
{
	doubleComplex M1;
	doubleComplex M2;
	int i=0,j=0;

	srand(20);
	for (i=0;i<10;i++){
		for (j=0;j<10;j++){
			M1=DoubleComplex((double)rand(),(double)rand());
			M2=DoubleComplex((double)rand(),(double)rand());
			printf("(%f + %f *%%i)\\ (%f + %f *%%i) = %1.7f + %1.7f i\n\n" , zreals(M1),zimags(M1),zreals(M2),zimags(M2),zreals(zldivs(M1,M2)),zimags(zldivs(M1,M2)));
		}
	}		

}
*/

static void sldivaTest()
{
	float M1[4]={1, 3, 2, 4};
	float M2[4]={23, 3, 2, 13};
	float MRes[4];
	int i=0;

	sldiva(M1,4,M2,4,MRes);
	
	for (i=0;i<4;i++){
		printf("%1.7f\n",MRes[i]);
	}		

}


static void dldivaTest()
{
	double M1[4]={1, 3, 2, 4};
	double M2[4]={23, 3, 2, 13};
	double MRes[4];
	int i=0;

	dldiva(M1,4,M2,4,MRes);

	for (i=0;i<4;i++){
		printf("%1.7f\n",MRes[i]);
	}		

}


static void cldivaTest()
{	
	int i=0;
	floatComplex M1[4];	
	floatComplex M2[4];
	floatComplex MRes[4];

	M1[0]=FloatComplex(1,0);
	M1[1]=FloatComplex(3,0);
	M1[2]=FloatComplex(2,0);
	M1[3]=FloatComplex(4,0);
	M2[0]=FloatComplex(23,0);
	M2[1]=FloatComplex(3,0);
	M2[2]=FloatComplex(2,0);
	M2[3]=FloatComplex(13,0);

	cldiva(M1,4,M2,4,MRes);
	for (i=0;i<4;i++){
		printf("%1.7f + %1.7f i\n",creals(MRes[i]),cimags(MRes[i]));
	}		

}


static void zldivaTest()
{
	int i=0;
	doubleComplex M1[4];
	doubleComplex M2[4];
	doubleComplex MRes[4];

	M1[0]=DoubleComplex(1,0);
	M1[1]=DoubleComplex(3,0);
	M1[2]=DoubleComplex(2,0);
	M1[3]=DoubleComplex(4,0);
	M2[0]=DoubleComplex(23,0);
	M2[1]=DoubleComplex(3,0);
	M2[2]=DoubleComplex(2,0);
	M2[3]=DoubleComplex(13,0);

	zldiva(M1,4,M2,4,MRes);
	for (i=0;i<4;i++){
		printf("%1.7f + %1.7f i\n",zreals(MRes[i]),zimags(MRes[i]));
	}		
		

}


static int testLDivision(void) {
/* Resultats a comparer avec ceux de Scilab
   Ok chez moi

	printf(">>>SCALAIRES<<<\n");printf("\n");printf("\n");
  sldivsTest();
  printf("\n");printf("\n");printf("\n");printf("\n");
  dldivsTest();	
  printf("\n");printf("\n");printf("\n");printf("\n");
  cldivsTest();
  printf("\n");printf("\n");printf("\n");printf("\n");
  zldivsTest();
  printf("\n");printf("\n");printf("\n");printf("\n")};*/
	printf(">>>ARRAYS<<<\n");printf("\n");printf("\n");
  sldivaTest();
  printf("\n");printf("\n");printf("\n");printf("\n");  
  dldivaTest();	
  printf("\n");printf("\n");printf("\n");printf("\n");
  cldivaTest();
  printf("\n");printf("\n");printf("\n");printf("\n");
  zldivaTest();
  return 0;
}



int main(void) {
  assert(testLDivision() == 0);
  return 0;
}
