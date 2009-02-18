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
#include "spec.h"

void zlogma (doubleComplex* in, int rows, doubleComplex* out){

	/* Algo : */
	/* trouver les valeurs propres vp */
	/* en déduire les vecteurs propres Vp */
	/* utiliser la formule suivante
	*	logm = Vp * diag(log(diag(vp)) * inv(Vp) */
	
	
	int i = 0,j = 0;
	doubleComplex *eigenvalues, *eigenvectors, *tmp;
	int hermitienne = 0;
		
	
	/* Data initialization */
	eigenvalues = malloc((uint)(rows*rows)*sizeof(doubleComplex));
	eigenvectors = malloc((uint)(rows*rows)*sizeof(doubleComplex));
	tmp = malloc((uint)(rows*rows)*sizeof(doubleComplex));
	
	
	
	
	
	/* regarde si in est hermitienne */
	for (i=0;i<rows;i++){
		for(j=0;j<rows;j++)
			if ( (zreals(in[i+j*rows])!=zreals(in[j+i*rows])) ||  
			     (zimags(in[i+j*rows])!=zimags(in[j+i*rows])) )  break;
		if (j!=rows) break;
	}
	if ((i==rows) && (j==rows)) hermitienne=1;
		
	/* trouver les valeurs propres vp ainsi que les vecteurs propres*/
	zspec2a(in,rows,eigenvalues,eigenvectors);


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
	

	free(eigenvalues);
	free(eigenvectors);		
	free(tmp);

}
