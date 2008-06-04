function SCI2CClassName = FL_GetFunctionClass(FunFileName,SCI2CClassSpecifier,ReportFileName)
// function SCI2CClassName = FL_GetFunctionClass(FunFileName,SCI2CClassSpecifier,ReportFileName)
// -----------------------------------------------------------------
//
// Status:
// 11-Jul-2007 -- Nutricato Raffaele: Author.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),3,3);

inannfid = SCI2COpenFileRead(FunFileName);

FoundClass = 0;
if (meof(inannfid) == 0)
   check_string = stripblanks(mgetl(inannfid,1));
   if (~isempty(check_string))
      if (SCI2Cstrncmps1size(SCI2CClassSpecifier,check_string))
         SCI2CClassName = part(check_string,length(SCI2CClassSpecifier)+1:length(check_string));
         FoundClass = 1;
      else
         SCI2CerrorFile('Could not find ""'+SCI2CClassSpecifier+'"" in '+FunFileName+'.',ReportFileName);
      end
   end
end
mclose(inannfid);
if (FoundClass == 0)
   SCI2CerrorFile('Could not find ""'+SCI2CClassSpecifier+'"" specifier.',ReportFileName);
end

endfunction
   