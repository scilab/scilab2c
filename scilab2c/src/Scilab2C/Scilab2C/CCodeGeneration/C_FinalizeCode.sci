function C_FinalizeCode(FileInfo,SharedInfo)
// function C_FinalizeCode(FileInfo,SharedInfo)
// -----------------------------------------------------------------
//
// Status:
// 27-Oct-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),2,2);

load(FileInfoDatFile,'FileInfo');

load(FileInfo.SharedInfoDatFile,'SharedInfo');

CPass2FileName      = FileInfo.Funct(SharedInfo.NextSCIFunNumber).CPass2FileName;
FinalCFileName      = FileInfo.Funct(SharedInfo.NextSCIFunNumber).FinalCFileName;
Pass1HeaderFileName = FileInfo.Funct(SharedInfo.NextSCIFunNumber).Pass1HeaderFileName;
FinalHeaderFileName = FileInfo.Funct(SharedInfo.NextSCIFunNumber).FinalHeaderFileName;

PrintStringInfo('/*',Pass1HeaderFileName,'file','y');
PrintStringInfo('** ---------------------------- ',Pass1HeaderFileName,'file','y');
PrintStringInfo('** --- End USER2C Includes. --- ',Pass1HeaderFileName,'file','y');
PrintStringInfo('** ---------------------------- ',Pass1HeaderFileName,'file','y');
PrintStringInfo('*/',Pass1HeaderFileName,'file','y');

[tmphdrpath,tmphdrname,tmphdrext] = fileparts(Pass1HeaderFileName);

C_SCI2CHeader(FinalCFileName);
PrintStringInfo('/*',FinalCFileName,'file','y');
PrintStringInfo('** ----------------- ',FinalCFileName,'file','y');
PrintStringInfo('** --- Includes. --- ',FinalCFileName,'file','y');
PrintStringInfo('** ----------------- ',FinalCFileName,'file','y');
PrintStringInfo('*/',FinalCFileName,'file','y');
PrintStringInfo('#include ""'+tmphdrname+tmphdrext+'""',...
   FinalCFileName,'file','y');
PrintStringInfo('/*',FinalCFileName,'file','y');
PrintStringInfo('** --------------------- ',FinalCFileName,'file','y');
PrintStringInfo('** --- End Includes. --- ',FinalCFileName,'file','y');
PrintStringInfo('** --------------------- ',FinalCFileName,'file','y');
PrintStringInfo('*/',FinalCFileName,'file','y');
PrintStringInfo(' ',FinalCFileName,'file','y');
PrintStringInfo(' ',FinalCFileName,'file','y');
PrintStringInfo(' ',FinalCFileName,'file','y');
SCI2Ccopyfile(CPass2FileName,...
   FinalCFileName,'append');
SCI2Ccopyfile(Pass1HeaderFileName,...
   FinalHeaderFileName,'append');


endfunction
