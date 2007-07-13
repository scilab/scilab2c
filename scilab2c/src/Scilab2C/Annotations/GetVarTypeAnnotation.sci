
function VarTypeAnnotation = GetVarTypeAnnotation(InputString);
// function VarTypeAnnotation = GetVarTypeAnnotation(InputString);
// --------------------------------------------------------------------------------
// This function extracts the VAR TYPE annotation from the input string.
//
// Input data:
//
// Output data:
//
// Status:
// 11-Jul-2007 -- Nutricato Raffaele: Author.
// -----------------------------------------------------------------

tmp1 = stripblanks(tokens(InputString,'|'));
tmp2 = stripblanks(tokens(tmp1(1),' '));
tmp1(1) = [];
VarTypeAnnotation = [tmp2; tmp1];

if ((max(size(VarTypeAnnotation))) ~= 4)
   SCI2Cerror('Incorrect VARTYPE ANNOTATION in string ""'+InputString+'"".');
end
endfunction
