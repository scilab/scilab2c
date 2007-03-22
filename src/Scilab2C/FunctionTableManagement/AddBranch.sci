function TreeBase = AddBranch(TreeBase, Branch, CINFO )

// To understand how this software works the steps are:
//
// 1. check if "fn" is stored in the USER2CLib;
//    a. if "fn" there is, we have to check if "fn.S" there is
//       i.  if "fn.S" there is, we have to check if "fn.S.R" there is
//       ii. if "fn.S" there isn't, we can store the Branch
//          ...
//       and in the same way for the other case.
//
//    b. if "fn" there isn't, we can store all the Branch

   getf("SearchFunctionName.sci");
   
//
// I have to search the point where to insert the (sub) branch
//

//
// suppose I have to insert the function structure fn.S.R.D.CINFO
// the first operation is to cut the function structure in sub-structure
//
   ind = strindex( Branch, '.' );
// 
// SubBranch is an array which element, for the example are:
//     SubBranch(1) = fn.
//     SubBranch(2) = S.
//     SubBranch(3) = R.
//     SubBranch(4) = D.
//     SubBranch(5) = CINFO
//
// PAY ATTENTION!!! you have S. and not S
//
   SubBranch = strsplit( Branch, ind );

//
// I have to know the number of the element (I can have fn.S.R.D.S.R.D.CINFO)
//
   [NumSub, Temp] = size( SubBranch );
   
   clear Temp;

// 
// I extract the first element of the SubStranch array. I know this element is the 
// name of the function (in the example is fn)
//
   TempStructure = part(SubBranch(1), [1 : length(SubBranch(1))-1]);
   
//
// I search the function
//
   [TempProt, FlagFind] = SearchFunctionName( TempStructure, TreeBase(1)(1) );
   
   index1 = 2; 
   
   if FlagFind then
// 
// if I found the function name I have to explorer the structure until I find the sub branch to add to the TREE
//
      GoOut = %F;

      while ( (GoOut == %F) & (index1 <= (NumSub-1) ) );
//
// index1 point to the position in the sub structure that I have to check if is present in the TREE 
// (if I have fn.S.C.... in my tree, I have to point to fn.S because I'll add a new branch for the R leaf)
// I use Temp because I have to remember the previous position
//
         Temp = TempStructure + "." + part(SubBranch(index1), [1 : length(SubBranch(index1))-1]);
         [TempProt, FlagFind] = SearchFunctionName( Temp, TreeBase(1)(1) );

         if FlagFind then
//
// so, If Temp is present in the tree I upload the new position 
//
            index1 = index1 + 1;
            TempStructure = Temp;
         else
//
// else, I have found the position where to add the sub branch
            GoOut = %T;
         end
	 
      end 
      
   else
// 
// If I don't found the function name I have to add it in the TREE
//
      TreeBase(1)(1,$+1) = TempStructure;
      TreeBase($+1) = "ERROR";
      
   end

//
// index1 is the position of the first sub branch that I have add in the TREE
//
   for index = index1 : NumSub-1,
//
// I extract the Leaf in the index position
//
      TempLeaf =  part( SubBranch(index), [1 : length( SubBranch(index) ) - 1] );
//
// I have to verify if I point to a tree or to a leaf
//
      dimension = eval("size(TreeBase." + TempStructure + ")");
      
      if dimension(1) == 1 then
//
// If I point to a leaf, I construct a temporany tree before to append the leaf
//

         TempTreeBase = tlist( ["TempTreeBase", TempLeaf], "ERROR" );
         TempCommand = "TreeBase." + TempStructure + " = TempTreeBase";
         execstr( TempCommand );
	 
      else
//
// else (is the case that I have in my structure fn.S.R.D.S.R.D.CINFO and I want to memorize fn.S.R.D.CINFO)         
// I add another branch
//

         TempCommand = "TreeBase." + TempStructure + "(1)(1,$+1) = TempLeaf";
         execstr( TempCommand );
         TempCommand = "TreeBase." + TempStructure + "($+1) = ''ERROR''";
         execstr( TempCommand );
	 
      end

      TempStructure =  TempStructure + "." + TempLeaf;
      
   end   
   
   TempLeaf =  part( SubBranch(NumSub), 1 : length( SubBranch(NumSub) ) );
   
   if eval("TreeBase." + TempStructure + "(1)") == "ERROR" then
//
// When I close the loop for I have to append the leaf CINFO, 
// but it is necessary to verify if we are at the end of the tree
//
         
      TempTree = tlist( ["TempTree", "CINFO"], CINFO );
      command = "TreeBase." + TempStructure + " = TempTree";
      execstr( command );
       
   else
// se non trovo ERROR non è detto che possa trovare CINFO, quindi devo perfezzionare la ricera      
// if it isn't the end of the tree it is necessary to verify if I have CINFO
//
      Temp = TempStructure + ".CINFO";
      [TempProt, FlagFind] = SearchFunctionName( Temp, TreeBase(1)(1) );      
      
      if FlagFind
//
// if there is CINFO, I add this information
//
         TempCommand = "TreeBase." + TempStructure + ".CINFO($+1) = CINFO";
         execstr( TempCommand );
         
      else
//
// else I append to the last CINFO the new one
// 
         TempCommand = "TreeBase." + TempStructure + "(1)(1,$+1) = ''CINFO''";
         execstr( TempCommand );
         TempCommand = "TreeBase." + TempStructure + "($+1) = CINFO";
         execstr( TempCommand );
         
      end 
   end
   
   
endfunction
