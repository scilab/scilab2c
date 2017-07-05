function runsci2c(UserScilabMainFile, UserSciFilesPaths, SCI2COutputPath, Runmode, BuildTool,Target)
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
//mode(-1);
//clc;
// -----------------------
// --- End Soft reset. ---
// -----------------------

// -------------------------
// --- Input Parameters. ---
// -------------------------
RunSci2CMainDir = pwd();
disp(RunSci2CMainDir);
// -----------------------------
// --- End input Parameters. ---
// -----------------------------

// -------------------------------
// --- Perform Intializations. ---
// -------------------------------
// --- Load SCI2C directories and files. ---
//cd(fullfile(RunSci2CMainDir,'ToolInitialization'));
//exec('INIT_SCI2CLoader.sce');
//cd(RunSci2CMainDir);

// --- Initialize the SCI2C tool directories and files. ---
[FileInfoDatFile,SharedInfoDatFile] = INIT_SCI2C(UserScilabMainFile, ...
						 UserSciFilesPaths, SCI2COutputPath, RunMode, Target);

// -- Load FileInfo and SharedInfo
load(SharedInfoDatFile,'SharedInfo');
load(FileInfoDatFile,'FileInfo');

RunMode = SharedInfo.RunMode;

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

load(SharedInfoDatFile,'SharedInfo');
// ---------------------------
// --- Copy library files. ---
// ---------------------------

global SCI2CHOME

allSources = SCI2CHOME + "/" + getAllSources(SharedInfo);
allHeaders = SCI2CHOME + "/" +getAllHeaders(SharedInfo);
allInterfaces = SCI2CHOME + "/" + getAllInterfaces(SharedInfo);
if(~isempty(getAllLibraries(SharedInfo)))
  allLibraries = SCI2CHOME + "/" + getAllLibraries(SharedInfo);
else
  allLibraries = ''
end
//allLibraries = SCI2CHOME + "/" + getAllLibraries(Target);

mkdir(SCI2COutputPath+"/src/");
mkdir(SCI2COutputPath+"/src/c/");
mkdir(SCI2COutputPath+"/includes/");
mkdir(SCI2COutputPath+"/interfaces/");
mkdir(SCI2COutputPath+"/libraries/");

// -- Sources
PrintStepInfo('Copying sources', FileInfo.GeneralReport,'both');

for i = 1:size(allSources, "*")
  // DEBUG only
  //disp("Copying "+allSources(i)+" in "+SCI2COutputPath+"/src/c/");
  //Copy ode related functions only if 'ode' function is used.
  if(~isempty(strstr(allSources(i),'dode')))
    if(size(SharedInfo.Includelist) <> 0)
        if((mtlb_strcmp(part(SharedInfo.Includelist(1),1:5),'odefn') == %T))
          copyfile(allSources(i), SCI2COutputPath+"/src/c/");
        end
    end
  else
    copyfile(allSources(i), SCI2COutputPath+"/src/c/");      
  end
end

// -- Includes
PrintStepInfo('Copying headers', FileInfo.GeneralReport,'both');
for i = 1:size(allHeaders, "*")
  // DEBUG only
  //disp("Copying "+allHeaders(i)+" in "+SCI2COutputPath+"/includes/");
  copyfile(allHeaders(i), SCI2COutputPath+"/includes/");
end

// -- Interfaces
PrintStepInfo('Copying interfaces', FileInfo.GeneralReport,'both');
for i = 1:size(allInterfaces, "*")
  // DEBUG only
  //disp("Copying "+allInterfaces(i)+" in "+SCI2COutputPath+"/interfaces/");
  copyfile(allInterfaces(i), SCI2COutputPath+"/interfaces/");
end

// -- Libraries
if(~isempty(allLibraries))
  PrintStepInfo('Copying libraries', FileInfo.GeneralReport,'both');
  for i = 1:size(allLibraries, "*")
    // DEBUG only
    //disp("Copying "+allLibraries(i)+" in "+SCI2COutputPath+"/libraries/");
    copyfile(allLibraries(i), SCI2COutputPath+"/libraries/");
  end
end

//Copy folder containing opencv include files in Includes folder
//if((Target == 'RPi') & (SharedInfo.OpenCVUsed == %T))
//  copyfile(SCI2CHOME + "/" +'thirdparty/raspberrypi/includes/opencv2/',SCI2COutputPath+"/includes/opencv2")
//end  

// --------------------------
// --- Generate Makefile. ---
// --------------------------
//If output format is chosen as 'Arduino', then copy makefile for arduino from
//default folder, else generate makefile for standalone c code

if (Target == 'Arduino')

   GenerateSetupFunction(FileInfo);
   mkdir(SCI2COutputPath+"/arduino/");
   mkdir(SCI2COutputPath+"/arduino/sci2c_arduino");
   //Copy arduino makefile
   arduinoFiles = SCI2CHOME + "/" + getArduinoFiles();
   PrintStepInfo('Copying arduino files', FileInfo.GeneralReport,'both');
   copyfile(arduinoFiles(1), SCI2COutputPath);
   for i = 2:size(arduinoFiles, "*")
       // DEBUG only
       //disp("Copying "+arduinoFiles(i)+" in "+SCI2COutputPath+"/arduino/sci2carduino");
       copyfile(arduinoFiles(i), SCI2COutputPath+"/arduino/sci2c_arduino/");
   end
elseif (Target == 'AVR')
     AVRFile = SCI2CHOME + "/" + "src/c/hardware/avr/default_files/Makefile";
     copyfile(AVRFile, SCI2COutputPath);
else

   if BuildTool == "make"
     C_GenerateMakefile(FileInfo,SharedInfo);
     copyBlasLapackLibs(FileInfo,SharedInfo);   //Previously .dll files and blas,lapack library not creating for cygwin  by additing this works fine
   end
   if BuildTool == "nmake"
      //copyBlasLapackLibs(FileInfo,SharedInfo);
      C_GenerateMakefile_msvc(FileInfo,SharedInfo);
   end
end



// ------------------------------
// --- Generate SCI2C Header. ---
// ------------------------------
// FIXME : Give the user the ability to set this prefix
FunctionPrefix = "SCI2C";
C_GenerateSCI2CHeader(SCI2COutputPath+"/includes/", FunctionPrefix);

// -----------------
// --- Epilogue. ---
// -----------------
if (RunMode == 'All' | RunMode == 'Translate')
   PrintStepInfo('Translation Successfully Completed!!!',FileInfo.GeneralReport,'both');
elseif (RunMode == 'GenLibraryStructure')
   PrintStepInfo('Library Structure Successfully Created!!!',FileInfo.GeneralReport,'both');
end


endfunction


function r = copyBlasLapackLibs(FileInfo, SharedInfo)
  r = %f;
  if getos() == 'Windows' then
    // create external-libs directory
    EXTERNLIBSPATH = FileInfo.OutCCCodeDir + '/external-libs';
    if ~isdir(EXTERNLIBSPATH) then
      mkdir(EXTERNLIBSPATH);
    end
    if ~isdir(EXTERNLIBSPATH) r = %f;
    else
      // copy blas & lapack librairies
      copyfile(SCI + '/bin/blasplus.lib', EXTERNLIBSPATH);
      copyfile(SCI + '/bin/lapack.lib', EXTERNLIBSPATH);
      copyfile(SCI + '/bin/blasplus.dll', FileInfo.OutCCCodeDir);
      copyfile(SCI + '/bin/lapack.dll', FileInfo.OutCCCodeDir);
      // copy dependencies if MKL
      if isfile(SCI + '/bin/libguide40.dll') then
        copyfile(SCI + '/bin/libguide40.dll', FileInfo.OutCCCodeDir);
      end
      if isfile(SCI + '/bin/libiomp5md.dll') then
        copyfile(SCI + '/bin/libiomp5md.dll', FileInfo.OutCCCodeDir);
      end
      r = %t;
    end
  end
endfunction
