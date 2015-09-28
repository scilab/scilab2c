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
PrintStepInfo('Generating Builder '+FileInfo.MakefileFilename,...
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
makehsrcdir  = pathconvert('includes', %f, %f, 'u');
makeisrcdir  = pathconvert('interfaces', %f, %f, 'u');
makesci2cdir = FileInfo.CStyleOutCCCodeDir;


PrintStringInfo('CSRCDIR     = '+makecsrcdir,FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('HSRCDIR     = '+makehsrcdir,FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('ISRCDIR     = '+makeisrcdir,FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('SCI2CDIR    = .',FileInfo.MakefileFilename,'file','y','y');

// Compiler definition
PrintStringInfo('CC     = gcc',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('CFLAGS = -Wall -pedantic -g -I $(HSRCDIR) -I $(ISRCDIR)',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('LDFLAGS = -lblas -llapack -lm',FileInfo.MakefileFilename,'file','y','y');

// Binary definition
PrintStringInfo('EXEFILENAME = mytest.exe',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('EXEFILE = $(SCI2CDIR)/$(EXEFILENAME)', FileInfo.MakefileFilename,'file','y','y');

// Sources
//Check the output format selected and insert files according to it
outformat = SharedInfo.OutFormat;
PrintStringInfo('SRC = \\', FileInfo.MakefileFilename,'file','y','y');
allSources = getAllSources(outformat);
nbSources = size(allSources);
for i = 1:(nbSources(1) - 1)
  [tmppath,tmpfile,tmpext] = fileparts(allSources(i));
  PrintStringInfo('    $(CSRCDIR)/'+tmpfile+tmpext+' \\', FileInfo.MakefileFilename,'file','y','y');
end
[tmppath,tmpfile,tmpext] = fileparts(allSources(nbSources(1)));
PrintStringInfo('    $(CSRCDIR)/'+tmpfile+tmpext, FileInfo.MakefileFilename,'file','y','y');

// Objects
PrintStringInfo('OBJ = $(SRC:.c=.o)', FileInfo.MakefileFilename,'file','y','y');

// Rules
PrintStringInfo('# ---------------',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('# --- TARGETS ---',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('# ---------------',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('compileexecute: $(OBJ)',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""============================""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""Generation of the executable""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""============================""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t$(CC) $(CFLAGS) $(OBJ) *.c $(LDFLAGS) -o $(EXEFILE)',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""==============""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""Executing code""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""==============""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t$(EXEFILE)',FileInfo.MakefileFilename,'file','y','y');

PrintStringInfo('clean:',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""=============================""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""Removing only exe + obj files""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""=============================""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\trm -rf $(EXEFILE)',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\trm -rf $(OBJ)',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',FileInfo.MakefileFilename,'file','y','y');

PrintStringInfo('distclean: clean',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""==========================""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""Removing only the exe file""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""==========================""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\trm -rf $(EXEFILE)',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',FileInfo.MakefileFilename,'file','y','y');

if getos() == 'Windows' then
  C_GenerateMakefile_msvc(FileInfo,SharedInfo);
end

endfunction
