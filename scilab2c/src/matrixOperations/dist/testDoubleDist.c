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
 
 
#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "dist.h"

static void ddistsTest(void){
}

static void ddistaTest(void){
}

static void zdistsTest(void){
}

static void zdistaTest(void){
}

static int distTest(void){
	ddistsTest();
	ddistaTest();
	zdistsTest();
	zdistaTest();
	return 0;
}

int main(void){
	assert(distTest()==0);
	return 0;
}
