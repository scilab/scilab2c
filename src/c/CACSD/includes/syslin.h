/* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/
 
#ifndef __SYSLIN_H__
#define __SYSLIN_H__

#include <stdlib.h>

#ifdef  __cplusplus
extern "C" {
#endif


void dsyslina(char* dom, double* A, int no_of_states, double* B, int no_of_inputs, \
	double* C, int no_of_outputs, double* D, double* X0, double* out);


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__SYSLIN_H__*/