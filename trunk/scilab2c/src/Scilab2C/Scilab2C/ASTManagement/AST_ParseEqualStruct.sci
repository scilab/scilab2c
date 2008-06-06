function [FunctionName,InArg,NInArg,OutArg,NOutArg] = AST_ParseEqualStruct(FileInfo,SharedInfo)
// function [FunctionName,InArg,NInArg,OutArg,NOutArg] = AST_ParseEqualStruct(FileInfo,SharedInfo)
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
SCI2CNInArgCheck(argn(2),2,2);

// -----------------------
// --- Initialization. ---
// -----------------------
nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;
ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;

global SCI2CSTACK 
global StackPosition;
global STACKDEDUG


// -------------------------------
// --- Read Output parameters. ---
// -------------------------------
LhsField = AST_PopASTStack();
NOutArg = 0;
OutputArgumentNames = [];
OutputArgumentScope = [];
while (LhsField ~= 'Lhs       :')
   NOutArg = NOutArg + 1;
   [OutputArgumentNames(NOutArg),OutputArgumentScope(NOutArg)] = AST_ExtractNameAndScope(LhsField);
   LhsField = AST_PopASTStack();
   if (LhsField == 'Expression:')
     SCI2Cerror('Found Expression: before Lhs');
   elseif (LhsField == 'Equal')
     SCI2Cerror('Found Equal before Lhs');
   end
end
OutputArgumentNames = SCI2Cflipud(OutputArgumentNames);
OutputArgumentScope = SCI2Cflipud(OutputArgumentScope);

// ------------------------------
// --- Read input parameters. ---
// ------------------------------
ExprField = AST_PopASTStack();
NInArg = 0;
InputArgumentNames = [];
while (ExprField ~= 'Expression:')
   NInArg = NInArg + 1;
   [InputArgumentNames(NInArg),InputArgumentScope(NInArg)] = AST_ExtractNameAndScope(ExprField);
   ExprField = AST_PopASTStack();
   if (ExprField == 'Equal')
     SCI2Cerror('Found Equal before Lhs');
   end
end
InputArgumentNames = SCI2Cflipud(InputArgumentNames);
InputArgumentScope = SCI2Cflipud(InputArgumentScope);

// ------------------------------
// --- Extract function name. ---
// ------------------------------
FunctionName = AST_PopASTStack();
if (FunctionName ~= 'Equal') then
   SCI2Cerror('Problems with Equal, Expected Equal tag.');
end
FunctionName = 'OpEqual';

// -------------------------------------
// --- Generate the InArg structure. ---
// -------------------------------------
InArg = [];
for counterinputargs = 1:NInArg
   InArg(counterinputargs).Name=InputArgumentNames(counterinputargs);
   InArg(counterinputargs).Scope=InputArgumentScope(counterinputargs);
end

// -------------------------------------
// --- Generate the InArg structure. ---
// -------------------------------------
OutArg = [];
for counteroutputargs = 1:NOutArg
   OutArg(counteroutputargs).Name=OutputArgumentNames(counteroutputargs);
   OutArg(counteroutputargs).Scope=OutputArgumentScope(counteroutputargs);
end

// ------------------------
// --- Print Some Info. ---
// ------------------------
if (SharedInfo.Equal.Nins > 0)
   if (NInArg ~= SharedInfo.Equal.Nins)
     SCI2CerrorFile('Number of input arguments must be equal to number of ins functions.',ReportFileName);
   end
else
   if (NInArg ~= NOutArg)
     SCI2CerrorFile('Number of input arguments must be equal to number of output arguments.',ReportFileName);
   end
end

endfunction
