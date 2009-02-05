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
#include <malloc.h>
#include "lapack.h"
#include "logm.h"
#include "log.h"
#include "matrixMultiplication.h"
#include "matrixTranspose.h"
#include "matrixInversion.h"
#include "max.h"

void zlogma (doubleComplex* in, int size, doubleComplex* out){

	/* Algo : */
	/* trouver les valeurs propres vp */
	/* en déduire les vecteurs propres Vp */
	/* utiliser la formule suivante
	*	logm = Vp * diag(log(diag(vp)) * inv(Vp) */
	
	
	int i;
	doubleComplex *eigenvalues, *eigenvectors, *tmp;
	int symetrique = 0;
	int info = 0; /* Used by LAPACK */
	int iWorkSize = 0; /* Used by LAPACK */
	doubleComplex *pdblWork = NULL; /* Used by LAPACK */
	doubleComplex *pdblRWork = NULL; /* Used by LAPACK */
	doubleComplex * pdblLeftvectors = NULL; /* Used by LAPACK */
	doubleComplex * inCopy = NULL; /* Used by LAPACK */
	
	
	
	
	/* Data initialization */
	eigenvalues = malloc((uint)(size*size)*sizeof(doubleComplex));
	eigenvectors = malloc((uint)(size*size)*sizeof(doubleComplex));
	tmp = malloc((uint)(size*size)*sizeof(doubleComplex));
	iWorkSize = max(1,2*size);
	pdblWork = malloc((uint)(iWorkSize)*sizeof(doubleComplex));
	pdblRWork = malloc((uint)(2*size)*sizeof(doubleComplex));
	inCopy = malloc((uint)(size*size)*sizeof(doubleComplex));
	
	/* Copy in in inCopy */
	for (i=0;i<size*size;i++)
		inCopy[i] = in[i];

	
	
	
	
	/* regarde si in est symetrique */
	ztransposea(in,size,size,tmp);
	for (i=0;i<size*size;i++){
		if  (  (zreals(in[i])!=zreals(tmp[i])) || (zimags(in[i])!=zimags(tmp[i])) ) break;
	}
	if (i==size*size) symetrique = 1;
		
	/* trouver les valeurs propres vp ainsi que les vecteurs propres*/
	if (symetrique){
		C2F(zheev)( "V", "U", &size, inCopy, &size, eigenvalues,
			    pdblWork, &iWorkSize, pdblRWork, &info );
		eigenvectors = inCopy;
	}
	else {	
		C2F(zgeev)( "N", "V", &size, inCopy, &size, eigenvalues, 
			    pdblLeftvectors, &size, eigenvectors, &size, pdblWork, &iWorkSize,
			    pdblRWork, &info );
		for(i=0;i<size;i++) {
			eigenvalues[i*size+i] = eigenvalues[i];
			if ((i*size+i)!=i) eigenvalues[i] = DoubleComplex(0,0);
		}
	}


	/* utiliser la formule suivante
	*	logm = Vp * diag(log(diag(vp)) * inv(Vp) */
	
	
	/* diag(log(diag(vp)) */
	for (i=0;i<size*size;i++){
		if ((i%(size+1))==0) /* teste si i est sur la diagonale */
			eigenvalues[i] = zlogs(eigenvalues[i]);
		else    eigenvalues[i] = DoubleComplex(0,0);
	}
	
	/* Vp * diag(log(diag(vp)) */
	zmulma(eigenvectors, size, size, eigenvalues, size, size, tmp);
	
	/* inv(Vp) */
	zinverma(eigenvectors, eigenvectors, size);
	
	/* Vp * diag(log(diag(vp))*inv(Vp) */
	zmulma(tmp, size, size, eigenvectors, size, size, out);
	
	
	free(eigenvalues);
	free(eigenvectors);
	free(tmp);
	free(pdblWork);
	free(pdblRWork);
	free(inCopy);
	

}
