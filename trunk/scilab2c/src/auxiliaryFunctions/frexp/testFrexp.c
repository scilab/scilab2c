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

#define SIZE 100

#define DMATRIX_TEST {14.6458099031118518,15.9879935334969154,14.5023146230340352,9.79104027026660262,\
 13.658147977601745,18.2826677794023276,13.9913488019182726,13.0555850244756648,\
 11.2702097163264696,12.2080852641231488,\
14.9576657268129818,18.0415870145381838,15.4577532112657572,10.6060207869925502,\
 14.6987916130120198,19.9917861348452170,14.8484467294549827,14.0994958596124,\
 12.1294313366477713,12.8836800651605152,\
7.72729140087719646,8.27571528291814396,8.78222511899259928,5.22537042408334251,\
 7.61718988429527233,10.1106593547443495,7.22727291477849576,6.72646688774223733,\
 6.21430065514425589,6.69442204331610213,\
11.8618893865302528,13.2731189359057637,12.8373872935372706,9.52692469532374631,\
 11.9056327368823247,16.3654355264039921,11.8674243780595265,11.7206072002431814,\
 9.24712051368910970,10.6966525674175159,\
7.25089971320127891,8.98673751651268127,7.49831172728240691,5.29368504368777693,\
 8.12154956830077346,10.3089262075282218,7.4337348502224856,6.83888206810676191,\
 5.87125977419815737,6.5321378683758375,\
9.25854069422946502,10.4059421461299539,9.47515410794143342,7.263789985253827,\
 9.16034813421007321,13.6353552693330933,9.3726649654333336,8.83558176180042132,\
 7.6055387753197277,8.4871270614444292,\
12.6878667266786511,14.1417583108624711,13.0448499416136254,9.182764814582713,\
 12.4852121681423256,17.073953108953809,13.2550267101027224,11.3640159258193041,\
 9.6279844249894015,10.6765282334921068,\
16.0691497196859565,18.4667994666424704,16.975871456346809,12.083598083627443,\
 15.7522021028722747,22.0489520587189212,16.1322911282790358,16.8044904865300744,\
 12.7829232118433556,14.5730443462997599,\
11.943978463537455,13.6259118560125358,11.8068134298221956,8.21687415305816771,\
 11.4127920042158735,15.2296090993128281,11.3826577511842082,11.0976684273648587,\
 10.3857413785092909,10.2894980707345525,\
11.5843985401712821,13.2781579371486753,12.1725305229437293,8.37850128011447204,\
 11.8141382209783163,15.4022074994757734,11.484608766021573,11.1535660239869383,\
 9.31343988645433285,11.1349864749012912}

#define FMATRIX_TEST {4.6052332809216896f,2.16205411267794823f,1.12245312965776556f,4.0468190853821735f,\
 7.29705295628955231f,2.45894799152591625f,2.29331674633863614f,4.21571156291592253f,\
 2.81922686558935887f,2.348781949769843f,\
2.07401297354815162f,1.50063692688995753f,0.25219828236411757f,2.7063265188290884f,\
 6.35812780561968260f,0.67264506810224134f,0.79079814568186024f,2.91747981321864280f,\
 1.01032692983832129f,0.75975015828076931f,\
7.04077899650083694f,5.39363072316827363f,4.99449464719530045f,6.79878933472462954f,\
 11.2977866849707205f,5.7026161792862045f,6.09443833294921244f,7.35970702338152272f,\
 6.14030297304667272f,5.80227288585002476f,\
1.52422494456658053f,0.15792523935350228f,-0.39437456229879331f,3.21063571532312331f,\
 4.72654937095295491f,0.19681048033039794f,0.13926710536989889f,2.4098033377935764f,\
 1.19110231590601412f,0.24431206393184518f,\
5.84910802491279558f,3.67968516288822922f,2.73879619563976862f,5.69547375492497387f,\
 10.2284804678743431f,4.40378197582331143f,3.9855513762320007f,6.24858736599414133f,\
 4.57057059205936156f,4.19331143449899635f,\
2.84423960711997825f,0.91341486330902766f,0.32799575263405639f,3.63130361353437925f,\
 6.73358898182897025f,2.44092642244158631f,1.4035651670524776f,3.29646069585033841f,\
 1.63804041671370615f,1.34065096546340268f,\
5.04689360696997724f,2.58451417966281571f,1.89915292921285772f,4.62170835433455451f,\
 9.05019265678329887f,3.33670002112993291f,3.66038974983755372f,5.62296495186113443f,\
 4.04432332701467434f,3.48415716881126114f,\
2.99051528256943167f,0.76077291642727529f,0.19995186822386554f,2.96972391032047955f,\
 6.60462877127714787f,1.8346028052798535f,1.31621250911818244f,3.73816126628208467f,\
 1.3788533261260996f,0.30973924698106181f,\
5.20595600060592734f,3.44646883779368096f,1.85946748567920750f,5.1361216710529769f,\
 10.0941765681228333f,3.49429925842045552f,3.05021742013193098f,5.4348094549241184f,\
 4.51765668386982977f,3.40850797720926035f,\
4.65702831667450212f,3.03706964016556746f,2.06940591125521856f,5.11047315752830578f,\
 9.94379845012778674f,3.3321507049026704f,3.29919175160893818f,5.94111235727490428f,\
 4.22429837741492253f,4.41612421969640145f}



#include <assert.h>
#include <stdio.h>
#include "frexp.h"
#include "pow.h"


static void dfrexpsTest ( void ) {

    int i = 0 ;

    double out = 0 ;
    double dexp = 0 ;
    double result = 0;



    double in[] = DMATRIX_TEST ;






    for ( i = 0 ; i < SIZE; i++ )
        {
         out  = dfrexps ( in[i] , &dexp   ) ;
         result = out * dpows( 2 , dexp) ;

         printf ( "\t\t %d in :%e %e\tresult : %e\tassert : %e \n" , i , dexp, in[i] , result , fabs( in[i] - result) / fabs( in[i]) ) ;
		 assert ( fabs ( in[i] - result) / fabs( in[i]) < 1e-14 ) ;
        }


}

static void sfrexpsTest ( void ) {

    int i = 0 ;

    float out = 0 ;
    float fexp = 0 ;
    float result = 0;


    float in[] = FMATRIX_TEST ;






    for ( i = 0 ; i < SIZE; i++ )
        {
         out  = sfrexps ( in[i] , &fexp   ) ;
         result = out * spows( 2.0f , fexp) ;

         printf ( "\t\t %d in : %e\tresult : %e\tassert : %e \n" , i , in[i] , result , fabs( in[i] - result) / fabs( in[i]) ) ;
		 assert ( fabs ( in[i] - result) / fabs( in[i]) < 1e-6 ) ;
        }


}


static int testFrexp(void) {

  printf("\n>>>> Matrix Exponential Tests\n");
  printf("\t>>>> Matrix Double Realt Tests\n");
  dfrexpsTest();

  printf("\n\n\t>>>> Matrix Float Realt Tests\n");
  sfrexpsTest();

  return 0;
}



int main(void) {
  assert(testFrexp() == 0);
  return 0;
}


