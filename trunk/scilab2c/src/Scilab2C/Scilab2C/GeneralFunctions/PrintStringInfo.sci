function PrintStringInfo(str, filename, outputtype, ennewline)
// function PrintStringInfo(str,filename,outputtype,ennewline)
// -----------------------------------------------------------------
//
// Status:
// 02-Jan-2006 -- Nutricato Raffaele: Author.
// 02-Jan-2006 -- Nutricato Raffaele: TEST OK.
// 02-May-2006 -- Nutricato Raffaele: Added ennewline.
//
// Copyright 2007 Raffaele Nutricato.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

SCI2CNInArgCheck(argn(2),0,4);

   if argn(2) < 4
      ennewline = 'y';
      if argn(2) < 3
 	       outputtype = 'stdout';
         if argn(2) < 2
  	         filename = '';
            if argn(2) < 1
               str = '';
            end
         end
      end
   end

   if (length(filename) == 0) then 
      outputtype = 'stdout'; // Prints only on the stdout.
   end

   if (outputtype=='both') | (outputtype=='stdout')
      disp(str)
   end

   if (outputtype=='both') | (outputtype=='file')
      if (ennewline=='y')
         filenamefprintf(filename,'y',str);
      else
         filenamefprintf(filename,'n',str);
      end
   end
   
endfunction
