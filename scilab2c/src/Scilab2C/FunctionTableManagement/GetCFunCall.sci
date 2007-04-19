function CFunCall = GetCFunCall(FunTree,FunName,InArg,OutArg);
// -----------------------------------------------------------------
// Returns the C function call.
//
// FunTree is the name of the tree passed as string. Ex.: 'SCI2CLib'.
// Status:
// 06-Apr-2006 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

NInputs = size(InArg,1);
NOutputs = size(OutArg,1);

// Generate the string to access the tree.
TreeAccessString = FunName;

for counterinput = 1:NInputs
   if prod(InArg(counterinput).Size) == 1
      TreeAccessString = TreeAccessString+".S";   
   else 
      TreeAccessString = TreeAccessString+".A";   
   end
   
   if InArg(counterinput).Type == "s"
      TreeAccessString = TreeAccessString+".R.F";
   elseif InArg(counterinput).Type == "d"
      TreeAccessString = TreeAccessString+".R.D";
   elseif InArg(counterinput).Type == "c"
      TreeAccessString = TreeAccessString+".C.F";
   elseif InArg(counterinput).Type == "z"
      TreeAccessString = TreeAccessString+".C.D";
   else
      error("Unknown input argument type");
   end
end

CFunName = FunTree+"."+TreeAccessString+".CINFO("+mtlb_num2str(NOutputs)+").NAME";
CFunArgList = FunTree+"."+TreeAccessString+".CINFO("+mtlb_num2str(NOutputs)+").ARGLIST";

CFunCall = [eval(CFunName),"(",eval(eval(CFunArgList)),")"];
// CFunCall = [execstr(CFunName),"(",eval(eval(CFunArgList)),")"];
endfunction
