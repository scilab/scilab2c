exec full_reset.sce
mode(-1);
clc
   
// -------------------------
// --- Input Parameters. ---
// -------------------------
// root directory.
maindir = 'C:\Nutricato\Projects\FP6_hArtes\Software\SVNScilab2C\src\Scilab2C';
// -----------------------------
// --- End Input Parameters. ---
// -----------------------------

// -------------
// --- exec. ---
// -------------
exec(fullfile(maindir,'ASTGenerator','%program_p.sci'));
// -----------------
// --- End exec. ---
// -----------------

// ---------------------------
// --- Define Directories. ---
// ---------------------------
// Directory containing functions that perform general tasks.
GeneralFunctions = 'GeneralFunctions';

// Directory containing functions that perform general tasks for the SCI2C tool.
SCI2CGeneral = 'SCI2CGeneral';

// Directory containing functions that perform the C code generation for the SCI2C tool.
Translation = 'Translation';

// Directory containing functions related to the generation of the Abstract Syntactic tree.
ASTGenerator = 'ASTGenerator'

// Directory containing functions to read/generate SCI2C annotations.
Annotations = 'Annotations';

// Directory containing functions to read the AST and to generate the corresponding C code.
AST_reader = 'ASTReader';
// -------------------------------
// --- End Define Directories. ---
// -------------------------------

// -------------
// --- getd. ---
// -------------
getd(fullfile(maindir,GeneralFunctions));
getd(fullfile(maindir,SCI2CGeneral));
getd(fullfile(maindir,Translation));
getd(fullfile(maindir,ASTGenerator));
getd(fullfile(maindir,Annotations));
getd(fullfile(maindir,AST_reader));
// -----------------
// --- End getd. ---
// -----------------
