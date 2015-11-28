function opoutsize = FA_SZ_OPPLUS(in1size,in2size,in1type,in2type)
// function opoutsize = FA_SZ_OPPLUS(in1size,in2size,in1type,in2type)
// -----------------------------------------------------------------
// Returns the size of the output computed by OPPLUS operator,
// including the string operations.
//
// Assuming:
// size(in1) = [in1r,in1c]
// size(in2) = [in2r,in2c]
// size(out) = [outr,outc]
//
// we have the following combinations:
// in1   in2   outr   outc
// -----------------------
//  S     S    in2r   in2c
//  S     M    in2r   in2c
//  M     S    in1r   in1c
//  M     M    in1r   in1c
//
// Where S means that the input is a scalar
// and M means that the input is a matrix.
// There is also the case related to the string catenation!
// This is the main difference between - and + operators.
//
// Input data:
// in1size: size of input number 1. It is an array of 2 strings.
//          The first string specifies the number of rows.
//          The second string specifies the number of columns.
//
// in2size: size of input number 2. It is an array of 2 strings.
//          The first string specifies the number of rows.
//          The second string specifies the number of columns.
//
// Output data:
// opoutsize: size of output. It is an array of 2 strings.
//            The first string specifies the number of rows.
//            The second string specifies the number of columns.
//
// Status:
// 08-Dec-2007 -- Raffaele Nutricato: Author.
// 08-Dec-2007 -- Alberto Morea: Test Ok.
//
// Copyright 2007 Raffaele Nutricato & Alberto Morea.
// Contact: raffaele.nutricato@tiscali.it
// -----------------------------------------------------------------

// ------------------------------
// --- Check input arguments. ---
// ------------------------------
SCI2CNInArgCheck(argn(2),4,4);

// ------------------------
// --- Generate Output. ---
// ------------------------
// --- Get dimensions of input arguments. ---
disp(in1type,'in1type before casting : ');
disp(type(in1type),'in1type before casting using type function : ');
disp(in2type,'in2type before casting  : ');
disp(type(in2type),'in2type is before casting using type function : ');
disp(in1size,'in1size before casting : ');
disp(size(in1size),'in1size before casting using size funcion : ');
disp(in2size,'in2size before casting : ')
disp(size(in2size),'in2size before casting using size function : ');
in1size = string(in1size);
in2size = string(in2size);
in1type = string(in1type);
in2type = string(in2type);
disp(in1type,'in1type After casting : ');
disp(type(in1type),'in1type After casting using type function : ');
disp(in2type,'in2type After casting : ');
disp(type(in2type),'in2type After casting using type function : ');
disp(in1size,'in1size After casting : ');
disp(size(in1size),'in1size After casting using size funcion : ');
disp(in2size,'in2size After casting : ')
disp(size(in2size),'in2size After casting using size function : ');
in1dim = GetSymbolDimension(in1size);
in2dim = GetSymbolDimension(in2size);
disp(in1dim,'in1dimension is : ');
disp(in2dim,'in2dimension is : ');
if ((in1type ~= 'g') & (in2type ~= 'g'))
   disp("Inside 1st if condition");
   opoutsize = FA_SZ_OPPLUSA(in1size,in2size);
   disp(opoutsize,'Opoutsize in 1st if condition is : ');
disp("Going to 1st elseif statement");
elseif ((in1type == 'g') & (in2type == 'g'))
   disp("Inside to elseif statement");
   opoutsize(1) = '1';
   disp(opoutsize(1),"oputsize(1) is : ")
   if (isnum(in1size(1)) & isnum(in2size(1)))
      disp("Inside 2nd if condition");
      in1num = eval(in1size(1));
      disp(in1num,"in1num is in 2nd if  : ");
      in2num = eval(in2size(1));
      disp(in2num,"in2num is in 2nd if : ");
      if (in1num > 1 & in2num > 1)
         disp("Inside 3rd if condition");
         error(9999, 'String catenation can be performed only on strings of 1 x N size not N x 1 size');
         //NUT: mi pare che non possano proprio esistere stringe di dimensione Nx1 perche' in
         //NUT: scilab esiste il tipo string che e' di size 1x1 e sono io a trasformarlo in
         //NUT: 1xN per cui se uso sempre questa convenzione non sbaglio mai.
         //NUT: ho provato in scilab a fare la trasposta di una stringa e ottengo sempre 1x1.
         disp("End of 3rd if condition");
      end
   disp("End of 2nd if condition");
   end
   if (isnum(in1size(2)) & isnum(in2size(2)))
      disp("Inside 4th if condition");
      in1num = eval(in1size(2));
      disp(in1num,"in1num is in 4th if : ");
      in2num = eval(in2size(2));
      disp(in2num,"in2num is in 4th if : ");
      opoutsize(2) = string(in1num+in2num-1);
      disp(opoutsize(2),"Final Oputsize(2)  without casting to String : ");
      if isnan(opoutsize(2))
         disp("Inside 5th if condition");
         opoutsize(2) = '__SCI2CNANSIZE';
         disp(opoutsize(2),"Opoutsize(2) is when it is not a Number : ");  
      else
         opoutsize(2) = string(opoutsize(2));
         disp(opoutsize(2),"Opoutsize(2) is casting to String : ");
      end
      disp("Outside of 5th if condition");
   else
      opoutsize(2) = '('+string(in1size(2))+'+'+string(in2size(2))+'-1)';
      disp(opoutsize(2),"Final Opoutsize(2) casting to String :  ")
   end
   disp("Outside 4th if condition");
disp("Going to Inside 2nd elseif condition");

elseif (in2type == 'g')
    disp("Inside 4th elseif condition");
    if (isnum(in2size(2)))
        disp(in2size(2),"in2size(2) is inside 1st if of 4th elseif : ");
        if(in2size(2) == 3)
            in1num = eval(in1size(2));
            opoutsize(2) = string(in1num);
            #opoutsize = string(in1num);
            disp(opoutsize,"opoutsize inside 1st If condition of 4th elseif : ");
        else
            in2num = eval(in1size(1));
            opoutsize(1) = string(in2num);
            #opoutsize = in2num;
            disp(opoutsize,"opoutsize inside 1st Else condition of 4th elseif : ");
        end
     disp("OutSide of 1st if condition of 4th elseif");
    
    else
        disp("Inside else condition of 4th else")
        if(in2size(2) == 3)
           opoutsize(2) = '('+string(in1size(2))+')';
           disp(opoutsize(2),"Final Opoutsize(2) is not a number :  ")
        else
           opoutsize(1) = '('+string(in1size(1))+')';
           disp(opoutsize(1),"Final Opoutsize(1) is not a number :  ")
        end
   end
else
   error(9999, 'Unexpected type combination for ""+"" operator (type1,type2): ('+in1type+in2type+').');
end

endfunction

