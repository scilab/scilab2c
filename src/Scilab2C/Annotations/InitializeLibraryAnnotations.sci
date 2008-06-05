function InitializeLibraryAnnotations(FileInfoDatFile)
// function InitializeLibraryAnnotations(FileInfoDatFile)
// -----------------------------------------------------------------
// This function initializes the SCI2C and USER library annotation
// files.
// For each Scilab function a .ann file is created where the function
// annotations are listed into it.
//
// Input data:
// FileInfoDatFile: name of the .dat file containing the FileInfo structure.
//
// Output data:
//
// Status:
// 12-Jun-2007 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

// ---------------------
// --- Load section. ---
// ---------------------
// --- Load File Info Structure. ---
load(FileInfoDatFile,'FileInfo');

// --- Load Shared Info Structure. ---
load(FileInfo.SharedInfoDatFile,'SharedInfo');
// -------------------------
// --- End load section. ---
// -------------------------


PrintStepInfo('Initialize Library Annotation Files.',...
   FileInfo.GeneralReport,'both');

OutDir = FileInfo.SCI2CLibAnnDirName;
SCI2CCreateDir(OutDir);

// ------------------------------------------------------
// --- Add elementary functions to the SCI2C library. ---
// ------------------------------------------------------
PrintStringInfo('Adding elementary functions to the SCI2C library.',...
   FileInfo.GeneralReport,'both','y');

//RN non so comet trattare la equal
AnnStyle = 'INON';

//RN equal funziona come le sin ma occorre fare diversi controlli per capire se l'output 
//e' compatibile con l'input. Per ora la lascio cosi'.
NewFunctionName = 'Equal';
PrintStringInfo('   Adding function ""'+NewFunctionName+'"".',FileInfo.GeneralReport,'both','y');
GenAnnotationFile(AnnStyle,NewFunctionName,OutDir);

   // ----------------------
   // --- Style: 'I1O1'. ---
   // ----------------------
AnnStyle = 'I1O1';

NewFunctionName = 'sin';
PrintStringInfo('   Adding function ""'+NewFunctionName+'"".',FileInfo.GeneralReport,'both','y');
GenAnnotationFile(AnnStyle,NewFunctionName,OutDir);

NewFunctionName = 'cos';
PrintStringInfo('   Adding function ""'+NewFunctionName+'"".',FileInfo.GeneralReport,'both','y');
GenAnnotationFile(AnnStyle,NewFunctionName,OutDir);

// SCI2CLib = AddElementaryFunction("tan",SCI2CLib);
// SCI2CLib = AddElementaryFunction("cotg",SCI2CLib);
// SCI2CLib = AddElementaryFunction("asin",SCI2CLib);
// SCI2CLib = AddElementaryFunction("acos",SCI2CLib);
// SCI2CLib = AddElementaryFunction("sinh",SCI2CLib);
// SCI2CLib = AddElementaryFunction("cosh",SCI2CLib);
// SCI2CLib = AddElementaryFunction("tanh",SCI2CLib);
// SCI2CLib = AddElementaryFunction("asinh",SCI2CLib);
// SCI2CLib = AddElementaryFunction("acosh",SCI2CLib);
// SCI2CLib = AddElementaryFunction("atanh",SCI2CLib);
// SCI2CLib = AddElementaryFunction("exp",SCI2CLib);
// SCI2CLib = AddElementaryFunction("log",SCI2CLib);
// SCI2CLib = AddElementaryFunction("log10",SCI2CLib);
// SCI2CLib = AddElementaryFunction("abs",SCI2CLib);
// SCI2CLib = AddElementaryFunction("inv",SCI2CLib);
// SCI2CLib = AddElementaryFunction("sqrtR",SCI2CLib); 

   // ----------------------
   // --- Style: 'DET'. ---
   // ----------------------
AnnStyle = 'DET';

NewFunctionName = 'det';
PrintStringInfo('   Adding function ""'+NewFunctionName+'"".',FileInfo.GeneralReport,'both','y');
GenAnnotationFile(AnnStyle,NewFunctionName,OutDir);

// ----------------------------------------------------------
// --- End add elementary functions to the SCI2C library. ---
// ----------------------------------------------------------


// ----------------------------------------------------
// --- Add operator functions to the SCI2C library. ---
// ----------------------------------------------------
PrintStringInfo('Adding operator functions to the SCI2C library.',...
   FileInfo.GeneralReport,'both','y');

   // ----------------------
   // --- Style: 'I2O1'. ---
   // ----------------------
AnnStyle = 'I2O1';

NewFunctionName = 'OpPlus';
PrintStringInfo('   Adding operator ""'+NewFunctionName+'"".',FileInfo.GeneralReport,'both','y');
GenAnnotationFile(AnnStyle,NewFunctionName,OutDir);

NewFunctionName = 'OpMinus';
PrintStringInfo('   Adding operator ""'+NewFunctionName+'"".',FileInfo.GeneralReport,'both','y');
GenAnnotationFile(AnnStyle,NewFunctionName,OutDir);

NewFunctionName = 'OpMul';
PrintStringInfo('   Adding operator ""'+NewFunctionName+'"".',FileInfo.GeneralReport,'both','y');
GenAnnotationFile(AnnStyle,NewFunctionName,OutDir);

NewFunctionName = 'OpDiv';
PrintStringInfo('   Adding operator ""'+NewFunctionName+'"".',FileInfo.GeneralReport,'both','y');
GenAnnotationFile(AnnStyle,NewFunctionName,OutDir);

   // -----------------------
   // --- Style: 'TRANS'. ---
   // -----------------------
AnnStyle = 'TRANS';

NewFunctionName = 'OpTrans';
PrintStringInfo('   Adding operator ""'+NewFunctionName+'"".',FileInfo.GeneralReport,'both','y');
GenAnnotationFile(AnnStyle,NewFunctionName,OutDir);

NewFunctionName = 'OpTransConj';
PrintStringInfo('   Adding operator ""'+NewFunctionName+'"".',FileInfo.GeneralReport,'both','y');
GenAnnotationFile(AnnStyle,NewFunctionName,OutDir);

// --------------------------------------------------------
// --- End add operator functions to the SCI2C library. ---
// --------------------------------------------------------



if (1==2)   
// determinant function

   
   [FuncStruct, CINFO, NumFunc] = AddLeafDet("det");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end

// sqrt function

   
   [FuncStruct, CINFO, NumFunc] = AddLeafSqrt("sqrt");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
// I add the function with 2 Input

// dot function
   

   [FuncStruct, CINFO, NumFunc] = AddLeafDotOp("DotAdd");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafDotOp("DotSub");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafDotOp("DotMul");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafDotOp("DotDiv");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
// op function
 
   [FuncStruct, CINFO, NumFunc] = AddLeafDotOp("OpAdd");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafDotOp("OpSub");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafDotOp("OpMul");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafDotOp("OpDiv");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
// atan function
   
   
   [FuncStruct, CINFO, NumFunc] = AddLeafAtan("atan");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
// convol function
   
   
   [FuncStruct, CINFO, NumFunc] = AddLeafConvol("convol");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end

// fft function
   
   
   [FuncStruct, CINFO, NumFunc] = AddLeafFFT("fft");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end

// ifft function
   
   
   [FuncStruct, CINFO, NumFunc] = AddLeafIFFT("ifft");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
end // end if (1==2)

endfunction
