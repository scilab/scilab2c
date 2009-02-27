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

#include "matrixPow.h"
#include <stdio.h>
#include <assert.h>
#include <math.h>


static void spowmaTest(void){
	float in1[4]={1,5,4,2};
	float expand1=2.2f;
	float result1R[4]={  27.93459280052221771484f ,    23.580294119266994812278f  ,
	18.864235295413593007652f ,   32.650651624375619519469f   };
	float out1[4];
	int i;
	
	float in2[16]={    2.5358983855694532394409f ,   9.0725262500345706939697f,    0.0026536155492067337036f,    3.9639251008629798889160f , 
	7.9845732506364583969116f,    7.5407014600932598114014f,   10.196942830458283424377f ,   8.2287722378969192504883f , 
	10.538597775623202323914f,    0.8204884417355060577393f,    6.7301832754164934158325f,    7.9482832476496696472168f,  
	8.7162081208080053329468f ,   2.3821726106107234954834f ,   6.5310877952724695205688f,    2.784897476434707641602f   };
	float expand2 = 3.4683557949028909206390f;
	float result2R[16]={13801.893971410685480805f ,   9622.6108799100766191259f ,   10325.586569611912636901f,   10694.791005280343597406f  ,
	24728.411825244897045195f ,   18392.823733925368287601f  ,  18631.05868385956637212f   ,  19357.84707477861229563f   ,
	16169.682243927050876664f ,   12258.542785024719705689f  ,  12630.164466338968850323f  ,  12827.915677254180991440f  ,
	13742.841851328515986097f ,   10198.0420642120679986f    ,  10658.784670951883526868f  ,  10839.51135004585739807f  };
	float out2[16];
	
	
	spowma(in1, 2, expand1, out1);
	spowma(in2, 4, expand2, out2);
	
	for (i=0;i<4;i++) {
		assert( fabs(out1[i]-result1R[i]) / fabs(out1[i]) <1e-6);
	}
	

	for (i=0;i<16;i++) {

		assert( fabs(out2[i]-result2R[i]) / fabs(out2[i]) <1e-6);
	}	
	
}

static void cpowmaTest(void){
	
	
	{
	float inR[9]={1,2,3,4,5,6,7,8,9};
	float inI[9]={1,2,3,4,5,6,7,8,9};
	float resultR[9]={- 4.7115011361608578610571f,- 2.0782061409646632732517f,0.5550888542315330909105f,
	- 2.3202132490900626571317f,- 2.4412168031527574640904f,- 2.5622203572154611528333f,
	0.0710746379807356554181f,- 2.80422746534086453352f,- 5.6795295686624518438634f};
	float resultI[9]={- 12.188702380084603049681f,- 4.0827818504168584823333f,4.0231386792508754268738f,
	- 3.0919079733956360556135f,- 2.5964710348850239540752f,- 2.1010340963744131848046f,
	6.0048864332933264975622f,- 1.1101602193531934226201f,- 8.2252068719997026846613f};
	floatComplex *in,out[9];
	int i;
	
	in=FloatComplexMatrix(inR,inI,9);
	
	cpowma(in, 3, FloatComplex(1,1), out);
	
	for (i=0;i<9;i++) printf("out[%d] = %f+%f*i\n",i,creals(out[i]),cimags(out[i]));
	
	for (i=0;i<9;i++){
		assert( (fabs(creals(out[i])-resultR[i])/ fabs(creals(out[i])) ) <3e-6);
		assert( (fabs(cimags(out[i])-resultI[i])/ fabs(cimags(out[i])) ) <1e-6);
	}
	}
	
	
	{
	
	float in1R[4]={1,5,4,2};
	float in1I[4]={0};
	float expand1=2.2f;
	float result1R[4]={  27.93459280052221771484f ,    23.580294119266994812278f  ,
	18.864235295413593007652f ,   32.650651624375619519469f   };
	float result1I[4]={  3.6611113731522362257920f , - 3.6611113731522362257920f , 
  - 2.9288890985217883589087f  ,  2.9288890985217883589087f };
	floatComplex out1[4];
	int i;
	
	float in2R[16]={    2.5358983855694532394409f ,   9.0725262500345706939697f,    0.0026536155492067337036f,    3.9639251008629798889160f , 
	7.9845732506364583969116f,    7.5407014600932598114014f,   10.196942830458283424377f ,   8.2287722378969192504883f , 
	10.538597775623202323914f,    0.8204884417355060577393f,    6.7301832754164934158325f,    7.9482832476496696472168f,  
	8.7162081208080053329468f ,   2.3821726106107234954834f ,   6.5310877952724695205688f,    2.784897476434707641602f   };
	float in2I[16]={0};
	float expand2 = 3.4683557949028909206390f;
	float result2R[16]={13801.893971410685480805f ,   9622.6108799100766191259f ,   10325.586569611912636901f,   10694.791005280343597406f  ,
	24728.411825244897045195f ,   18392.823733925368287601f  ,  18631.05868385956637212f   ,  19357.84707477861229563f   ,
	16169.682243927050876664f ,   12258.542785024719705689f  ,  12630.164466338968850323f  ,  12827.915677254180991440f  ,
	13742.841851328515986097f ,   10198.0420642120679986f    ,  10658.784670951883526868f  ,  10839.51135004585739807f  };
	float result2I[16]={ - 7.1981835972120027378196f  ,  1.9386514637886893552832f,  - 17.692616672339234185074f  ,  24.561537532538231687340f , 
	- 2.2418859631076406557781f ,   0.6037961445855435371755f,  - 5.5103941755046683681485f,    7.649730724813480264857f  , 
	- 4.865855522250573272913f  ,   1.310496989059492634056f ,  - 11.95992230200565309417f ,    16.603201547139228466676f  ,
	16.00935601900000193609f ,  - 4.3117212921047043394651f  ,  39.34984366402868971591f  , - 54.626892107189902958453f };
	floatComplex out2[16];
	floatComplex *in1,*in2;
	
	in1=FloatComplexMatrix(in1R,in1I,4);
	in2=FloatComplexMatrix(in2R,in2I,16);
	
	
	cpowma(in1, 2, FloatComplex(expand1,0), out1);
	cpowma(in2, 4, FloatComplex(expand2,0), out2);
	
	for (i=0;i<4;i++) {
		assert( fabs(creals(out1[i])-result1R[i]) / fabs(creals(out1[i])) <1e-6);
		assert( fabs(cimags(out1[i])-result1I[i]) / fabs(cimags(out1[i])) <1e-6);
	}
	
	
	for (i=0;i<16;i++) {
		assert( fabs(creals(out2[i])-result2R[i]) / fabs(creals(out2[i])) <1e-6);
		assert( fabs(cimags(out2[i])-result2I[i]) / fabs(cimags(out2[i])) <1e-6);
	}
	}
}


int main(void){
	spowmaTest();
	cpowmaTest();
	return 0;
}
