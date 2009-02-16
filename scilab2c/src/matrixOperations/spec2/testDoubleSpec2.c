/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */
 
 
#include "spec.h" 
#include "stdio.h"
#include "assert.h"
#include "math.h"

static void dspec2aTest(void){
	double in[4]={1,1,1,3};
	double resultValuesR[4]={0.5857864376269050765700,0,0,3.4142135623730949234300};
	double resultValuesI[4]={0,0,0,0};
	double resultVectorsR[4]={- 0.9238795325112867384831,0.3826834323650897817792,
	0.3826834323650897817792,0.9238795325112867384831};
	double resultVectorsI[4]={0,0,0,0};
	
	
	double in2[4]={1,1,-2,3};
	double resultValues2R[4]={1.9999999999999997779554,0,0,1.9999999999999997779554};
	double resultValues2I[4]={0.9999999999999997779554,0,0,-0.9999999999999997779554};
	double resultVectors2R[4]={0.8164965809277261454824,- 0.4082482904638631282523,
	0.8164965809277261454824,- 0.4082482904638631282523};
	double resultVectors2I[4]={0,- 0.4082482904638629062077,0,0.4082482904638629062077};
	
	double in3[9]={0,-1,0,1,0,0,0,0,0};
	double resultValues3R[9]={0};
	double resultValues3I[9]={1,0,0,0,-1,0,0,0,0};
	double resultVectors3R[9]={0.7071067811865474617150,0,0,0.7071067811865474617150,0,0,0,0,1};
	double resultVectors3I[9]={0,0.7071067811865474617150,0,0,-0.7071067811865474617150,0,0,0,0};
	
	doubleComplex out1[4],out2[4],out3[9],out4[9];
	
	int i;
	dspec2a(in3,3,out3,out4);
	for(i=0;i<9;i++){
		if (zreals(out3[i])>1e-16)  assert( fabs(zreals(out3[i])-resultValues3R[i]) / fabs(zreals(out3[i])) <1e-15);
		else assert(1);
		if (zimags(out3[i])>1e-16)  assert( fabs(zimags(out3[i])-resultValues3I[i]) / fabs(zimags(out3[i])) <1e-15);
		else assert(1);
	}
	for(i=0;i<9;i++){
		if (zreals(out4[i])>1e-16)  assert( fabs(zreals(out4[i])-resultVectors3R[i]) / fabs(zreals(out4[i])) <1e-15);
		else assert(1);
		if (zimags(out4[i])>1e-16)  assert( fabs(zimags(out4[i])-resultVectors3I[i]) / fabs(zimags(out4[i])) <1e-15);
		else assert(1);
	}
	

	dspec2a(in,2,out1,out2);
	for(i=0;i<4;i++){
		if (zreals(out1[i])>1e-16)  assert( fabs(zreals(out1[i])-resultValuesR[i]) / fabs(zreals(out1[i])) <1e-15);
		else assert(1);
		if (zimags(out1[i])>1e-16)  assert( fabs(zimags(out1[i])-resultValuesI[i]) / fabs(zimags(out1[i])) <1e-16);
		else assert(1);
	}
	for(i=0;i<4;i++){
		if (zreals(out2[i])>1e-16)  assert( fabs(zreals(out2[i])-resultVectorsR[i]) / fabs(zreals(out2[i])) <1e-15);
		else assert(1);
		if (zimags(out2[i])>1e-16)  assert( fabs(zimags(out2[i])-resultVectorsI[i]) / fabs(zimags(out2[i])) <1e-16);
		else assert(1);
	}
	
	
	dspec2a(in2,2,out1,out2);

	for(i=0;i<4;i++){
		if (zreals(out1[i])>1e-16)  assert( fabs(zreals(out1[i])-resultValues2R[i]) / fabs(zreals(out1[i])) <1e-16);
		else assert(1);
		if (zimags(out1[i])>1e-16)  assert( fabs(zimags(out1[i])-resultValues2I[i]) / fabs(zimags(out1[i])) <1e-15);
		else assert(1);
	}
	for(i=0;i<4;i++){
		if (zreals(out2[i])>1e-16)  assert( fabs(zreals(out2[i])-resultVectors2R[i]) / fabs(zreals(out2[i])) <1e-15);
		else assert(1);
		if (zimags(out2[i])>1e-16)  assert( fabs(zimags(out2[i])-resultVectors2I[i]) / fabs(zimags(out2[i])) <1e-15);
		else assert(1);
	}
	
}



	
static void zspec2aTest(void){
	double inR[4]={1,1,1,3};	
	double inI[4]={0,0,0,0};
	double resultValuesR[4]={0.5857864376269050765700,0,0,3.4142135623730949234300};
	double resultValuesI[4]={0,0,0,0};
	double resultVectorsR[4]={- 0.9238795325112867384831,0.3826834323650897817792,
	0.3826834323650897817792,0.9238795325112867384831};
	double resultVectorsI[4]={0,0,0,0};
		
	double in2R[4]={1,1,-2,3};
	double in2I[4]={0,0,0,0};
	double resultValues2R[4]={1.9999999999999997779554,0,0,1.9999999999999997779554};
	double resultValues2I[4]={0.9999999999999997779554,0,0,-0.9999999999999997779554};
	double resultVectors2R[4]={0.8164965809277261454824,- 0.4082482904638631282523,
	0.8164965809277261454824,- 0.4082482904638631282523};
	double resultVectors2I[4]={0,- 0.4082482904638629062077,0,0.4082482904638629062077};
	
	  
	double in3R[16]={ 0.4685934986919164657593,    0.4262020816095173358917,    0.4217656338587403297424,    0.1034853602759540081024  ,
    0.4279759414494037628174,    0.7860729382373392581940,    0.8568082069978117942810,    0.1993437460623681545258 , 
    0.7131301630288362503052,    0.5208952468819916248322,    0.9311723159626126289368,    0.4143836158327758312225,  
    0.5980196148157119750977,    0.5549105503596365451813,    0.8552952585741877555847,    0.3097750707529485225678};
	double in3I[16]={0.9446128141134977340698,    0.2442680452950298786163,    0.8760446915403008460999,    0.4874215493910014629364,  
    0.3844018988311290740967,    0.0922345430590212345123,    0.0705418726429343223572,    0.7338807261548936367035,  
    0.7792180571705102920532,    0.7827638057060539722443,    0.2161567779257893562317,    0.3420197847299277782440,  
    0.430093832314014434814 ,    0.6261752569116652011871,    0.9554250938817858695984,    0.45415506651625037193 };
	double resultValues3R[16]={2.0556597713281337114211 ,   0.         ,                 0.      ,                    0.   ,                     
    0.         ,               - 0.3025728286579054682193  ,  0.                        ,  0.                        ,
    0.         ,                 0.                        ,  0.1432776981289703988054  ,  0.                        ,
    0.         ,                 0.                        ,  0.                        ,  0.59924918284561956571821};
 	double resultValues3I[16]={2.0772175543447914947137 ,   0.      ,                    0.     ,                     0. ,                       
    0.        ,                - 0.5223086999196728807959 ,   0.                       ,   0.     ,                   
    0.        ,                  0.                       ,   0.3871735516160564882782 ,   0.     ,                   
    0.        ,                  0.                       ,   0.                       , - 0.2349232044266161556489  };
	double resultVectors3R[16]={   0.5762578366606958546470 ,   0.4529873647084416976583 ,   0.5438116534400605495137  ,  0.3599855200589946457868 , 
  - 0.3285074902800487195442,  - 0.0923654569732548225147,    0.6473744750124794666846,  - 0.1812302216765642182139  ,
    0.7395301236826927748780,  - 0.4588526195219964631811,    0.0997916953568371567496,  - 0.3603263850824164338249  ,
    0.0717862182160008133192,    0.6967198304315765922112,  - 0.1153149977500917411355 , - 0.3232658081022470875077 };
	double resultVectors3I[16]={ 0. ,                       - 0.1082260232744242933745,  - 0.1403164362264210929254 ,   0.0775054168635924967123 , 
    0.0347047096401541868560,  - 0.4780157518240965019984,    0.                       ,   0.4493438228998393735303,  
    0.                      ,  - 0.0484367977162360741072 ,   0.0664282497469102783949 , - 0.3098340648435350952461 , 
    0.1768623397230159322024,    0.                       , - 0.4621680558325051979551 ,   0.3830799998945915163517};    
    
    
    double in4R[49]={0.0292230211198329925537,    0.1069206790998578071594,    9.7463708464056253433228,    7.7042609406635165214539 ,   6.3966313377022743225098, 9.5358861843124032020569,    4.1484833415597677230835,
 	  4.6615396952256560325623,    2.2384551353752613067627,    3.4569733263924717903137,    2.3406236339360475540161,    6.6193414805456995964050,2.6911795139312744140625,9.8302489006891846656799 ,
      7.3933512251824140548706,    2.9021358629688620567322 ,   3.9959496073424816131592   , 9.792278115637600421906 ,    0.0755135808140039443970, 7.0210226578637957572937 ,   8.9075061306357383728027 ,
     6.5269742021337151527405  ,  4.136228552088141441345 ,    8.5816909139975905418396  ,  2.3960896767675876617432  ,  4.8200417729094624519348,  9.848585547879338264465 ,    4.4697216479107737541199, 
      2.3298137634992599487305,    2.2345139319077134132385,    8.0025654565542936325073,    7.7507343282923102378845,    4.8250066302716732025146,  7.8448831336572766304016 ,   1.5346793178468942642212 ,
      7.7228771103546023368835 ,   8.9520217850804328918457,    9.4673257926478981971741,    6.9818257447332143783569,    9.5591608202084898948669,  0.4840173013508319854736,    5.3235206427052617073059,
      2.9468670953065156936646,    6.9771366892382502555847 ,   9.3762038648128509521484 ,   1.0755608463659882545471 ,   7.7634243946522474288940,   6.3734178384765982627869 ,   0.6630615703761577606201 };
      double in4I[49]={8.1694598542526364326477,    3.5473910067230463027954,    5.860544512979686260223,     3.4610254690051078796387,    4.4247510144487023353577,    8.8226650562137365341187,    7.6436930662021040916443 ,
    7.764139864593744277954,     2.8076809318736195564270,    6.9086006004363298416138,    7.1747286943718791007996,    3.7201813608407974243164 ,   9.3254965776577591896057,    2.2566775511950254440308,
    7.5211019208654761314392 ,   3.0747506581246852874756 ,   5.9793261485174298286438,    1.9238903466612100601196,    2.3870888305827975273132 ,   7.4708331003785133361816,    9.7131536761298775672913,
    4.3703553732484579086304,    6.2248750543221831321716,    3.2913279719650745391846,    3.2963873865082859992981,    2.7686371374875307083130 ,    4.8729835031554102897644,    7.7320465445518493652344 ,
    9.0775218093767762184143,    5.0122931879013776779175,    5.1595458528026938438416,    5.79267887398600578308  ,    1.5463936375454068183899 ,     7.6111377868801355361938,    6.9079177780076861381531 ,
    2.8732293471693992614746,    9.64253133628517389297 ,     5.6607243325561285018921,    5.7821379369124770164490,    2.6634209789335727691650  ,    4.7470985027030110359192,    6.0735465306788682937622,  
    0.4097307054325938224793,    5.0125684589147567749023 ,   5.2959309751167893409729,    6.2594583164900541305542,    2.2193526616320013999939  ,   3.467419948428869247437,     3.9511676924303174018860 }; 
	double resultValues4R[49]={39.018457752476393807228 ,0,0,0,0,0,0,
    			  		  0,2.2455352415739073812517,0,0,0,0,0,
    					  0,0,- 8.4848591657394489828903,0,0,0,0,
    					  0,0,0,- 9.617033196016185669919,0,0,0,
    					  0,0,0,0,- 3.7815852014367528077798,0,0,
    					  0,0,0,0,0,- 4.44858427601393291440,0,
    					  0,0,0,0,0,0,- 0.3001282122401837670900};
	double resultValues4I[49]={36.525725390582877594170,0,0,0,0,0,0,
    					  0,- 5.9058762755733944516123,0,0,0,0,0,
					  0,0,- 3.5959527108686115681735,0,0,0,0,
					  0,0,0,1.8928051444081777088257,0,0,0,
					  0,0,0,0,- 3.1889864758923365251064,0,0,
					  0,0,0,0,0,3.2418188738592150777151,0,
					  0,0,0,0,0,0,1.5279802073147508156836}; 
					   
 	double resultVectors4R[49]={  0.3499995148567048852684,    0.3131141942665225941234,    0.4518966551544936205431,    0.3429358568207974133912,    0.3073919828504245721490,   0.4236868694783915145763,    0.3928739146959387973368 ,
    0.2654822689469810148566 , - 0.3607918093136298631762,    0.0473515544359270068586 ,   0.5097969509656486986060 , -0.3771134435310480315096  , 0.2011534205484152293408,  - 0.4415200724898113993078,
    0.5454886553461798515130,  - 0.2173248800239625522224,  - 0.2171708216301463378883 , - 0.2460117034233289534662 , -0.3694743444265859433351  ,  0.3601018742104445391483,    0.1530612374027510713681,
    0.6385835932752577104310,  - 0.0013906755423099548263,  - 0.3368505708673739662551 ,   0.1394203608831885433    , -0.2292783363046769218308  , -0.2740379414191142504187,    0.1926279946047058377889 ,
  - 0.6106238336849327819067,    0.0128604884735820379493,    0.2248434453925002574071,  - 0.0955950290268089419854 , 0.6322383898844411431739  ,         - 0.1362122761803175874373,  - 0.0030545591332723984190,
    0.5431360047322275619308,    0.1304324282476526930541,  - 0.3713242513274904177401,  - 0.2693820083406764376299 , - 0.1431429883314006001882   ,   0.0533021313694299267438,    0.0071247423818797811501 ,
  - 0.156705245229635081738,     0.0034676864415526253982 , - 0.3351413975178426096768 ,   0.2927797449896782921996  ,  0.5714932440406852443005   ,   0.0738366305178744797288,  - 0.4509415569247051669422  };
 	double resultVectors4I[49]={  0.0720991445669864616796 ,   0.0844739028302603361942 ,   0.           ,               0.0173431366502564965337,  -0.0428710162141596462515,  0.0695226101295536302871,    0.0999385617869267273150,
    0.2510960793336660668018 , - 0.1123901435582568414384,    0.0091069807153507792430,    0.      ,                  - 0.2545493692188907641771,   0.1149714203529902251111,    0.0762796210842419941667,
    0.      ,                    0.0611827470444509316505,    0.2295643426501567385678,  - 0.2950878328821502361024,    0.198556748820033573955,     0.0646801132828138114483,  - 0.2660572521172601678785,  
    0.          ,                0.2688905463703794573860,    0.2230635356255223633593 , - 0.2013432448241845862391,  - 0.0386922946770884290668,    0.0358963301038670995480,  - 0.3593711366897305303780 , 
  - 0.1386717901043315326337,    0.0600994116374372472356,  - 0.1167558596038882207102 ,   0.317965599565130263571,     0. ,         -0.0642522754144960878131,  - 0.0853665514099945371695,                
    0.             ,             0.2715431731544318272320,  - 0.1184277560110737481658 ,   0.3655618467608299226868, - 0.4598766797780974302512 ,     0.0188698345957667955319,  - 0.1446429340244405892246,
    0.346095581161616094867  ,   0.0750882555805542639682,  - 0.2494867985551498246188,  - 0.2328934592128872882455,    0.  ,               -0.0047307828167728396829,  - 0.0078254955461786041004};         
  
   
    
 
	doubleComplex *in,*in2,*in3,*in4,out1[4],out2[4],out3[16],out4[16],out5[49],out6[49];
	
	int i;
	
	in=DoubleComplexMatrix(inR,inI,4);
	in2=DoubleComplexMatrix(in2R,in2I,4);
	in3=DoubleComplexMatrix(in3R,in3I,16);
	in4=DoubleComplexMatrix(in4R,in4I,49);
	zspec2a(in,2,out1,out2);

	
	for(i=0;i<4;i++){
		if (zreals(out1[i])>1e-16)  assert( fabs(zreals(out1[i])-resultValuesR[i]) / fabs(zreals(out1[i])) <1e-15);
		else assert(1);
		if (zimags(out1[i])>1e-16)  assert( fabs(zimags(out1[i])-resultValuesI[i]) / fabs(zimags(out1[i])) <1e-16);
		else assert(1);
	}
	
	for(i=0;i<4;i++){
		if (zreals(out2[i])>1e-16)  assert( fabs(zreals(out2[i])-resultVectorsR[i]) / fabs(zreals(out2[i])) <1e-15);
		else assert(1);
		if (zimags(out2[i])>1e-16)  assert( fabs(zimags(out2[i])-resultVectorsI[i]) / fabs(zimags(out2[i])) <1e-16);
		else assert(1);
	}
	
	
	zspec2a(in2,2,out1,out2);	
	for(i=0;i<4;i++){
		if (zreals(out1[i])>1e-16)  assert( fabs(zreals(out1[i])-resultValues2R[i]) / fabs(zreals(out1[i])) <1e-15);
		else assert(1);
		if (zimags(out1[i])>1e-16)  assert( fabs(zimags(out1[i])-resultValues2I[i]) / fabs(zimags(out1[i])) <1e-15);
		else assert(1);
	}
		
	for(i=0;i<4;i++){
		if (zreals(out2[i])>1e-16)  assert( fabs(zreals(out2[i])-resultVectors2R[i]) / fabs(zreals(out2[i])) <1e-15);
		else assert(1);
		if (zimags(out2[i])>1e-16)  assert( fabs(zimags(out2[i])-resultVectors2I[i]) / fabs(zimags(out2[i])) <1e-15);
		else assert(1);
	}
	
	
	
	zspec2a(in3,4,out3,out4);	
	for(i=0;i<16;i++){
		if (zreals(out3[i])>1e-16)  assert( fabs(zreals(out3[i])-resultValues3R[i]) / fabs(zreals(out3[i])) <1e-14);
		else assert(1);
		if (zimags(out3[i])>1e-16)  assert( fabs(zimags(out3[i])-resultValues3I[i]) / fabs(zimags(out3[i])) <1e-15);
		else assert(1);
	}	
	for(i=0;i<16;i++){
		if (zreals(out4[i])>1e-16)  assert( fabs(zreals(out4[i])-resultVectors3R[i]) / fabs(zreals(out4[i])) <1e-14);
		else assert(1);
		if (zimags(out4[i])>1e-16)  assert( fabs(zimags(out4[i])-resultVectors3I[i]) / fabs(zimags(out4[i])) <1e-14);
		else assert(1);
	}	
	
	/* FIXME : assert : 1e-13 maybe du to little values like  0.001... */
	zspec2a(in4,7,out5,out6);	
	
	for(i=0;i<49;i++){
		if (zreals(out5[i])>1e-16)  assert( fabs(zreals(out5[i])-resultValues4R[i]) / fabs(zreals(out5[i])) <1e-14);
		else assert(1);
		if (zimags(out5[i])>1e-16)  assert( fabs(zimags(out5[i])-resultValues4I[i]) / fabs(zimags(out5[i])) <1e-13);
		else assert(1);
	}	
	for(i=0;i<49;i++){
		if (zreals(out6[i])>1e-16)  assert( fabs(zreals(out6[i])-resultVectors4R[i]) / fabs(zreals(out6[i])) <1e-13);
		else assert(1);
		if (zimags(out6[i])>1e-16)  assert( fabs(zimags(out6[i])-resultVectors4I[i]) / fabs(zimags(out6[i])) <1e-13);
		else assert(1);
	}
	
	
	
}


static int testSpec2(void){
	printf(">>> Double Spec2 Tests <<<\n");
	printf(">>> Double <<<\n");
	dspec2aTest();
	printf(">>> DoubleComplex <<<\n");
	zspec2aTest();
	return 0;
}


int main(void){
	assert (testSpec2()==0);

	
	return 0;
}
