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
#include "multiplication.h"

#define SIZE 1

static void ztimessTest(void) {
  doubleComplex M1;
  doubleComplex M2;
  doubleComplex M1_by_M2;

  int i = 0;

  srand(1);
  for (i = 0; i < SIZE; ++i) {
    M1 = DoubleComplex((double) rand(), (double) rand());
    M2 = DoubleComplex((double) rand(), (double) rand());

    M1_by_M2 = ztimess(M1, M2);

    if (zreals(M1_by_M2)<1e-14 && (zreals(M1)*zreals(M2) - zimags(M1)*zimags(M2)) < 1e-18 ) 
	assert(1);
   else 
	assert( fabs(zreals(M1_by_M2) - (zreals(M1)*zreals(M2) - zimags(M1)*zimags(M2)) )/fabs(zreals(M1_by_M2)) <= 1e-16);

   if (  zimags(M1_by_M2) < 1e-14 && (zreals(M1)*zimags(M2) + zimags(M1)*zreals(M2)) < 1e-18 )
        assert ( 1 ) ;
   else
	assert( fabs(zimags(M1_by_M2) - (zreals(M1)*zimags(M2) + zimags(M1)*zreals(M2)) )/fabs(zimags(M1_by_M2)) <= 1e-16);
  }
}

static void ctimessTest(void) {
  floatComplex M1;
  floatComplex M2;
  floatComplex M1_by_M2;

  int i = 0;

  srand(1);
  for (i = 0; i < SIZE; ++i) {
    M1 = FloatComplex((float) rand(), (float) rand());
    M2 = FloatComplex((float) rand(), (float) rand());

    M1_by_M2 = ctimess(M1, M2);

  if (creals(M1_by_M2)<1e-14 && (creals(M1)*creals(M2) - cimags(M1)*cimags(M2)) < 1e-18 ) 
	assert(1);
  else 
	assert( fabs(creals(M1_by_M2) - (creals(M1)*creals(M2) - cimags(M1)*cimags(M2)) )/fabs(creals(M1_by_M2)) < 1e-7);

  if (  cimags(M1_by_M2) < 1e-14 && (creals(M1)*cimags(M2) + cimags(M1)*creals(M2)) < 1e-18 )
        assert ( 1 ) ;
  else
    assert( fabs(cimags(M1_by_M2) - (creals(M1)*cimags(M2) + cimags(M1)*creals(M2)) )/fabs(cimags(M1_by_M2)) < 1e-7);
  }
}


static void smulsTest(void){
	float M1=0;
	float M2=0;
	int i=0;
	srand(1);
	for (i=0;i<20;i++){
		M1=(float)rand();
		M2=(float)rand();
		printf(" %f * %f = %f\n",M1,M2,smuls(M1,M2));
	}
}


static void dmulsTest(void){
	double M1=0;
	double M2=0;
	int i=0;
	srand(1);
	for (i=0;i<20;i++){
		M1=(double)rand();
		M2=(double)rand();
		printf(" %f * %f = %f\n",M1,M2,dmuls(M1,M2));
	}
}


static void cmulsTest(void){
	floatComplex M1;
	floatComplex M2;


	int i=0;
	srand(1);
	for (i=0;i<20;i++){
		M1=FloatComplex((float)rand(),(float)rand());
		M2=FloatComplex((float)rand(),(float)rand());
		printf(" (%f + %f * %%i ) * (%f + %f * %%i) = %f +%f * %%i\n",creals(M1),cimags(M1),creals(M2),cimags(M2),creals(cmuls(M1,M2)),cimags(cmuls(M1,M2)));
	}
}


static void zmulsTest(void){
	doubleComplex M1;
	doubleComplex M2;


	int i=0;
	srand(1);
	for (i=0;i<20;i++){
		M1=DoubleComplex((double)rand(),(double)rand());
		M2=DoubleComplex((double)rand(),(double)rand());
		printf(" (%f + %f * %%i ) * (%f + %f * %%i) = %f +%f * %%i\n",zreals(M1),zimags(M1),zreals(M2),zimags(M2),zreals(zmuls(M1,M2)),zimags(zmuls(M1,M2)));
	}
}


static void smulaTest(void){
	float M1[20]={0};
	float M2[20]={0};
	float MRes[20]={0};
	int i=0;
	srand(1);
	for (i=0;i<20;i++){
		M1[i]=(float)rand();
		M2[i]=(float)rand();
	}
	smula(M1,20,M2,20,MRes);
	for (i=0;i<20;i++){	
		printf(" %f * %f = %f\n",M1[i],M2[i],MRes[i]);
	}
}


static void dmulaTest(void){
	double M1[20]={0};
	double M2[20]={0};
	double MRes[20]={0};
	int i=0;
	srand(1);
	for (i=0;i<20;i++){
		M1[i]=(double)rand();
		M2[i]=(double)rand();
	}
	dmula(M1,20,M2,20,MRes);
	for (i=0;i<20;i++){
		printf(" %f * %f = %f\n",M1[i],M2[i],MRes[i]);
	}
}


static void cmulaTest(void){
	floatComplex M1[20];
	floatComplex M2[20];
	floatComplex MRes[20];
	int i=0;

	srand(1);
	for (i=0;i<20;i++){
		M1[i] = FloatComplex((float)rand(),(float)rand());
		M2[i] = FloatComplex((float)rand(),(float)rand());
	}
	cmula(M1,20,M2,20,MRes);
	for (i=0;i<20;i++){
		printf(" (%f + %f * %%i ) * (%f + %f * %%i) = %f +%f * %%i\n",creals(M1[i]),cimags(M1[i]),creals(M2[i]),cimags(M2[i]),creals(MRes[i]),cimags(MRes[i]));
	}
}


static void zmulaTest(void){
	doubleComplex M1[20];
	doubleComplex M2[20];
	doubleComplex MRes[20];
	int i=0;

	srand(1);
	for (i=0;i<20;i++){
		M1[i] = DoubleComplex((double)rand(),(double)rand());
		M2[i] = DoubleComplex((double)rand(),(double)rand());
	}
	zmula(M1,20,M2,20,MRes);
	for (i=0;i<20;i++){
		printf(" (%f + %f * %%i ) * (%f + %f * %%i) = %f +%f * %%i\n",zreals(M1[i]),zimags(M1[i]),zreals(M2[i]),zimags(M2[i]),zreals(MRes[i]),zimags(MRes[i]));
	}
}
static int testMult(void) {
  ztimessTest();
  ctimessTest();
	printf(">>> Tests SMulS <<<\n");
  smulsTest();
	printf(">>> Tests DMulS <<<\n");
  dmulsTest();
	printf(">>> Tests CMulS <<<\n");
  cmulsTest();
	printf(">>> Tests ZMulS <<<\n");
  zmulsTest();
	printf(">>> Tests SMulA <<<\n");
  smulaTest();
	printf(">>> Tests DMulA <<<\n");
  dmulaTest();
	printf(">>> Tests CMulA <<<\n");
  cmulaTest();
	printf(">>> Tests ZMulA <<<\n");
  zmulaTest();

  return 0;
}



int main(void) {
  assert(testMult() == 0);
  return 0;
}
