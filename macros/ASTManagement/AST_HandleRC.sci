function [RhsNames,RhsScope,NRhs] = AST_HandleRC(FileInfo,SharedInfo)
// Copyright (C) 2017 - IIT Bombay - FOSSEE

// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Ukasha Noor
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in
// This function is used for 1D array declaration.

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



endfunction
