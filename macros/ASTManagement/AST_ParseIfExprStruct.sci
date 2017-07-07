<<<<<<< HEAD
function [IfCondArg,NIfCondArg,Op,NOp] = AST_ParseIfExprStruct(FileInfo,SharedInfo,ASTIfExpType)
=======
function [IfCondArg,NIfCondArg] = AST_ParseIfExprStruct(FileInfo,SharedInfo,ASTIfExpType)
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
// function [IfCondArg,NIfCondArg] = AST_ParseIfExprStruct(FileInfo,SharedInfo,ASTIfExpType)
// -----------------------------------------------------------------
//#RNU_RES_B
// Parses the IfExpression structure of the AST.
//
//   txt=['If '
//        '  Expression:' 
//        '     '+string(I.expression)
//        '  If Statements'
//        '    '+objectlist2string(I.then)]
//   for e=I.elseifs
//     txt=[txt;
// 	 '  Else If Expression'
// 	 '     '+string(e.expression)
// 	 '  Else If Statements'
//        '    '+objectlist2string(e.then)]
//   end
//   txt=[txt;
//        '  Else Statements'
//        '    '+objectlist2string(I.else)
//        'EndIf']
//
//#RNU_RES_E
//
// Input data:
// //NUT: add description here
//
// Output data:
// //NUT: add description here
//
// Status:
// 11-Apr-2007 -- Raffaele Nutricato: Author.
// 25-June-2017 -- Ukasha Noor: Revised By 
// This function is counting the number of logical operators and there operands.
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
//#RNU_RES_B
PrintStringInfo('***Retrieving '+ASTIfExpType+' expression parameters from AST***',ReportFileName,'file','y');
//#RNU_RES_E
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
<<<<<<< HEAD
//OutArgOld=[];
//OutArgNew=[];

//for i = 1:3	
  //  OutArgOld(i)=AST_PopASTStack();
    //PrintStringInfo(' '+OutArgOld(i),ReportFileName,'file','y');
//end
//x = AST_PopASTStack();

//OutArgNew = SCI2Cflipud(OutArgOld);
	
flagendpop = 0;
IfExprField = AST_PopASTStack();
PrintStringInfo(' '+IfExprField+' '+ASTIfExpType,ReportFileName,'file','y');
=======
flagendpop = 0;
IfExprField = AST_PopASTStack();
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
if (ASTIfExpType=='if')
   if (IfExprField=='Expression:')
      flagendpop = 1;
      // Pop Again the If tag from the AST.
      IfExprField = AST_PopASTStack();
<<<<<<< HEAD
      PrintStringInfo(' '+IfExprField,ReportFileName,'file','y');
=======
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
   end
elseif (ASTIfExpType=='elseif')
   if (IfExprField=='Else If Expression')
      flagendpop = 1;
   end
else
   error(9999, 'Unknown ASTIfExpType ""'+ASTIfExpType+'"".');
end
<<<<<<< HEAD
NOp=0;
Op=[];
=======

>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
while (flagendpop == 0)
   if (IfExprField~='<EOL>')   
      if (ASTIfExpType=='if')
         if (IfExprField=='Expression:')
            flagendpop = 1;
<<<<<<< HEAD
            //PrintStringInfo('hello dere  '+IfExprField,ReportFileName,'file','y');
            // Pop Again the If tag from the AST.
            IfExprField = AST_PopASTStack();
	 elseif (IfExprField=='Operands:')
		flagendpop = 0;
		g = AST_PopASTStack();
         else
	    if (IfExprField=='&&' | IfExprField=='||')
		NOp = NOp + 1;
		Op(NOp) = IfExprField;
		//PrintStringInfo('operators are  '+Op(NOp),ReportFileName,'file','y');
	    else
            NIfCondArg = NIfCondArg + 1;
	    IfCondArg(NIfCondArg) = IfExprField;
	    end
            //[IfCondArg(NIfCondArg),tmpscope] = AST_ExtractNameAndScope(IfExprField);
=======
            // Pop Again the If tag from the AST.
            IfExprField = AST_PopASTStack();
         else
            NIfCondArg = NIfCondArg + 1;
            [IfCondArg(NIfCondArg),tmpscope] = AST_ExtractNameAndScope(IfExprField);
>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
         end
      elseif (ASTIfExpType=='elseif')
         if (IfExprField=='Else If Expression')
            flagendpop = 1;
<<<<<<< HEAD
	    //IfExprField = AST_PopASTStack();
         else
	    if (IfExprField=='&&' | IfExprField=='||')
		NOp = NOp + 1;
		Op(NOp) = IfExprField;
            elseif (IfExprField=='Operands:')
		flagendpop = 0;
		g = AST_PopASTStack();
	    else
            	NIfCondArg = NIfCondArg + 1;
            	IfCondArg(NIfCondArg) = IfExprField;
	    end
            //[IfCondArg(NIfCondArg),tmpscope] = AST_ExtractNameAndScope(IfExprField);
         end
      end
   end
   if flagendpop == 0
   IfExprField = AST_PopASTStack();
   end
   PrintStringInfo('operators are  '+IfExprField,ReportFileName,'file','y');
end

IfCondArg = SCI2Cflipud(IfCondArg);

=======
         else
            NIfCondArg = NIfCondArg + 1;
            IfCondArg(NIfCondArg) = IfExprField;
            [IfCondArg(NIfCondArg),tmpscope] = AST_ExtractNameAndScope(IfExprField);
         end
      end
   end
   IfExprField = AST_PopASTStack();
end

>>>>>>> 9e5793a7b05b23e6044a6d7a9ddd5db39ba375f0
//#RNU_RES_B
// -------------------------------------------
// --- Print some info in the report file. ---
// -------------------------------------------
PrintStringInfo('N '+ASTIfExpType+' Condition Arguments: '+string(NIfCondArg),ReportFileName,'file','y');
//#RNU_RES_E
for counterifcondargs = 1:NIfCondArg
   //#RNU_RES_B
   PrintStringInfo(ASTIfExpType+' Condition Argument Number '+string(counterifcondargs)+': '+IfCondArg(counterifcondargs),...
      ReportFileName,'file','y');
   //#RNU_RES_E
end

endfunction
