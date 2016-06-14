// Copyright (C) 2016 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Siddhesh Wani
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

//This fucntion calulates size of output depending upon input
function outsize = FA_SZ_DIFF(in1size, in2val, in3val)
	in1size = string(in1size);
	in1row = eval(in1size(1));
	in1col = eval(in1size(2));
	in2val = string(in2val);
	in2num = eval(in2val);
	in3num = eval(in3val);

if(in3num == 0)
	if((in1row == 1) & (in1col <> 1))  //input is row vector
		outsize(1) = '1';
		outsize(2) = string (in1col - in2num);
	elseif((in1col == 1) & (in1row <> 1)) //input is column vector
		outsize(1) = string(in1row - in2num);
		outsize(2) = '1';
	else // input is matrix. output is a column matrix
		outsize(1) = string((in1row * in1col)- in2num);
		outsize(2) = '1';
	end
elseif (in3num == 1) //Difference along rows
	outsize(1) = string(in1row - in2num);
	outsize(2) = string(in1col);
elseif (in3num == 2) //Difference along columns
	outsize(1) = string(in1row);
	outsize(2) = string(in1col - in2num);
end
endfunction