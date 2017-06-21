function [RhsNames,RhsScope,NRhs] = AST_ReadEqualRhsNames(FileInfo,SharedInfo)
// function [FileInfo,SharedInfo] = AST_HandleEndGenFun(FileInfo,SharedInfo,ASTFunType)
// -----------------------------------------------------------------
// #RNU_RES_B
// Handles the EndFuncall, EndOperation and EndEqual tags of the AST.
// ASTFunType can be 'Funcall', 'Operation', 'Equal'
// Structure of Funcall:
// overloading function for "funcall" type tlist string function
// this is a node of the AST
// fields:
//     rhs  : a list
//     name : string, the name of the function
//     lhsnb: number, the number of function lhs
//  txt=['Funcall  : '+F.name
//       '  #lhs   : '+string(F.lhsnb)
//       '  Rhs    : '
//       '      '+objectlist2string(F.rhs)
//       'EndFuncall'
//      ]
// #RNU_RES_E
//
// Input data:
// //NUT: add description here
//
// Output data:
// //NUT: add description here
//
// Status:
// 11-Apr-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;

// ------------------------------
// --- Check input arguments. ---
// ------------------------------


global SCI2CSTACK
global StackPosition;
global STACKDEDUG
// ---------------------------
// --- End Initialization. ---
// ---------------------------


// ------------------------------
// --- Read input parameters. ---
// ------------------------------
cntpop = 1;
NRhs = 0;
RhsField(cntpop) = AST_PopASTStack();
RhsNames = [];
while (RhsField(cntpop) ~= 'Operands:')
   NRhs = NRhs + 1;
   [RhsNames(NRhs),RhsScope(NRhs)] = AST_ExtractNameAndScope(RhsField(cntpop));
   cntpop = cntpop + 1;
   RhsField(cntpop) = AST_PopASTStack();
end
RhsNames = SCI2Cflipud(RhsNames);
RhsScope = SCI2Cflipud(RhsScope);

// --- Repush everything into the stack. ---
for cntpush = cntpop:-1:1
   AST_PushASTStack(RhsField(cntpush));
end


for counterinputargs = 1:NRhs
   //#RNU_RES_B
   PrintStringInfo('Input Argument Number '+string(counterinputargs)+': '+InArg(counterinputargs).Name,...
      ReportFileName,'file','y');
   PrintStringInfo('   Scope: '+InArg(counterinputargs).Scope,...
      ReportFileName,'file','y');
   //#RNU_RES_E
end

endfunction
