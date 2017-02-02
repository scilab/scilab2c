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
#ifndef __SCHUR_H__
#define __SCHUR_H__


#ifdef  __cplusplus
extern "C" {
#endif

double dschura(double* in1, int size, int flag, int nout, double* out1, \
		double* out2);

double dgschura(double* in1, int size, double* in2, int flag, int nout, \
			double* out1, double* out2, double* out3, double* out4);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__SCHUR_H__*/
