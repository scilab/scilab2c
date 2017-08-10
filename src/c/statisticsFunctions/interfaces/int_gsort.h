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

#ifndef __INT_GSORT_H__
#define __INT_GSORT_H__


#ifdef  __cplusplus
extern "C" {
#endif

#define d2gsortd2(in1, size, out)                                       dgsorta(in1, size[0]* size[1], 'd', out)
#define d2g2gsortd2(in1, size1, in2, size2, out)                        (in2[0]== 'r') ? dgsortrowa(in1, size1[0], size1[1],'d', out) :dgsortcola(in1, size1[0], size1[1],'d', out)
#define d2g2g2gsortd2(in1, size1, in2, size2, in3, size3, out)          (in2[0]== 'r') ? dgsortrowa(in1, size1[0], size1[1],in3[0], out) :dgsortcola(in1, size1[0], size1[1],in3[0], out)

#define s2gsorts2(in1, size, out)                                       sgsorta(in1, size[0]* size[1], 'd', out)
#define s2g2gsorts2(in1, size1, in2, size2, out)                        (in2[0]== 'r') ? sgsortrowa(in1, size1[0], size1[1],'d', out) :sgsortcola(in1, size1[0], size1[1],'d', out)
#define s2g2g2gsorts2(in1, size1, in2, size2, in3, size3, out)          (in2[0]== 'r') ? sgsortrowa(in1, size1[0], size1[1],in3[0], out) :sgsortcola(in1, size1[0], size1[1],in3[0], out)

#define u162gsortu162(in1, size, out)                                       u16gsorta(in1, size[0]* size[1], 'd', out)
#define u162g2gsortu162(in1, size1, in2, size2, out)                        (in2[0]== 'r') ? u16gsortrowa(in1, size1[0], size1[1],'d', out) :u16gsortcola(in1, size1[0], size1[1],'d', out)
#define u162g2g2gsortu162(in1, size1, in2, size2, in3, size3, out)          (in2[0]== 'r') ? u16gsortrowa(in1, size1[0], size1[1],in3[0], out) :u16gsortcola(in1, size1[0], size1[1],in3[0], out)

#define z2gsortz2(in1, size, out)                                       zgsorta(in1, size[0]* size[1], 'd', out)
#define z2g2gsortz2(in1, size1, in2, size2, out)                        (in2[0]== 'r') ? zgsortrowa(in1, size1[0], size1[1],'d', out) :zgsortcola(in1, size1[0], size1[1],'d', out)
#define z2g2g2gsortz2(in1, size1, in2, size2, in3, size3, out)          (in2[0]== 'r') ? zgsortrowa(in1, size1[0], size1[1],in3[0], out) :zgsortcola(in1, size1[0], size1[1],in3[0], out)



#ifdef  __cplusplus
} /* extern "C" */
#endif

#endif /*__INT_GSORT_H__*/
