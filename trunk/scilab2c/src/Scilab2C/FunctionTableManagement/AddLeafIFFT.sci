function [FuncStruct, CINFO, NumFunc] = AddLeafIFFT(FunctionName)

   NumFunc = 0;

//
// 1 inputs
//
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.F.CINFO";
   CINFO(NumFunc).CPROT = "y=SRF" + FunctionName + "SRF(x)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = 1";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.D.CINFO";
   CINFO(NumFunc).CPROT = "y=SRD" + FunctionName + "SRD(x)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = 1";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.C.F.CINFO";
   CINFO(NumFunc).CPROT = "y=SCF" + FunctionName + "SCF(x)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz=1";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.C.D.CINFO";
   CINFO(NumFunc).CPROT = "y=SCD" + FunctionName + "SCD(x)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = 1";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.F.CINFO";
   CINFO(NumFunc).CPROT = "y=MRF" + FunctionName + "MCF(*X, strideX, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.D.CINFO";
   CINFO(NumFunc).CPROT = "y=MRD" + FunctionName + "MCD(*X, strideX, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.C.F.CINFO";
   CINFO(NumFunc).CPROT = "y=MCF" + FunctionName + "MCF(*X, strideX, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.C.D.CINFO";   
   CINFO(NumFunc).CPROT = "y=MCD" + FunctionName + "MCD(*X, strideX, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
endfunction
