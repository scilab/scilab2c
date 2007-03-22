// in the following you can find some examples that help you to use the biuild in functions.

// the first operation is to find the path where the files are stored
// cd <path>   

   clear;
   clc;
   
   getf("main.sci");
   [SCI2CLib, USER2CLib] = main();
   
//
// I add the same function with two inputs
//
// Branch=FunctionStructure; 
// TreeBase=USER2CLib;
//
   getf("SearchFunctionName.sci");
   getf("AddBranch.sci");

   FunctionStructure = "fn.S.R.D.S.R.D.CINFO";
      
   clear CINFO;
   
   CINFO.CPROT = "y=SRDSRDfnSRD"; 
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
   
