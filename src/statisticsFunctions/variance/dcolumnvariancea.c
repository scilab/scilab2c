/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "variance.h"

void dcolumnvariancea(double *in, int lines, int columns, double* out){
    
    int i = 0 ;
    int j = 0 ;
    
    double* transp = (double*) malloc ( sizeof (double) *(unsigned int) (lines*columns));
    
    
    for ( i = 0; i < 5 ; i++){
    	for ( j = 0; j < 4 ; j++)
    		printf("%f   ",in[i+j*lines]);
    	printf("\n");
    }
    
    
    dtransposea ( in , lines , columns , transp ) ;
    
    
    for ( i = 0; i < 4 ; i++){
    	for ( j = 0; j < 5 ; j++)
    		printf("%f   ",transp[i+j*columns]);
    	printf("\n");
    }
    
    for ( i = 0; i < lines ; i++)
    out[i] = dvariancea ( transp + i*columns , columns ) ;
    

    free (transp);
}

