function [FuncStruct, CINFO, NumFunc] = AddLeafElementary(FunctionName)
   
   NumFunc = 0;
   
   NumFunc = NumFunc + 1;
   
   FuncStruct(NumFunc) = FunctionName + ".S.R.F.CINFO";
   CINFO(NumFunc).CPROT = "y=SRF" + FunctionName + "SRF(x)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;
   
   FuncStruct(NumFunc) = FunctionName + ".S.R.D.CINFO";
   CINFO(NumFunc).CPROT = "y=SRD" + FunctionName + "SRD(x)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;
   
   FuncStruct(NumFunc) = FunctionName + ".S.C.F.CINFO";
   CINFO(NumFunc).CPROT = "y=SCF" + FunctionName + "SCF(x)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;
   
   FuncStruct(NumFunc) = FunctionName + ".S.C.D.CINFO";
   CINFO(NumFunc).CPROT = "y=SCD" + FunctionName + "SCD(x)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;
   
   FuncStruct(NumFunc) = FunctionName + ".M.R.F.CINFO";
   CINFO(NumFunc).CPROT = "MRF" + FunctionName + "MRF(*X, strideX, *Y, strideY, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;   

   NumFunc = NumFunc + 1;
   
   FuncStruct(NumFunc) = FunctionName + ".M.R.D.CINFO";
   CINFO(NumFunc).CPROT = "MRD" + FunctionName + "MRD(*X, strideX, *Y, strideY, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;
   
   FuncStruct(NumFunc) = FunctionName + ".M.C.F.CINFO";
   CINFO(NumFunc).CPROT = "MCF" + FunctionName + "MCF(*X, strideX, *Y, strideY, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;
   
   FuncStruct(NumFunc) = FunctionName + ".M.C.D.CINFO";
   CINFO(NumFunc).CPROT = "MCD" + FunctionName + "MCD(*X, strideX, *Y, strideY, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
endfunction
