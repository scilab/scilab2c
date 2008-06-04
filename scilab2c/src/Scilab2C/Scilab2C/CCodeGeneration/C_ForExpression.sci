function SharedInfo = C_ForExpression(FileInfo,SharedInfo)
// function SharedInfo = C_ForExpression(FileInfo,SharedInfo)
// -----------------------------------------------------------------
//
// Status:
// 15-Nov-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),2,2);

nxtscifunname    = SharedInfo.NextSCIFunName;
nxtscifunnumber  = SharedInfo.NextSCIFunNumber;

ReportFileName        = FileInfo.Funct(nxtscifunnumber).ReportFileName;
CPass1FileName        = FileInfo.Funct(nxtscifunnumber).CPass1FileName;
CPass1ForProlFileName = FileInfo.Funct(nxtscifunnumber).CPass1ForProlFileName(SharedInfo.For.Level);
CDeclarationFileName  = FileInfo.Funct(nxtscifunnumber).CDeclarationFileName;
CPass1ForEpilFileName = FileInfo.Funct(nxtscifunnumber).CPass1ForEpilFileName(SharedInfo.For.Level);

CCall ='';

if (SharedInfo.ForExpr.AssignmentFun == SharedInfo.CFunId.EqScalar)

   [C_Strings,NumCStrings] = File2StringArray(FileInfo.Funct(nxtscifunnumber).CPass1ForProlFileName(SharedInfo.For.Level));
   C_Strings = stripblanks(C_Strings);
   
   for cntstr = 1:NumCStrings
      PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+C_Strings(cntstr),CPass1FileName,'file','y');
   end
   PrintStringInfo(' ',CPass1ForEpilFileName ,'file','y');

elseif (SharedInfo.ForExpr.AssignmentFun == SharedInfo.CFunId.OpColon)
   [C_Strings,NumCStrings] = File2StringArray(FileInfo.Funct(nxtscifunnumber).CPass1ForProlFileName(SharedInfo.For.Level));
   C_Strings = stripblanks(C_Strings);
   for cntstr = 1:NumCStrings
      PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+C_Strings(cntstr),CPass1FileName,'file','y');
      PrintStringInfo(C_Strings(cntstr),CPass1ForEpilFileName ,'file','y');
   end
   PrintStringInfo('}',CPass1ForEpilFileName ,'file','y');
   
   CCall = 'for('+SharedInfo.ForExpr.SclValCntArg.Name+' = '+SharedInfo.ForExpr.OpColonInfoIn1+'; '...
           +SharedInfo.ForExpr.SclValCntArg.Name+' <= '+SharedInfo.ForExpr.OpColonInfoIn3+'; '...
           +SharedInfo.ForExpr.SclValCntArg.Name+' += '+SharedInfo.ForExpr.OpColonInfoIn2+')';
   PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+CCall,CPass1FileName,'file','y');
   
   CCall = '{';
   PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+CCall,CPass1FileName,'file','y');
   
   SharedInfo.NIndent = SharedInfo.NIndent + 1;
   
elseif (SharedInfo.ForExpr.AssignmentFun == SharedInfo.CFunId.EqMatrix | ...
        SharedInfo.ForExpr.AssignmentFun == SharedInfo.CFunId.GenFunMtx)


   [C_Strings,NumCStrings] = File2StringArray(FileInfo.Funct(nxtscifunnumber).CPass1ForProlFileName(SharedInfo.For.Level));
   C_Strings = stripblanks(C_Strings);
   
   for cntstr = 1:NumCStrings
      PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+C_Strings(cntstr),CPass1FileName,'file','y');
      PrintStringInfo(C_Strings(cntstr),CPass1ForEpilFileName ,'file','y');
   end
   
   PrintStringInfo('}',CPass1ForEpilFileName ,'file','y');
   
   CCall = 'for('+SharedInfo.ForExpr.IntCntArg.Name+' = 0'+'; '+...
           SharedInfo.ForExpr.IntCntArg.Name+' < '+SharedInfo.ForExpr.MtxValCntArg.Size(1)+'*'+SharedInfo.ForExpr.MtxValCntArg.Size(2)+'; '+...
           SharedInfo.ForExpr.IntCntArg.Name+'++)';
   PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+CCall,CPass1FileName,'file','y');

   CCall = '{';
   PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+CCall,CPass1FileName,'file','y');
   
   SharedInfo.NIndent = SharedInfo.NIndent + 1;
   
   CCall = SharedInfo.ForExpr.SclValCntArg.Name+' = '+SharedInfo.ForExpr.MtxValCntArg.Name+'['+SharedInfo.ForExpr.IntCntArg.Name+'];';
   PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+CCall,CPass1FileName,'file','y');

else 
   SCI2Cerror('Could not manage the for expression.');
end

endfunction
