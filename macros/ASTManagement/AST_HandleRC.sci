function [RhsNames,RhsScope,NRhs] = AST_HandleRC(FileInfo,SharedInfo)
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

SCI2CNInArgCheck(argn(2),2,2)

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
while (RhsField(cntpop) ~= 'Expression:')
   NRhs = NRhs + 1;
   if RhsField(cntpop) <> 'Operands:'
   [RhsNames(NRhs),RhsScope(NRhs)] = AST_ExtractNameAndScope(RhsField(cntpop));
   end
   cntpop = cntpop + 1;
   RhsField(cntpop) = AST_PopASTStack();
end
RhsNames = SCI2Cflipud(RhsNames);
RhsScope = SCI2Cflipud(RhsScope);

// --- Repush everything into the stack. ---
for cntpush = cntpop:-1:1
   if RhsField(cntpush) <> 'Operands:'
   AST_PushASTStack(RhsField(cntpush));
   end
end


//for counterinputargs = 1:NRhs
   //#RNU_RES_B
   //disp(counterinputargs);
  // PrintStringInfo('Input Argument Number '+string(counterinputargs)+': '+RhsNames(counterinputargs).Name,...
    //  ReportFileName,'file','y');
   //PrintStringInfo('   Scope: '+RhsNames(counterinputargs).Scope,...
     // ReportFileName,'file','y');
   //#RNU_RES_E
//end

endfunction
