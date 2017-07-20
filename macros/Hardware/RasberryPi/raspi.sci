// Copyright (C) 2017 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

global RPI_piAdress;

if getos()=="Linux" then
    RPI_MacrosPath=get_absolute_file_path("raspi.sci");
    RPI_MacrosPath=part(RPI_MacrosPath,1:(length(RPI_MacrosPath)-7));
    RPI_MacrosPath=RPI_MacrosPath+'src/python/';
//    disp("Linux");
    function raspi(adress,local,username)
    // Function to initiate the connection to the raspberry pi
    //
    // Calling Sequence
    //  raspi(adress,local,username)
    //
    // Parameters
    //  address : Network address of the raspberry pi. Eg:10.42.0.82
    //  local   : username of the local computer.
    //  username: username on the raspberry pi.
    //
    // Description
    //  This program initiates the connection to the raspberry pi at the given address by running the python server script on port 9077 on the pi.
    //
    // Examples
    //  raspi('10.42.0.82','panda','pi')
    // See also
    //  raspi_close
    //
    // Authors
    //  Jorawar Singh
    
        global RPI_piAdress;
        RPI_piAdress=adress;
        
        disp("Step 1/6")
        TCL_EvalStr("if {[file exists /home/"+local+"/.ssh/id_rsa]} {} else {exec ssh-keygen -N """" -f /home/"+local+"/.ssh/id_rsa -q}");
        disp("Step 2/6")
        TCL_EvalStr("exec ssh-add >logs.txt 2>&1");
        disp("Step 3/6")
        TCL_EvalStr("exec ssh-copy-id -i /home/"+local+"/.ssh/id_rsa.pub "+username+"@"+adress+" > logs.txt 2>&1");
        disp("Step 4/6")
        TCL_EvalStr("exec rsync -avz "+RPI_MacrosPath+"serverWP.py "+username+"@"+adress+":.scilab/ >logs.txt");
        disp("Step 5/6")
        TCL_EvalStr("exec ssh "+username+"@"+adress+" sudo python /home/"+username+"/.scilab/serverWP.py &");
        disp("Step 6/6")
        TCL_EvalStr(["file delete logs.txt";"file delete &1"]);
    endfunction
elseif getos()=='Windows' then
    tempPath=get_absolute_file_path("raspi.sci");
    RPI_MacrosPath=strsubst(tempPath,'\','/');
    RPI_MacrosPath=part(RPI_MacrosPath,1:(length(RPI_MacrosPath)-7));
    RPI_MacrosPath=RPI_MacrosPath+'src/python/';
    function raspi(adress,username)
    // Function to initiate the connection to the raspberry pi
    //
    // Calling Sequence
    //  raspi(adress,username)
    //
    // Parameters
    //  address : Network address of the raspberry pi. Eg:10.42.0.82
    //  username: username on the raspberry pi.
    //
    // Description
    //  This program initiates the connection to the raspberry pi at the given address by running the python server script on port 9077 on the pi.
    //
    // Examples
    //  raspi('169.254.191.116','pi')
    // See also
    //  raspi_close
    //
    // Authors
    //  Jorawar Singh
        
        global RPI_piAdress;
        RPI_piAdress=adress;
        
        disp("Step 1/3")
        TCL_EvalStr("exec mintty ssh "+username+"@"+adress+" mkdir .scilab");
        disp("Step 2/3")
        TCL_EvalStr("exec mintty scp "+RPI_MacrosPath+"serverWP.py "+username+"@"+adress+":/home/"+username+"/.scilab/");
        disp("Step 3/3 (Wait ~15 seconds)")
        TCL_EvalStr("exec mintty ssh "+username+"@"+adress+" sudo python /home/"+username+"/.scilab/serverWP.py &");
        sleep(15000)
        TCL_EvalStr("exec taskkill /IM mintty.exe");
    endfunction
end
