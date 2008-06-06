function SharedInfo = C_WhileExpression(FileInfo,SharedInfo)
// function SharedInfo = C_WhileExpression(FileInfo,SharedInfo)
// -----------------------------------------------------------------
//
// Status:
// 15-Nov-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);

nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;

ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;
CPass1FileName  = FileInfo.Funct(nxtscifunnumber).CPass1FileName;

CPass1WhileProlFileName = FileInfo.Funct(nxtscifunnumber).CPass1WhileProlFileName(SharedInfo.While.Level);
CPass1WhileEpilFileName = FileInfo.Funct(nxtscifunnumber).CPass1WhileEpilFileName(SharedInfo.While.Level);
CDeclarationFileName    = FileInfo.Funct(nxtscifunnumber).CDeclarationFileName;

CCall ='';

[C_Strings,NumCStrings] = File2StringArray(CPass1WhileProlFileName);
C_Strings = stripblanks(C_Strings);
for cntstr = 1:NumCStrings
   PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+C_Strings(cntstr),CPass1FileName,'file','y');
   PrintStringInfo(C_Strings(cntstr),CPass1WhileEpilFileName ,'file','y');
end

PrintStringInfo('}',CPass1WhileEpilFileName ,'file','y');
   
CCall = 'while('+SharedInfo.WhileExpr.CondVar+')';
PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+CCall,CPass1FileName,'file','y');
   
CCall = '{';
PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+CCall,CPass1FileName,'file','y');
   
SharedInfo.NIndent = SharedInfo.NIndent + 1;   

endfunction
