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

#ifndef __INT_MVCORREL_H__
#define __INT_MVCORREL_H__


#ifdef  __cplusplus
extern "C" {
#endif

#define d2mvcorreld2(in1, size, out)                             dmvcorrela(in1, size[0] ,size[1], out)


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_MVCORREL_H__*/
