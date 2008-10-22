function [ArgName,ArgScope] = AST_ExtractNameAndScope(ASTField)
// -----------------------------------------------------------------
// Status:
// 27-Dec-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),1,1);

// -----------------------
// --- Initialization. ---
// -----------------------
ArgName  = '';
ArgScope = '';

cnttag = 0;
cnttag = cnttag + 1; 
tagname(cnttag)   = 'Number_';
taglength(cnttag) = length(tagname(cnttag));

cnttag = cnttag + 1; 
tagname(cnttag)   = 'String:';
taglength(cnttag) = length(tagname(cnttag));

cnttag = cnttag + 1; 
tagname(cnttag)   = 'Var:';
taglength(cnttag) = length(tagname(cnttag));

cnttag = cnttag + 1; 
tagname(cnttag)   = 'Global:';
taglength(cnttag) = length(tagname(cnttag));

cnttag = cnttag + 1; 
tagname(cnttag)   = 'Local:';
taglength(cnttag) = length(tagname(cnttag));

cnttag = cnttag + 1; 
tagname(cnttag)   = 'Temp:';
taglength(cnttag) = length(tagname(cnttag));

cnttag = cnttag + 1; 
tagname(cnttag)   = '<empty>';
taglength(cnttag) = length(tagname(cnttag));

fieldlength  = length(ASTField);

if (SCI2Cstrncmps1size(tagname(1),ASTField))
   ArgName = stripblanks(part(ASTField,taglength(1)+3:fieldlength));
   ArgScope = stripblanks(part(ASTField,1:taglength(1)+1));
elseif (SCI2Cstrncmps1size(tagname(2),ASTField))
   ArgName = stripblanks(part(ASTField,taglength(2)+1:fieldlength));
   ArgName = part(ArgName,2:length(ArgName)-1); // I remove also the first and the last " 
   ArgScope = 'String';
elseif (SCI2Cstrncmps1size(tagname(3),ASTField))
   ArgName  = stripblanks(part(ASTField,taglength(3)+1:fieldlength));
   ArgScope = 'Var';
elseif (SCI2Cstrncmps1size(tagname(4),ASTField))
   ArgName  = stripblanks(part(ASTField,taglength(4)+1:fieldlength));
   ArgScope = 'Global';
elseif (SCI2Cstrncmps1size(tagname(5),ASTField))
   ArgName  = stripblanks(part(ASTField,taglength(5)+1:fieldlength));
   ArgScope = 'Local';
elseif (SCI2Cstrncmps1size(tagname(6),ASTField))
   ArgName  = stripblanks(part(ASTField,taglength(6)+1:fieldlength));
   ArgScope = 'Temp';
elseif (SCI2Cstrncmps1size(tagname(7),ASTField))
   ArgName  = '<empty>';
   ArgScope = 'None';
else
   SCI2Cerror('Argument specifier not found in the AST field: '+ASTField);
end

endfunction