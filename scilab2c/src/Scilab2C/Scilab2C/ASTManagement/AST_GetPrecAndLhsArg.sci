function [LhsArg,NLhsArg,PrecisionSpecifier,SharedInfo] = AST_GetPrecAndLhsArg(OutArg,NOutArg,FunctionName,FunTypeAnnot,FunSizeAnnot,ASTFunType,FileInfo,SharedInfo);
// function [LhsArg,NLhsArg,PrecisionSpecifier,SharedInfo] = AST_GetPrecAndLhsArg(OutArg,NOutArg,FunctionName,FunTypeAnnot,FunSizeAnnot,ASTFunType,FileInfo,SharedInfo);
// -----------------------------------------------------------------
//
// Status:
// 11-Apr-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),8,8);

// -----------------------
// --- Initialization. ---
// -----------------------
nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;
ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;
// ---------------------------
// --- End Initialization. ---
// ---------------------------

// ---------------------------------------
// --- Search for Precision Specifier. ---
// ---------------------------------------
if (NOutArg == 1 & FunTypeAnnot == 'FA_TP_USER')
   PrecisionSpecifier = AST_CheckPrecSpecifier(FunctionName,FileInfo,SharedInfo);
   if (PrecisionSpecifier == 'default')
      SearchLevel = 0;
   else
      SearchLevel = 1;
      SharedInfo.SkipNextPrec = 1;
   end
else
   PrecisionSpecifier = '';
   SearchLevel = 0;
end

if (ASTFunType~='Equal')
   [LhsArgNames,LhsArgScope,NLhsArg] = AST_CheckLastFunc(SharedInfo.ASTReader.fidAST,SearchLevel);
else
   LhsArgNames = '';
   LhsArgScope = '';
   NLhsArg = 0;
end

LhsArg = [];
for cntarg = 1:NLhsArg
   LhsArg(cntarg).Name = LhsArgNames(cntarg);
   LhsArg(cntarg).Scope = LhsArgScope(cntarg);
end

if (NLhsArg > 0)
   SharedInfo.SkipNextEqual = 1; // 1 = the next equal in the AST will not produce C code.
   if (NLhsArg ~= NOutArg)
      SCI2CerrorFile('NLhsArg='+string(NLhsArg)+' must be equal to NOutArg='+string(NOutArg)+'.',ReportFileName);
   end
else
end

endfunction
