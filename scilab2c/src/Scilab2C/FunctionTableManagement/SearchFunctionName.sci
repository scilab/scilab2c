function [Cprototype, FlagFind] = SearchFunctionName(FunctionStructure, Tree)
      
   Temp = Tree + "." + FunctionStructure;

   if execstr(Temp,'error') == 0 then
   
      Cprototype = eval(Temp);
      FlagFind = %T;
      
   else
   
      FlagFind = %F;
      Cprototype = "ERROR";
      
   end  

endfunction
