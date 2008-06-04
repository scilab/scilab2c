function [LhsArgNames,LhsArgScope,NLhsArg] = AST_CheckLastFunc(fidAST,SearchLevel)
// function [LhsArgNames,LhsArgScope,NLhsArg] = AST_CheckLastFunc(fidAST,SearchLevel)
// -----------------------------------------------------------------
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

// -----------------------
// --- Initialization. ---
// -----------------------
astfilepos   = mtell(fidAST);
NLhsArg      = 0;
LhsArgNames  = '';
LhsArgScope  = '';
FlagLastFunc = 0;
// ---------------------------
// --- End Initialization. ---
// ---------------------------

tline = mgetl(fidAST,1);
AST_CheckLineLength(tline);
LhsField = stripblanks(tline);
if ((SearchLevel == 1) & (LhsField == 'EndFuncall'))
   SearchLevel = 0;
   tline = mgetl(fidAST,1);
   AST_CheckLineLength(tline);
   LhsField = stripblanks(tline);
end
if ((SearchLevel == 0) & (LhsField == 'Lhs       :'))
   tline = mgetl(fidAST,1);
   AST_CheckLineLength(tline);
   LhsField = stripblanks(tline);
   while(LhsField ~= 'EndEqual')
      NLhsArg = NLhsArg + 1;
      if (LhsField == '<EOL>')
         SCI2Cerror('Found <EOL> before EndEqual');
      elseif (LhsField == 'EndProgram')
         SCI2Cerror('Found EndProgram before EndEqual');
      end
      if (LhsField == 'Operation')
         LhsField = 'EndEqual'; // Force the exit from the while.
         NLhsArg  = 0;
         LhsArgNames = '';
         LhsArgScope = '';
      else
         [LhsArgNames(NLhsArg),LhsArgScope(NLhsArg)] = AST_ExtractNameAndScope(LhsField);
         tline = mgetl(fidAST,1);
         AST_CheckLineLength(tline);
         LhsField = stripblanks(tline);
      end
   end
end
mseek(astfilepos,fidAST,'set');

endfunction
