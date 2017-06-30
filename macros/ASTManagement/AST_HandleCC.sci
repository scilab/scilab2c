// Copyright (C) 2017 - IIT Bombay - FOSSEE

// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Ukasha Noor
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

function [RhsNames,RhsScope,NRhs] = AST_HandleCC(FileInfo,SharedInfo)

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
   if RhsField(cntpop) <> 'Operands:' & RhsField(cntpop) <> 'Begin:'
   NRhs = NRhs + 1;
   
   [RhsNames(NRhs),RhsScope(NRhs)] = AST_ExtractNameAndScope(RhsField(cntpop));
   end
   cntpop = cntpop + 1;
   RhsField(cntpop) = AST_PopASTStack();
end
RhsNames = SCI2Cflipud(RhsNames);
RhsScope = SCI2Cflipud(RhsScope);

// --- Repush everything into the stack. ---
for cntpush = cntpop:-1:1
   if RhsField(cntpush) <> 'Operands:' & RhsField(cntpush) <> 'Begin:'
   PrintStringInfo(' ' + RhsField(cntpush),ReportFileName,'file','y');
   AST_PushASTStack(RhsField(cntpush));
   end
end


//for counterinputargs = 1:NRhs
   //#RNU_RES_B
   //disp(counterinputargs);
   //PrintStringInfo('Input Argument Number '+string(counterinputargs)+': '+RhsNames(counterinputargs).Name,...
     // ReportFileName,'file','y');
   //PrintStringInfo('   Scope: '+RhsNames(counterinputargs).Scope,...
     // ReportFileName,'file','y');
   //#RNU_RES_E
//end

endfunction
