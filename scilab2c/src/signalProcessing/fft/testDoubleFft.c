/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Allan SIMON
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include <assert.h>
#include <stdio.h>
#include "fft.h"


#define ROW    1
#define COLS2  2
#define COLS3  3
#define COLS4  4
#define COLS5  5
#define COLS6  6
#define COLS7  7
#define COLS8  8
#define COLS9  9
#define COLS10 10
#define COLS11 11
#define COLS12 12
#define COLS13 13
#define COLS14 14
#define COLS15 15
#define COLS16 16
#define COLS32 32

#define ZREAL_IN2 { 0.00022113462910056  ,  0.33032709173858166  }
#define ZIMAG_IN2 { 0.66538110421970487  ,  0.62839178834110498  }

#define ZREAL_IN3 { 2.48206677380949259,  0.43537130765616894, 0.97385666053742170}
#define ZIMAG_IN3 { 2.14807060454040766,- 0.78285905346274376, 0.42632796149700880}


#define ZREAL_IN4 { 0.84974523587152362,  0.68573101982474327, 0.87821648130193353, 0.06837403681129217}
#define ZIMAG_IN4 { 0.56084860628470778,  0.66235693730413914, 0.72635067673400044, 0.19851438421756029}

#define ZREAL_IN5 { 0.84974523587152362,  0.68573101982474327, 0.87821648130193353, 0.06837403681129217,\
                    0.65251349471509457}
#define ZIMAG_IN5 { 0.56084860628470778,  0.66235693730413914, 0.72635067673400044, 0.19851438421756029,\
                    0.56642488157376647}

#define ZREAL_IN6 {  0.54425731627270579, 0.23207478970289230, 0.23122371966019273, 0.21646326314657927,\
                     0.65251349471509457, 0.30760907428339124 }
#define ZIMAG_IN6 {  0.21460078610107303, 0.31264199689030647, 0.36163610080257058, 0.2922266637906432,\
                     0.56642488157376647, 0.59350947011262178 }

#define ZREAL_IN7 {  0.54425731627270579, 0.23207478970289230, 0.23122371966019273, 0.21646326314657927,\
                     0.65251349471509457, 0.88338878145441413, 0.30760907428339124 }
#define ZIMAG_IN7 {  0.21460078610107303, 0.31264199689030647, 0.36163610080257058, 0.2922266637906432,\
                     0.40948254754766822, 0.56642488157376647, 0.59350947011262178 }



#define ZREAL_IN8 {  0.54425731627270579, 0.23207478970289230, 0.23122371966019273, 0.21646326314657927,\
                     0.88338878145441413, 0.65251349471509457, 0.30760907428339124, 0.93296162132173777 }
#define ZIMAG_IN8 {  0.21460078610107303, 0.31264199689030647, 0.36163610080257058, 0.2922266637906432,\
                     0.56642488157376647, 0.48264719732105732, 0.33217189135029912, 0.59350947011262178}


#define ZREAL_IN9 { 0.23122371966019273, 0.21646326314657927, 0.88338878145441413, 0.65251349471509457,\
                    0.30760907428339124, 0.93296162132173777, 0.21460078610107303, 0.31264199689030647,\
                    0.43685875833034515}
#define ZIMAG_IN9 { 0.26931248093023896, 0.63257448654621840, 0.40519540151581168, 0.91847078315913677,\
                    0.28064980218186975, 0.12800584640353918, 0.77831285959109664, 0.21190304495394230,\
                    0.68568959552794695}


#define ZREAL_IN10 { 0.21646326314657927, 0.65251349471509457, 0.63257448654621840, 0.31264199689030647,\
                     0.93296162132173777, 0.31264199689030647, 0.48185089323669672, 0.48264719732105732,\
                     0.2922266637906432 , 0.48264719732105732 }
#define ZIMAG_IN10 { 0.23122371966019273, 0.21646326314657927, 0.88338878145441413, 0.65251349471509457,\
                     0.11383596854284406, 0.19983377400785685, 0.56186607433483005, 0.58961773291230202,\
                     0.23122371966019273, 0.21646326314657927}
/*
#define ZREAL_IN10 { 1,2,3,4,5,6,7,8,9,10 }


#define ZIMAG_IN10 { 1,2,3,4,5,6,7,8,9,10 }
*/



#define ZREAL_IN11 { 1,2,3,4,5,6,7,8,9,10,11 }

#define ZIMAG_IN11 { 1,2,3,4,5,6,7,8,9,10,11 }


#define ZREAL_IN12 { 1,2,3,4,5,6,7,8,9,10,11,12 }

#define ZIMAG_IN12 { 1,2,3,4,5,6,7,8,9,10,11,12 }


#define ZREAL_IN13 { 1,2,3,4,5,6,7,8,9,10,11,12,13 }

#define ZIMAG_IN13 { 1,2,3,4,5,6,7,8,9,10,11,12,13 }



#define ZREAL_IN14 { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 }

#define ZIMAG_IN14 { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 }

#define ZREAL_IN15 { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 }

#define ZIMAG_IN15 { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 }



#define ZREAL_IN16 {0.23122371966019273, 0.21646326314657927, 0.88338878145441413, 0.65251349471509457,\
                    0.30760907428339124, 0.93296162132173777, 0.21460078610107303, 0.31264199689030647,\
                    0.36163610080257058, 0.2922266637906432 , 0.56642488157376647, 0.48264719732105732,\
                    0.33217189135029912, 0.59350947011262178, 0.50153415976092219, 0.43685875833034515}
#define ZIMAG_IN16 {0.26931248093023896, 0.63257448654621840, 0.40519540151581168, 0.91847078315913677,\
                    0.04373343335464597, 0.48185089323669672, 0.26395560009405017, 0.41481037065386772,\
                    0.28064980218186975, 0.12800584640353918, 0.77831285959109664, 0.21190304495394230,\
                    0.11213546665385365, 0.68568959552794695, 0.15312166837975383, 0.69708506017923355}


#define ZREAL_IN32 {0.21132486546412110,0.75604385416954756,0.00022113462910056,0.33032709173858166,\
                    0.66538110421970487,0.62839178834110498,0.84974523587152362,0.68573101982474327,\
                    0.87821648130193353,0.06837403681129217,0.56084860628470778,0.66235693730413914,\
                    0.72635067673400044,0.19851438421756029,0.54425731627270579,0.23207478970289230,\
                    0.23122371966019273,0.21646326314657927,0.88338878145441413,0.65251349471509457,\
                    0.30760907428339124,0.93296162132173777,0.21460078610107303,0.31264199689030647,\
                    0.36163610080257058,0.2922266637906432 ,0.56642488157376647,0.48264719732105732,\
                    0.33217189135029912,0.59350947011262178,0.50153415976092219,0.43685875833034515}

#define ZIMAG_IN32 {0.26931248093023896,0.63257448654621840,0.40519540151581168,0.91847078315913677,\
                    0.04373343335464597,0.48185089323669672,0.26395560009405017,0.41481037065386772,\
                    0.28064980218186975,0.12800584640353918,0.77831285959109664,0.21190304495394230,\
                    0.11213546665385365,0.68568959552794695,0.15312166837975383,0.69708506017923355,\
                    0.84155184263363481,0.40620247554033995,0.40948254754766822,0.87841258011758327,\
                    0.11383596854284406,0.19983377400785685,0.56186607433483005,0.58961773291230202,\
                    0.68539796629920602,0.89062247332185507,0.50422128057107329,0.34936154074966908,\
                    0.38737787725403905,0.92228986788541079,0.94881842611357570,0.34353372454643250}




#define ZREAL_RESULT2 { 0.33054822636768222,- 0.33010595710948110}
#define ZIMAG_RESULT2 { 1.29377289256080985,  0.03698931587859988}

#define ZREAL_RESULT3 { 3.8912947420030832 ,  0.73026611683127762, 2.82463946259411713}
#define ZIMAG_RESULT3 { 1.79153951257467270,  2.79267814568426775, 1.85999415536228230}

#define ZREAL_RESULT4 { 2.48206677380949259,  0.43537130765616894, 0.97385666053742170, -0.49231379851698875}
#define ZIMAG_RESULT4 { 2.14807060454040766,- 0.78285905346274376, 0.42632796149700880,  0.45185491256415844}

#define ZREAL_RESULT5 { 3.13458026852458715, 0.8989689127154592 ,-0.38601946016350575, 0.50520993574533923,\
                        0.09598652253573875}
#define ZIMAG_RESULT5 { 2.71449548611417413,-0.31527367037930898, 0.60322341639929178,-0.89813890885693670,\
                        0.69993670814631914}

#define ZREAL_RESULT6 {  2.18414165778085589,-0.26482327553354379,-0.01687604011087318, 0.67184740351513028,\
                         0.11489612058787246, 0.57635803139679309 }
#define ZIMAG_RESULT6 { +2.34103989927098155,+0.34168162147929737,-0.70971181304669773,-0.05571636231616137,\
                        -0.11084573654913504,-0.51884289223184654 }




#define ZREAL_RESULT7 { 3.06753043923527002,-0.62032167153569062,-0.13156333379499591, 0.48353341667797933,\
                        0.63567251139259018, 0.05503001802946385, 0.31991983390432432}
#define ZIMAG_RESULT7 { 2.75052244681864977, 0.82490994311348309,-0.93592353228518299,-0.23131444371235776,\
                       -0.12732936894919694, 0.16455873200809046,-0.94321827428597393}



#define ZREAL_RESULT8 { 4.00049206055700779,-0.43357241280891956, 0.79836636409163475,-0.91119240848798977,\
                       -0.06753427721560001,-0.18576209864995416, 0.97926024347543716, 0.17400105922003017}
#define ZIMAG_RESULT8 { 3.15585898794233799, 0.62132445165622818, 0.35205427557229996, 0.28289917172258683,\
                       -0.20619166828691959,-1.17220193335521805,-0.17761892452836037,-1.13931807191437073 }

#define ZREAL_RESULT9 { 4.18826149590313435,-0.33012457237426968,-0.46815050871925312,-0.52782532864173848,\
                        0.14402327100125287, 0.48673726656350014,-0.36542216583231485,-0.05675799381585508,\
                       -0.98972798714272159}
#define ZIMAG_RESULT9 { 4.31011430080980062,-0.43185186999958014,-0.61788469590268758, 2.02080753944191294,\
                       -1.82700213292318292,-0.72130831941965079,-0.43263346921029644,-0.61611460931125561,\
                        0.73968558488709069 }


#define ZREAL_RESULT10 {  4.7991688111796975 , 0.13431735180709442, 0.69797375124916528,-0.96094309976899528,\
                         -1.299412169815219  , 0.31298504490405327,-0.70524633213128674, 0.73186521665562432,\
                         -0.84695776029792746,-0.69911818231641265}
#define ZIMAG_RESULT10 { +3.8964297915808856 ,-0.73143162523007543,-1.16550179795884423,-0.28088284236709465,\
                         +0.91311790128897607,+0.14664673572406173,-0.38825389263472715,+0.70003588825710683,\
                         -1.10050453393604197,+0.32258157187768072}



#define ZREAL_RESULT16 { 7.31841186061501503, 0.57213963313411265,-0.54757095809921363,-0.48628670926159856,\
                        -1.24745626002550125,-0.60260425121772254,-0.09566750389725764, 1.12013387649474438,\
                        -0.52123307064175606,-0.4866536676629296 , 1.98659065302356819,-0.8626986211125984 ,\
                        -0.61915938556194305,-0.27813937201980266,-1.53103677171080510,-0.01918993749322817}
#define ZIMAG_RESULT16 { 6.47680679336190224, 0.33111151130330035,-0.19343861330849654, 0.12474172265893407,\
                        -1.0452539175748825 , 1.29632487527975693, 1.87557979276701658,-1.82623636350346352,\
                        -1.86397336795926094,-1.03154071610913434,-0.48573205481665604, 0.44539904220706855,\
                        -0.74425477534532547,-0.54299368721281471, 0.37996440777257234, 1.11249504536330601}

#define ZREAL_RESULT32 { 15.3165711835026741,-1.79021577127059173,-1.66659611407065089, 0.17525916470909797,\
                        -1.16958628014871602, 0.58684741669397522, 0.03947542161511042, 0.99740008842981942,\
                        -0.46323241293430328, 2.122539701124051  ,-1.52963914564883940, 0.87990417229605744,\
                         0.58569127383151542,-0.18198535589432135, 0.26043384746900655,-1.11204765363415392,\
                         0.35329844802618027,-1.47568616310628631,-2.03487116744967844,-3.19495610958970166,\
                         0.81026376203844086,-0.46366666776372734,-1.63150209835186510, 0.77334707088593369,\
                        -0.35098156332969666,-1.63498270669406387, 0.67411467120679691, 2.80538085483913147,\
                        -1.62281507315555107,-0.5600265995962992 ,-0.48984739061140237, 1.75450689143393301}



#define ZIMAG_RESULT32 { 15.509232945740223 ,-0.47962381296807621, 0.21213951866464975, 0.88442937061831350,\
                         1.52924554070524898,-0.6313403060045536 ,-2.25908603874729419,-1.3836292677373856 ,\
                        -1.18231281638145447,-2.14767090006699668, 1.5452016553381984 ,-3.15355126536920993,\
                         2.10199273301496747, 0.67530605269461363,-2.03603600735261558, 1.2309547869577584 ,\
                        -1.9912955537438393 ,-1.9668221895811833 , 0.29575245179739662, 1.34815224953105273,\
                         1.508921339902356  ,-0.40084285801706099, 2.96716476331614754, 1.08125713762201059,\
                        -1.39964522421360016,-1.30777696073860294,-1.13169784714423916,-2.00872755010475013,\
                         0.53915777133569487,-2.45178696294021004 , 1.56509394479014063, 1.5558426888499468}

static void zfftmaTest2 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN2;
    double tImagIn [] = ZIMAG_IN2 ;



    double tRealResult [] = ZREAL_RESULT2 ;
    double tImagResult [] = ZIMAG_RESULT2 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS2));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS2 );
    doubleComplex* Result   = DoubleComplexMatrix ( tRealResult , tImagResult ,ROW*COLS2) ;



    zfftma ( in , ROW , COLS2 , out ) ;

    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/


	for ( i = 0 ; i < (ROW*COLS2 )  ; i++ )
	{
	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
                i ,
                zreals(out[i]) ,
                zimags(out[i]),
                zreals (Result[i])  ,
                zimags (Result[i]),
                fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i])) ,
                fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i])));

   if (  zreals(out[i])  < 1e-14 && zreals (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && zimags (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }


}

static void zfftmaTest3 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN3;
    double tImagIn [] = ZIMAG_IN3 ;



    double tRealResult [] = ZREAL_RESULT3;
    double tImagResult [] = ZIMAG_RESULT3 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS3));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS3 );
    doubleComplex* Result   = DoubleComplexMatrix ( tRealResult , tImagResult ,ROW*COLS3) ;



    zfftma ( in , ROW , COLS3 , out ) ;

    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/


	for ( i = 0 ; i < (ROW*COLS3 )  ; i++ )
	{
	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
                i ,
                zreals(out[i]) ,
                zimags(out[i]),
                zreals (Result[i])  ,
                zimags (Result[i]),
                fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i])) ,
                fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i])));

   if (  zreals(out[i])  < 1e-14 && zreals (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && zimags (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }


}


static void zfftmaTest4 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN4;
    double tImagIn [] = ZIMAG_IN4 ;



    double tRealResult [] = ZREAL_RESULT4 ;
    double tImagResult [] = ZIMAG_RESULT4 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS4));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS4 );
    doubleComplex* Result   = DoubleComplexMatrix ( tRealResult , tImagResult ,ROW*COLS4) ;


    zfftma ( in , ROW , COLS4 , out ) ;

    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/
	for ( i = 0 ; i < (ROW*COLS4 )  ; i++ )
	{
	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
              i ,zreals(out[i]) , zimags(out[i]), zreals (Result[i])  , zimags (Result[i]),
              fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i])) ,
              fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i])));

   if (  zreals(out[i])  < 1e-14 && zreals (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && zimags (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }


}


static void zfftmaTest5 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN5;
    double tImagIn [] = ZIMAG_IN5 ;



    double tRealResult [] = ZREAL_RESULT5;
    double tImagResult [] = ZIMAG_RESULT5 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS5));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS5 );
    doubleComplex* Result   = DoubleComplexMatrix ( tRealResult , tImagResult ,ROW*COLS5) ;



    zfftma ( in , ROW , COLS5 , out ) ;

    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/


	for ( i = 0 ; i < (ROW*COLS5 )  ; i++ )
	{
	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
                i ,
                zreals(out[i]) ,
                zimags(out[i]),
                zreals (Result[i])  ,
                zimags (Result[i]),
                fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i])) ,
                fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i])));

   if (  zreals(out[i])  < 1e-14 && zreals (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && zimags (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }


}


static void zfftmaTest6 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN6;
    double tImagIn [] = ZIMAG_IN6 ;



    double tRealResult [] = ZREAL_RESULT6;
    double tImagResult [] = ZIMAG_RESULT6;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS6));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS6 );
    doubleComplex* Result   = DoubleComplexMatrix ( tRealResult , tImagResult ,ROW*COLS6) ;



    zfftma ( in , ROW , COLS6 , out ) ;

    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/


	for ( i = 0 ; i < (ROW*COLS6 )  ; i++ )
	{
	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
                i ,
                zreals(out[i]) ,
                zimags(out[i]),
                zreals (Result[i])  ,
                zimags (Result[i]),
                fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i])) ,
                fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i])));

   if (  zreals(out[i])  < 1e-14 && zreals (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && zimags (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }


}


static void zfftmaTest7 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN7;
    double tImagIn [] = ZIMAG_IN7 ;



    double tRealResult [] = ZREAL_RESULT7;
    double tImagResult [] = ZIMAG_RESULT7;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS7));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS7 );
    doubleComplex* Result   = DoubleComplexMatrix ( tRealResult , tImagResult ,ROW*COLS7) ;



    zfftma ( in , ROW , COLS7 , out ) ;

    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/


	for ( i = 0 ; i < (ROW*COLS7 )  ; i++ )
	{
	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
                i ,
                zreals(out[i]) ,
                zimags(out[i]),
                zreals (Result[i])  ,
                zimags (Result[i]),
                fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i])) ,
                fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i])));

   if (  zreals(out[i])  < 1e-14 && zreals (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && zimags (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }


}

static void zfftmaTest8 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN8;
    double tImagIn [] = ZIMAG_IN8 ;



    double tRealResult [] = ZREAL_RESULT8 ;
    double tImagResult [] = ZIMAG_RESULT8 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS8));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS8 );
    doubleComplex* Result   = DoubleComplexMatrix ( tRealResult , tImagResult ,ROW*COLS8) ;


    zfftma ( in , ROW , COLS8 , out ) ;

    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/
	for ( i = 0 ; i < (ROW*COLS8 )  ; i++ )
	{
	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
              i ,zreals(out[i]) , zimags(out[i]), zreals (Result[i])  , zimags (Result[i]),
              fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i])) ,
              fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i])));

   if (  zreals(out[i])  < 1e-14 && zreals (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && zimags (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }


}


static void zfftmaTest9 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN9;
    double tImagIn [] = ZIMAG_IN9 ;



    double tRealResult [] = ZREAL_RESULT9 ;
    double tImagResult [] = ZIMAG_RESULT9 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS9));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS9 );
    doubleComplex* Result   = DoubleComplexMatrix ( tRealResult , tImagResult ,ROW*COLS9) ;


    zfftma ( in , ROW , COLS9 , out ) ;

    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/
	for ( i = 0 ; i < (ROW*COLS9 )  ; i++ )
	{
	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
              i ,zreals(out[i]) , zimags(out[i]), zreals (Result[i])  , zimags (Result[i]),
              fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i])) ,
              fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i])));

   if (  zreals(out[i])  < 1e-14 && zreals (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  zreals (Result[i]) ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && zimags (Result[i]) < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  zimags (Result[i]) ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }


}

static void zfftmaTest10 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN10;
    double tImagIn [] = ZIMAG_IN10 ;



    double tRealResult [] = ZREAL_RESULT10 ;
    double tImagResult [] = ZIMAG_RESULT10 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS10));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS10 );



    zfftma ( in , ROW , COLS10 , out );




    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/
		for ( i = 0 ; i < (ROW*COLS10 )  ; i++ )
	{


	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
                i ,
                zreals(out[i]) ,
                zimags(out[i]),
                tRealResult[i]  ,
                tImagResult[i],
                fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i])) ,
                fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i])));


   if (  zreals(out[i])  < 1e-14 && tRealResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && tImagResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }

}

static void zfftmaTest11 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN11;
    double tImagIn [] = ZIMAG_IN11 ;



    double tRealResult [] = ZREAL_RESULT16 ;
    double tImagResult [] = ZIMAG_RESULT16 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS11));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS11 );



    zfftma ( in , ROW , COLS11 , out );




    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/
		for ( i = 0 ; i < (ROW*COLS11 )  ; i++ )
	{


	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
                i ,
                zreals(out[i]) ,
                zimags(out[i]),
                tRealResult[i]  ,
                tImagResult[i],
                fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i])) ,
                fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i])));


   if (  zreals(out[i])  < 1e-14 && tRealResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && tImagResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }

}


static void zfftmaTest12 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN12;
    double tImagIn [] = ZIMAG_IN12 ;



    double tRealResult [] = ZREAL_RESULT16 ;
    double tImagResult [] = ZIMAG_RESULT16 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS12));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS12 );



    zfftma ( in , ROW , COLS12 , out );




    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/
		for ( i = 0 ; i < (ROW*COLS12 )  ; i++ )
	{


	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
                i ,
                zreals(out[i]) ,
                zimags(out[i]),
                tRealResult[i]  ,
                tImagResult[i],
                fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i])) ,
                fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i])));


   if (  zreals(out[i])  < 1e-14 && tRealResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && tImagResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }

}


static void zfftmaTest13 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN13;
    double tImagIn [] = ZIMAG_IN13 ;



    double tRealResult [] = ZREAL_RESULT16 ;
    double tImagResult [] = ZIMAG_RESULT16 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS13));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS13 );



    zfftma ( in , ROW , COLS13 , out );




    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/
		for ( i = 0 ; i < (ROW*COLS13 )  ; i++ )
	{


	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
                i ,
                zreals(out[i]) ,
                zimags(out[i]),
                tRealResult[i]  ,
                tImagResult[i],
                fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i])) ,
                fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i])));


   if (  zreals(out[i])  < 1e-14 && tRealResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && tImagResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }

}


static void zfftmaTest14 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN14;
    double tImagIn [] = ZIMAG_IN14 ;



    double tRealResult [] = ZREAL_RESULT16 ;
    double tImagResult [] = ZIMAG_RESULT16 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS14));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS14 );



    zfftma ( in , ROW , COLS14 , out );




    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/
		for ( i = 0 ; i < (ROW*COLS14 )  ; i++ )
	{


	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
                i ,
                zreals(out[i]) ,
                zimags(out[i]),
                tRealResult[i]  ,
                tImagResult[i],
                fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i])) ,
                fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i])));


   if (  zreals(out[i])  < 1e-14 && tRealResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && tImagResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }

}



static void zfftmaTest15 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN15;
    double tImagIn [] = ZIMAG_IN15 ;



    double tRealResult [] = ZREAL_RESULT16 ;
    double tImagResult [] = ZIMAG_RESULT16 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS15));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS15 );



    zfftma ( in , ROW , COLS15 , out );




    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/
		for ( i = 0 ; i < (ROW*COLS15 )  ; i++ )
	{


	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
                i ,
                zreals(out[i]) ,
                zimags(out[i]),
                tRealResult[i]  ,
                tImagResult[i],
                fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i])) ,
                fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i])));


   if (  zreals(out[i])  < 1e-14 && tRealResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && tImagResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }

}



static void zfftmaTest16 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN16;
    double tImagIn [] = ZIMAG_IN16 ;



    double tRealResult [] = ZREAL_RESULT16 ;
    double tImagResult [] = ZIMAG_RESULT16 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS16));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS16 );



    zfftma ( in , ROW , COLS16 , out );




    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/
		for ( i = 0 ; i < (ROW*COLS16 )  ; i++ )
	{


	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
                i ,
                zreals(out[i]) ,
                zimags(out[i]),
                tRealResult[i]  ,
                tImagResult[i],
                fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i])) ,
                fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i])));


   if (  zreals(out[i])  < 1e-14 && tRealResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && tImagResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }

}



static void zfftmaTest32 (void )
{
      int i = 0 ;

    double tRealIn [] = ZREAL_IN32;
    double tImagIn [] = ZIMAG_IN32 ;



    double tRealResult [] = ZREAL_RESULT32 ;
    double tImagResult [] = ZIMAG_RESULT32 ;



    doubleComplex*  out     = (doubleComplex*) malloc ( sizeof(doubleComplex) * (unsigned int) (ROW*COLS32));
    doubleComplex*  in      = DoubleComplexMatrix ( tRealIn , tImagIn , ROW*COLS32 );



    zfftma ( in , ROW , COLS32 , out );




    /* if we don't add that test assert failed if result = 0  'cause then we have  |(out - 0)|/|out| = 1*/
		for ( i = 0 ; i < (ROW*COLS32 )  ; i++ )
	{


	  printf ( "\t\t %d out : %e\t %e\t * i result : %e\t %e\t * i assert : : %e\t %e\t * i  \n" ,
                i ,
                zreals(out[i]) ,
                zimags(out[i]),
                tRealResult[i]  ,
                tImagResult[i],
                fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i])) ,
                fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i])));


   if (  zreals(out[i])  < 1e-14 && tRealResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
        assert ( fabs(  zreals(out[i]) -  tRealResult[i] ) / fabs (zreals (out[i]))  < 1e-12 );


    if (  zimags(out[i])  < 1e-14 && tImagResult[i] < 1e-18 )
        assert ( 1 ) ;
    else
	    assert ( fabs(  zimags(out[i]) -  tImagResult[i] ) / fabs (zimags (out[i]))  < 1e-12 ) ;

    }

}

static int testFft(void) {

  printf("\n>>>> FFT Tests\n");
  printf("\t>>>> Matrix Double Realt Tests\n");
  /*dfftmaTest();*/

  printf("\n\n\n");

  printf("\t>>>> Vector 2 Double Complex Tests\n");
  zfftmaTest2();
  printf("\t>>>> Vector 3 Double Complex Tests\n");
  zfftmaTest3();
  printf("\t>>>> Vector 4 Double Complex Tests\n");
  zfftmaTest4();
  printf("\t>>>> Vector 5 Double Complex Tests\n");
  zfftmaTest5();
  printf("\t>>>> Vector 6 Double Complex Tests\n");
  zfftmaTest6();
  printf("\t>>>> Vector 7 Double Complex Tests\n");
  zfftmaTest7();
  printf("\t>>>> Vector 8 Double Complex Tests\n");
  zfftmaTest8();
  printf("\t>>>> Vector 9 Double Complex Tests\n");
  zfftmaTest9();



  printf("\t>>>> Vector 10 Double Complex Tests\n");
  zfftmaTest10();

/*
  printf("\t>>>> Vector 16 Double Complex Tests\n");
  zfftmaTest16();
  printf("\t>>>> Vector 32 Double Complex Tests\n");
  zfftmaTest32();



    printf("\t>>>> Vector 6 Double Complex Tests\n");
  zfftmaTest6();
*/
  return 0;
}



int main(void) {
  assert(testFft() == 0);
  return 0;
}
