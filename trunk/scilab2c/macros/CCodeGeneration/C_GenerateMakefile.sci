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
makeisrcdir  = pathconvert('interfaces', %f, %f, 'u');
// makeisrcdir  = FileInfo.CStyleSCI2CMainDir+'\CFiles\sci2cinterfaces';
makesci2cdir = FileInfo.CStyleOutCCCodeDir;
// makesci2cdir = FileInfo.CStyleOutCCCodeDir;


PrintStringInfo('CSRCDIR     = '+makecsrcdir,FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('HSRCDIR     = '+makehsrcdir,FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('ISRCDIR     = '+makeisrcdir,FileInfo.MakefileFilename,'file','y','y');
//PrintStringInfo('SCI2CDIR    = '+makesci2cdir,FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('SCI2CDIR    = .',FileInfo.MakefileFilename,'file','y','y');

// Compiler definition
PrintStringInfo('CC     = gcc',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('CFLAGS = -Wall -pedantic -I $(HSRCDIR) -I $(ISRCDIR) -lm',FileInfo.MakefileFilename,'file','y','y');

// Binary definition
PrintStringInfo('EXEFILENAME = mytest.exe',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('EXEFILE = $(SCI2CDIR)/$(EXEFILENAME)', FileInfo.MakefileFilename,'file','y','y');

// Sources
PrintStringInfo('SRC = \\', FileInfo.MakefileFilename,'file','y','y');
allSources = getAllSources();
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
PrintStringInfo('\t$(CC) $(CFLAGS) $(OBJ) *.c -llapack -lblas -o $(EXEFILE)',FileInfo.MakefileFilename,'file','y','y');
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


// -------------------------------
// --- Open template makefile. ---
// -------------------------------
//fidfile = SCI2COpenFileRead(FileInfo.MakefileTemplate);

// -------------------
// --- Read lines. ---
// -------------------
//tmpline = mgetl(fidfile,1);
//while (meof(fidfile) == 0)
// PrintStringInfo(tmpline,FileInfo.MakefileFilename,'file','y');
//  tmpline = mgetl(fidfile,1);
//end

//mclose(fidfile);

endfunction


function C_GenerateMakefile_msvc(FileInfo, SharedInfo)

MakefileFilename = FileInfo.MakefileFilename + '.mak';

PrintStringInfo('# SCI2C Makefile (Visual Studio 2008)',MakefileFilename,'file','y','y');
PrintStringInfo('# hArtes EU Project.',MakefileFilename,'file','y','y');
PrintStringInfo('# Authors: PoliBa & Inria & DIGITEO',MakefileFilename,'file','y','y');
PrintStringInfo('# -----------------------',MakefileFilename,'file','y','y');
PrintStringInfo('# --- USER PARAMETERS ---',MakefileFilename,'file','y','y');
PrintStringInfo('# -----------------------',MakefileFilename,'file','y','y');
PrintStringInfo('# --- DIRECTORIES AND FILES ---',MakefileFilename,'file','y','y');

makecsrcdir  = pathconvert('src/c', %f, %f, 'u');
makehsrcdir  = pathconvert('includes', %f, %f, 'u');
makeisrcdir  = pathconvert('interfaces', %f, %f, 'u');
makesci2cdir = FileInfo.CStyleOutCCCodeDir;
PrintStringInfo('CSRCDIR     = '+makecsrcdir,MakefileFilename,'file','y','y');
PrintStringInfo('HSRCDIR     = '+makehsrcdir,MakefileFilename,'file','y','y');
PrintStringInfo('ISRCDIR     = '+makeisrcdir,MakefileFilename,'file','y','y');
PrintStringInfo('SCI2CDIR    = .',MakefileFilename,'file','y','y');

PrintStringInfo('DIR_OBJ=Release',MakefileFilename,'file','y','y');
PrintStringInfo('LAPACK_LIB =$(SCI2CDIR)/external-libs/lapack.lib',MakefileFilename,'file','y','y');
PrintStringInfo('BLAS_LIB = $(SCI2CDIR)/external-libs/blasplus.lib',MakefileFilename,'file','y','y');
PrintStringInfo('CC = cl',MakefileFilename,'file','y','y');
PrintStringInfo('LINKER = link',MakefileFilename,'file','y','y');
PrintStringInfo('LINKER_OPTIMISATION_MODE=/RELEASE ',MakefileFilename,'file','y','y');
PrintStringInfo('CC__OPTIMISATION_MODE=-Z7 -O2 -MT',MakefileFilename,'file','y','y');
PrintStringInfo('CC_OPTIONS = $(CC_COMMON) -W3 -Gd $(CC__OPTIMISATION_MODE) /Fo""$(DIR_OBJ)/"" /Fd""$(DIR_OBJ)/"" ',MakefileFilename,'file','y','y');
PrintStringInfo('CFLAGS =  $(CC_OPTIONS) -I""$(HSRCDIR)"" -I""$(ISRCDIR)"" /EHsc /TP ',MakefileFilename,'file','y','y');
PrintStringInfo('EXEFILENAME = mytest',MakefileFilename,'file','y','y');
PrintStringInfo('EXEFILE = $(SCI2CDIR)\\$(EXEFILENAME)',MakefileFilename,'file','y','y');
PrintStringInfo('MAIN_SRC = $(SCI2CDIR)/main.c',MakefileFilename,'file','y','y');

// Sources
PrintStringInfo('SRC = \\', MakefileFilename,'file','y','y');
allSources = getAllSources();
nbSources = size(allSources);
for i = 1:(nbSources(1) - 1)
  [tmppath,tmpfile,tmpext] = fileparts(allSources(i));
  PrintStringInfo('    $(CSRCDIR)/'+tmpfile+tmpext+' \\', MakefileFilename,'file','y','y');
end
[tmppath,tmpfile,tmpext] = fileparts(allSources(nbSources(1)));
PrintStringInfo('    $(CSRCDIR)/'+tmpfile+tmpext, MakefileFilename,'file','y','y');

PrintStringInfo('OBJ = $(SRC:.c=.obj) $(MAIN_SRC:.c=.obj)',MakefileFilename,'file','y','y');
PrintStringInfo('# ---------------',MakefileFilename,'file','y','y');
PrintStringInfo('# --- TARGETS ---',MakefileFilename,'file','y','y');
PrintStringInfo('# ---------------',MakefileFilename,'file','y','y');
PrintStringInfo('compileexecute: ',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""============================""',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""Generation of the executable""',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""============================""',MakefileFilename,'file','y','y');
PrintStringInfo('\t-IF NOT EXIST  $(DIR_OBJ) mkdir $(DIR_OBJ)',MakefileFilename,'file','y','y');
PrintStringInfo('\t$(CC) $(CFLAGS) $(SRC) $(MAIN_SRC) /link $(LAPACK_LIB) $(BLAS_LIB) /out:$(EXEFILE).exe',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""==============""',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""Executing code""',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""==============""',MakefileFilename,'file','y','y');
PrintStringInfo('\t$(EXEFILE).exe',MakefileFilename,'file','y','y');
PrintStringInfo('clean:',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""=============================""',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""Removing only exe + obj files""',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""=============================""',MakefileFilename,'file','y','y');
PrintStringInfo('\t-del ""$(DIR_OBJ)\*.obj""',MakefileFilename,'file','y','y');
PrintStringInfo('\t-rmdir ""$(DIR_OBJ)""',MakefileFilename,'file','y','y');
PrintStringInfo('\t-del $(EXEFILE).exe',MakefileFilename,'file','y','y');
PrintStringInfo('\t-del $(EXEFILE).exp',MakefileFilename,'file','y','y');
PrintStringInfo('\t-del $(EXEFILE).lib',MakefileFilename,'file','y','y');
PrintStringInfo('\t-del $(EXEFILE).pdb',MakefileFilename,'file','y','y');
PrintStringInfo('\t-del $(EXEFILE).ilk',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',MakefileFilename,'file','y','y');
PrintStringInfo('distclean: clean',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""==========================""',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""Removing only the exe file""',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""==========================""',MakefileFilename,'file','y','y');
PrintStringInfo('\t-del $(EXEFILE).exe',MakefileFilename,'file','y','y');
PrintStringInfo('\t-del $(EXEFILE).exp',MakefileFilename,'file','y','y');
PrintStringInfo('\t-del $(EXEFILE).lib',MakefileFilename,'file','y','y');
PrintStringInfo('\t-del $(EXEFILE).pdb',MakefileFilename,'file','y','y');
PrintStringInfo('\t-del $(EXEFILE).ilk',MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',MakefileFilename,'file','y','y');


endfunction