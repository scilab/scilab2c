function SharedInfo = C_IfExpression(IfCondArg,NIfCondArg,ASTIfExpType,FileInfo,SharedInfo)
// function SharedInfo = C_IfExpression(IfCondArg,NIfCondArg,ASTIfExpType,FileInfo,SharedInfo)
// -----------------------------------------------------------------
//
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),5,5);

if ((NIfCondArg ~= 1) & (ASTIfExpType~='else'))
   SCI2CerrorFile('Cannot manage ""if/elseif"" with a number of condition variables not equal to 1.',ReportFileName);
end

nxtscifunname    = SharedInfo.NextSCIFunName;
nxtscifunnumber  = SharedInfo.NextSCIFunNumber;

ReportFileName   = FileInfo.Funct(nxtscifunnumber).ReportFileName;
CPass1FileName = FileInfo.Funct(nxtscifunnumber).CPass1FileName;


if (ASTIfExpType=='if')
   CFunName = 'if';
elseif (ASTIfExpType=='elseif')
   CFunName = 'if';
elseif (ASTIfExpType=='else')
   CFunName = 'else';
else
   SCI2CerrorFile('Unknown ASTIfExpType ""'+ASTIfExpType+'"".',ReportFileName);
end

if SCI2Cstrncmps1size(ASTIfExpType,'else')
   SharedInfo = C_IfElseBlocks(FileInfo,SharedInfo,'out');
end

CCall ='';
CCall = CCall+CFunName;
if (ASTIfExpType~='else')
   CCall = CCall+'('+IfCondArg(1)+')';
end
PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+CCall,CPass1FileName,'file','y');

SharedInfo = C_IfElseBlocks(FileInfo,SharedInfo,'in');

if (ASTIfExpType=='elseif')
   SharedInfo.CountNestedIf = SharedInfo.CountNestedIf + 1;
end

endfunction
