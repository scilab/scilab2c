 /*This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Brijesh Gupta C R
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/

#ifndef __INT_NANMIN_H__
#define __INT_NANMIN_H__

#ifdef  __cplusplus
extern "C" {
#endif


#define d2nanmind0d2(in1, size, pos)                            dnanmina(in1,size[0], size[1], pos)
#define d2nanmind0(in1, size)                            	dnanminnpa(in1,size[0], size[1])
#define d0nanmind0d2(in1, pos)					dnanmins(in1, pos)
#define d0nanmind0(in1)						dnanminnps(in1)


#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_NANMIN_H__*/
