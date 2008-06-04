function C_MemAllocOutTempVars(OutArg,NOutArg,CPass1FileName,CPass1FreeFileName,IndentLevel,ReportFileName)
// function C_MemAllocOutTempVars(OutArg,NOutArg,CPass1FileName,CPass1FreeFileName,IndentLevel,ReportFileName)
// -----------------------------------------------------------------
//
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),6,6);

for counterout = 1:NOutArg
   if (OutArg(counterout).Dimension > 0)
      if ((OutArg(counterout).FindLike == -1) | (SCI2Cisnum(OutArg(counterout).Size(1))==%F) | (SCI2Cisnum(OutArg(counterout).Size(2))==%F))
         OutArgName = OutArg(counterout).Name;
         tmpcode = '__'+OutArgName+'Size[0]='+OutArg(counterout).Size(1)+';';
         PrintStringInfo(C_IndentBlanks(IndentLevel)+tmpcode,CPass1FileName,'file','y');
         PrintStringInfo('   '+tmpcode,ReportFileName,'file','y');
         tmpcode = '__'+OutArgName+'Size[1]='+OutArg(counterout).Size(2)+';';
         PrintStringInfo(C_IndentBlanks(IndentLevel)+tmpcode,CPass1FileName,'file','y');
         PrintStringInfo('   '+tmpcode,ReportFileName,'file','y');
         tmpcode = OutArgName+' = ('+C_Type(OutArg(counterout).Type)+'*) malloc(('+OutArg(counterout).Size(1)+')*('+OutArg(counterout).Size(2)+')*sizeof('+C_Type(OutArg(counterout).Type)+'));';
         PrintStringInfo(C_IndentBlanks(IndentLevel)+tmpcode,CPass1FileName,'file','y');
         PrintStringInfo('   '+tmpcode,ReportFileName,'file','y');
         PrintStringInfo(C_IndentBlanks(1)+'free('+OutArgName+');',CPass1FreeFileName,'file','y');
      end
   end
end

endfunction
