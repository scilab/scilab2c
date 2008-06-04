function [IfCondArg,NIfCondArg] = AST_ParseIfExprStruct(FileInfo,SharedInfo,ASTIfExpType)
// function [IfCondArg,NIfCondArg] = AST_ParseIfExprStruct(FileInfo,SharedInfo,ASTIfExpType)
// -----------------------------------------------------------------
// Status:
// 11-Apr-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),3,3);

// -----------------------
// --- Initialization. ---
// -----------------------
nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;
ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;
IfCondArg  = [];
NIfCondArg = 0;

global SCI2CSTACK 
global StackPosition;
global STACKDEDUG
// ---------------------------
// --- End Initialization. ---
// ---------------------------

// ------------------------------------
// --- Read if condition variables. ---
// ------------------------------------
flagendpop = 0;
IfExprField = AST_PopASTStack();
if (ASTIfExpType=='if')
   if (IfExprField=='Expression:')
      flagendpop = 1;
      IfExprField = AST_PopASTStack();
   end
elseif (ASTIfExpType=='elseif')
   if (IfExprField=='Else If Expression')
      flagendpop = 1;
   end
else
   SCI2CerrorFile('Unknown ASTIfExpType ""'+ASTIfExpType+'"".',ReportFileName);
end

while (flagendpop == 0)
   if (IfExprField~='<EOL>')   
      if (ASTIfExpType=='if')
         if (IfExprField=='Expression:')
            flagendpop = 1;
            IfExprField = AST_PopASTStack();
         else
            NIfCondArg = NIfCondArg + 1;
            [IfCondArg(NIfCondArg),tmpscope] = AST_ExtractNameAndScope(IfExprField);
         end
      elseif (ASTIfExpType=='elseif')
         if (IfExprField=='Else If Expression')
            flagendpop = 1;
         else
            NIfCondArg = NIfCondArg + 1;
            IfCondArg(NIfCondArg) = IfExprField;
            [IfCondArg(NIfCondArg),tmpscope] = AST_ExtractNameAndScope(IfExprField);
         end
      end
   end
   IfExprField = AST_PopASTStack();
end


endfunction
