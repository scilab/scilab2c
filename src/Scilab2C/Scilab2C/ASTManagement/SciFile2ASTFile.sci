function SciFile2ASTFile(SciFile,ASTFile);
// function SciFile2ASTFile(SciFile,ASTFile);
// -----------------------------------------------------------------
//
// Status:
// 12-Apr-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

getf(SciFile);
[tmppath,ScilabFunName,tmpext] = fileparts(SciFile);
AST=eval('macr2tree('+ScilabFunName+')');


[ASTx,ASTierr]=fileinfo(ASTFile);
if ASTierr == 0
   mdelete(ASTFile);
end
write(ASTFile,string(AST));

endfunction
