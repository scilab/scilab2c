function C_FinalizeCode(FileInfo,SharedInfo)
// function C_FinalizeCode(FileInfo,SharedInfo)
// -----------------------------------------------------------------
// //NUT: add description here
//
// Input data:
// //NUT: add description here
//
// Output data:
// //NUT: add description here
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

// -----------------------
// --- Initialization. ---
// -----------------------
// --- Load File Info Structure. ---
load(FileInfoDatFile,'FileInfo');

// --- Load Shared Info Structure. ---
load(FileInfo.SharedInfoDatFile,'SharedInfo');

CPass2FileName      = FileInfo.Funct(SharedInfo.NextSCIFunNumber).CPass2FileName;
FinalCFileName      = FileInfo.Funct(SharedInfo.NextSCIFunNumber).FinalCFileName;
Pass1HeaderFileName = FileInfo.Funct(SharedInfo.NextSCIFunNumber).Pass1HeaderFileName;
FinalHeaderFileName = FileInfo.Funct(SharedInfo.NextSCIFunNumber).FinalHeaderFileName;
// #RNU_RES_B
PrintStringInfo('Generating the final C code in:'+FinalCFileName,...
   FileInfo.Funct(SharedInfo.NextSCIFunNumber).ReportFileName,'file','y');
// #RNU_RES_E
// ---------------------------
// --- End Initialization. ---
// ---------------------------

// ---------------------------------
// --- Finalize the header file. ---
// ---------------------------------
if(SharedInfo.OpenCVUsed)
	PrintStringInfo('#include ""cvcore.hpp""',Pass1HeaderFileName,'file','y');
	PrintStringInfo('#include ""int_cvcore.hpp""',Pass1HeaderFileName,'file','y');
	PrintStringInfo('#include ""cvhighgui.hpp""',Pass1HeaderFileName,'file','y');
	PrintStringInfo('#include ""int_cvhighgui.hpp""',Pass1HeaderFileName,'file','y');
	PrintStringInfo('#include ""cvimgproc.hpp""',Pass1HeaderFileName,'file','y');
	PrintStringInfo('#include ""int_cvimgproc.hpp""',Pass1HeaderFileName,'file','y');	
end
PrintStringInfo('/*',Pass1HeaderFileName,'file','y');
PrintStringInfo('** ---------------------------- ',Pass1HeaderFileName,'file','y');
PrintStringInfo('** --- End USER2C Includes. --- ',Pass1HeaderFileName,'file','y');
PrintStringInfo('** ---------------------------- ',Pass1HeaderFileName,'file','y');
PrintStringInfo('*/',Pass1HeaderFileName,'file','y');
//PrintStringInfo('#ifdef  __cplusplus',Pass1HeaderFileName,'file','y');
//PrintStringInfo('} /* extern ""C"" */',Pass1HeaderFileName,'file','y');
//PrintStringInfo('#endif',Pass1HeaderFileName,'file','y');
PrintStringInfo('#endif',Pass1HeaderFileName,'file','y');
// -------------------------------------
// --- End Finalize the header file. ---
// -------------------------------------

[tmphdrpath,tmphdrname,tmphdrext] = fileparts(Pass1HeaderFileName);

// #RNU_RES_B
// --------------------------------------------------
// --- Copy the C code into the C code directory. ---
// --------------------------------------------------
// #RNU_RES_E
C_SCI2CHeader(FinalCFileName);
PrintStringInfo('/*',FinalCFileName,'file','y');
PrintStringInfo('** ----------------- ',FinalCFileName,'file','y');
PrintStringInfo('** --- Includes. --- ',FinalCFileName,'file','y');
PrintStringInfo('** ----------------- ',FinalCFileName,'file','y');
PrintStringInfo('*/',FinalCFileName,'file','y');
PrintStringInfo('#include ""'+tmphdrname+tmphdrext+'""',...
   FinalCFileName,'file','y');
//If current file is main C file, include header files corresponding to ODE
//functions, if any.
if(SharedInfo.NextSCIFunName == SharedInfo.SCIMainFunName)
	if(size(SharedInfo.Includelist) <> 0)  //check if list is empty
		//If not empty, add those header files here.
		for cntlist = 1:size(SharedInfo.Includelist)
			PrintStringInfo('#include ""'+SharedInfo.Includelist(cntlist)+'.h""',...
		   		FinalCFileName,'file','y');
		end

	end	
end	

//If current function contains ODEs, add gsl/gsl_errno.h.
if (mtlb_strcmp(part(SharedInfo.CurrentFunInfo.CFunctionName,1:5),'odefn') == %T)
	PrintStringInfo('#include <gsl/gsl_errno.h>',...
		   		FinalCFileName,'file','y');
end
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
