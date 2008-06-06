function AST2Ccode(FileInfoDatFile)
// function AST2Ccode(FileInfoDatFile)
// -----------------------------------------------------------------
//
// Status:
// 11-May-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),1,1);


//NUT: questa funzione e' da sistemare meglio

// ---------------------
// --- Load section. ---
// ---------------------
// --- Load File Info Structure. ---
load(FileInfoDatFile,'FileInfo');

// --- Load Shared Info Structure. ---
load(FileInfo.SharedInfoDatFile,'SharedInfo');
// -------------------------
// --- End load section. ---
// -------------------------

// ---------------------------------------------------
// --- Extraction of the function name and number. ---
// ---------------------------------------------------
nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;
ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;

// ---------------------------------
// --- Parameter Initialization. ---
// ---------------------------------
global SCI2CSTACK 
SCI2CSTACK = ['EMPTYSTACK'];

global StackPosition;
StackPosition = 1;

global STACKDEDUG
STACKDEDUG = 0; // 1 -> Every Pop and Push operation on the stack, the stack content will be printed on screen.
// -------------------------------------
// --- End parameter Initialization. ---
// -------------------------------------

ASTFileName = FileInfo.Funct(nxtscifunnumber).ASTFileName;

// -----------------------
// --- Initialization. ---
// -----------------------
// --- Open AST file. ---
SharedInfo.ASTReader.fidAST = SCI2COpenFileRead(ASTFileName);
fidAST = SharedInfo.ASTReader.fidAST;

OrigWorkAreaUsedBytes = SharedInfo.WorkAreaUsedBytes;
OrigUsedTempScalarVars = SharedInfo.UsedTempScalarVars;

PrintStepInfo('Generate C code in '+FileInfo.Funct(nxtscifunnumber).FinalCFileName,...
   FileInfo.GeneralReport,'both');
// ---------------------------
// --- End initialization. ---
// ---------------------------

// ------------------------
// --- Parse AST header. ---
// ------------------------
ASTHeader  = AST_ReadASTHeader(fidAST,ReportFileName);
SharedInfo = AST_HandleHeader(ASTHeader,FileInfo,SharedInfo);
AST_PushASTStack('Dummy');
AST_PushASTStack('Dummy');
AST_PushASTStack('Dummy');
AST_PushASTStack('Dummy');
AST_PushASTStack('Dummy');
AST_PushASTStack('Dummy');
AST_PushASTStack('Dummy');
AST_PushASTStack('Dummy');
// ----------------------------
// --- End Parse AST header. ---
// ----------------------------

         TempVars = [];
         SharedInfo.WorkAreaUsedBytes  = OrigWorkAreaUsedBytes;
         SharedInfo.UsedTempScalarVars = OrigUsedTempScalarVars;
         SharedInfo.ASTReader.UsedTempVars = 0;        

// ----------------------------------
// --- Main loop to read the AST. ---
// ----------------------------------

while ~meof(fidAST)
   // Read a line from the AST
   tline = mgetl(fidAST,1);
   AST_CheckLineLength(tline);
   treeline = stripblanks(tline);

   if STACKDEDUG == 1
      disp('Read AST Line: '+treeline);
   end
   
   // Analyze line.
   select treeline
   
      // ------------------
      // --- Functions. ---
      // ------------------
      case 'EndOperation' then 
         [FileInfo,SharedInfo] = AST_HandleEndGenFun(FileInfo,SharedInfo,'Operation');
      case 'EndFuncall' then
         [FileInfo,SharedInfo] = AST_HandleEndGenFun(FileInfo,SharedInfo,'Funcall');
         
      // --------------
      // --- Equal. ---
      // --------------
      case 'EndEqual' then 
         [FileInfo,SharedInfo] = AST_HandleEndGenFun(FileInfo,SharedInfo,'Equal');
         SharedInfo = INIT_SharedInfoEqual(SharedInfo);
      case 'Equal' then 
         SharedInfo.Equal.Enabled = 1; // 1 means enabled -> we are inside an equal AST block.      
         AST_PushASTStack(treeline);
      case 'Lhs       :' then 
         SharedInfo.Equal.Lhs = 1; // 1 means that we are inside the Lhs block of the Equal
         [EqualInArgName,EqualInArgScope,EqualNInArg] = AST_ReadEqualRhsNames(FileInfo,SharedInfo);
         SharedInfo.Equal.NInArg = EqualNInArg;
         for tmpcnt = 1:SharedInfo.Equal.NInArg
            SharedInfo.Equal.InArg(tmpcnt).Name = EqualInArgName(tmpcnt);
            SharedInfo.Equal.InArg(tmpcnt).Scope = EqualInArgScope(tmpcnt);
         end
         AST_PushASTStack(treeline);

      // ----------------
      // --- If/Else. ---
      // ----------------
      //NUT: da verificare la gestione dello stack
      case 'If Statements' then
         error('IF NOT SUPPORTED YET');
         [FileInfo,SharedInfo] = AST_HandleIfElse(FileInfo,SharedInfo,'if');
      case 'Else If Expression' then
         AST_PushASTStack(treeline);
         [FileInfo,SharedInfo] = AST_HandleIfElse(FileInfo,SharedInfo,'else');
      case 'Else If Statements' then
         [FileInfo,SharedInfo] = AST_HandleIfElse(FileInfo,SharedInfo,'elseif');
      case 'Else Statements' then
         [FileInfo,SharedInfo] = AST_HandleIfElse(FileInfo,SharedInfo,'else');
      case 'EndIf' then
         for counter=1:SharedInfo.CountNestedIf+1
            SharedInfo = C_IfElseBlocks(FileInfo,SharedInfo,'out');
         end
         SharedInfo.CountNestedIf = 0;

      // --------------
      // --- Dummy. ---
      // --------------
      case 'Comment :' then
         AST_HandleEOL(FileInfo,SharedInfo); //NUT: si potrebbe differenziare comment da EOL
      case '<EOL>' then
         AST_HandleEOL(FileInfo,SharedInfo);
         
      // -----------------
      // --- Epilogue. ---
      // -----------------
      case 'EndProgram'
         SharedInfo = AST_HandleEndProgram(FileInfo,SharedInfo);
         
      // ------------
      // --- For. ---
      // ------------
      case 'For' then 
         error('FOR NOT SUPPORTED YET');
         SharedInfo.For.Level = SharedInfo.For.Level + 1;
         FileInfo = AST_HandleFor(FileInfo,SharedInfo);
      case 'ForExpression:'
         AST_PushASTStack(treeline);     
         SharedInfo.ForExpr.OnExec = SharedInfo.ForExpr.OnExec + 1;
      case 'ForStatements:'
         [FileInfo,SharedInfo] = AST_HandleForStatem(FileInfo,SharedInfo);
      case 'EndFor' then 
         SharedInfo = AST_HandleEndFor(FileInfo,SharedInfo);
         SharedInfo.For.Level = SharedInfo.For.Level - 1;         

      // --------------
      // --- While. ---
      // --------------
      case 'While' then 
         error('WHILE NOT SUPPORTED YET');
         AST_PushASTStack(treeline);
         SharedInfo.While.Level = SharedInfo.While.Level + 1;
      case 'WhileExpression:'
         AST_PushASTStack(treeline);
         [FileInfo,SharedInfo] = AST_HandleWhileExpr(FileInfo,SharedInfo);
      case 'WhileStatements:'
         [FileInfo,SharedInfo] = AST_HandleWhileStatem(FileInfo,SharedInfo);
      case 'EndWhile' then 
         SharedInfo = AST_HandleEndWhile(FileInfo,SharedInfo);
         SharedInfo.While.Level = SharedInfo.While.Level - 1;
         
      // ----------------
      // --- Default. ---
      // ----------------
      else 
         AST_PushASTStack(treeline);
   end
end
// --------------------------------------
// --- End main loop to read the AST. ---
// --------------------------------------

mclose(fidAST);
// ---------------------
// --- Save section. ---
// ---------------------
// --- Save Shared Info Structure. ---
save(SharedInfoDatFile,SharedInfo);
// -------------------------
// --- End save section. ---
// -------------------------
endfunction
