function outsize =FA_SZ_COL_DIAG_IN_EX(insize,val)
    
///////////////////////////////COLUMN SIZE FOR INSERT POSITION////////////////// 
    


    if((insize(1) == '1')) // If ROW size is 1 
        if(val == '0') then //For Oth position
            outsize = insize(2); //COLUMN size is equal to COLUMN size 
        else       // For ...-2,-1,1,2... position
            outsize = string(eval(insize(2))+abs(eval(val)));// COLUMN size is equal to COLUMN size + absolute value of position(for 1*3 matrix and 2nd postion COLUMN size is (3+2)=5
        end
    elseif((insize(2) == '1')) // If COLUMN size is 1
        if(val == '0') then   //For Oth position
            outsize = insize(1); //COLUMNS size is equal to ROW size
        else     // For ...-2,-1,1,2.... position
            outsize = string(eval(insize(1))+abs(eval(val)));// COLUMN size is equal to ROW size + absolute value of position(for 3*1 matrix and 1st postion COLUMN size is (3+1)=4   
        end 
////////////////////////////////////////////////////////////////////////////////


////////////////////////////COLUMN SIZE FOR EXTRACT POSITION////////////////////   
           
    else
        outsize = '1';  // For extract condition COLUMN size is always ONE.
    end
    
////////////////////////////////////////////////////////////////////////////////    

endfunction 
