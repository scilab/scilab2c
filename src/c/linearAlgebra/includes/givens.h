 /* Copyright (C) 2017 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Sandeep Gupta
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __GIVENS_H__
#define __GIVENS_H__

#ifdef  __cplusplus
extern "C" {
#endif

void dgivensa(int ninp,double *inp1,int row,int col,double *inp2,int row1,int col1,int nout,double *out1,double *out2);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__givens_H__*/
