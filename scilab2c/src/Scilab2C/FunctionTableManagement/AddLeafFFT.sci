function [FuncStruct, CINFO, NumFunc] = AddLeafFFT(FunctionName)

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
   
// 
// 2 inputs
//
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.F.S.R.F.CINFO";
   CINFO(NumFunc).CPROT = "SRFSRF" + FunctionName + "SRF(x, y, z, Nelements)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
      
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.D.S.R.D.CINFO";
   CINFO(NumFunc).CPROT = "SRDSRD" + FunctionName + "SRD(x, y, z, Nelements)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.C.F.S.R.F.CINFO";
   CINFO(NumFunc).CPROT = "SCFSRF" + FunctionName + "SCF(x, y, z, Nelements)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.C.D.S.R.D.CINFO";
   CINFO(NumFunc).CPROT = "SCDSRD" + FunctionName + "SCD(x, y, z, Nelements)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.F.S.R.F.CINFO";
   CINFO(NumFunc).CPROT = "MRFSRF" + FunctionName + "MCF(*X, strideX, y, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.D.S.R.D.CINFO";
   CINFO(NumFunc).CPROT = "MRDSRD" + FunctionName + "MCD(*X, strideX, y, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.C.F.S.R.F.CINFO";
   CINFO(NumFunc).CPROT = "MCFSRF" + FunctionName + "MCF(*X, strideX, y, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.C.D.S.R.D.CINFO";
   CINFO(NumFunc).CPROT = "MCDSRD" + FunctionName + "MCD(*X, strideX, y, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
//
//4 inputs
//
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.F.S.R.F.S.R.F.S.R.F.CINFO";
   CINFO(NumFunc).CPROT = "y=SRFSRFSRFSRF" + FunctionName + "SRF(x)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = 1";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.D.S.R.D.S.R.D.S.R.D.CINFO";
   CINFO(NumFunc).CPROT = "y=SRDSRDSRDSRD" + FunctionName + "SRD(x)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = 1";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.C.F.S.R.F.S.R.F.S.R.F.CINFO";
   CINFO(NumFunc).CPROT = "y=SCFSRFSRFSRF" + FunctionName + "SCF(x)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz=1";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.C.D.S.R.D.S.R.D.S.R.D.CINFO";
   CINFO(NumFunc).CPROT = "y=SCDSRDSRDSRD" + FunctionName + "SCD(x)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = 1";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.F.S.R.F.S.R.F.S.R.F.CINFO";
   CINFO(NumFunc).CPROT = "y=MRFSRFSRFSRF" + FunctionName + "MCF(*X, strideX, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.D.S.R.D.S.R.D.S.R.D.CINFO";
   CINFO(NumFunc).CPROT = "y=MRDSRDSRDSRD" + FunctionName + "MCD(*X, strideX, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.C.F.S.R.F.S.R.F.S.R.F.CINFO";
   CINFO(NumFunc).CPROT = "y=MCFSRFSRFSRF" + FunctionName + "MCF(*X, strideX, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.C.D.S.R.D.S.R.D.S.R.D.CINFO";   
   CINFO(NumFunc).CPROT = "y=MCDSRDSRDSRD" + FunctionName + "MCD(*X, strideX, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;

   
endfunction
