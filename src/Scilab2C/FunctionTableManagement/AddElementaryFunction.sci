function TreeOut = AddElementaryFunction(FunctionName,TreeIn)
// This function returns a tree starting obtained from the input 
// tree (TreeIn) to which the elementary function "FunctionName" has
// been added.

disp('   --> Adding the elementary function: '+FunctionName);
[FuncStruct, CINFO, NumFunc] = GenerateLeafElementary(FunctionName);

TreeOut = TreeIn;
for ind = 1 : NumFunc, 
   TreeOut = AddBranch(TreeOut, FuncStruct(ind), CINFO(ind) );
end

endfunction
