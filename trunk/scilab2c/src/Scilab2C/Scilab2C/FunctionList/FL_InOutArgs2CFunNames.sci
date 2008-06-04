function FunNameCFuncList = FL_InOutArgs2CFunNames(FunctionName,CommaSepCFuncList,CFuncListNElem)
// function FunNameCFuncList = FL_InOutArgs2CFunNames(FunctionName,CommaSepCFuncList,CFuncListNElem)
// -----------------------------------------------------------------
//
// Status:
// 05-Jan-2008 -- Nutricato Raffaele: Author.
//
// Copyright 2008 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------


SCI2CNInArgCheck(argn(2),3,3);


FunNameCFuncList = '';
SepChar = ',';
for cntelem = 1:CFuncListNElem
   tmptokens = tokens(CommaSepCFuncList(cntelem),SepChar);
   if (size(tmptokens,1) == 0)
      FunNameCFuncList(cntelem) = FunctionName;
   elseif (size(tmptokens,1) == 1)
      if part(tmptokens,1:1) == ','
         FunNameCFuncList(cntelem) = FunctionName+tmptokens(2);
      else
         FunNameCFuncList(cntelem) = tmptokens(1)+FunctionName;
      end
   elseif (size(tmptokens,1) == 2)
      FunNameCFuncList(cntelem) = tmptokens(1)+FunctionName+tmptokens(2);
   else
      disp('Incorrect format for the function list class.');
      disp('Check the following function list class item: ""'+CommaSepCFuncList(cntelem)+'"".');
      SCI2Cerror(' ');
   end
end

endfunction
