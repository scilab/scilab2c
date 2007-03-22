function [FuncStruct, CINFO, NumFunc] = AddLeafDotOp(FunctionName)

   NumFunc = 0;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.F.S.R.F.CINFO";
   CINFO(NumFunc).CPROT = "SRFSRF" + FunctionName + "SRF(x, y, z, Nelements)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.F.S.C.F.CINFO";
   CINFO(NumFunc).CPROT = "SRFSCF" + FunctionName + "SCF(x, y, z, Nelements)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.F.M.R.F.CINFO";
   CINFO(NumFunc).CPROT = "SRFMRF" + FunctionName + "MRF(x, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I2Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.F.M.C.F.CINFO";
   CINFO(NumFunc).CPROT = "SRFMCF" + FunctionName + "MCF(x, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I2Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.D.S.R.D.CINFO";
   CINFO(NumFunc).CPROT = "SRDSRD" + FunctionName + "SRD(x, y, z, Nelements)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.D.S.C.D.CINFO";
   CINFO(NumFunc).CPROT = "SRDSCD" + FunctionName + "SCD(x, y, z, Nelements)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;

   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.D.M.R.D.CINFO";
   CINFO(NumFunc).CPROT = "SRDMRD" + FunctionName + "MRD(x, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I2Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.R.D.M.C.D.CINFO";
   CINFO(NumFunc).CPROT = "SRDMCD" + FunctionName + "MCD(x, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I2Sz";
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

   FuncStruct(NumFunc) = FunctionName + ".S.C.F.S.C.F.CINFO";
   CINFO(NumFunc).CPROT = "SCFSCF" + FunctionName + "SCF(x, y, z, Nelements)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.C.F.M.R.F.CINFO";
   CINFO(NumFunc).CPROT = "SCFMRF" + FunctionName + "MCF(x, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I2Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.C.F.M.C.F.CINFO";
   CINFO(NumFunc).CPROT = "SCFMCF" + FunctionName + "MCF(x, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I2Sz";
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

   FuncStruct(NumFunc) = FunctionName + ".S.C.D.S.C.D.CINFO";
   CINFO(NumFunc).CPROT = "SCDSCD" + FunctionName + "SCD(x, y, z, Nelements)";
   CINFO(NumFunc).SIZE = "S";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.C.D.M.R.D.CINFO";
   CINFO(NumFunc).CPROT = "SCDMRD" + FunctionName + "MCD(x, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I2Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".S.C.D.M.C.D.CINFO";
   CINFO(NumFunc).CPROT = "SCDMCD" + FunctionName + "MCD(x, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I2Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.F.S.R.F.CINFO";
   CINFO(NumFunc).CPROT = "MRFSRF" + FunctionName + "MRF(*X, strideX, y, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.F.S.C.F.CINFO";
   CINFO(NumFunc).CPROT = "MRFSCF" + FunctionName + "MCF(*X, strideX, y, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.F.M.R.F.CINFO";
   CINFO(NumFunc).CPROT = "MRFMRF" + FunctionName + "MRF(*X, strideX, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = [I1Sz(1), I2Sz(2)]";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.F.M.C.F.CINFO";
   CINFO(NumFunc).CPROT = "MRFMCF" + FunctionName + "MCF(*X, strideX, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = [I1Sz(1), I2Sz(2)]";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.D.S.R.D.CINFO";
   CINFO(NumFunc).CPROT = "MRDSRD" + FunctionName + "MRD(*X, strideX, y, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.D.S.C.D.CINFO";
   CINFO(NumFunc).CPROT = "MRDSCD" + FunctionName + "MCD(*X, strideX, y, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.D.M.R.D.CINFO";
   CINFO(NumFunc).CPROT = "MRDMRD" + FunctionName + "MRD(*X, strideX, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "R";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = [I1Sz(1), I2Sz(2)]";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.R.D.M.C.D.CINFO";
   CINFO(NumFunc).CPROT = "MRDMCD" + FunctionName + "MCD(*X, strideX, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = [I1Sz(1), I2Sz(2)]";
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

   FuncStruct(NumFunc) = FunctionName + ".M.C.F.S.C.F.CINFO";
   CINFO(NumFunc).CPROT = "MCFSCF" + FunctionName + "MCF(*X, strideX, y, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.C.F.M.R.F.CINFO";
   CINFO(NumFunc).CPROT = "MCFMRF" + FunctionName + "MCF(*X, strideX, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = [I1Sz(1), I2Sz(2)]";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.C.F.M.C.F.CINFO";
   CINFO(NumFunc).CPROT = "MCFMCF" + FunctionName + "MCF(*X, strideX, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "F";
   CINFO(NumFunc).DIM = "O1Sz = [I1Sz(1), I2Sz(2)]";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.C.D.S.R.D.CINFO";
   CINFO(NumFunc).CPROT = "MCDSRD" + FunctionName + "MCD(*X, strideX, y, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.C.D.S.C.D.CINFO";
   CINFO(NumFunc).CPROT = "MCDSCD" + FunctionName + "MCD(*X, strideX, y, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = I1Sz";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.C.D.M.R.D.CINFO";
   CINFO(NumFunc).CPROT = "MCDMRD" + FunctionName + "MCD(*X, strideX, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = [I1Sz(1), I2Sz(2)]";
   CINFO(NumFunc).NOut = 1;
   
   NumFunc = NumFunc + 1;

   FuncStruct(NumFunc) = FunctionName + ".M.C.D.M.C.D.CINFO";
   CINFO(NumFunc).CPROT = "MCDMCD" + FunctionName + "MCD(*X, strideX, *Y, strideY, *Z, strideZ, Nelements)";
   CINFO(NumFunc).SIZE = "M";
   CINFO(NumFunc).TYPE = "C";
   CINFO(NumFunc).PREC = "D";
   CINFO(NumFunc).DIM = "O1Sz = [I1Sz(1), I2Sz(2)]";
   CINFO(NumFunc).NOut = 1;
   
endfunction
