function [FileInfoDatFile,SharedInfoDatFile] = InitializeSCI2C(SCI2CInputPrmFile);
// function [FileInfoDatFile,SharedInfoDatFile] = InitializeSCI2C(SCI2CInputPrmFile);
// -----------------------------------------------------------------
// This function initializes the SCI2C tool according
// to the input parameters recorded in the SCI2CParameters.
// All info will be stored into FileInfoDatFile.
//
// Input data:
// SCI2CInputPrmFile: name of the .sce file containing input parameters.
//
// Output data:
// FileInfoDatFile: name of the .dat file containing the FileInfo structure.
// SharedInfoDatFile: it is a buffer containing parameters that are exchanged by the
//                    functions of the SCI2C tool.
// Status:
// 13-Apr-2007 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

// --- Read Input Parameters. ---
exec(SCI2CInputPrmFile);

FileInfoDatFile   = fullfile(ResultDir,'FileInfo.dat'); 
SharedInfoDatFile = fullfile(ResultDir,'SharedInfo.dat'); 

// ----------------------------
// --- Initialize FileInfo. ---
// ----------------------------
FileInfo.FileInfoDatFile       = FileInfoDatFile;
FileInfo.SharedInfoDatFile     = SharedInfoDatFile;
FileInfo.ResultDir             = ResultDir;
FileInfo.SCI2CLibAnnDirName    = fullfile(FileInfo.ResultDir,'SCI2CLibAnnotations');
FileInfo.USER2CLibAnnDirName   = fullfile(FileInfo.ResultDir,'USER2CLibAnnotations');
FileInfo.SCI2CLibTreeFileName  = fullfile(FileInfo.ResultDir,'SCI2CLibTree.dat');
FileInfo.USER2CLibTreeFileName = fullfile(FileInfo.ResultDir,'USER2CLibTree.dat');
FileInfo.GeneralReport         = fullfile(FileInfo.ResultDir,'SCI2CGeneralReport.txt');
FileInfo.GlobalVarFileName     = fullfile(FileInfo.ResultDir,'GBLVAR.dat');
FileInfo.UserSciFilesPaths     = UserSciFilesPaths;

// ------------------------------
// --- Initialize SharedInfo. ---
// ------------------------------
// File names of the next .sci files to be converted in AST and
// successively into C. 
SharedInfo.Next(1).SCIFileName  = ScilabMainFile; 
[scipath,funname,sciext]        = fileparts(ScilabMainFile);
SharedInfo.Next(1).SCIFunName   = funname; //RN per ora no so cosa metter
SharedInfo.Next(1).CFunName     = funname; //RN per ora no so cosa metter
SharedInfo.Next(1).InArg        = 1; //RN per ora non so che mettere.
SharedInfo.Next(1).OutArg       = 1; //RN per ora non so che mettere.
SharedInfo.NextSCIFunNumber     = 1; 

SharedInfo.Annotations.GBLVAR  = 'global';
SharedInfo.Annotations.VARTYPE = '//_SCI2C_VARTYPE:';
SharedInfo.Annotations.FUNNOUT = '//_SCI2C_NOUT:';
SharedInfo.Annotations.FUNSIZE = '//_SCI2C_FUNSIZE:';
SharedInfo.Annotations.FUNTYPE = '//_SCI2C_FUNTYPE:'; // Type includes also precision.

// Info related to temp variables used in the C code.
SharedInfo.WorkAreaSizeBytes   = WorkAreaSizeBytes;
SharedInfo.WorkAreaUsedBytes   = 0;
SharedInfo.WorkAreaName        = '__WorkAreaPtr';
SharedInfo.TotTempScalarVars   = TotTempScalarVars;
SharedInfo.UsedTempScalarVars  = 0;
SharedInfo.TempScalarVarsName  = '__Scalar';
// Info related to temp variables used in the AST reading phase.
SharedInfo.ASTReader.UsedTempVars = 0;
SharedInfo.ASTReader.TempVarsName = '__temp';
SharedInfo.ASTReader.ReusableTempVars    = [];//RN to be removed
                                               
// ------------------------------
// --- Initialize GlobalVars. ---
// ------------------------------
GlobalVars = [];

// ----------------------------------------------------
// --- Remove previous versions of SCI2C files/dir. ---
// ----------------------------------------------------
//SCI2Cmdelete(FileInfo.FileInfoDatFile);
//SCI2Cmdelete(FileInfo.SharedInfoDatFile);
//SCI2Cmdelete(FileInfo.SCI2CLibTreeFileName);
//SCI2Cmdelete(FileInfo.USER2CLibTreeFileName);
//SCI2Cmdelete(FileInfo.GeneralReport);
//SCI2Cmdelete(FileInfo.GlobalVarFileName);
disp('Removing directory: '+FileInfo.ResultDir);
yesno=input('Are you sure [y/n]?','string');
if (yesno=='y')
  rmdir(FileInfo.ResultDir,'s');
else
  SCI2Cerror('Cannot continue, because you don''t want to delete: '+FileInfo.ResultDir);
end

// ---------------------------
// --- Create Directories. ---
// ---------------------------
SCI2CCreateDir(FileInfo.ResultDir);
SCI2CCreateDir(FileInfo.SCI2CLibAnnDirName);
SCI2CCreateDir(FileInfo.USER2CLibAnnDirName);

// ---------------------------------------------
// --- Generate new versions of SCI2C files. ---
// ---------------------------------------------
save(FileInfo.FileInfoDatFile,FileInfo);
save(FileInfo.SharedInfoDatFile,SharedInfo);
save(FileInfo.GlobalVarFileName,GlobalVars);

endfunction
