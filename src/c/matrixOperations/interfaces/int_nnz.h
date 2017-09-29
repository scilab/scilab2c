/* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_NNZ_H__
#define __INT_NNZ_H__


#ifdef  __cplusplus
extern "C" {
#endif

#define d2nnzu160(in1, size)     dnnza(in1, size[0], size[1])
#define d0nnzu160(in)            dnnzs(in)

#define s2nnzu160(in1, size)     snnza(in1, size[0], size[1])
#define s0nnzu160(in)            snnzs(in)

#define z2nnzu160(in1, size)     znnza(in1, size[0], size[1])
#define z0nnzu160(in)            znnzs(in)


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_NNZ_H__*/
