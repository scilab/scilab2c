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

#ifndef __INT_KALM_H__
#define __INT_KALM_H__

#define d2d2d2d2d2d2d2d2kalmd2d2d2d2(in1, size1, in2, size2, in3, size3, in4, size4, in5, size5, in6, size6, in7, size7, in8, size8, out1, out2, out3, out4) \
			      dkalma(in1, size1[0], size1[1],in2, size2[0], size2[1],in3, size3[0], size3[1],in4, size4[0], size4[1],in5, size5[0], size5[1] ,\
					in6, size6[0], size6[1],in7, size7[0], size7[1],in8, size8[0], size8[1], out1, out2, out3, out4)


#define z2z2z2z2z2z2z2z2kalmz2z2z2z2(in1, size1, in2, size2, in3, size3, in4, size4, in5, size5, in6, size6, in7, size7, in8, size8, out1, out2, out3, out4) \
			      zkalma(in1, size1[0], size1[1],in2, size2[0], size2[1],in3, size3[0], size3[1],in4, size4[0], size4[1],in5, size5[0], size5[1] ,\
					in6, size6[0], size6[1],in7, size7[0], size7[1],in8, size8[0], size8[1], out1, out2, out3, out4)

#endif /* !INT_KALM_H__! */
