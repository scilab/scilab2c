function SharedInfo = C_IfElseBlocks(FileInfo,SharedInfo,InOutStatements)
// function SharedInfo = C_IfElseBlocks(FileInfo,SharedInfo,InOutStatements)
// -----------------------------------------------------------------
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
SCI2CNInArgCheck(argn(2),3,3);

// -----------------------
// --- Initialization. ---
// -----------------------
nxtscifunname    = SharedInfo.NextSCIFunName;
nxtscifunnumber  = SharedInfo.NextSCIFunNumber;

ReportFileName   = FileInfo.Funct(nxtscifunnumber).ReportFileName;
CPass1FileName = FileInfo.Funct(nxtscifunnumber).CPass1FileName;

IndentLevel      = SharedInfo.NIndent;

CCall = '';
// ---------------------------
// --- End Initialization. ---
// ---------------------------

// -----------------------------------------------------
// --- Generate the C call/Update indentation level. ---
// -----------------------------------------------------
if (InOutStatements=='in')
   CCall = CCall+'{';
   PrintStringInfo(C_IndentBlanks(IndentLevel)+CCall,CPass1FileName,'file','y');
   IndentLevel = IndentLevel + 1;
elseif (InOutStatements=='out')
   CCall = CCall+'}';
   IndentLevel = IndentLevel - 1;
   PrintStringInfo(C_IndentBlanks(IndentLevel)+CCall,CPass1FileName,'file','y');
else
   SCI2CerrorFile('Unknown setting for InOutStatements: '+InOutStatements'.',ReportFileName);
end

SharedInfo.NIndent = IndentLevel;

endfunction
