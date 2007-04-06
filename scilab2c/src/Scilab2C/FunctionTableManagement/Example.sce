// In this script you can find some examples that show how to work with the
// SCI2C and USER libraries.

// Run the following code lines in the directory where the main.sci file is stored.
// cd <path_of_main.sci_file>   

clear;
clc;
   
getf("InitializeLibraries.sci");
[SCI2CLib, USER2CLib] = InitializeLibraries();

// ------------------
// --- Example 1. ---
// ------------------
// In this example it is shown how to get the 
// C function info from a given Scilab function.
// The user prepares a string (FunctionStructure) where
// all the Scilab function info are stored.
// Let's consider the following example:
// Scilab function: tan
// Input size: scalar (S)
// Input type: real (R)
// Input precision: double (D)
// In this case the user prepares the following string:
FunctionStructure = "tan.S.R.D.CINFO";
// And executes the following command:
getf("SearchFunctionName.sci");
[Cprototype, FlagFind] = SearchFunctionName(FunctionStructure, "SCI2CLib");


// ------------------
// --- Example 2. ---
// ------------------
// In this example it is shown what happens when
// the user searches for a function that is not 
// stored neither in the SCI2CLib nor in the USER2CLib.
// Let's suppose that the user is searching for the 
// foo function having two inputs:
FunctionStructure = "foo.S.R.D.S.R.D.CINFO";

// In this case if the user launches the following command:
// getf("SearchFunctionName.sci");
// [Cprototype, FlagFind] = SearchFunctionName(FunctionStructure, "SCI2CLib");
// he/she will get FlagFind = F!

// The problem is solved in the following way:

[Cprototype, FlagFind] = SearchFunctionName(FunctionStructure, "SCI2CLib");
if FlagFind==%F then
   // We try to search the function in the USER2CLib.
   [Cprototype, FlagFind] = SearchFunctionName(FunctionStructure, "USER2CLib");
   
   if FlagFind==%F then
      // If the function is not stored in the USER2CLib function,
      // the tool will search for the file containing the function and will 
      // try to extract from that file the following info:
      // CINFO.SIZE, CINFO.TYPE, CINFO.PREC

      // Suppose the following CINFO have been retrieved:
      // CINFO.SIZE = "S";
      // CINFO.TYPE = "R";
      // CINFO.PREC = "D";

      // Once CINFO have been retrieved it is possible to insert the new function
      // into the USER2CLib by using the following approach:
      clear CINFO;
      CINFO.CPROT = "y=SRDSRDfooSRD"; 
      CINFO.SIZE = "S";
      CINFO.TYPE = "R";
      CINFO.PREC = "D";

	   USER2CLib = AddBranch( USER2CLib, FunctionStructure, CINFO );
      [Cprototype, FlagFind] = SearchFunctionName(FunctionStructure, "USER2CLib");
   end
end
// eval("USER2CLib." + FunctionStructure);














//
// now I change one output type
//
// Branch=FunctionStructure; 
// TREE="USER2CLib";
//
   getf("SearchFunctionName.sci");
   getf("AddBranch.sci");

   FunctionStructure = "fn.S.R.D.CINFO";

   clear CINFO;      
   
   CINFO.CPROT = "y=SRDfnSRD"; 
   CINFO.SIZE = "S";
   CINFO.TYPE = "R";
   CINFO.PREC = "D";

   
   [Cprototype, FlagFind] = SearchFunctionName(FunctionStructure, "SCI2CLib");
   
   if FlagFind==%F then
      [Cprototype, FlagFind] = SearchFunctionName(FunctionStructure, "USER2CLib");
      
      if FlagFind==%F then
	      USER2CLib = AddBranch( USER2CLib, FunctionStructure, CINFO );
      end
      
   end
   
   eval("USER2CLib." + FunctionStructure) 
   
//
// I add the same function with two outputs:
//              1. the first output is S.R.D
//              2. the second output is M.R.D.
//
// Branch=FunctionStructure; 
// TREE="USER2CLib";
//
   FunctionStructure = "fn.S.R.D.CINFO(2)";
   
   clear CINFO;
   
   S(1) = "S";
   R(1) = "R";
   D(1) = "D";

   S(2) = "M";
   R(2) = "R";
   D(2) = "D";
   
   CINFO.CPROT = "y=SRDfnSRDSRD"; 
   CINFO.SIZE = S;
   CINFO.TYPE = R;
   CINFO.PREC = D;

   
   [Cprototype, FlagFind] = SearchFunctionName(FunctionStructure, "SCI2CLib");
   
   if FlagFind==%F then
      [Cprototype, FlagFind] = SearchFunctionName(FunctionStructure, "USER2CLib");
      
      if FlagFind==%F then
	      USER2CLib = AddBranch( USER2CLib, FunctionStructure, CINFO );
      end
      
   end
   
   eval("USER2CLib." + FunctionStructure)   

//
//   fn.S.R.F.CINFO
//
// where 
//
//   CINFO.
//      CPRO = "y=SRFfnSRF(x)"
//      SIZE = "S"
//      TYPE = "R"
//      PREC = "F"
   
// Branch=FunctionStructure; 
// TREE="USER2CLib";

   getf("SearchFunctionName.sci");
   getf("AddBranch.sci");
   
   FunctionStructure = "fn.S.R.F.CINFO";
      
   CINFO(1).CPROT = "y=SRFfnSRF"; 
   CINFO(1).SIZE = "S";
   CINFO(1).TYPE = "R";
   CINFO(1).PREC = "F";
   
   [Cprototype, FlagFind] = SearchFunctionName(FunctionStructure, "SCI2CLib");
   
   if FlagFind==%F then
      [Cprototype, FlagFind] = SearchFunctionName(FunctionStructure, "USER2CLib");
      
      if FlagFind==%F then
      
	      USER2CLib = AddBranch(USER2CLib, FunctionStructure, CINFO );
	      
      end
      
   end
   
   eval("USER2CLib." + FunctionStructure) 
   
