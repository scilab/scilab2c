function [SCI2CLib, USER2CLib] = main()
//
// Dim is the expression that returns the size of the output(s)
// Example: 
// if I want to calculate the size of the output sin than
//      x is Scalar
//      I1Sz = 1;
//    
//      Dim = "O1Sz = I1Sz"
//      eval(Dim);
//
// NOut is the number of the output(s). 
// Example: if I have 1 output then NOut = 1
//              if I have 2 outputs then NOut = 2
//
   clear;
   clc;
   
   getf("AddBranch.sci");
   
   SCI2CLib = tlist(["SCI2CLib"]);

   USER2CLib = tlist(["USER2CLib"]);
   
// I create the library for the elementary function

   getf("AddLeafElementary.sci");
   
   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("sin");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("cos");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end

   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("tan");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("cotg");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end

   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("asin");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("acos");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("sinh");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("cosh");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("tanh");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("asinh");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("acosh");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("atanh");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("exp");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end

   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("log");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end

   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("log10");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end

   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("abs");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("inv");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
   [FuncStruct, CINFO, NumFunc] = AddLeafElementary("sqrtR");
   
   for ind = 1 : NumFunc, 
      SCI2CLib = AddBranch(SCI2CLib, FuncStruct(ind), CINFO(ind) );
   end
   
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

endfunction
