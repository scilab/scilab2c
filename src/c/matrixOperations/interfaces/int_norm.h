 /* Copyright (C) 2016 - IIT Bombay - FOSSEE

 This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Siddhesh Wani
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
 */

#ifndef __INT_NORM_H__
#define __INT_NORM_H__

#include "statMax.h"

#ifdef  __cplusplus
extern "C" {
#endif

#define d0normd0(in) 	in
#define s0norms0(in) 	in

#define d2normd0(in,size,out)  ((size[0] == 1) || (size[1]==1))? \
					dnormv(in, size[0]*size[1], 2): \
					dnorma(in, size[0], size[1], 2)

#define s2norms0(in,size,out)  ((size[0] == 1) || (size[1]==1))? \
					snormv(in, size[0]*size[1], 2): \
					snorma(in, size[0], size[1], 2)

#define d2d0normd0(in,size,norm) ((size[0] == 1) || (size[1]==1))? \
					dnormv(in,size[0]*size[1],norm) : \
					dnorma(in,size[0],size[1],norm)

#define s2s0norms0(in,size,norm) ((size[0] == 1) || (size[1]==1))? \
					snormv(in,size[0]*size[1],norm) : \
					snorma(in,size[0],size[1],norm)

#define d2g2normd0(in,size,norm,normsize) ((size[0] == 1) || (size[1]==1))? \
					(norm[0]=='i') ? dmaxa(in,size[0]*size[1]) : dnormv(in,size[0]*size[1],2) : \
					(norm[0]=='i') ? dnorma(in,size[0],size[1],3) : dnorma(in,size[0],size[1],4)

#define s2g2norms0(in,size,norm,normsize) ((size[0] == 1) || (size[1]==1))? \
					(norm[0]=='i') ? smaxa(in,size[0]*size[1]) : snormv(in,size[0]*size[1],2) : \
					(norm[0]=='i') ? snorma(in,size[0],size[1],3) : snorma(in,size[0],size[1],4)

#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_NORM_H__*/
