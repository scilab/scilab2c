function runsci2c(SCI2CInputPrmFile)
// function runsci2c(SCI2CInputPrmFile)
// -----------------------------------------------------------------
// ===         hArtes/PoliBa/GAP SCI2C tool                      ===
// ===         Authors:                                          ===
// ===            Raffaele Nutricato                             ===
// ===            raffaele.nutricato@tiscali.it                  ===
// ===            Alberto Morea                                  ===
//
// This is the main function of SCI2C.
//
// Input data:
// SCI2CInputPrmFile: path+filename of the input parameters file.
//
// Output data:
// ---
//
// Status:
// 11-Apr-2007 -- Raffaele Nutricato: Author.
// 11-Apr-2007 -- Alberto Morea: Tests.
//
// Copyright 2007 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// -------------------
// --- Soft reset. ---
// -------------------
mode(-1);
clc;
// -----------------------
// --- End Soft reset. ---
// -----------------------

// -------------------------
// --- Input Parameters. ---
// -------------------------
RunSci2CMainDir = pwd();
// -----------------------------
// --- End input Parameters. ---
// -----------------------------

// -------------------------------
// --- Perform Intializations. ---
// -------------------------------
// --- Load SCI2C directories and files. ---
cd(fullfile(RunSci2CMainDir,'ToolInitialization'));
exec('INIT_SCI2CLoader.sce');
cd(RunSci2CMainDir);

// --- Initialize the SCI2C tool directories and files. ---
[FileInfoDatFile,SharedInfoDatFile] = INIT_SCI2C(SCI2CInputPrmFile);
   
// --- Load RunMode. ---
load(SharedInfoDatFile,'SharedInfo');
RunMode = SharedInfo.RunMode;
clear ShareInfo
   
// --- Generation of the library structure. ---
if (RunMode == 'GenLibraryStructure' | RunMode == 'All')
   INIT_GenLibraries(FileInfoDatFile);
end
   
// --- Load Library Info. ---
INIT_LoadLibraries(FileInfoDatFile);
   
// -----------------------------------
// --- End Perform Intializations. ---
// -----------------------------------
   
// ----------------------------------
// --- Perform SCI2C Translation. ---
// ----------------------------------
if (RunMode == 'All' | RunMode == 'Translate')
   FlagContinueTranslation = 1;
   while(FlagContinueTranslation == 1)
      UpdateSCI2CInfo(FileInfoDatFile);
      AST_GetASTFile(FileInfoDatFile);
      AST2Ccode(FileInfoDatFile);
      JoinDeclarAndCcode(FileInfoDatFile);
      FlagContinueTranslation = ManageNextConversion(FileInfoDatFile);
   end
end
   
// --------------------------
// --- Generate Makefile. ---
// --------------------------
load(FileInfoDatFile,'FileInfo');
load(SharedInfoDatFile,'SharedInfo');
C_GenerateMakefile(FileInfo,SharedInfo);
clear FileInfo
clear SharedInfo
   
// -----------------
// --- Epilogue. ---
// -----------------
load(FileInfoDatFile,'FileInfo');
if (RunMode == 'All' | RunMode == 'Translate')
   PrintStepInfo('Translation Successfully Completed!!!',FileInfo.GeneralReport,'both');
elseif (RunMode == 'GenLibraryStructure')
   PrintStepInfo('Library Structure Successfully Created!!!',FileInfo.GeneralReport,'both');
end
clear FileInfo
