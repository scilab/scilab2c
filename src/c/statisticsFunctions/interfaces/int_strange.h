 /*This file must be used under the terms of the CeCILL.
 This source file is licensed as described in the file COPYING, which
 you should have received as part of this distribution.  The terms
 are also available at
 http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 Author: Abhinav Dronamraju
 Organization: FOSSEE, IIT Bombay
 Email: toolbox@scilab.in
*/



#ifndef __INT_STRANGE_H__
#define __INT_STRANGE_H__

#define d2stranged0(in1, size)                            dstrangea(in1,size[0]* size[1])
#define d2g2stranged2(in1, size1, in2, size2, out)        (in2[0]=='r') ? dstrangerowa(in1, size1[0], size1[1], out) : dstrangecola(in1, size1[0] , size1[1], out)

#define s2stranges0(in1, size)                            sstrangea(in1,size[0]* size[1])
#define s2g2stranges2(in1, size1, in2, size2, out)        (in2[0]=='r') ? sstrangerowa(in1, size1[0], size1[1], out) : sstrangecola(in1, size1[0] , size1[1], out)

#define u162strangeu160(in1, size)                            u16strangea(in1,size[0]* size[1])
#define u162g2strangeu162(in1, size1, in2, size2, out)        (in2[0]=='r') ? u16strangerowa(in1, size1[0], size1[1], out) : u16strangecola(in1, size1[0] , size1[1], out)


#endif
