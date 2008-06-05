function GetASTFile(FileInfoDatFile);
// function GetASTFile(FileInfoDatFile);
// -----------------------------------------------------------------
// Generates the AST file starting from the .sci file specified
// in SharedInfo.Next(1).SCIFileName.
//
// Input data:
// FileInfoDatFile: name of the .dat file containing the FileInfo structure.
// SharedInfoDatFile: it is a buffer containing parameters that are exchanged by the
//                   functions of the SCI2C tool.
//
// Output data:
//
// Status:
// 11-Apr-2007 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

// ---------------------------------
// --- Load File Info Structure. ---
// ---------------------------------
load(FileInfoDatFile,'FileInfo');

// -----------------------------------
// --- Load Shared Info Structure. ---
// -----------------------------------
load(FileInfo.SharedInfoDatFile,'SharedInfo');

// Extraction of the function name and number.
funname   = SharedInfo.Next(1).SCIFunName;
funnumber = SharedInfo.NextSCIFunNumber;

PrintStepInfo('Generate the AST in '+FileInfo.Funct(funnumber).ASTFileName,...
   FileInfo.GeneralReport,'both');

// --- Generation of the AST file. ---
SciFile2ASTFile(FileInfo.Funct(funnumber).SCIFileName,...
   FileInfo.Funct(funnumber).ASTFileName);

// --- Save File Info Structure. ---
// save(FileInfoDatFile,FileInfo);

endfunction
