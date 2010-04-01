//
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2010-2010 - DIGITEO - Allan CORNET
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
//
//

function C_GenerateMakefile_msvc(FileInfo, SharedInfo)
// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),2,2);

MakefileFilename = FileInfo.MakefileFilename + '.mak';

// -----------------------
// --- Initialization. ---
// -----------------------
PrintStepInfo('Generating Builder '+MakefileFilename,...
   FileInfo.GeneralReport,'both');

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
PrintStringInfo('CC__OPTIMISATION_MODE=-Z7 -O2 -MD',MakefileFilename,'file','y','y');
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