function [FunctionName,InArg,NInArg,NOutArg] = AST_ParseOperStruct(FileInfo,SharedInfo)
// function [FunctionName,InArg,NInArg,NOutArg] = AST_ParseOperStruct(FileInfo,SharedInfo)
// -----------------------------------------------------------------
//
// Status:
// 11-Apr-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);

nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;
ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;

global SCI2CSTACK 
global StackPosition;
global STACKDEDUG

buffstring = AST_PopASTStack();
LabelFunctName = 'Operator: ';
FunctionName = stripblanks(part(buffstring,length(LabelFunctName)+1:length(buffstring)));
FunctionName  = Operator2FunName(FunctionName);

RhsField = AST_PopASTStack();
NInArg = 0;
while (RhsField ~= 'Operands:')
   NInArg = NInArg + 1;
   [InputArgumentNames(NInArg),InputArgumentScope(NInArg)] = AST_ExtractNameAndScope(RhsField);
   RhsField = AST_PopASTStack();
   if (RhsField == 'Operation')
     SCI2Cerror('Found Operation before Rhs');
   end
end

if (stripblanks(InputArgumentNames(NInArg)) == '<empty>')
   NInArg = 0;
   InputArgumentNames = [];
   InputArgumentScope = [];
end
InputArgumentNames = SCI2Cflipud(InputArgumentNames);
InputArgumentScope = SCI2Cflipud(InputArgumentScope);

OperationField = AST_PopASTStack();
if (OperationField ~= 'Operation') then
   SCI2Cerror('Problems with Operation, Expected Operation tag.');
end

if (FunctionName == 'ins')
   NOutArg = 0; // It is always 1. Double check it!
else
   NOutArg = 1; // It is always 1. Double check it!
end

InArg = [];
for counterinputargs = 1:NInArg
   InArg(counterinputargs).Name=InputArgumentNames(counterinputargs);
   InArg(counterinputargs).Scope=InputArgumentScope(counterinputargs);
end


endfunction
