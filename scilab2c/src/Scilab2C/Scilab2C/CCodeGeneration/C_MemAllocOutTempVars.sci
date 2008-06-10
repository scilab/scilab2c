function C_MemAllocOutTempVars(OutArg,NOutArg,CPass1FileName,CPass1FreeFileName,IndentLevel,ReportFileName)
// function C_MemAllocOutTempVars(OutArg,NOutArg,CPass1FileName,CPass1FreeFileName,IndentLevel,ReportFileName)
// -----------------------------------------------------------------
//
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
// 10-Jun-2008 -- Raffaele Nutricato: replaced malloc with realloc.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),6,6);

PrintStringInfo(' ',ReportFileName,'file','y');
PrintStringInfo('***Allocating memory for temp variables***',ReportFileName,'file','y');

// --- Allocate memory and size array for output arguments. ---
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
         //a->val = (double *) malloc(nnz * sizeof(double));
         // numbers = (int*) realloc (numbers, count * sizeof(int));
         tmpcode = OutArgName+' = ('+C_Type(OutArg(counterout).Type)+'*) realloc('+OutArgName+',('+OutArg(counterout).Size(1)+')*('+OutArg(counterout).Size(2)+')*sizeof('+C_Type(OutArg(counterout).Type)+'));';
         PrintStringInfo(C_IndentBlanks(IndentLevel)+tmpcode,CPass1FileName,'file','y');
         PrintStringInfo('   '+tmpcode,ReportFileName,'file','y');
         PrintStringInfo(C_IndentBlanks(1)+'free('+OutArgName+');',CPass1FreeFileName,'file','y');
      end
   end
end

endfunction
