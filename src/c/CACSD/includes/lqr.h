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
#ifndef __LQR_H__
#define __LQR_H__


#ifdef  __cplusplus
extern "C" {
#endif

void dlqra(double* sys, int sys_rows, int sys_cols, double* X, double* K);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__LQR_H__*/
