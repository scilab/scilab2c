function SharedInfo = AST_HandleHeader(ASTHeader,FileInfo,SharedInfo)
// function SharedInfo = AST_HandleHeader(ASTHeader,FileInfo,SharedInfo)
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
SCI2CNInArgCheck(argn(2),3,3);

// -----------------------
// --- Initialization. ---
// -----------------------
nxtscifunname   = SharedInfo.NextSCIFunName;
nxtscifunnumber = SharedInfo.NextSCIFunNumber;
ReportFileName  = FileInfo.Funct(nxtscifunnumber).ReportFileName;

FunctionName = ASTHeader.Name;
if (mtlb_strcmp(ASTHeader.Name,SharedInfo.NextSCIFunName) == %F)
   SCI2CerrorFile('Very strange! AST Name field ""'+ASTHeader.Name+...
      '""is different from function name ""'+SharedInfo.NextSCIFunName+'"".',ReportFileName);
end
// ---------------------------
// --- End Initialization. ---
// ---------------------------

// -------------------------------------
// --- Extract info from AST header. ---
// -------------------------------------
TmpInNames  = tokens(ASTHeader.Inputs,' ');
TmpOutNames = tokens(ASTHeader.Outputs,' ');

// Remove Var: Number: or String: specifier.
NInArg = 0;
for tmpcnt = 1:size(TmpInNames,1)
   TmpSingleName = TmpInNames(tmpcnt);
   if ((TmpSingleName == 'Var:') | ...
       (TmpSingleName == 'String:') | ...
       (TmpSingleName == 'Number:'))
       // Skip the specifier.
   else
      NInArg = NInArg + 1;
      InNames(NInArg) = TmpSingleName;
   end
end

// Remove Var: Number: or String: specifier.
NOutArg = 0;
for tmpcnt = 1:size(TmpOutNames,1)
   TmpSingleName = TmpOutNames(tmpcnt);
   if ((TmpSingleName == 'Var:') | ...
       (TmpSingleName == 'String:')   | ...
       (TmpSingleName == 'Number_x:') | ...
       (TmpSingleName == 'Number_s:') | ...
       (TmpSingleName == 'Number_d:') | ...
       (TmpSingleName == 'Number_c:') | ...
       (TmpSingleName == 'Number_z:'))
       // Skip the specifier.
   else
      NOutArg = NOutArg + 1;
      OutNames(NOutArg) = TmpSingleName;
   end
end

if (mtlb_strcmp(InNames(1),'<empty>'))
   NInArg = 0;
else
   NInArg = size(InNames,1);
end

if ((OutNames(1)=='<empty>') | (FunctionName == 'ins'))
   //NUT: Force ins to have 0 args. Double check it. 
   NOutArg = 0;
else
   NOutArg = size(OutNames,1);
end


// -------------------------------------
// --- Load the C function dat file. ---
// -------------------------------------
//NUT: This load is useful expecially for the second approach. In this case we are not using
//NUT: the size info.
load(fullfile(FileInfo.FunctionList.FunInfoDatDir,SharedInfo.NextCFunName+'.dat'),'FunInfo');

SharedInfo.CurrentFunInfo = FunInfo;
clear FunInfo

// -----------------------------------------------------------------------------
// --- Check coherence between In/Out names and In/Out Arg structure loaded. ---
// -----------------------------------------------------------------------------
if (length(SharedInfo.CurrentFunInfo.InArg(1).Name) > 0)
   NInArgDat = size(SharedInfo.CurrentFunInfo.InArg,1);
else
   NInArgDat = 0;
end

if (NInArgDat == NInArg)
   for tmpcnt = 1:NInArg
      SharedInfo.CurrentFunInfo.InArg(tmpcnt).Name = InNames(tmpcnt);
      if (SharedInfo.CurrentFunInfo.InArg(tmpcnt).Dimension == 0)
         SharedInfo.CurrentFunInfo.InArg(tmpcnt).Size(1) = '1';
         SharedInfo.CurrentFunInfo.InArg(tmpcnt).Size(2) = '1';
         SharedInfo.CurrentFunInfo.InArg(tmpcnt).Value   = %nan;
      else
         //NUT: using approach 1: Setting for input and output arguments symbolic sizes.
         SharedInfo.CurrentFunInfo.InArg(tmpcnt).Size(1) = '__'+SharedInfo.CurrentFunInfo.InArg(tmpcnt).Name+'Size[0]';
         SharedInfo.CurrentFunInfo.InArg(tmpcnt).Size(2) = '__'+SharedInfo.CurrentFunInfo.InArg(tmpcnt).Name+'Size[1]';
         SharedInfo.CurrentFunInfo.InArg(tmpcnt).Value   = %nan;
      end
   end
else
   SCI2CerrorFile('Number of input arguments specified in AST is different from the number specified in .dat file.',ReportFileName);
end


if (SharedInfo.CurrentFunInfo.NOutArg == NOutArg)
   for tmpcnt = 1:NOutArg
      SharedInfo.CurrentFunInfo.OutArg(tmpcnt).Name = OutNames(tmpcnt);
   end
else
   //
end
//NUT: using approach 1: Setting for input and output arguments symbolic sizes.
SharedInfo.CurrentFunInfo.OutArg = ...
   FA_GetOutArgInfo(SharedInfo.CurrentFunInfo.InArg,NInArg,...
   SharedInfo.CurrentFunInfo.OutArg,NOutArg,...
   SharedInfo,...
   SharedInfo.CurrentFunInfo.FunPrecSpecifier,...
   SharedInfo.CurrentFunInfo.FunTypeAnnot,SharedInfo.CurrentFunInfo.FunSizeAnnot,ReportFileName);

// -------------------------------------------------------------------------
// --- Stores InArg structure into the temporary variables symbol table. ---
// -------------------------------------------------------------------------
SymbTableFileName   = FileInfo.Funct(nxtscifunnumber).LocalVarFileName;


for tmpcnt = 1:NInArg
   
   ST_Set(SharedInfo.CurrentFunInfo.InArg(tmpcnt).Name,...
      SharedInfo.CurrentFunInfo.InArg(tmpcnt).Type,...
      SharedInfo.CurrentFunInfo.InArg(tmpcnt).Size,...
      SharedInfo.CurrentFunInfo.InArg(tmpcnt).Value,...
      SharedInfo.CurrentFunInfo.InArg(tmpcnt).FindLike,...
      SharedInfo.CurrentFunInfo.InArg(tmpcnt).Dimension,...
      SymbTableFileName);
end

// --------------------------------------------------------------------------
// --- Stores OutArg structure into the temporary variables symbol table. ---
// --------------------------------------------------------------------------
//NUT: verifica se puoi usare l'outarg2symboltable qui.
for tmpcnt = 1:NOutArg
   
   ST_Set(SharedInfo.CurrentFunInfo.OutArg(tmpcnt).Name,...
      SharedInfo.CurrentFunInfo.OutArg(tmpcnt).Type,...
      SharedInfo.CurrentFunInfo.OutArg(tmpcnt).Size,...
      SharedInfo.CurrentFunInfo.OutArg(tmpcnt).Value,...
      SharedInfo.CurrentFunInfo.OutArg(tmpcnt).FindLike,...
      SharedInfo.CurrentFunInfo.OutArg(tmpcnt).Dimension,...
      SymbTableFileName);
end

// -----------------------------------------------
// --- Check on common input/output arguments. ---
// -----------------------------------------------
AST_CheckCommonInOutArgs(SharedInfo.CurrentFunInfo.InArg,NInArg,SharedInfo.CurrentFunInfo.OutArg,NOutArg,ReportFileName);

// ------------------------
// --- Generate C code. ---
// ------------------------
FlagCall = 0;
SharedInfo = C_Funcall(SharedInfo.CurrentFunInfo,FileInfo,SharedInfo,FlagCall);
SharedInfo.NIndent = SharedInfo.NIndent+1; // Increase indentation level.

endfunction
