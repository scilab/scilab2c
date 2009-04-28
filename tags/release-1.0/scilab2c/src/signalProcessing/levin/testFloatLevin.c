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

#include <math.h>
#include <stdio.h>
#include <assert.h>
#include "levin.h"



static void dlevinaTest(void) {

	int i=0;
  
	float in[20]={0.9932627780362963676453f,0.8074779896996915340424f,0.8554796632379293441773f,
	0.5031460602767765522003f,0.0963323051109910011292f,0.7058098311536014080048f,0.8630577065050601959229f,
	0.0076185003854334354401f,0.8048951094970107078552f,0.5963762304745614528656f,0.1176836211234331130981f,
	0.8010095250792801380158f,0.5132340090349316596985f,0.2010910022072494029999f,0.7860820889472961425781f,
	0.7865035482682287693024f,0.6951530007645487785339f,0.4248132123611867427826f,0.3446625452488660812378f,
	0.6497785751707851886749f};
	
	float result_la[48]={1.0f,-0.3865652298877474413175f,0.0f,0.0f,
	0.0f,- 0.3434956227371184778185f,0.0f,0.0f,
	0.0f,- 0.5839401384584462784133f,0.0f,0.0f,
	1.0f, - 0.2005808775714553182645f,0.0f,0.0f,
	1.0f, - 0.9800896173744618744550f, 1.690821697485581420750f,0.0f,
	0.0f,- 0.0829753946826485844213f, 0.1706850739778944525682f,0.0f,
	0.0f,- 1.5024216979529190219012f, - 0.2246231721723708774086f,0.0f,
	1.0f, - 0.1137930279260921523354f, - 0.9252347371003220022345f,0.0f,
	1.0f, 0.9890664402902992202726f, 0.5787159455904740124055f,1.2930051366411721147642f,
	0.0f,- 0.8505434486601569643582f,0.6053315910573954239382f, - 0.5028225952598519565839f,
	0.0f,2.1236994816779066752588f, - 2.0487578989503822946006f, - 3.9701563399198689374714f,
	1.0f, - 1.4716550983021570164766f, - 0.2144135496153387610008f, 1.4891952441184541644503f};
	
	float result_sig[12]={0.9932627780362963676453f, 0.8074779896996915340424f,0.3628661470549920387008f,0.4106795421050958294629f,
	- 0.6299693698364057237171f,- 0.0327761932052800242232f,0.1176836211234331130981f,0.8010095250792801380158f,
	- 0.1942402590062223821654f, 0.5878460460823274891240f,	0.3391635613203383137204f,0.1291488276492920306282f};
	
	float result_lb[48]={- 0.3981923483861428136876f,1.0f,0.0f,0.0f,
	- 0.3550295998674473652024f,0.0f,0.0f,0.0f,
	- 0.5696378489005990974903f,0.0f,0.0f,0.0f,
	- 0.1988863157065166586968f,1.0f,0.0f,0.0f,
	1.62419596196504145702f, - 0.9819754657045941526050f,1.0f,0.0f,
	0.0329804805798983302623f, - 0.0396945499933941681192f,0.0f,0.0f,
	- 0.1283118770193089619447f, - 1.492334154918740996010f,0.0f,0.0f,
	- 0.9551334433810730883963f, - 0.0265634378315470209841f,1.0f,0.0f,
	1.1913835764722526810999f,0.0301096362936850159286f, 1.909619275538441574014f,1.0f,
	0.4767865147665533709365f ,- 0.2016469880890300325760f,0.2878592385656049135179f,0.0f,
	5.1391578635011887499218f, - 2.5030727471739586675881f, - 6.5148738878935787965929f,0.0f,
	- 2.8040366068494293472213f ,- 1.3523880325486907771904f, 2.4607313355305917568217f,1.0f};
 
	float la[48],lb[48],sig[12];

	slevina(3,in,10,2,la,sig,lb);

	/* FIXME : assert à 10^-5 */
	/* FIXME : sig est rangé différemment qu'à l'habitude */

	for (i=0;i<48;i++){
		if (la[i]!=0)
			assert( (fabs(la[i]-result_la[i]) / fabs(la[i]) ) <3e-6);
		else 
			assert( fabs(la[i]-result_la[i]) == 0);
	}
	
	for (i=0;i<12;i++){
		if (sig[i]!=0)
			assert( (fabs(sig[i]-result_sig[i]) / fabs(sig[i]) ) <3e-6);
		else 
			assert( fabs(sig[i]-result_sig[i]) == 0);
	}
	
	
	for (i=0;i<48;i++){
		if (lb[i]!=0)
			assert( (fabs(lb[i]-result_lb[i]) / fabs(lb[i]) ) <3e-6);
		else 
			assert( fabs(lb[i]-result_lb[i]) == 0);
	}
	
}



static int levinTest(void) {
  printf("\n>>>> Levin Tests\n");
  dlevinaTest();
  return 0;
}

int main(void) {
  assert( levinTest()== 0);
  return 0;
}
