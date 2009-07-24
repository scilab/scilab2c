
function test_double_Meanf()
	disp (meanf (4 , 5 )) ;	
	disp ("");
	disp (meanf ([4 5 6], [1 2 3]));
	
	disp (meanf ([4 5 6], [1 2 3],1));
	disp ("");
	disp (meanf ([4; 5; 6], [1; 2; 3],2));


	disp (meanf ([4 5 6 ; 7 8 9], [1 2 3 ; 4 5 6],1));
	disp ("");
	disp (meanf ([4 7; 5 8; 6 9], [1 4; 2 5; 3 6],2));
// complex

	disp ([4*%i , 5+6*%i , 6]) ;
	disp ("");
	disp (meanf (4 +4*%i , 5 )) ;	
	disp ("");
	disp (meanf ([4*%i, 5+6*%i, 6], [1 2 3]));
	
	disp (meanf ([4 5 6], [1 2 3],1));
	disp ("");
	disp (meanf ([4; 5; 6], [1; 2; 3],2));
	disp ("");


	disp (meanf ([4 5 6 ; 7 8 9], [1 2 3 ; 4 5 6],1));
	disp ("");
	disp (meanf ([4 7; 5 8; 6 9], [1 4; 2 5; 3 6],2));
//

endfunction 
