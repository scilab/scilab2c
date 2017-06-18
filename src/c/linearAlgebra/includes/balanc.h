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
#ifndef __BALANC_H__
#define __BALANC_H__


#ifdef  __cplusplus
extern "C" {
#endif

void dbalanca(double* in1, int rows, double* in2, double* out1, \
		double* out2, double* out3, double* out4);	

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__BALANC_H__*/
