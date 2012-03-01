function ASTHeader = AST_ReadASTHeader(fidAST,ReportFileName)
// function ASTHeader = AST_ReadASTHeader(fidAST,ReportFileName)
// -----------------------------------------------------------------
// Reads the AST header
//  txt=['Program'
//       'Name   : '+p.name
//       'Outputs: '+strcat(objectlist2string(p.outputs),' ')
//       'Inputs : '+strcat(objectlist2string(p.inputs),' ')
//       'Statements '
//
// Input data:
// //NUT: add description here
//
//
// Output data:
// //NUT: add description here
//
//
// Status:
// 11-Apr-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),2,2);


ASTHeader = [];

tline = mgetl(fidAST,1);
AST_CheckLineLength(tline);
treeline = stripblanks(tline);
if STACKDEDUG == 1
   disp('Read AST Line: '+treeline);
end
if (SCI2Cstrncmps1size('Program',treeline) == %F)
   error(9999, 'Expected ""Program"" label in the AST');
end

tline = mgetl(fidAST,1);
AST_CheckLineLength(tline);
treeline = stripblanks(tline);
if STACKDEDUG == 1
   disp('Read AST Line: '+treeline);
end
if (SCI2Cstrncmps1size('Name   : ',treeline) == %F)
   error(9999, 'Expected ""Name   : "" label in the AST');
else
   ASTHeader.Name = stripblanks(part(treeline,length('Name   : ')+1:length(treeline)));
end

tline = mgetl(fidAST,1);
AST_CheckLineLength(tline);
treeline = stripblanks(tline);
if STACKDEDUG == 1
   disp('Read AST Line: '+treeline);
end
if (SCI2Cstrncmps1size('Outputs: ',treeline) == %F)
   error(9999, 'Expected ""Outputs: "" label in the AST');
else
   ASTHeader.Outputs = stripblanks(part(treeline,length('Outputs: ')+1:length(treeline)));
end

tline = mgetl(fidAST,1);
AST_CheckLineLength(tline);
treeline = stripblanks(tline);
if STACKDEDUG == 1
   disp('Read AST Line: '+treeline);
end
if (SCI2Cstrncmps1size('Inputs : ',treeline) == %F)
   error(9999, 'Expected ""Inputs : "" label in the AST');
else
   ASTHeader.Inputs = stripblanks(part(treeline,length('Inputs : ')+1:length(treeline)));
end

tline = mgetl(fidAST,1);
AST_CheckLineLength(tline);
treeline = stripblanks(tline);
if STACKDEDUG == 1
   disp('Read AST Line: '+treeline);
end
if (SCI2Cstrncmps1size('Statements ',treeline) == %F)
   error(9999, 'Expected ""Statements "" label in the AST');
end

endfunction
