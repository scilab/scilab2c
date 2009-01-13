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

#include "testFind2d.h"
#include <stdio.h>

int sfind2daTest() {
  int result = 0, i = 0;
  float goodArray[6] = {0.,2.,3.,0.,5.,10.};
  float badArray[6] = {0.,0.,0.,0.,0.,0.};
  float out1_1_6[4] = {0.,0.,0.,0.};
  float out1_2_3[4] = {0.,0.,1.,1.};
  float out1_3_2[4] = {0.,1.,2.,2.};
  float out1_6_1[4] = {1.,2.,4.,5.};
  float out2_1_6[4] = {1.,2.,4.,5.};
  float out2_2_3[4] = {1.,2.,1.,2.};
  float out2_3_2[4] = {1.,0.,0.,1.};
  float out2_6_1[4] = {0.,0.,0.,0.};
  float *out1Good = NULL, *out1Bad = NULL, *out2Good = NULL, *out2Bad = NULL;

  printf(">> Floats \n");
  
  /* Test tab 1 ligne 6 colonnes */
  sfind2da(goodArray, 1, 6, &out1Good, &out2Good);
  sfind2da(badArray, 1, 6, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_1_6[i]) || (out2Good[i] != out2_1_6[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
   /* Test tab 2 lignes 3 colonnes */
  out1Good = NULL;
  out1Bad = NULL; 
  out2Good = NULL; 
  out2Bad = NULL;
  sfind2da(goodArray, 2, 3, &out1Good, &out2Good);
  sfind2da(badArray, 2, 3, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_2_3[i]) || (out2Good[i] != out2_2_3[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
   /* Test tab 3 lignes 2 colonnes */
  out1Good = NULL;
  out1Bad = NULL; 
  out2Good = NULL; 
  out2Bad = NULL;
  sfind2da(goodArray, 3, 2, &out1Good, &out2Good);
  sfind2da(badArray, 3, 2, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_3_2[i]) || (out2Good[i] != out2_3_2[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
   /* Test tab 6 lignes 1 colonne */
  out1Good = NULL;
  out1Bad = NULL; 
  out2Good = NULL; 
  out2Bad = NULL;
  sfind2da(goodArray, 6, 1, &out1Good, &out2Good);
  sfind2da(badArray, 6, 1, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_6_1[i]) || (out2Good[i] != out2_6_1[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
  
  return result;
}

int dfind2daTest() {
  int result = 0, i = 0;
  double goodArray[6] = {0.,2.,3.,0.,5.,10.};
  double badArray[6] = {0.,0.,0.,0.,0.,0.};
  double out1_1_6[4] = {0.,0.,0.,0.};
  double out1_2_3[4] = {0.,0.,1.,1.};
  double out1_3_2[4] = {0.,1.,2.,2.};
  double out1_6_1[4] = {1.,2.,4.,5.};
  double out2_1_6[4] = {1.,2.,4.,5.};
  double out2_2_3[4] = {1.,2.,1.,2.};
  double out2_3_2[4] = {1.,0.,0.,1.};
  double out2_6_1[4] = {0.,0.,0.,0.};
  double *out1Good = NULL, *out1Bad = NULL, *out2Good = NULL, *out2Bad = NULL;

  printf(">> Double \n");
  
  /* Test tab 1 ligne 6 colonnes */
  dfind2da(goodArray, 1, 6, &out1Good, &out2Good);
  dfind2da(badArray, 1, 6, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_1_6[i]) || (out2Good[i] != out2_1_6[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
   /* Test tab 2 lignes 3 colonnes */
  out1Good = NULL;
  out1Bad = NULL; 
  out2Good = NULL; 
  out2Bad = NULL;
  dfind2da(goodArray, 2, 3, &out1Good, &out2Good);
  dfind2da(badArray, 2, 3, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_2_3[i]) || (out2Good[i] != out2_2_3[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
   /* Test tab 3 lignes 2 colonnes */
  out1Good = NULL;
  out1Bad = NULL; 
  out2Good = NULL; 
  out2Bad = NULL;
  dfind2da(goodArray, 3, 2, &out1Good, &out2Good);
  dfind2da(badArray, 3, 2, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_3_2[i]) || (out2Good[i] != out2_3_2[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
   /* Test tab 6 lignes 1 colonne */
  out1Good = NULL;
  out1Bad = NULL; 
  out2Good = NULL; 
  out2Bad = NULL;
  dfind2da(goodArray, 6, 1, &out1Good, &out2Good);
  dfind2da(badArray, 6, 1, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_6_1[i]) || (out2Good[i] != out2_6_1[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
  
  return result;
}

int cfind2daTest() {
  int result = 0, i = 0;
  floatComplex goodArray[6]; 
  floatComplex badArray[6]; 
  float out1_1_6[4] = {0.,0.,0.,0.};
  float out1_2_3[4] = {0.,0.,1.,1.};
  float out1_3_2[4] = {0.,1.,2.,2.};
  float out1_6_1[4] = {1.,2.,4.,5.};
  float out2_1_6[4] = {1.,2.,4.,5.};
  float out2_2_3[4] = {1.,2.,1.,2.};
  float out2_3_2[4] = {1.,0.,0.,1.};
  float out2_6_1[4] = {0.,0.,0.,0.};
  float *out1Good = NULL, *out1Bad = NULL, *out2Good = NULL, *out2Bad = NULL;
 
   /* Good values in goodArray */ 
  goodArray[0] = FloatComplex(0., 0.); 
  goodArray[1] = FloatComplex(0., 2.); 
  goodArray[2] = FloatComplex(3., 50.); 
  goodArray[3] = FloatComplex(0., 0.); 
  goodArray[4] = FloatComplex(5., 10.); 
  goodArray[5] = FloatComplex(10., -10.); 
  /* Bad values in badArray  */ 
  badArray[0] = FloatComplex(0., 0.); 
  badArray[1] = FloatComplex(0., 0.); 
  badArray[2] = FloatComplex(0., 0.); 
  badArray[3] = FloatComplex(0., 0.); 
  badArray[4] = FloatComplex(0., 0.);
  badArray[5] = FloatComplex(0., 0.); 
  
  printf(">> Float Complex \n");
   
  /* Test tab 1 ligne 6 colonnes */
  cfind2da(goodArray, 1, 6, &out1Good, &out2Good);
  cfind2da(badArray, 1, 6, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_1_6[i]) || (out2Good[i] != out2_1_6[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
   /* Test tab 2 lignes 3 colonnes */
  out1Good = NULL;
  out1Bad = NULL; 
  out2Good = NULL; 
  out2Bad = NULL;
  cfind2da(goodArray, 2, 3, &out1Good, &out2Good);
  cfind2da(badArray, 2, 3, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_2_3[i]) || (out2Good[i] != out2_2_3[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
   /* Test tab 3 lignes 2 colonnes */
  out1Good = NULL;
  out1Bad = NULL; 
  out2Good = NULL; 
  out2Bad = NULL;
  cfind2da(goodArray, 3, 2, &out1Good, &out2Good);
  cfind2da(badArray, 3, 2, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_3_2[i]) || (out2Good[i] != out2_3_2[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
   /* Test tab 6 lignes 1 colonne */
  out1Good = NULL;
  out1Bad = NULL; 
  out2Good = NULL; 
  out2Bad = NULL;
  cfind2da(goodArray, 6, 1, &out1Good, &out2Good);
  cfind2da(badArray, 6, 1, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_6_1[i]) || (out2Good[i] != out2_6_1[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
  
  return result;
}

int zfind2daTest() {
  int result = 0, i = 0;
  doubleComplex goodArray[6]; 
  doubleComplex badArray[6]; 
  double out1_1_6[4] = {0.,0.,0.,0.};
  double out1_2_3[4] = {0.,0.,1.,1.};
  double out1_3_2[4] = {0.,1.,2.,2.};
  double out1_6_1[4] = {1.,2.,4.,5.};
  double out2_1_6[4] = {1.,2.,4.,5.};
  double out2_2_3[4] = {1.,2.,1.,2.};
  double out2_3_2[4] = {1.,0.,0.,1.};
  double out2_6_1[4] = {0.,0.,0.,0.};
  double *out1Good = NULL, *out1Bad = NULL, *out2Good = NULL, *out2Bad = NULL;
  
  
  /* Good values in goodArray */
  goodArray[0] = DoubleComplex(0., 0.); 
  goodArray[1] = DoubleComplex(0., 2.); 
  goodArray[2] = DoubleComplex(3., 50.);
  goodArray[3] = DoubleComplex(0., 0.); 
  goodArray[4] = DoubleComplex(5., 10.); 
  goodArray[5] = DoubleComplex(10., -10.); 
  /* Bad values in badArray */
  badArray[0] = DoubleComplex(0., 0.); 
  badArray[1] = DoubleComplex(0., 0.); 
  badArray[2] = DoubleComplex(0., 0.); 
  badArray[3] = DoubleComplex(0., 0.); 
  badArray[4] = DoubleComplex(0., 0.); 
  badArray[5] = DoubleComplex(0., 0.);
 
  
  printf(">> Double Complex \n");
  
  /* Test tab 1 ligne 6 colonnes */
  zfind2da(goodArray, 1, 6, &out1Good, &out2Good);
  zfind2da(badArray, 1, 6, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_1_6[i]) || (out2Good[i] != out2_1_6[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
   /* Test tab 2 lignes 3 colonnes */
  out1Good = NULL;
  out1Bad = NULL; 
  out2Good = NULL; 
  out2Bad = NULL;
  zfind2da(goodArray, 2, 3, &out1Good, &out2Good);
  zfind2da(badArray, 2, 3, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_2_3[i]) || (out2Good[i] != out2_2_3[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
   /* Test tab 3 lignes 2 colonnes */
  out1Good = NULL;
  out1Bad = NULL; 
  out2Good = NULL; 
  out2Bad = NULL;
  zfind2da(goodArray, 3, 2, &out1Good, &out2Good);
  zfind2da(badArray, 3, 2, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_3_2[i]) || (out2Good[i] != out2_3_2[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
   /* Test tab 6 lignes 1 colonne */
  out1Good = NULL;
  out1Bad = NULL; 
  out2Good = NULL; 
  out2Bad = NULL;
  zfind2da(goodArray, 6, 1, &out1Good, &out2Good);
  zfind2da(badArray, 6, 1, &out1Bad, &out2Bad);
  
  for (i=0;i<4;i++){
  	if ( (out1Good[i] != out1_6_1[i]) || (out2Good[i] != out2_6_1[i]) ) {
	    printf("ERROR ! : Test Failed (non empty array)\n");
	    result = ERROR;
      }
      else 
     	    printf("(%f-%f)  ",out1Good[i],out2Good[i]);
  }
  
  printf("\n");
  
  if ((out1Bad!=NULL) || (out2Bad!=NULL) ) {
    printf("ERROR ! : Test Failed (empty array)\n");
    result = ERROR;
  }
  else
     printf("pointeur NULL \n ");
    
  printf("\n");
  
  
  return result;
}

int testFind2d() {
  int sfind2daStatus, dfind2daStatus = 0;
  int cfind2daStatus, zfind2daStatus = 0;

  printf(">>>> Find2d Tests\n");
  sfind2daStatus = sfind2daTest();
  dfind2daStatus = dfind2daTest();
  cfind2daStatus = cfind2daTest();
  zfind2daStatus = zfind2daTest();

  return (sfind2daStatus + dfind2daStatus +
	  cfind2daStatus + zfind2daStatus);
}

int main(void) {
  assert(testFind2d() == 0);
  return 0;
}
