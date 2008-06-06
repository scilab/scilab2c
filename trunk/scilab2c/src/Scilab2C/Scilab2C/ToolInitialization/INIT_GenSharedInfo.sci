function SharedInfo = INIT_GenSharedInfo(WorkingDir,OutCCCodeDir,UserSciFilesPaths,...
   RunMode,UserScilabMainFile,TotTempScalarVars,EnableTempVarsReuse,Sci2CLibMainHeaderFName)
// function SharedInfo = INIT_GenSharedInfo(WorkingDir,OutCCCodeDir,UserSciFilesPaths,...
//    RunMode,UserScilabMainFile,TotTempScalarVars,EnableTempVarsReuse,Sci2CLibMainHeaderFName)
// -----------------------------------------------------------------
//
// Status:
// 03-Jan-2008 -- Raffaele Nutricato: Author.
//
// Copyright 2008 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),8,8);

SharedInfo.CCompilerPathStyle = CCompilerPathStyle;
SharedInfo.RunMode = RunMode;
SharedInfo.Sci2CLibMainHeaderFName = ConvertPathMat2C(Sci2CLibMainHeaderFName,SharedInfo.CCompilerPathStyle);

SharedInfo.NextSCIFileName  = UserScilabMainFile; 
[scipath,funname,sciext]    = fileparts(UserScilabMainFile);
SharedInfo.SCIMainFunName   = funname;
SharedInfo.CMainFunName     = 'main';
SharedInfo.NextSCIFunName   = SharedInfo.SCIMainFunName; //NUT: per ora no so cosa metter
SharedInfo.NextCFunName     = SharedInfo.CMainFunName; //NUT: per ora no so cosa metter //NUT: questo viene aggiornato dalla C_Funcall
SharedInfo.NextSCIFunNumber = 1; 
SharedInfo.NFilesToTranslate = 1;


SharedInfo.Annotations.GBLVAR   = 'global';
SharedInfo.Annotations.DataPrec = {'SCI2Cint','float','double'};
SharedInfo.Annotations.FUNNIN   = 'NIN=';
SharedInfo.Annotations.FUNNOUT  = 'NOUT=';
SharedInfo.Annotations.FUNTYPE  = '''OUT(''+string(SCI2C_nout)+'').TP='''; // Type includes also precision.
SharedInfo.Annotations.FUNSIZE  = '''OUT(''+string(SCI2C_nout)+'').SZ(''+string(SCI2C_nelem)+'')= ''';
SharedInfo.Annotations.FUNCLASS = 'CLASS: ';
SharedInfo.Annotations.USERFUN  = '//SCI2C: ';

SharedInfo.TotTempScalarVars   = TotTempScalarVars;
SharedInfo.UsedTempScalarVars  = 0;
SharedInfo.TempScalarVarsName  = '__Scalar';
SharedInfo.WorkAreaUsedBytes  = WorkAreaSizeBytes;
SharedInfo.UsedTempScalarVars = WorkAreaSizeBytes;
SharedInfo.ASTReader.fidAST              = -1;
SharedInfo.ASTReader.UsedTempVars        = 0;
SharedInfo.ASTReader.TempVarsName        = '__temp';
SharedInfo.ASTReader.TempForCntVarsName  = '__tmpcnt';
SharedInfo.ASTReader.TempForValVarsName  = '__TmpVal';
SharedInfo.ASTReader.TempWhileCntVarsName = '__tmpWhilecnt';//NUT: vedi se serve.
SharedInfo.ASTReader.TempWhileValVarsName = '__TmpWhileVal'; //NUT: vedi se serve
SharedInfo.ASTReader.EnableTempVarsReuse = EnableTempVarsReuse; //NUT: non so se la devo rimuovere.
SharedInfo.ASTReader.ReusableTempVars    = [];//NUT: to be removed

SharedInfo.NIndent = 0; // Indentation Level.
SharedInfo.SkipNextEqual = 0; // 1 = the next equal in the AST will not produce C code.
SharedInfo.SkipNextPrec  = 0; // 1 = the next precision specifier in the AST will not produce C code.
SharedInfo.SkipNextFun   = 0;
SharedInfo.CopySciCodeIntoCCode = CopySciCodeIntoCCode;
SharedInfo.CountNestedIf = 0; // Number of nested if.

SharedInfo.CFunId.OpColon   = 3;
SharedInfo.CFunId.EqScalar  = 4;
SharedInfo.CFunId.EqMatrix  = 5;
SharedInfo.CFunId.GenFunMtx = 6; // (scalar functions are fall in the scalar equal category.)

SharedInfo = INIT_SharedInfoEqual(SharedInfo);
SharedInfo.Extension.AnnotationFunctions = '.ann'; // Stands for annotation
SharedInfo.Extension.AnnotationClasses   = '.acls'; // Stands for annotation class.
SharedInfo.Extension.FuncListFunctions   = '.lst'; // Stands for list
SharedInfo.Extension.FuncListClasses     = '.lcls';  // Stands for list class
endfunction
