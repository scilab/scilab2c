function flagexist = FL_ExistCFunction(CFunName,USER2CAvailableCDat,SCI2CAvailableCDat,ConvertedDat,ToBeConvertedDat,ReportFileName)
// function flagexist = FL_ExistCFunction(CFunName,USER2CAvailableCDat,SCI2CAvailableCDat,ConvertedDat,ToBeConvertedDat,ReportFileName)
// -----------------------------------------------------------------
//
// Status:
// 30-Oct-2007 -- Raffaele Nutricato: Author.
// 30-Oct-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),6,6);

flagexist = %F;


AvailableDat = USER2CAvailableCDat;
load(AvailableDat,'Available');
NAvail = size(Available,1);

tmpcnt = 1;
while ((tmpcnt <=NAvail) & (flagexist == %F))
   if mtlb_strcmp(Available(tmpcnt),CFunName)
      flagexist = %T;
   end
   tmpcnt = tmpcnt + 1;
end
clear Available

if (flagexist == %F)
   AvailableDat = SCI2CAvailableCDat;
   load(AvailableDat,'Available');
   NAvail = size(Available,1);
   
   tmpcnt = 1;
   while ((tmpcnt <=NAvail) & (flagexist == %F))
      if mtlb_strcmp(Available(tmpcnt),CFunName)
         flagexist = %T;
      end
      tmpcnt = tmpcnt + 1;
   end
   clear Available
end

if (flagexist == %F)
   load(ConvertedDat,'Converted');
   NConv = size(Converted,1);
   tmpcnt = 1;
   while ((tmpcnt <=NConv) & (flagexist == %F))
      if mtlb_strcmp(Converted(tmpcnt),CFunName)
         flagexist = %T;
      end
      tmpcnt = tmpcnt + 1;
   end
   clear Converted
end

if (flagexist == %F)
   load(ToBeConvertedDat,'ToBeConverted');
   NToBeConv = size(ToBeConverted,1);
   tmpcnt = 1;
   while ((tmpcnt <=NToBeConv) & (flagexist == %F))
      if mtlb_strcmp(ToBeConverted(tmpcnt).CFunctionName,CFunName)
         flagexist = %T;
      end
      tmpcnt = tmpcnt + 1;
   end
   clear ToBeConverted
end


endfunction
