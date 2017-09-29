 /* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Sandeep Gupta
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */
#ifndef __NORM_H__
#define __NORM_H__


#ifdef  __cplusplus
extern "C" {
#endif

double dnormv (double *in, int size, int norm);

double dnorma (double *in, int row, int col, int norm);

float snormv (float *in, int size, int norm);

float snorma (float *in, int row, int col, int norm);

#ifdef  __cplusplus 
} /* extern "C" */
#endif

#endif /*__NORM_H__*/
