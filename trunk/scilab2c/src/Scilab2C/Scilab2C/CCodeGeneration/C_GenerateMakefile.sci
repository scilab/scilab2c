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
PrintStringInfo('# Copyright 2007 Raffaele Nutricato ',FileInfo.MakefileFilename,'file','y');
PrintStringInfo('# raffaele.nutricato@tiscali.it',FileInfo.MakefileFilename,'file','y');
PrintStringInfo('# -----------------------',FileInfo.MakefileFilename,'file','y');
PrintStringInfo('# --- USER PARAMETERS ---',FileInfo.MakefileFilename,'file','y');
PrintStringInfo('# -----------------------',FileInfo.MakefileFilename,'file','y');
PrintStringInfo('# --- DIRECTORIES AND FILES ---',FileInfo.MakefileFilename,'file','y');
if (SharedInfo.CCompilerPathStyle == 'windows')
   makeobjpath  = '..\..\..\Scilab2C\CFiles\sci2cobj';
   // makeobjpath  = FileInfo.CStyleSCI2CMainDir+'\CFiles\sci2cobj';
   makecsrcdir  = '..\..\..\Scilab2C\CFiles\sci2ccode';
   // makecsrcdir  = FileInfo.CStyleSCI2CMainDir+'\CFiles\sci2ccode';
   makehsrcdir  = '..\..\..\Scilab2C\CFiles\sci2cincludes';
   // makehsrcdir  = FileInfo.CStyleSCI2CMainDir+'\CFiles\sci2cincludes';
   makeisrcdir  = '..\..\..\Scilab2C\CFiles\sci2cinterfaces';
   // makeisrcdir  = FileInfo.CStyleSCI2CMainDir+'\CFiles\sci2cinterfaces';
   makesci2cdir = FileInfo.CStyleOutCCCodeDir;
   // makesci2cdir = FileInfo.CStyleOutCCCodeDir;
elseif (SharedInfo.CCompilerPathStyle == 'unix' | ...
        SharedInfo.CCompilerPathStyle == 'cygwin')
   makeobjpath  = '../../../Scilab2C/CFiles/sci2cobj';
   // makeobjpath  = FileInfo.CStyleSCI2CMainDir+'/CFiles/sci2cobj';
   makecsrcdir  = '../../../Scilab2C/CFiles/sci2ccode';
   // makecsrcdir  = FileInfo.CStyleSCI2CMainDir+'/CFiles/sci2ccode';
   makehsrcdir  = '../../../Scilab2C/CFiles/sci2cincludes';
   // makehsrcdir  = FileInfo.CStyleSCI2CMainDir+'/CFiles/sci2cincludes';
   makeisrcdir  = '../../../Scilab2C/CFiles/sci2cinterfaces';
   // makeisrcdir  = FileInfo.CStyleSCI2CMainDir+'/CFiles/sci2cinterfaces';
   makesci2cdir = FileInfo.CStyleOutCCCodeDir;
else
   PrintStringInfo(' ',ReportFileName,'stdout','y');
   PrintStringInfo('SCI2CERROR: Unkwnown option for CCompilerPathStyle','','both','y');
   PrintStringInfo('SCI2CERROR: Please check SCI2CInputParameters.sce file.','','both','y');
   SCI2Cerror(' ');
end

PrintStringInfo('OBJDIR      = '+makeobjpath,FileInfo.MakefileFilename,'file','y');
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
