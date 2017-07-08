function [FileInfo,SharedInfo] = AST_HandleWhileStatem(FileInfo,SharedInfo)
// -----------------------------------------------------------------
//#RNU_RES_B
// Handles the WhileStatements tag of the AST.
//
//   txt=['While'
//        '  WhileExpression:'
//        '    '+string(W.expression)
//        '  WhileStatements:'
//        '    '+objectlist2string(W.statements)
//        'EndWhile']
//
//#RNU_RES_E
// Input data:
// //NUT: add description here
//
// Output data:
// //NUT: add description here
//
// Status:
// 20-Jan-2008 -- Edoardo Nutricato: Author.
// 20-Jan-2008 -- Rubby Nutricato: Minor Changes.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

//#RNU_RES_B

//NUT: accertati che l'epilogo e il prologo del while siano effettivamente differenti o se
//NUT: si puo' avere un solo file utilizzato sia per il prologo che per l'epilogo.

//NUT: da sistemare senza le global
//#RNU_RES_E
global SCI2CSTACK
global StackPosition;
global STACKDEDUG

IfCondArg  = [];
NIfCondArg = 0;

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
CPass1WhileProlFileName = FileInfo.Funct(nxtscifunnumber).CPass1WhileProlFileName(SharedInfo.While.Level);
PrintStepInfo('Handling WhileStatements',FileInfo.Funct(nxtscifunnumber).ReportFileName,'file');
// ---------------------------
// --- End Initialization. ---
// ---------------------------

//#RNU_RES_B
// -----------------------------------------------
// --- Resume the correct name while CPass1V1. ---
// -----------------------------------------------
//#RNU_RES_E
tmpfilename = FileInfo.Funct(nxtscifunnumber).CPass1FileName;
FileInfo.Funct(nxtscifunnumber).CPass1FileName = FileInfo.Funct(nxtscifunnumber).CPass1WhileProlFileName(SharedInfo.While.Level);
FileInfo.Funct(nxtscifunnumber).CPass1WhileProlFileName(SharedInfo.While.Level) = tmpfilename;
CPass1WhileProlFileName = FileInfo.Funct(nxtscifunnumber).CPass1WhileProlFileName(SharedInfo.While.Level);
PrintStringInfo('   Redirecting C code to: '+FileInfo.Funct(nxtscifunnumber).CPass1FileName,FileInfo.Funct(nxtscifunnumber).ReportFileName,'file');

//#RNU_RES_B
// ------------------------
// --- Generate C code. ---
// ------------------------
//#RNU_RES_E
flagendpop = 0;
IfExprField = AST_PopASTStack();

NOp=0;
Op=[];
while (flagendpop == 0)
   if (IfExprField~='<EOL>')
	if (IfExprField=='WhileExpression:')
            flagendpop = 1;
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
            //[IfCondArg(NIfCondArg),tmpscope] = AST_ExtractNameAndScope(IfExprField);
      	end
   end
   IfExprField = AST_PopASTStack();
   PrintStringInfo('operators are  '+IfExprField,ReportFileName,'file','y');
end

IfCondArg = SCI2Cflipud(IfCondArg);

SharedInfo = C_WhileExpression(IfCondArg,NIfCondArg,Op,NOp,FileInfo,SharedInfo);

// --------------------------
// --- Update SharedInfo. ---
// --------------------------
// Signal the exit from a while expression.
SharedInfo.WhileExpr.OnExec        = SharedInfo.WhileExpr.OnExec - 1;
SharedInfo.WhileExpr.CondVar       = '';
SharedInfo.WhileExpr.DimCondVar    = -1;
SharedInfo.WhileExpr.AssignmentFun = 0; //NUT: siamo sicuri che serva?

// -------------------------------
// --- Delete temporary files. ---
// -------------------------------
SCI2Cmdelete(CPass1WhileProlFileName);

endfunction
