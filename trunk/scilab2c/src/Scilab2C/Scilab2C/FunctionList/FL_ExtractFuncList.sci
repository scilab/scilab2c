function [CFuncList,NElements] = FL_ExtractFuncList(FunctionDir,ClassDir,SCI2CClassSpecifier,ExtFLCls,ReportFileName)
// function [CFuncList,NElements] = FL_ExtractFuncList(FunctionDir,ClassDir,SCI2CClassSpecifier,ExtFLCls,ReportFileName)
// -----------------------------------------------------------------
//
// Status:
// 05-Jan-2008 -- Nutricato Raffaele: Author.
//
// Copyright 2008 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------


SCI2CNInArgCheck(argn(2),5,5);

tmppwd = pwd();
cd(FunctionDir);
funfiles = listfiles();
cd(tmppwd);
NFunFiles = size(funfiles,1);

CFuncList = '';
NElements = 0;

for cntfun = 1:NFunFiles
   FunFileName        = fullfile(FunctionDir,funfiles(cntfun));
   ClassName          = FL_GetFunctionClass(FunFileName,SCI2CClassSpecifier,ReportFileName);
   ClassFileName      = fullfile(ClassDir,ClassName);
   [tmpfunlist,tmpnelem] = File2StringArray(ClassFileName+ExtFLCls);
   [tmppath,tmpfunname,tmpext] = fileparts(FunFileName);
   tmpfunlist = FL_InOutArgs2CFunNames(tmpfunname,tmpfunlist,tmpnelem);
   for cnttmpfun = 1:tmpnelem
      NElements = NElements + 1;
      CFuncList(NElements) = tmpfunlist(cnttmpfun);
   end
end

endfunction
