function SharedInfo = C_IfExpression(IfCondArg,NIfCondArg,Op,NOp,ASTIfExpType,FileInfo,SharedInfo)
// function SharedInfo = C_IfExpression(IfCondArg,NIfCondArg,ASTIfExpType,FileInfo,SharedInfo)
// -----------------------------------------------------------------
// //NUT: add description here
//
// Input data:
// //NUT: add description here
//
// Output data:
// //NUT: add description here
//
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
//SCI2CNInArgCheck(argn(4),7,7);

//global SCI2CSTACK 
//global StackPosition;
//global STACKDEDUG

// --- Check NIfCondArg value. ---
//if ((NIfCondArg ~= 1) & (ASTIfExpType~='else'))
  // error(9999, 'Cannot manage ""if/elseif"" with a number of condition variables not equal to 1.');
//end

// -----------------------
// --- Initialization. ---
// -----------------------
nxtscifunname    = SharedInfo.NextSCIFunName;
nxtscifunnumber  = SharedInfo.NextSCIFunNumber;

ReportFileName   = FileInfo.Funct(nxtscifunnumber).ReportFileName;
CPass1FileName = FileInfo.Funct(nxtscifunnumber).CPass1FileName;

// #RNU_RES_B
PrintStringInfo(' ',ReportFileName,'file','y');
PrintStringInfo('***Generating C code***'+ string(NIfCondArg),ReportFileName,'file','y');
// #RNU_RES_E
// ---------------------------
// --- End Initialization. ---
// ---------------------------

// --------------------------------------------
// --- Generate the C name of the function. ---
// --------------------------------------------
if (ASTIfExpType=='if')
   CFunName = 'if';
elseif (ASTIfExpType=='elseif')
   CFunName = 'if';
elseif (ASTIfExpType=='else')
   CFunName = 'else';
else
   error(9999, 'Unknown ASTIfExpType ""'+ASTIfExpType+'"".');
end

// ----------------------------
// --- Generate the C call. ---
// ----------------------------
if SCI2Cstrncmps1size(ASTIfExpType,'else')
   // #RNU_RES_B
   // before opening a new C block, closes the previous one.
   // #RNU_RES_E
   SharedInfo = C_IfElseBlocks(FileInfo,SharedInfo,'out');
end

i=1;
k=1;
CCall ='';
CCall = CCall+CFunName;
if (ASTIfExpType~='else')
   CCall = CCall+'(';
   while i <= NIfCondArg
	CCall = CCall + IfCondArg(i) + ' ';
	//d = modulo(i,3);
	//PrintStringInfo(' '+string(i)+string(d),'file','y');
	if (modulo(i,3)==0 & i<>NIfCondArg)
	    CCall = CCall + Op(k) + ' ';
	    k = k + 1;
	end
        i = i + 1;
   end 
   CCall = CCall+')';
end
PrintStringInfo('   '+CCall,ReportFileName,'file','y');
PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+CCall,CPass1FileName,'file','y');

SharedInfo = C_IfElseBlocks(FileInfo,SharedInfo,'in');

// #RNU_RES_B
// ---------------------------------
// --- Update counter nested if. ---
// ---------------------------------
// #RNU_RES_E
if (ASTIfExpType=='elseif')
   // #RNU_RES_B
   // every  elseif statement a new } is required.
   // #RNU_RES_E
   SharedInfo.CountNestedIf = SharedInfo.CountNestedIf + 1;
end

endfunction
