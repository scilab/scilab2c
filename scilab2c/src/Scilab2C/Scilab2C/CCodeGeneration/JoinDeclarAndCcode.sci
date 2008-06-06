function JoinDeclarAndCcode(FileInfoDatFile)
// function JoinDeclarAndCcode(FileInfoDatFile)
// -----------------------------------------------------------------
// Status:
// 07-Nov-2007 -- Raffaele Nutricato: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),1,1);

load(FileInfoDatFile,'FileInfo');

load(FileInfo.SharedInfoDatFile,'SharedInfo');

nxtscifunname   = SharedInfo.NextSCIFunName;
funnumber = SharedInfo.NextSCIFunNumber;

CPass1FileName       = FileInfo.Funct(funnumber).CPass1FileName;
CPass2FileName       = FileInfo.Funct(funnumber).CPass2FileName;
CDeclarationFileName = FileInfo.Funct(funnumber).CDeclarationFileName;
CGblDeclarFileName   = FileInfo.Funct(funnumber).CGblDeclarFileName;
CInitVarsFileName    = FileInfo.Funct(funnumber).CInitVarsFileName;
ReportFileName       = FileInfo.Funct(funnumber).ReportFileName;

CPass1V1FileFid      = SCI2COpenFileRead(CPass1FileName);
CDeclarationFileFid  = SCI2COpenFileRead(CDeclarationFileName);
CGblDeclarFileFid    = SCI2COpenFileRead(CGblDeclarFileName);
CInitVarsFileFid     = SCI2COpenFileRead(CInitVarsFileName);


PrintStringInfo('/*',CPass2FileName,'file','y');
PrintStringInfo('** -------------------------------------',CPass2FileName,'file','y');
PrintStringInfo('** --- Global Variables Declaration. ---',CPass2FileName,'file','y');
PrintStringInfo('** -------------------------------------',CPass2FileName,'file','y');
PrintStringInfo('*/',CPass2FileName,'file','y');

while (~meof(CGblDeclarFileFid))

   tmpcline = mgetl(CGblDeclarFileFid,1);
   if (length(tmpcline) == 0)
      tmpcline = ' ';
   end

   noblkstmpcline = stripblanks(tmpcline);
   PrintStringInfo(tmpcline,CPass2FileName,'file','y');
end
PrintStringInfo('/*',CPass2FileName,'file','y');
PrintStringInfo('** -----------------------------------------',CPass2FileName,'file','y');
PrintStringInfo('** --- End Global Variables Declaration. ---',CPass2FileName,'file','y');
PrintStringInfo('** -----------------------------------------',CPass2FileName,'file','y');
PrintStringInfo('*/',CPass2FileName,'file','y');
PrintStringInfo(' ',CPass2FileName,'file','y');

FoundCurlyBracket = 0;
while ((~meof(CPass1V1FileFid)) & (FoundCurlyBracket == 0))
   tmpcline = mgetl(CPass1V1FileFid,1);
   noblkstmpcline = stripblanks(tmpcline);
   if (length(noblkstmpcline) > 0)
      if (SCI2Cstrncmps1size('{',noblkstmpcline))
         FoundCurlyBracket = 1;
      end
   else
      tmpcline = ' ';
   end
   PrintStringInfo(tmpcline,CPass2FileName,'file','y');
end

if (FoundCurlyBracket == 0)
   SCI2CerrorFile('""{"" char not found in:'+CPass1FileName,ReportFileName);
end

PrintStringInfo('/*',CPass2FileName,'file','y');
PrintStringInfo('** -----------------------------',CPass2FileName,'file','y');
PrintStringInfo('** --- Variable Declaration. ---',CPass2FileName,'file','y');
PrintStringInfo('** -----------------------------',CPass2FileName,'file','y');
PrintStringInfo('*/',CPass2FileName,'file','y');
while (~meof(CDeclarationFileFid))
   tmpcline = mgetl(CDeclarationFileFid,1);
   if (length(tmpcline) == 0)
      tmpcline = ' ';
   end

   noblkstmpcline = stripblanks(tmpcline);
   PrintStringInfo(tmpcline,CPass2FileName,'file','y');
end

while (~meof(CInitVarsFileFid))
   tmpcline = mgetl(CInitVarsFileFid,1);
   if (length(tmpcline) == 0)
      tmpcline = ' ';
   end

   noblkstmpcline = stripblanks(tmpcline);
   PrintStringInfo(tmpcline,CPass2FileName,'file','y');
end
PrintStringInfo('/*',CPass2FileName,'file','y');
PrintStringInfo('** ---------------------------------',CPass2FileName,'file','y');
PrintStringInfo('** --- End Variable Declaration. ---',CPass2FileName,'file','y');
PrintStringInfo('** ---------------------------------',CPass2FileName,'file','y');
PrintStringInfo('*/',CPass2FileName,'file','y');


PrintStringInfo('/*',CPass2FileName,'file','y');
PrintStringInfo('** ---------------',CPass2FileName,'file','y');
PrintStringInfo('** --- C code. ---',CPass2FileName,'file','y');
PrintStringInfo('** ---------------',CPass2FileName,'file','y');
PrintStringInfo('*/',CPass2FileName,'file','y');
while (~meof(CPass1V1FileFid))
   tmpcline = mgetl(CPass1V1FileFid,1);
   if (length(tmpcline) == 0)
      tmpcline = ' ';
   end
   PrintStringInfo(tmpcline,CPass2FileName,'file','y');
end

mclose(CPass1V1FileFid);
mclose(CDeclarationFileFid);
mclose(CGblDeclarFileFid);
mclose(CInitVarsFileFid);

endfunction
