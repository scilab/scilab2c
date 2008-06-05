function UpdateSCI2CInfo(FileInfoDatFile);
// function UpdateSCI2CInfo(FileInfoDatFile);
// -----------------------------------------------------------------
// Updates the FileInfo struct according to the new scilab function
// to be converted in C.
//
// Input data:
// FileInfoDatFile: name of the .dat file containing the FileInfo structure.
// SharedInfoDatFile: it is a buffer containing parameters that are exchanged by the
//                   functions of the SCI2C tool.
//
// Output data:
//
// Status:
// 13-Apr-2007 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

// ---------------------------------
// --- Load File Info Structure. ---
// ---------------------------------
load(FileInfoDatFile,'FileInfo');

// -----------------------------------
// --- Load Shared Info Structure. ---
// -----------------------------------
load(FileInfo.SharedInfoDatFile,'SharedInfo');

// ---------------------------------------------------
// --- Extraction of the function name and number. ---
// ---------------------------------------------------
funname   = SharedInfo.Next(1).SCIFunName;
funnumber = SharedInfo.NextSCIFunNumber;

PrintStepInfo('Translate function '+funname,...
   FileInfo.GeneralReport,'both');

PrintStepInfo('Update the File Info Struct.',...
   FileInfo.GeneralReport,'both');

// -----------------------------------
// --- Update File Info structure. ---
// -----------------------------------
FileInfo.Funct(funnumber).Name              = funname;
FileInfo.Funct(funnumber).SCIFileName       = SharedInfo.Next(1).SCIFileName;
FileInfo.Funct(funnumber).ASTFileName       = fullfile(FileInfo.ResultDir,funname,funname+'.ast');
FileInfo.Funct(funnumber).CPass1V1FileName  = fullfile(FileInfo.ResultDir,funname,funname+'_pass1V1.c');
FileInfo.Funct(funnumber).CPass1V2FileName  = fullfile(FileInfo.ResultDir,funname,funname+'_pass1V2.c');
FileInfo.Funct(funnumber).ReportFileName    = fullfile(FileInfo.ResultDir,funname,funname+'.rpt');
FileInfo.Funct(funnumber).LocalVarFileName  = fullfile(FileInfo.ResultDir,funname,funname+'_LOCVAR.dat');
FileInfo.Funct(funnumber).TempVarFileName   = fullfile(FileInfo.ResultDir,funname,funname+'_TMPVAR.dat');

// --------------------------------------
// --- Create the function directory. ---
// --------------------------------------
mkdir(FileInfo.ResultDir,funname);

// -------------------------
// --- Delete old files. ---
// -------------------------
SCI2Cmdelete(FileInfo.Funct(funnumber).ASTFileName);
SCI2Cmdelete(FileInfo.Funct(funnumber).CPass1V1FileName);
SCI2Cmdelete(FileInfo.Funct(funnumber).CPass1V2FileName);
SCI2Cmdelete(FileInfo.Funct(funnumber).ReportFileName);
SCI2Cmdelete(FileInfo.Funct(funnumber).LocalVarFileName);
SCI2Cmdelete(FileInfo.Funct(funnumber).TempVarFileName);

// -----------------------------------
// --- Initialize Local/Temp Vars. ---
// -----------------------------------
LocalVars = [];
TempVars = [];

// ---------------------
// --- Save section. ---
// ---------------------
// --- Save File Info Structure. ---
save(FileInfoDatFile,FileInfo);

// --- Save Local/Temp Vars. ---
save(FileInfo.Funct(funnumber).LocalVarFileName,LocalVars);
save(FileInfo.Funct(funnumber).TempVarFileName,TempVars);
// -------------------------
// --- End save section. ---
// -------------------------

endfunction
