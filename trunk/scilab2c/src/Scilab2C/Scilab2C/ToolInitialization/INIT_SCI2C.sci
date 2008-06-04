function [FileInfoDatFile,SharedInfoDatFile] = INIT_SCI2C(SCI2CInputPrmFile)
// function [FileInfoDatFile,SharedInfoDatFile] = INIT_SCI2C(SCI2CInputPrmFile)
// -----------------------------------------------------------------
// Status:
// 13-Apr-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

exec(SCI2CInputPrmFile);
WorkAreaSizeBytes = 2000*8; // 2000 locations of double
TotTempScalarVars = 20; 
EnableTempVarsReuse = 0; // 0 = Disable; 1 = Enable.


[SCI2CResultDir,tmpfile,tmpext] = fileparts(SCI2CInputPrmFile);

WorkingDir = fullfile(SCI2CResultDir,'SCI2CTmpResultsReports');
OutCCCodeDir = fullfile(SCI2CResultDir,'C_Code');

SharedInfo = INIT_GenSharedInfo(WorkingDir,OutCCCodeDir,UserSciFilesPaths,...
   RunMode,UserScilabMainFile,TotTempScalarVars,EnableTempVarsReuse,Sci2CLibMainHeaderFName);
   
FileInfo = INIT_GenFileInfo(WorkingDir,OutCCCodeDir,UserSciFilesPaths);
PrintStepInfo('SCI2C hArtes/POLIBA Tool!!!',FileInfo.GeneralReport,'stdout');

INIT_RemoveDirs(FileInfo,SharedInfo.RunMode);

INIT_CreateDirs(FileInfo);
PrintStepInfo('SCI2C hArtes/POLIBA Tool!!!',FileInfo.GeneralReport,'file');

GlobalVars = [];
save(FileInfo.GlobalVarFileName,GlobalVars);

clear FunInfo
FunInfo.SCIFunctionName     = SharedInfo.NextSCIFunName;
FunInfo.CFunctionName       = SharedInfo.NextCFunName;
FunInfo.FunPrecSpecifier    = ''; //NUT: si riferiscono al main verifica se sono corrette
FunInfo.FunTypeAnnot        = ''; //NUT: si riferiscono al main verifica se sono corrette
FunInfo.FunSizeAnnot        = ''; //NUT: si riferiscono al main verifica se sono corrette
FunInfo.NInArg              = 0;//NUT: si riferiscono al main verifica se sono corrette
FunInfo.InArg(1).Name       = '';//NUT: si riferiscono al main verifica se sono corrette
FunInfo.InArg(1).Type       = '';//NUT: si riferiscono al main verifica se sono corrette
FunInfo.InArg(1).Value      = %nan;//NUT: si riferiscono al main verifica se sono corrette
FunInfo.InArg(1).Size(1)    = '';//NUT: si riferiscono al main verifica se sono corrette
FunInfo.InArg(1).Dimension  = '';//NUT: si riferiscono al main verifica se sono corrette
FunInfo.InArg(2).Size(2)    = '';//NUT: si riferiscono al main verifica se sono corrette
FunInfo.NOutArg             = 0;//NUT: si riferiscono al main verifica se sono corrette
FunInfo.OutArg(1).Name      = '';
FunInfo.OutArg(1).Type      = '';
FunInfo.OutArg(1).Size(1)   = '';
FunInfo.OutArg(1).Size(2)   = '';
FunInfo.OutArg(1).Dimension = '';
FunInfo.PosFirstOutScalar   = 0;
FunInfo.LibTypeInfo         = 'USER2C';
save(fullfile(FileInfo.FunctionList.FunInfoDatDir,FunInfo.CFunctionName+'.dat'),FunInfo);
clear FunInfo

clear ASTStack
ASTStack.SCI2CSTACK    = 'EMPTYSTACK';
ASTStack.StackPosition = 1;
ASTStack.STACKDEDUG    = 0;
save(FileInfo.ASTStackDataFile,ASTStack);
clear ASTStack

save(FileInfo.FileInfoDatFile,FileInfo);
save(FileInfo.SharedInfoDatFile,SharedInfo);
FileInfoDatFile = FileInfo.FileInfoDatFile;
SharedInfoDatFile = FileInfo.SharedInfoDatFile;

global anscounter; //NUT: just to fix problem with ans variables.
anscounter = 0;

endfunction
