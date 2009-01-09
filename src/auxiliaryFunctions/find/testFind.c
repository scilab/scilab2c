/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "testFind.h"

int sfindaTest() {
  int result = 0, i = 0;
  float goodArray[5] = {0.,2.,3.,5.,10.};
  float badArray[5] = {0.,0.,0.,0.,0.};
  float res[4] = {1.,2.,3.,4.};
  float *outGood = NULL, *outBad = NULL;

  printf(">> Floats \n");
  outGood = sfinda(goodArray, 5);
  outBad = sfinda(badArray, 5);
  
  for (i=0;i<4;i++){
  	if ( outGood[i] != res[i]) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    result = ERROR;
      }
	else
    	  printf("%f  ",outGood[i]);
  }
  
  printf("\n");
  
  if (outBad!=NULL) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("%f  ",outGood[i]);
    
  printf("\n");
  return result;
}

int dfindaTest() {
  int result = 0, i = 0;
  double goodArray[5] = {0.,2.,3.,5.,10.};
  double badArray[5] = {0.,0.,0.,0.,0.};
  double res[4] = {1.,2.,3.,4.};
  double *outGood = NULL, *outBad = NULL;

  printf(">> Double \n");
  outGood = dfinda(goodArray, 5);
  outBad = dfinda(badArray, 5);
  
  for (i=0;i<4;i++){
  	if ( outGood[i] != res[i]) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    result = ERROR;
      }
	else
    	  printf("%f  ",outGood[i]);
  }
  
  printf("\n");
  
  if (outBad!=NULL) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("%f  ",outGood[i]);
    
  printf("\n");
  return result;
}

int cfindaTest() {
  int result = 0, i = 0;
  floatComplex goodArray[5]; 
  floatComplex badArray[5]; 
  float res[4] = {1.,2.,3.,4.};
  float *outGood = NULL, *outBad = NULL;
 
  /* Good values in goodArray */ 
  goodArray[0] = FloatComplex(0., 0.); 
  goodArray[1] = FloatComplex(0., 2.); 
  goodArray[2] = FloatComplex(3., 50.); 
  goodArray[3] = FloatComplex(5., 10.); 
  goodArray[4] = FloatComplex(10., -10.); 
  /* Bad values in badArray */ 
  badArray[0] = FloatComplex(0., 0.); 
  badArray[1] = FloatComplex(0., 0.); 
  badArray[2] = FloatComplex(0., 0.); 
  badArray[3] = FloatComplex(0., 0.); 
  badArray[4] = FloatComplex(0., 0.);
  
  printf(">> Float Complex \n");
  outGood = cfinda(goodArray, 5);
  outBad = cfinda(badArray, 5);
  
  for (i=0;i<4;i++){
  	if ( outGood[i] != res[i]) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    result = ERROR;
      }
	else
    	  printf("%f  ",outGood[i]);
  }
  
  printf("\n");
  
  if (outBad!=NULL) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("%f  ",outGood[i]);
    
  printf("\n");
  return result;
}

int zfindaTest() {
  int result = 0, i = 0;
  doubleComplex goodArray[5]; 
  doubleComplex badArray[5]; 
  double res[4] = {1.,2.,3.,4.};
  double *outGood = NULL, *outBad = NULL;
  /* Good values in goodArray */ 
  goodArray[0] = DoubleComplex(0., 0.); 
  goodArray[1] = DoubleComplex(0., 2.); 
  goodArray[2] = DoubleComplex(3., 50.); 
  goodArray[3] = DoubleComplex(5., 10.); 
  goodArray[4] = DoubleComplex(10., -10.); 
  /* Bad values in badArray */ 
  badArray[0] = DoubleComplex(0., 0.); 
  badArray[1] = DoubleComplex(0., 0.); 
  badArray[2] = DoubleComplex(0., 0.); 
  badArray[3] = DoubleComplex(0., 0.); 
  badArray[4] = DoubleComplex(0., 0.);
 
  
  printf(">> Float Complex \n");
  outGood = zfinda(goodArray, 5);
  outBad = zfinda(badArray, 5);
  
  for (i=0;i<4;i++){
  	if ( outGood[i] != res[i]) {
    printf("ERROR ! : Test Failed (non empty array)\n");
    result = ERROR;
      }
	else
    	  printf("%f  ",outGood[i]);
  }
  
  printf("\n");
  
  if (outBad!=NULL) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("%f  ",outGood[i]);
    
  printf("\n");
  return result;
}

int testFind() {
  int sfindaStatus, dfindaStatus = 0;
  int cfindaStatus, zfindaStatus = 0;

  printf(">>>> Find Tests\n");
  sfindaStatus = sfindaTest();
  dfindaStatus = dfindaTest();
  cfindaStatus = cfindaTest();
  zfindaStatus = zfindaTest();

  return (sfindaStatus + dfindaStatus +
	  cfindaStatus + zfindaStatus);
}

int main(void) {
  assert(testFind() == 0);
  return 0;
}
