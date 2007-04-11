function [FuncStruct, CINFO, NumFunc] = GenerateLeafElementary(FunctionName);
// -----------------------------------------------------------------
// This function generates the leaf for the "FunctionName" elementary function.
// Rules used for the function names:
// s = float
// d = double
// c = complex float
// z = complex double
// ---
// s = scalar
// a = array (element wise functions)
// m = array (matrix functions)
//
// CINFO is an array of structures containing info of the output arguments.
// The number of elements of the CINFO array is equal to the number
// of output arguments.
//
// Status:
// 09-Apr-2006 -- Intelligente Fabio: Author.
// 09-Apr-2006 -- Nutricato Raffaele: Tests + Minor changes.
// -----------------------------------------------------------------

// ------------
// --- getf ---
// ------------
getf("CinfoI1SO1S.sci");
getf("CinfoI1AO1A.sci");
// ----------------
// --- End getf ---
// ----------------

// Combinations for the elementary functions:
// 1: S,R,F
// 2: S,R,D
// 3: S,C,F
// 4: S,C,D
// 5: A,R,F
// 6: A.R.D
// 7: A,C,F
// 8: A,C,D
// 9: M,R,F NOT IMPLEMENTED YET
// 10: M.R.D NOT IMPLEMENTED YET
// 11: M,C,F NOT IMPLEMENTED YET
// 12: M,C,D NOT IMPLEMENTED YET

// Function name prefixes.
FunPfx = [...
   "s",...
   "d",...
   "c",...
   "z"];

// Function name suffixes.
FunSfx = [...
   "s",...
   "a",...
   "m"];

// Types of the function arguments.
FunArgTypes = [...
   "float ",...
   "double ",...
   "floatComplex ",...
   "doubleComplex ",...
   "float* ",...
   "double* ",...
   "floatComplex* ",...
   "doubleComplex* ",...
   "int "];

InputStruct.Name = "InArg(1).Name";
OutputStruct.Name = "OutArg(1).Name";

NumFunc = 0;

NumFunc = NumFunc + 1;
FuncStruct(NumFunc) = FunctionName + ".S.R.F.CINFO";
CINFO = CinfoI1SO1S(FunPfx(1),FunctionName,FunSfx(1),FunArgTypes(1),InputStruct);

NumFunc = NumFunc + 1;
FuncStruct(NumFunc) = FunctionName + ".S.R.D.CINFO";
CINFO(NumFunc) = CinfoI1SO1S(FunPfx(2),FunctionName,FunSfx(1),FunArgTypes(2),InputStruct);

NumFunc = NumFunc + 1;
FuncStruct(NumFunc) = FunctionName + ".S.C.F.CINFO";
CINFO(NumFunc) = CinfoI1SO1S(FunPfx(3),FunctionName,FunSfx(1),FunArgTypes(3),InputStruct);

NumFunc = NumFunc + 1;
FuncStruct(NumFunc) = FunctionName + ".S.C.D.CINFO";
CINFO(NumFunc) = CinfoI1SO1S(FunPfx(4),FunctionName,FunSfx(1),FunArgTypes(4),InputStruct);

NumFunc = NumFunc + 1;
FuncStruct(NumFunc) = FunctionName + ".A.R.F.CINFO";
CINFO(NumFunc) = CinfoI1AO1A(FunPfx(1),FunctionName,FunSfx(2),FunArgTypes(5),InputStruct,OutputStruct);

NumFunc = NumFunc + 1;
FuncStruct(NumFunc) = FunctionName + ".A.R.D.CINFO";
CINFO(NumFunc) = CinfoI1AO1A(FunPfx(2),FunctionName,FunSfx(2),FunArgTypes(6),InputStruct,OutputStruct);

NumFunc = NumFunc + 1;
FuncStruct(NumFunc) = FunctionName + ".A.C.F.CINFO";
CINFO(NumFunc) = CinfoI1AO1A(FunPfx(3),FunctionName,FunSfx(2),FunArgTypes(7),InputStruct,OutputStruct);

NumFunc = NumFunc + 1;
FuncStruct(NumFunc) = FunctionName + ".A.C.D.CINFO";
CINFO(NumFunc) = CinfoI1AO1A(FunPfx(4),FunctionName,FunSfx(2),FunArgTypes(8),InputStruct,OutputStruct);

endfunction
