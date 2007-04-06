function [SCI2CLib, USER2CLib] = InitializeLibraries()
// This function generates the trees for the SCI2C and USER libraries.
//
// For each Scilab function a set of corresponding C functions are inserted into
// the tree.
// For each C function a CINFO leaf is insterted into the tree.
// The CINFO leaf is a structure with many fields each of them
// containing information on the input and output arguments of the function.
// Dim is the expression that returns the size of the output(s)
// Example: 
// Let's consider the sin function
// and a scalar input variable (I1Sz = 1;)
// It is possible to get the size of the output argument by using
// the Dim field: Dim = "O1Sz = I1Sz"
// and the following Scilab command:
// eval(Dim);
//
// NOut is the number of the output(s). 

clear;
clc;
   
getf("AddBranch.sci");
   
// Implement the SCI2C library tree as a tlist.
SCI2CLib = tlist(["SCI2CLib"]);

// Implement the USER libary tree as a tlist.
USER2CLib = tlist(["USER2CLib"]);
   
// ---------------------------------------------------------------
// --- Add the elementary functions to the SCI2C library tree. ---
// ---------------------------------------------------------------
disp('--> Adding the elementary functions to the SCI2C library tree.');

getf("AddElementaryFunction.sci");
SCI2CLib = AddElementaryFunction("sin",SCI2CLib);
SCI2CLib = AddElementaryFunction("cos",SCI2CLib);
SCI2CLib = AddElementaryFunction("tan",SCI2CLib);
SCI2CLib = AddElementaryFunction("cotg",SCI2CLib);
SCI2CLib = AddElementaryFunction("asin",SCI2CLib);
SCI2CLib = AddElementaryFunction("acos",SCI2CLib);
SCI2CLib = AddElementaryFunction("sinh",SCI2CLib);
SCI2CLib = AddElementaryFunction("cosh",SCI2CLib);
SCI2CLib = AddElementaryFunction("tanh",SCI2CLib);
SCI2CLib = AddElementaryFunction("asinh",SCI2CLib);
SCI2CLib = AddElementaryFunction("acosh",SCI2CLib);
SCI2CLib = AddElementaryFunction("atanh",SCI2CLib);
SCI2CLib = AddElementaryFunction("exp",SCI2CLib);
SCI2CLib = AddElementaryFunction("log",SCI2CLib);
SCI2CLib = AddElementaryFunction("log10",SCI2CLib);
SCI2CLib = AddElementaryFunction("abs",SCI2CLib);
SCI2CLib = AddElementaryFunction("inv",SCI2CLib);
SCI2CLib = AddElementaryFunction("sqrtR",SCI2CLib); 
// -------------------------------------------------------------------
// --- End add the elementary functions to the SCI2C library tree. ---
// -------------------------------------------------------------------





if (1==2)   
// determinant function

   getf("AddLeafDet.sci");
   
   [FuncStruct, CINFO, NumFunc] = AddLeafDet("det");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end

// sqrt function

   getf("AddLeafSqrt.sci");
   
   [FuncStruct, CINFO, NumFunc] = AddLeafSqrt("sqrt");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
// I add the function with 2 Input

// dot function
   
   getf("AddLeafDotOp.sci");

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
   
   getf("AddLeafAtan.sci");
   
   [FuncStruct, CINFO, NumFunc] = AddLeafAtan("atan");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
// convol function
   
   getf("AddLeafConvol.sci");
   
   [FuncStruct, CINFO, NumFunc] = AddLeafConvol("convol");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end

// fft function
   
   getf("AddLeafFFT.sci");
   
   [FuncStruct, CINFO, NumFunc] = AddLeafFFT("fft");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end

// ifft function
   
   getf("AddLeafIFFT.sci");
   
   [FuncStruct, CINFO, NumFunc] = AddLeafIFFT("ifft");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
end // end if (1==2)
endfunction
