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
#include "conj.h"

void zlogma (doubleComplex* in, int rows, doubleComplex* out){

	/* Algo : */
	/* trouver les valeurs propres vp */
	/* en déduire les vecteurs propres Vp */
	/* utiliser la formule suivante
	*	logm = Vp * diag(log(diag(vp)) * inv(Vp) */
	
	
	int i;
	doubleComplex *eigenvalues, *eigenvectors, *tmp;
	int hermitienne = 0;
	int info = 0; /* Used by LAPACK */
	int iWorkSize = 0; /* Used by LAPACK */
	doubleComplex *pdblWork = NULL; /* Used by LAPACK */
	doubleComplex *pdblRWork = NULL; /* Used by LAPACK */
	doubleComplex * pdblLeftvectors = NULL; /* Used by LAPACK */
	
	
	
	
	/* Data initialization */
	eigenvalues = malloc((uint)(rows*rows)*sizeof(doubleComplex));
	eigenvectors = malloc((uint)(rows*rows)*sizeof(doubleComplex));
	tmp = malloc((uint)(rows*rows)*sizeof(doubleComplex));
	iWorkSize = max(1,2*rows);
	pdblWork = malloc((uint)(iWorkSize)*sizeof(doubleComplex));
	pdblRWork = malloc((uint)(2*rows)*sizeof(doubleComplex));
	

	/* Copy in in inCopy */
	for (i=0;i<rows*rows;i++)
		out[i] = in[i];

	
	
	
	
	/* regarde si in est hermitienne */
	ztransposea(in,rows,rows,tmp);
	zconja(tmp,rows*rows,tmp);
	for (i=0;i<rows*rows;i++){
		if  (  (zreals(in[i])!=zreals(tmp[i])) || (zimags(in[i])!=zimags(tmp[i])) ) break;
	}
	if (i==rows*rows) hermitienne = 1;
		
	/* trouver les valeurs propres vp ainsi que les vecteurs propres*/
	if (hermitienne){
	printf("wazaaaaaaa\n");
		C2F(zheev)( "V", "U", &rows, out, &rows, eigenvalues,
			    pdblWork, &iWorkSize, pdblRWork, &info );
		/* stocker les valeurs propres comme il faut parce qu'elle sont mal rangées
		   une fois sorties de zheev*/
		for(i=rows-1;i>=0;i--) {
			/* on le fait en descendant sinon on écrase l'element 0 alors qu'il doit etre réutilisé
				---> erreur */
			if ( ((i+i*rows)/rows)%2 == 0)
				eigenvalues[i*rows+i] = DoubleComplex(zreals(eigenvalues[(i*rows+i)/(2*rows)]),0);
			else 	eigenvalues[i*rows+i] = DoubleComplex(zimags(eigenvalues[(i*rows+i)/(2*rows)]),0);
		}
		for (i=1;i<rows;i++) eigenvalues[i]=DoubleComplex(0,0);
		eigenvectors = out;

	}
	else {	
	printf("passe\n");
		C2F(zgeev)( "N", "V", &rows, out, &rows, eigenvalues, 
			    pdblLeftvectors, &rows, eigenvectors, &rows, pdblWork, &iWorkSize,
			    pdblRWork, &info );
		for(i=0;i<rows;i++) {
			eigenvalues[i*rows+i] = eigenvalues[i];
			if ((i*rows+i)!=i) eigenvalues[i] = DoubleComplex(0,0);
		}
	}


	/* utiliser la formule suivante
	*	logm = Vp * diag(log(diag(vp)) * inv(Vp) */
	
	
	/* diag(log(diag(vp)) */
	for (i=0;i<rows*rows;i++){
		if ((i%(rows+1))==0) /* teste si i est sur la diagonale */
			eigenvalues[i] = zlogs(eigenvalues[i]);
		else    eigenvalues[i] = DoubleComplex(0,0);
	}
	
	/* Vp * diag(log(diag(vp)) */
	zmulma(eigenvectors, rows, rows, eigenvalues, rows, rows, tmp);
	
	/* Vp' ou inv(Vp) */
	if (hermitienne) {
		/* we use eigenvalues as a temporary matrix cause it's useless now*/
		ztransposea(eigenvectors,rows,rows,eigenvalues);
		zconja(eigenvalues,rows*rows,eigenvectors);
	}
	else	zinverma(eigenvectors, eigenvectors, rows);
	
	/* Vp * diag(log(diag(vp))*inv(Vp) */
	zmulma(tmp, rows, rows, eigenvectors, rows, rows, out);
	
	
	/* FIXME : pb with eigenvectors */
	eigenvectors=NULL;
	free(eigenvalues);
	free(eigenvectors);		
	free(tmp);
	free(pdblWork);
	free(pdblRWork);

}
