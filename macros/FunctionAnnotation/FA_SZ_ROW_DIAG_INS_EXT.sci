function outsize = FA_SZ_ROW_DIAG_INS_EXT(insize,val)

    // val ==> Position value ...,-2,-1,0,1,2....
    //insize ==> insize(1) will give ROW size and insize(2) will give COLUMN size.
    insize = string(insize);
    row_num = eval(insize(1));
    col_num = eval(insize(2));
    val_num = eval(val);
    ///////////////////////////////////////////////  FOR INSERT CONDITION ////////////////////////////////////////////



    if(row_num == 1)
        if(val_num == 0) then  // For 0th position
            outsize = string(col_num);// ROW size is equal to COLUMN size

        else    // For ....-2,-1,1,2... positions
            outsize = string(col_num+abs(val_num)); //ROW is equal to COLUMN SIZE + position value (i.e for 1*4 matrix and insert position 1 then ROW size is 4+1 = 5 )

        end 
    elseif(col_num == 1)  // if Column size is one 
        if(val_num == 0) then  // For Oth position 
            outsize = string(row_num); // ROW size is equal to ROW size

        else    // ....-2,-1,1,2... positions.
            outsize = string(row_num + abs(val_num));//ROW is equal to ROW SIZE + position value (i.e for 4*1 matrix and insert position 1 then ROW size is 4+1 = 5 )     

        end

        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////


        ///////////////////////////////////////// FOR EXTRACT CONDITION /////////////////////////////////////////////////     

    elseif(row_num == col_num)   // For no. of rows equal to no. of column (R == C)
        if(val_num == 0) then  //For 0th position
            outsize = string(col_num);  // No. of row is equal to column size
        else //For ....-2,-1,1,2... Positions
            outsize = string(col_num-abs(val_num)); //row value is equal to subtraction of column size and absolute value of position (i.e +ve and -ve both position values) 
        end
    elseif(row_num > col_num)     // for no. of rows greater than no. of column (R > C)
        if(val_num == 0) then  // if 0th position 
            outsize = string(col_num); // No. of row is equal to column size
        elseif(val_num > 0) then    // For +ve positions i.e 1,2,3.....
            outsize = string(col_num-abs(val_num));  // No. of row is equal to subtraction of column size and absolute value of +ve postion

        elseif(val_num < 0 ) then // For -ve positions i.e -1,-2,-3
            temp_outsize1 = row_num-abs(val_num); //In this row values are varying for 4*3 matrix there is no repetition of same row values,for 5*3 matrix there is (5-3 = 2) two same row size(i.e 3 and 3) for -1,-2 position and for 6*3 matrix there is (6-3 = 3) three same row size(i.e 3 ,3,3) for -1,-2,-3 position
            if(temp_outsize1 >= col_num) // if temp_outsize1 is greater than equal to column size then
                outsize = string(col_num);   // row size is equal to column 
            else
                outsize = string(row_num-abs(val_num)); // else row size is substractio of row and abosulte value of position(i.e -1,-2,-3)
            end
        end
    elseif(row_num < col_num)  // for no. of rows less than no. of column size
        if(val_num == 0) then      // if 0th position
            outsize = string(row_num); // No. of row is equal to row size
        elseif(val_num > 0) then    // for +ve positions i.e 1,2 3.....
            temp_outsize2 = col_num-abs(val_num);// In this column values are varying for 3*4 matrix there is no repetition of same row values,for 3*5 matrix there is (5-3 =2) two same row size (i.e 3, 3 ) for 1 ,2 position and for 3*6 matrix there is (6-3 = 3) three row size (i.e 3 ,3 ,3) for 1,2 3 position
            if(temp_outsize2 >= row_num) // if temp_outsize2 is greater than equal to row size then
                outsize = string(row_num); // row size is equal to row size
            else
                outsize = string(col_num-abs(val_num)); // else row size substractio of column and absolute value
            end
        elseif(val_num < 0) then  // for -ve positions i.e -1,-2,-3 .. positions
            outsize = string(row_num-abs(val_num));  // row size is substraction of row size and absolute value of position values(-1,-2,-3)
        end

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    end

endfunction 
