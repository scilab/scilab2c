function C_GenerateMakefile(FileInfo,SharedInfo)
// function C_GenerateMakefile(FileInfo,SharedInfo)
// -----------------------------------------------------------------
// Generate the makefile.
//
// Input data:
// //NUT: add description here
//
// Output data:
// //NUT: add description here
//
// Status:
// 26-Jan-2008 -- Raffaele Nutricato: Author.
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
PrintStepInfo('Generating Makefile '+FileInfo.MakefileFilename,...
   FileInfo.GeneralReport,'both');
// ---------------------------
// --- End Initialization. ---
// ---------------------------

PrintStringInfo('# SCI2C Makefile',FileInfo.MakefileFilename,'file','y');
PrintStringInfo('# hArtes EU Project.',FileInfo.MakefileFilename,'file','y');
PrintStringInfo('# Authors: PoliBa & Inria',FileInfo.MakefileFilename,'file','y');
PrintStringInfo('# -----------------------',FileInfo.MakefileFilename,'file','y');
PrintStringInfo('# --- USER PARAMETERS ---',FileInfo.MakefileFilename,'file','y');
PrintStringInfo('# -----------------------',FileInfo.MakefileFilename,'file','y');
PrintStringInfo('# --- DIRECTORIES AND FILES ---',FileInfo.MakefileFilename,'file','y');

makecsrcdir  = pathconvert('src/c', %f, %f, 'u');
// makecsrcdir  = FileInfo.CStyleSCI2CMainDir+'\CFiles\sci2ccode';
makehsrcdir  = pathconvert('includes', %f, %f, 'u');
// makehsrcdir  = FileInfo.CStyleSCI2CMainDir+'\CFiles\sci2cincludes';
makeisrcdir  = pathconvert('..\..\..\Scilab2C\CFiles\sci2cinterfaces', %f, %f, 'u');
// makeisrcdir  = FileInfo.CStyleSCI2CMainDir+'\CFiles\sci2cinterfaces';
makesci2cdir = FileInfo.CStyleOutCCCodeDir;
// makesci2cdir = FileInfo.CStyleOutCCCodeDir;


PrintStringInfo('CSRCDIR     = '+makecsrcdir,FileInfo.MakefileFilename,'file','y');
PrintStringInfo('HSRCDIR     = '+makehsrcdir,FileInfo.MakefileFilename,'file','y');
PrintStringInfo('ISRCDIR     = '+makeisrcdir,FileInfo.MakefileFilename,'file','y');
//PrintStringInfo('SCI2CDIR    = '+makesci2cdir,FileInfo.MakefileFilename,'file','y');
PrintStringInfo('SCI2CDIR    = .',FileInfo.MakefileFilename,'file','y');
PrintStringInfo('EXEFILENAME = mytest.exe',FileInfo.MakefileFilename,'file','y');

// -------------------------------
// --- Open template makefile. ---
// -------------------------------
fidfile = SCI2COpenFileRead(FileInfo.MakefileTemplate);

// -------------------
// --- Read lines. ---
// -------------------
tmpline = mgetl(fidfile,1);
while (meof(fidfile) == 0)
  PrintStringInfo(tmpline,FileInfo.MakefileFilename,'file','y');
  tmpline = mgetl(fidfile,1);
end

mclose(fidfile);

endfunction
