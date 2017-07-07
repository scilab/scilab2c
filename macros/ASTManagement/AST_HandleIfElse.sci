function [FileInfo,SharedInfo] = AST_HandleIfElse(FileInfo,SharedInfo,ASTIfExpType)
// function [FileInfo,SharedInfo] = AST_HandleIfElse(FileInfo,SharedInfo,ASTIfExpType)
// -----------------------------------------------------------------
//#RNU_RES_B
// Handles the Else If tag of the AST.
//
// overloading function for "ifthenel" type tlist string function
// this is a node of the AST
// fields:  
//     expression  : "expression" type tlist (the if expression)
//     then        : list of "equal" type tlist and list('EOL') (the
//                            then instructions list)
//     elseifs     : a list of tlists
//     else        : list of "equal" type tlist and list('EOL') (the
//                            else instructions list)
//    txt=['If '
//         '  Expression:' 
//         '     '+string(I.expression)
//         '  If Statements'
//         '    '+objectlist2string(I.then)]
//    for e=I.elseifs
//      txt=[txt;
//  	  '  Else If Expression'
//   	  '     '+string(e.expression)
// 	  '  Else If Statements'
//         '    '+objectlist2string(e.then)]
//    end
//    txt=[txt;
//         '  Else Statements'
//         '    '+objectlist2string(I.else)
//         'EndIf']
//
// Input data:
// ASTIfExpType: it specifies if we are handling a if condition (ASTIfExpType='if')
//            or an elseif condition (ASTIfExpType='elseif') or else statement (ASTIfExpType='else')
//#RNU_RES_E
// //NUT: add description here
//
//
// Output data:
// //NUT: add description here
//
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
SCI2CNInArgCheck(argn(2),3,3);

// -----------------------
// --- Initialization. ---
// -----------------------
nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;
ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;
PrintStepInfo('Handling If Statements',FileInfo.Funct(nxtscifunnumber).ReportFileName,'file');

global SCI2CSTACK 
global StackPosition;
global STACKDEDUG
// ---------------------------
// --- End Initialization. ---
// ---------------------------

//#RNU_RES_B
// ---------------------------------------------------
// --- Retrieve If Expression Parameters from AST. ---
// ---------------------------------------------------
//#RNU_RES_E
if (ASTIfExpType~='else')
<<<<<<< HEAD
   [IfCondArg,NIfCondArg,Op,NOp] = AST_ParseIfExprStruct(FileInfo,SharedInfo,ASTIfExpType);
=======
   [IfCondArg,NIfCondArg] = AST_ParseIfExprStruct(FileInfo,SharedInfo,ASTIfExpType);
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
else
   // "else" type doesn't contain any condition to test.
   IfCondArg = '';
   NIfCondArg = 0;
<<<<<<< HEAD
   Op = '';
   NOp = 0;
=======
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
end

//#RNU_RES_B
// -----------------------------
// --- C Generation Section. ---
// -----------------------------
// --- Generate the C code for if/elseif Expression. ---
//#RNU_RES_E
<<<<<<< HEAD
SharedInfo = C_IfExpression(IfCondArg,NIfCondArg,Op,NOp,ASTIfExpType,FileInfo,SharedInfo);
=======
SharedInfo = C_IfExpression(IfCondArg,NIfCondArg,ASTIfExpType,FileInfo,SharedInfo);
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0

endfunction
