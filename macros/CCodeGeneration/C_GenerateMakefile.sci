//Removed 4 lines code from end that causes ot generate the Makefile.mak file that is not needed with cygwin
//Changed at line 52
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

target = SharedInfo.Target;
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
makelibdir   = pathconvert('libraries', %f, %f, 'u');
makesci2cdir = FileInfo.CStyleOutCCCodeDir;


PrintStringInfo('CSRCDIR     = '+makecsrcdir,FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('HSRCDIR     = '+makehsrcdir,FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('ISRCDIR     = '+makeisrcdir,FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('LIBDIR     = '+makelibdir,FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('SCI2CDIR    = .',FileInfo.MakefileFilename,'file','y','y');

if getos() == 'Windows' then   
  
     // Compiler definition
     PrintStringInfo('CC     = gcc',FileInfo.MakefileFilename,'file','y','y');
     PrintStringInfo('CXX     = g++',FileInfo.MakefileFilename,'file','y','y');
     PrintStringInfo('CFLAGS = -Wall -pedantic -g -I $(HSRCDIR) -I $(ISRCDIR)',FileInfo.MakefileFilename,'file','y','y');
     PrintStringInfo('CXXFLAGS = -Wall -pedantic -g -I $(HSRCDIR) -I $(ISRCDIR)',FileInfo.MakefileFilename,'file','y','y');
     PrintStringInfo('LDFLAGS = -L./ -lblasplus -llapack -lm',FileInfo.MakefileFilename,'file','y','y');   //Added -L./ and -lblasplus(previously it was -lblas)
     
else 
	if (target == 'RPi')
		PrintStringInfo('CC     = arm-linux-gnueabihf-gcc ',FileInfo.MakefileFilename,'file','y','y');
    PrintStringInfo('CXX     = arm-linux-gnueabihf-g++ ',FileInfo.MakefileFilename,'file','y','y');
	  PrintStringInfo('CFLAGS = -Wall -pedantic -g -I $(HSRCDIR) -I $(ISRCDIR) -L $(LIBDIR)',FileInfo.MakefileFilename,'file','y','y');
    PrintStringInfo('CXXFLAGS = -Wall -pedantic -g -I $(HSRCDIR) -I $(ISRCDIR) -L $(LIBDIR)',FileInfo.MakefileFilename,'file','y','y');
    PrintStringInfo('LDFLAGS = -llapack -lrefblas -lgfortran -lwiringPi',FileInfo.MakefileFilename,'file','y','y');
  else
		PrintStringInfo('CC     = gcc',FileInfo.MakefileFilename,'file','y','y');
    PrintStringInfo('CXX     = g++',FileInfo.MakefileFilename,'file','y','y');
    PrintStringInfo('CFLAGS = -Wall -pedantic -g -I $(HSRCDIR) -I $(ISRCDIR) -L $(LIBDIR)',FileInfo.MakefileFilename,'file','y','y');
    PrintStringInfo('CXXFLAGS = -Wall -pedantic -g -I $(HSRCDIR) -I $(ISRCDIR) -L $(LIBDIR)',FileInfo.MakefileFilename,'file','y','y');
	  PrintStringInfo('LDFLAGS = -lblas -llapack -lm ',FileInfo.MakefileFilename,'file','y','y');
  end 
	if(SharedInfo.OpenCVUsed == %T)
      PrintStringInfo('LDFLAGS += -lopencv_calib3d -lopencv_contrib -lopencv_features2d -lopencv_flann -lopencv_gpu',FileInfo.MakefileFilename,'file','y','y');
      PrintStringInfo('LDFLAGS += -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_ml -lopencv_nonfree',FileInfo.MakefileFilename,'file','y','y');
      PrintStringInfo('LDFLAGS += -lopencv_objdetect -lopencv_ocl -lopencv_photo -lopencv_stitching -lopencv_superres',FileInfo.MakefileFilename,'file','y','y');
      PrintStringInfo('LDFLAGS += -lopencv_ts -lopencv_video -lopencv_videostab -lopencv_core -lrt -lpthread -lm -ldl', FileInfo.MakefileFilename,'file','y','y');
      PrintStringInfo('LDFLAGS += -lIlmImf -ljpeg -ljasper -ltiff -lpng -lzlib -lstdc++',FileInfo.MakefileFilename,'file','y','y');
  end
end
//If ode function is used, add libgsl.
if(size(SharedInfo.Includelist) <> 0)
  if((mtlb_strcmp(part(SharedInfo.Includelist(1),1:5),'odefn') == %T))
	PrintStringInfo('LDFLAGS += -lgsl',FileInfo.MakefileFilename,'file','y','y');
  end
end

// Binary definition
PrintStringInfo('EXEFILENAME = '+SharedInfo.SCIMainFunName,FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('EXEFILE = $(SCI2CDIR)/$(EXEFILENAME)', FileInfo.MakefileFilename,'file','y','y');

// Sources
//Check the output format selected and insert files according to it
PrintStringInfo('SRC = $(wildcard $(CSRCDIR)/*.c)', FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('SRCC = $(wildcard $(CSRCDIR)/*.cpp)', FileInfo.MakefileFilename,'file','y','y');

// Objects
PrintStringInfo('OBJ = $(SRC:.c=.o)', FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('OBJC = $(SRCC:.cpp=.o)', FileInfo.MakefileFilename,'file','y','y');

// Rules
PrintStringInfo('# ---------------',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('# --- TARGETS ---',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('# ---------------',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('compileexecute: $(OBJ) $(OBJC)',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""============================""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""Generation of the executable""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""============================""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t$(CXX) $(CFLAGS) $(OBJ) $(OBJC) *.c $(LDFLAGS) -o $(EXEFILE)',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',FileInfo.MakefileFilename,'file','y','y');
if(target == "StandAlone")
  PrintStringInfo('\t@echo ""==============""',FileInfo.MakefileFilename,'file','y','y');
  PrintStringInfo('\t@echo ""Executing code""',FileInfo.MakefileFilename,'file','y','y');
  PrintStringInfo('\t@echo ""==============""',FileInfo.MakefileFilename,'file','y','y');
  PrintStringInfo('\t$(EXEFILE)',FileInfo.MakefileFilename,'file','y','y');
end
PrintStringInfo('clean:',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""=============================""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""Removing only exe + obj files""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""=============================""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\trm -rf $(EXEFILE)',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\trm -rf $(OBJ)',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\trm -rf $(OBJC)',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',FileInfo.MakefileFilename,'file','y','y');

PrintStringInfo('distclean: clean',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""==========================""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""Removing only the exe file""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo ""==========================""',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\trm -rf $(EXEFILE)',FileInfo.MakefileFilename,'file','y','y');
PrintStringInfo('\t@echo "" ""',FileInfo.MakefileFilename,'file','y','y');



endfunction
