/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
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
#define COLS4  4
#define COLS8  8
#define COLS16 16

#define ZREAL_IN2 { 0.00022113462910056  ,  0.33032709173858166  }
#define ZIMAG_IN2 { 0.66538110421970487  ,  0.62839178834110498  }

#define ZREAL_IN4 { 0.84974523587152362,  0.68573101982474327, 0.87821648130193353, 0.06837403681129217}
#define ZIMAG_IN4 { 0.56084860628470778,  0.66235693730413914, 0.72635067673400044, 0.19851438421756029}

#define ZREAL_IN8 {  0.54425731627270579, 0.23207478970289230, 0.23122371966019273, 0.21646326314657927,\
                     0.88338878145441413, 0.65251349471509457, 0.30760907428339124, 0.93296162132173777 }
#define ZIMAG_IN8 {  0.21460078610107303, 0.31264199689030647, 0.36163610080257058, 0.2922266637906432,\
                     0.56642488157376647, 0.48264719732105732, 0.33217189135029912, 0.59350947011262178}

#define ZREAL_IN16 {0.23122371966019273, 0.21646326314657927, 0.88338878145441413, 0.65251349471509457,\
                    0.30760907428339124, 0.93296162132173777, 0.21460078610107303, 0.31264199689030647,\
                    0.36163610080257058, 0.2922266637906432 , 0.56642488157376647, 0.48264719732105732,\
                    0.33217189135029912, 0.59350947011262178, 0.50153415976092219, 0.43685875833034515}

#define ZIMAG_IN16 {0.26931248093023896, 0.63257448654621840, 0.40519540151581168, 0.91847078315913677,\
                    0.04373343335464597, 0.48185089323669672, 0.26395560009405017, 0.41481037065386772,\
                    0.28064980218186975, 0.12800584640353918, 0.77831285959109664, 0.21190304495394230,\
                    0.11213546665385365, 0.68568959552794695, 0.15312166837975383, 0.69708506017923355}


#define ZREAL_RESULT2 { 0.33054822636768222,- 0.33010595710948110}
#define ZIMAG_RESULT2 { 1.29377289256080985,  0.03698931587859988}

#define ZREAL_RESULT4 { 2.48206677380949259,  0.43537130765616894, 0.97385666053742170, -0.49231379851698875}
#define ZIMAG_RESULT4 { 2.14807060454040766,- 0.78285905346274376, 0.42632796149700880,  0.45185491256415844}


#define ZREAL_RESULT8 { 4.00049206055700779,-0.43357241280891956, 0.79836636409163475,-0.91119240848798977,\
                       -0.06753427721560001,-0.18576209864995416, 0.97926024347543716, 0.17400105922003017}
#define ZIMAG_RESULT8 { 3.15585898794233799, 0.62132445165622818, 0.35205427557229996, 0.28289917172258683,\
                       -0.20619166828691959,-1.17220193335521805,-0.17761892452836037,-1.13931807191437073 }

#define ZREAL_RESULT16 { 7.31841186061501503, 0.57213963313411265,-0.54757095809921363,-0.48628670926159856,\
                        -1.24745626002550125,-0.60260425121772254,-0.09566750389725764, 1.12013387649474438,\
                        -0.52123307064175606,-0.4866536676629296 , 1.98659065302356819,-0.8626986211125984 ,\
                        -0.61915938556194305,-0.27813937201980266,-1.53103677171080510,-0.01918993749322817}
#define ZIMAG_RESULT16 { 6.47680679336190224, 0.33111151130330035,-0.19343861330849654, 0.12474172265893407,\
                        -1.0452539175748825 , 1.29632487527975693, 1.87557979276701658,-1.82623636350346352,\
                        -1.86397336795926094,-1.03154071610913434,-0.48573205481665604, 0.44539904220706855,\
                        -0.74425477534532547,-0.54299368721281471, 0.37996440777257234, 1.11249504536330601}


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

static int testFft(void) {

  printf("\n>>>> FFT Tests\n");
  printf("\t>>>> Matrix Double Realt Tests\n");
  /*dfftmaTest();*/
  printf("\t>>>> Vector 16 Double Complex Tests\n");
  zfftmaTest16();
  printf("\n\n\n");

  printf("\t>>>> Vector 2 Double Complex Tests\n");
  zfftmaTest2();
  printf("\t>>>> Vector 4 Double Complex Tests\n");
  zfftmaTest4();
  printf("\t>>>> Vector 8 Double Complex Tests\n");
  zfftmaTest8();



  return 0;
}



int main(void) {
  assert(testFft() == 0);
  return 0;
}
