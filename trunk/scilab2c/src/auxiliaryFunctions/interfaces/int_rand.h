/*
 * Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 * Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 * 
 * This file must be used under the terms of the CeCILL.
 * This source file is licensed as described in the file COPYING, which
 * you should have received as part of this distribution.  The terms
 * are also available at    
 * http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */
/* ADDED BY NUTRICATO, BUT WAITING FOR THE AUTOMATIC GENERATION OF IT 
   AS SHOWN BELOW MANY CASES ARE MISSING. SCALAR RANDOM GENERATOR NOT
   IMPLEMENTED YET, SEE DRANDS.C
*/

#ifndef __INT_RAND_H__
#define __INT_RAND_H__
/*
PrintStringInfo('NIN=          0',ClassFileName,'file','y');
PrintStringInfo('NOUT=         1',ClassFileName,'file','y');
PrintStringInfo('OUT(1).TP=    FA_TP_USER',ClassFileName,'file','y');
PrintStringInfo('OUT(1).SZ(1)= ''1''',ClassFileName,'file','y');
PrintStringInfo('OUT(1).SZ(2)= ''1''',ClassFileName,'file','y');

PrintStringInfo('NIN=          1',ClassFileName,'file','y');
PrintStringInfo('NOUT=         1',ClassFileName,'file','y');
PrintStringInfo('OUT(1).TP=    FA_TP_USER',ClassFileName,'file','y');
PrintStringInfo('OUT(1).SZ(1)= FA_SZ_1(IN(1).SZ)',ClassFileName,'file','y');
PrintStringInfo('OUT(1).SZ(2)= FA_SZ_2(IN(1).SZ)',ClassFileName,'file','y');

PrintStringInfo('NIN=          2',ClassFileName,'file','y');
PrintStringInfo('NOUT=         1',ClassFileName,'file','y');
PrintStringInfo('OUT(1).TP=    FA_TP_USER',ClassFileName,'file','y');
PrintStringInfo('OUT(1).SZ(1)= IN(1).VAL',ClassFileName,'file','y');
PrintStringInfo('OUT(1).SZ(2)= IN(2).VAL',ClassFileName,'file','y');


PrintStringInfo(ArgSeparator+'s0',ClassFileName,'file','y');
PrintStringInfo(ArgSeparator+'d0',ClassFileName,'file','y');

PrintStringInfo('s0'+ArgSeparator+'s0',ClassFileName,'file','y');
PrintStringInfo('s0'+ArgSeparator+'d0',ClassFileName,'file','y');
PrintStringInfo('d0'+ArgSeparator+'s0',ClassFileName,'file','y');
PrintStringInfo('d0'+ArgSeparator+'d0',ClassFileName,'file','y');
PrintStringInfo('s2'+ArgSeparator+'s2',ClassFileName,'file','y');
PrintStringInfo('s2'+ArgSeparator+'d2',ClassFileName,'file','y');
PrintStringInfo('d2'+ArgSeparator+'s2',ClassFileName,'file','y');
PrintStringInfo('d2'+ArgSeparator+'d2',ClassFileName,'file','y');

PrintStringInfo('s0s0'+ArgSeparator+'s0',ClassFileName,'file','y');
PrintStringInfo('s0s0'+ArgSeparator+'d0',ClassFileName,'file','y');
PrintStringInfo('s0s0'+ArgSeparator+'s2',ClassFileName,'file','y');
PrintStringInfo('s0s0'+ArgSeparator+'d2',ClassFileName,'file','y');
PrintStringInfo('d0d0'+ArgSeparator+'s0',ClassFileName,'file','y');
PrintStringInfo('d0d0'+ArgSeparator+'d0',ClassFileName,'file','y');
PrintStringInfo('d0d0'+ArgSeparator+'s2',ClassFileName,'file','y');
PrintStringInfo('d0d0'+ArgSeparator+'d2',ClassFileName,'file','y');
*/
#define s0s0rands2(in1,in2,out) \
sranda(out, in1*in2)

#define d0d0randd2(in1,in2,out) \
dranda(out, in1*in2)


#endif /* !__INT_RAND_H__ */
