//
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2010-2010 - DIGITEO - Bruno JOFRET
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
//
//
function C_GenerateSCI2CHeader(OutputPath, FunctionPrefix)
  FileName = OutputPath+"scilab2c.h"
  C_SCI2CHeader(FileName);
  PrintStringInfo('#ifndef __SCILAB2C_H__',FileName,'file','y');
  PrintStringInfo('#define __SCILAB2C_H__',FileName,'file','y');
  PrintStringInfo('',FileName,'file','y');
  PrintStringInfo('#define SCI2C(Name) '+FunctionPrefix+'_##Name',FileName,'file','y');
  PrintStringInfo('',FileName,'file','y');
  PrintStringInfo('#endif /* !__SCILAB2C_H__ */',FileName,'file','y');
endfunction
