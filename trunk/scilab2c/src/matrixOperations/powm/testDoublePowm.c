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


static void dpowmaTest(void){
	double in1[4]={1,5,4,2};
	double expand1=2.2;
	double result1R[4]={  27.93459280052221771484 ,    23.580294119266994812278  ,
	18.864235295413593007652 ,   32.650651624375619519469   };
	double out1[4];
	int i;
	
	double in2[16]={    2.5358983855694532394409 ,   9.0725262500345706939697,    0.0026536155492067337036,    3.9639251008629798889160 , 
	7.9845732506364583969116,    7.5407014600932598114014,   10.196942830458283424377 ,   8.2287722378969192504883 , 
	10.538597775623202323914,    0.8204884417355060577393,    6.7301832754164934158325,    7.9482832476496696472168,  
	8.7162081208080053329468 ,   2.3821726106107234954834 ,   6.5310877952724695205688,    2.784897476434707641602   };
	double expand2 = 3.4683557949028909206390;
	double result2R[16]={13801.893971410685480805 ,   9622.6108799100766191259 ,   10325.586569611912636901,   10694.791005280343597406  ,
	24728.411825244897045195 ,   18392.823733925368287601  ,  18631.05868385956637212   ,  19357.84707477861229563   ,
	16169.682243927050876664 ,   12258.542785024719705689  ,  12630.164466338968850323  ,  12827.915677254180991440  ,
	13742.841851328515986097 ,   10198.0420642120679986    ,  10658.784670951883526868  ,  10839.51135004585739807  };
	double out2[16];
	
	
	dpowma(in1, 2, expand1, out1);
	dpowma(in2, 4, expand2, out2);
	
	for (i=0;i<4;i++) {
		assert( fabs(out1[i]-result1R[i]) / fabs(out1[i]) <3e-16);
	}
	
	for (i=0;i<16;i++) {
		assert( fabs(out2[i]-result2R[i]) / fabs(out2[i]) <3e-16);
	}	
	
}

/* FIXME : assert 1e-14 */
static void zpowmaTest(void){
	/* Tests 1 */
	{
		double inR[9]={1,2,3,4,5,6,7,8,9};
		double inI[9]={1,2,3,4,5,6,7,8,9};
		double resultR[9]={- 4.7115011361608578610571,- 2.0782061409646632732517,0.5550888542315330909105,
		- 2.3202132490900626571317,- 2.4412168031527574640904,- 2.5622203572154611528333,
		0.0710746379807356554181,- 2.80422746534086453352,- 5.6795295686624518438634};
		double resultI[9]={- 12.188702380084603049681,- 4.0827818504168584823333,4.0231386792508754268738,
		- 3.0919079733956360556135,- 2.5964710348850239540752,- 2.1010340963744131848046,
		6.0048864332933264975622,- 1.1101602193531934226201,- 8.2252068719997026846613};
		doubleComplex *in,out[9];
		int i;
	
		in=DoubleComplexMatrix(inR,inI,9);
	
		zpowma(in, 3, DoubleComplex(1,1), out);
	
		for (i=0;i<9;i++) printf("out[%d] = %f+%f*i\n",i,zreals(out[i]),zimags(out[i]));
	
		for (i=0;i<9;i++){
			assert( (fabs(zreals(out[i])-resultR[i])/ fabs(zreals(out[i])) ) <3e-16);
			assert( (fabs(zimags(out[i])-resultI[i])/ fabs(zimags(out[i])) ) <3e-16);
		}
	}
	
	/* Tests 2 and 3 */
	{
		double in1R[4]={1,5,4,2};
		double in1I[4]={0};
		double expand1=2.2;
		double result1R[4]={  27.93459280052221771484 ,    23.580294119266994812278  ,
		18.864235295413593007652 ,   32.650651624375619519469   };
		double result1I[4]={  3.6611113731522362257920 , - 3.6611113731522362257920 , 
	  - 2.9288890985217883589087  ,  2.9288890985217883589087 };
		doubleComplex out1[4];
		int i;
	
		double in2R[16]={    2.5358983855694532394409 ,   9.0725262500345706939697,    0.0026536155492067337036,    3.9639251008629798889160 , 
		7.9845732506364583969116,    7.5407014600932598114014,   10.196942830458283424377 ,   8.2287722378969192504883 , 
		10.538597775623202323914,    0.8204884417355060577393,    6.7301832754164934158325,    7.9482832476496696472168,  
		8.7162081208080053329468 ,   2.3821726106107234954834 ,   6.5310877952724695205688,    2.784897476434707641602   };
		double in2I[16]={0};
		double expand2 = 3.4683557949028909206390;
		double result2R[16]={13801.893971410685480805 ,   9622.6108799100766191259 ,   10325.586569611912636901,   10694.791005280343597406  ,
		24728.411825244897045195 ,   18392.823733925368287601  ,  18631.05868385956637212   ,  19357.84707477861229563   ,
		16169.682243927050876664 ,   12258.542785024719705689  ,  12630.164466338968850323  ,  12827.915677254180991440  ,
		13742.841851328515986097 ,   10198.0420642120679986    ,  10658.784670951883526868  ,  10839.51135004585739807  };
		double result2I[16]={ - 7.1981835972120027378196  ,  1.9386514637886893552832,  - 17.692616672339234185074  ,  24.561537532538231687340 , 
		- 2.2418859631076406557781 ,   0.6037961445855435371755,  - 5.5103941755046683681485,    7.649730724813480264857  , 
		- 4.865855522250573272913  ,   1.310496989059492634056 ,  - 11.95992230200565309417 ,    16.603201547139228466676  ,
		16.00935601900000193609 ,  - 4.3117212921047043394651  ,  39.34984366402868971591  , - 54.626892107189902958453 };
		doubleComplex out2[16];
		doubleComplex *in1,*in2;
	
	
		in1=DoubleComplexMatrix(in1R,in1I,4);
		in2=DoubleComplexMatrix(in2R,in2I,16);
		
		zpowma(in1, 2, DoubleComplex(expand1,0), out1);
		zpowma(in2, 4, DoubleComplex(expand2,0), out2);
	
		for (i=0;i<4;i++) {
			assert( fabs(zreals(out1[i])-result1R[i]) / fabs(zreals(out1[i])) <3e-16);
			assert( fabs(zimags(out1[i])-result1I[i]) / fabs(zimags(out1[i])) <3e-16);
		}
	
	/*	
		FIXME : assert 1e-11 maybe due to spec2
	*/	
		for (i=0;i<16;i++) {
			printf("out[%d] = %1.16f+%1.16f*i --- result = %1.16f+%1.16f*i\n",i,zreals(out2[i]),zimags(out2[i]),result2R[i],result2I[i]);		
			assert( fabs(zreals(out2[i])-result2R[i]) / fabs(zreals(out2[i])) <3e-16);
			assert( fabs(zimags(out2[i])-result2I[i]) / fabs(zimags(out2[i])) <3e-16);
		}	
	}
	
}


int main(void){
	dpowmaTest();
	zpowmaTest();
	return 0;
}
	
