function SharedInfo = AST_HandleEndWhile(FileInfo,SharedInfo)
// function SharedInfo = AST_HandleEndWhile(FileInfo,SharedInfo)
// -----------------------------------------------------------------
//
// Status:
// 15-Nov-2007 -- Raffaele Nutricato: Author.
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
nxtscifunname    = SharedInfo.NextSCIFunName;
nxtscifunnumber  = SharedInfo.NextSCIFunNumber;

ReportFileName          = FileInfo.Funct(nxtscifunnumber).ReportFileName;
CPass1FileName          = FileInfo.Funct(nxtscifunnumber).CPass1FileName;
CPass1WhileEpilFileName = FileInfo.Funct(nxtscifunnumber).CPass1WhileEpilFileName(SharedInfo.While.Level);

CCall ='';
// ---------------------------
// --- End Initialization. ---
// ---------------------------

// ----------------------------
// --- Generate the C code. ---
// ----------------------------
// --- Copy Epilogue into C code (Pass1) file. ---
[CLinesArray,N_Lines] = File2StringArray(CPass1WhileEpilFileName);
CLinesArray = stripblanks(CLinesArray);

for tmpcnt = 1:N_Lines-1
   PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent)+CLinesArray(tmpcnt),CPass1FileName,'file','y');
end
PrintStringInfo(C_IndentBlanks(SharedInfo.NIndent-1)+CLinesArray(N_Lines),CPass1FileName,'file','y');

// --------------------------
// --- Update SharedInfo. ---
// --------------------------
SharedInfo.NIndent = SharedInfo.NIndent - 1;

// -------------------------------
// --- Delete temporary files. ---
// -------------------------------
SCI2Cmdelete(CPass1WhileEpilFileName);

endfunction
