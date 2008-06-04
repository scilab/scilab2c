function defaultprecision = FA_GetDefaultPrecision(scifilename,ReportFileName)
// function defaultprecision = FA_GetDefaultPrecision(scifilename,ReportFileName)
// -----------------------------------------------------------------
//
// Status:
// 12-Feb-2008 -- Raffaele Nutricato: Author.
// 12-Feb-2008 -- Alberto Morea: Test Ok.
//
// Copyright 2008 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),2,2);

defaultprecision = 'd';
annotationstring = '//SCI2C: DEFAULT_PRECISION='

scifid = SCI2COpenFileRead(scifilename);

foundannotation  = 0;
line_position    = 0;
while ((meof(scifid) == 0) & (foundannotation == 0))
   check_string = stripblanks(mgetl(scifid,1));
   line_position = line_position + 1;
   if (~isempty(check_string))
   
      if (SCI2Cstrncmps1size(annotationstring,check_string))
         tmpprecision = stripblanks(part(check_string,length(annotationstring)+1:length(check_string)));
         foundannotation = 1;
      end
   end
end

if (foundannotation == 0)
else
   if (tmpprecision == 'FLOAT')
      defaultprecision = 's';
   elseif (tmpprecision == 'DOUBLE')
      defaultprecision = 'd';
   end
end

endfunction
