// Copyright (C) 2017 - IIT Bombay - FOSSEE

// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Yash Pratap Singh Tomar
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

//This function creates and compares the list of functions used in scilab code to existing function list from getallSources
function Required_addrs = get_rquird_fnctns(Standalone_files,Arduino_files,SharedInfo)
 Required_stdalon_indx = 1;
 Required_ardno_indx = 1;
 x = 1;
 y = 1;

//Creating lists for stanalone C file and function
//Some C files don't have their function name directory. So their address is being shifted to last of the list  
 Standalone_files_1 = Standalone_files;
// Standalone_files_extras(1) = Standalone_files_1(76);
// Standalone_files_extras(2) = Standalone_files_1(77);
// Standalone_files_extras(3) = Standalone_files_1(1009);
// Standalone_files_extras(4) = Standalone_files_1(1010);
// Standalone_files_extras(5) = Standalone_files_1(1011);
// Standalone_files_extras(6) = Standalone_files_1(1012);
// Standalone_files_1(1012) = [];
// Standalone_files_1(1011) = [];
// Standalone_files_1(1010) = [];
// Standalone_files_1(1009) = [];
// Standalone_files_1(77) = [];
// Standalone_files_1(76) = [];

//calculating the total no. of standalone files
 No_of_stdalon_files = size(Standalone_files_1);
 No_of_stdalon_files = No_of_stdalon_files(1);

//This for loop is to extract function name list from address list 
 for index=1:No_of_stdalon_files 
     K = strsplit(Standalone_files_1(index),"/");
     soK = size(K);
     soK = soK(1);
     Standalone_files_folders(index) = K((soK-1));
     Standalone_C_files(index) = K(soK);
     Standalone_C_files(index) = strtok(Standalone_C_files(index),".");
 end

//Here, it adds the functions to the list which were earlier removed to shift to the end  
 //for index=1:6
 //    K = strsplit(Standalone_files_extras(index),"/");
 //    Standalone_files_folders(No_of_stdalon_files+index) = K(3);
 //    Standalone_C_files(No_of_stdalon_files+index) = K(4);
 //    Standalone_files_1(No_of_stdalon_files+index)= Standalone_files_extras(index);
//     Standalone_C_files(No_of_stdalon_files+index) = strtok(Standalone_C_files(No_of_stdalon_files+index),".");
// end

//Following similar procedure for Arduino
 Arduino_files_1 = Arduino_files;
 No_of_ardno_files = size(Arduino_files_1);
 No_of_ardno_files = No_of_ardno_files(1);
 for index=1:No_of_ardno_files 
     K = strsplit(Arduino_files_1(index),"/");
     soK = size(K);
     soK = soK(1);
     Arduino_files_folders(index) = K((soK-1));
     Arduino_C_files(index) = K(soK);
     Arduino_C_files(index) = strtok(Arduino_C_files(index),".");
 end

//comparing
//this compares the list of functions used in scilab file to the created standalone C files and function list 
 for index = 1:SharedInfo.Function_list_index
      for k = 1:No_of_stdalon_files
 	  if SharedInfo.Function_list(index) == Standalone_files_folders(k)
            Required_fnctn_stdalon(Required_stdalon_indx) = k;
	    Required_fnctn_stdlon_f(x) = Standalone_C_files(k);
	    x = x+1;
           Required_stdalon_indx = Required_stdalon_indx + 1;
          end
      end
 end
 if x == 1
    Required_fnctn_stdlon_f = [];
 end
//this compares the list of functions used in scilab file to the created Arduino files and function list         
Required_stdalon_indx = Required_stdalon_indx - 1;

  for index = 1:SharedInfo.Function_list_index
      for k = 1:No_of_ardno_files
 	  if SharedInfo.Function_list(index) == Arduino_files_folders(k);
            Required_fnctn_ardno(Required_ardno_indx) = k;
            Required_fnctn_ardno_f(y) = Arduino_C_files(k);
	    y = y+1;
           Required_ardno_indx = Required_ardno_indx + 1;
          end
      end
  end

 Required_ardno_indx = Required_ardno_indx - 1;
//Calling Scilab2CDeps structure
 scilab2ccode = Scilab2CDeps();
//Looking for the depencies of the C files used on other files 
 for index = 1:Required_stdalon_indx
     call = "scilab2ccode.deps." + Standalone_C_files(Required_fnctn_stdalon(index));
     call_val = eval(call);
     Required_fnctn_stdlon_f = cat(1,Required_fnctn_stdlon_f,(call_val)');
 end

 Required_fnctn_stdlon_f = unique(Required_fnctn_stdlon_f);

//Looking for the depencies of the Arduino files used on other C or Arduino files 
 for index = 1:Required_ardno_indx
     call = "scilab2ccode.deps." + Arduino_C_files(Required_fnctn_ardno(index));
     call_val = eval(call);
     Required_fnctn_ardno_f = cat(1,Required_fnctn_ardno_f,(call_val)');
 end
 Required_fnctn_ardno_f = unique(Required_fnctn_ardno_f);

//Adding Standalone and Arudino files lists 
 all_files_addrs = cat(1,Standalone_files_1,Arduino_files_1);

//Adding Requied Standalone and Arudino files lists which are to be copied
 required_files = cat(1,Required_fnctn_stdlon_f,Required_fnctn_ardno_f);
 required_files = unique(required_files);
 no_of_required_files = size(required_files);
 no_of_required_files = no_of_required_files(1);
 no_of_all_files = size(all_files_addrs);
 no_of_all_files = no_of_all_files(1);

 all_files = cat(1,Standalone_C_files,Arduino_C_files);
 index = 1;
//Creating final list which has address of files to be copied
 for i=1:no_of_required_files
     for k=1:no_of_all_files
         if required_files(i) == all_files(k)
            Required_addrs(index) = all_files_addrs(k);
      	    index = index + 1;
         end
     end
 end
    
endfunction
