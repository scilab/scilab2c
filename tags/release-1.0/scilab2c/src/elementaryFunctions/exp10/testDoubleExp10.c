/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2006-2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "testExp10.h"

#define SOURCE {0.3796988371759653091431,0.3062356826849281787872,0.3880051793530583381653,\
0.1047293278388679027557,0.7603831812739372253418,0.0340930395759642124176,\
0.1423966242000460624695,0.5554559468291699886322,0.8031897451728582382202,\
0.5183992316015064716339,0.1518561029806733131409,0.5884730662219226360321,\
0.2545093484222888946533,0.9992679939605295658112,0.6398976957425475120544,\
0.5506716123782098293304,0.4607007671147584915161,0.5933007937856018543243,\
0.6538193570449948310852,0.4168340521864593029022,0.9910155385732650756836,\
0.3720780410803854465485,0.7061824081465601921082,0.5780865414999425411224,\
0.602319641038775444031,0.5715096746571362018585,0.0549629041925072669983,\
0.1205854485742747784,0.0143620483577251434326,0.0257951230742037296295,\
0.8411248764023184776306,0.4381882525049149990082,0.4643401596695184707642,\
0.4197426405735313892365,0.8023654492571949958801,0.5228588166646659374237,\
0.5095121040940284729004,0.4531980180181562900543,0.7817818326875567436218,\
0.776557037141174077988,0.0466059204190969467163,0.5113326688297092914581,\
0.7502101892605423927307,0.6883628661744296550751,0.0167756117880344390869,\
0.9345410899259150028229,0.5609863763675093650818,0.2205847105942666530609,\
0.7648540753871202468872,0.4816976976580917835236,0.1558785634115338325500,\
0.2476022052578628063202,0.5216529071331024169922,0.0805230387486517429352,\
0.4409417239949107170105,0.8911933614872395992279,0.9780590813606977462769,\
0.4588093762286007404327,0.5510440031066536903381,0.0960960905067622661591,\
0.4196785055100917816162,0.7502556503750383853912,0.7218149593099951744080,\
0.2895541018806397914886,0.3907764498144388198853,0.6686618146486580371857,\
0.4877656819298863410950,0.4685971769504249095917,0.3562648519873619079590,\
0.3442325466312468051910,0.4253307832404971122742,0.5588058172725141048431,\
0.3304864969104528427124,0.4157403339631855487823,0.1595822656527161598206,\
0.3883102680556476116180,0.9415460713207721710205,0.4722979352809488773346,\
0.8533652639016509056091,0.1207739165984094142914,0.8999380934983491897583,\
0.4384902161546051502228,0.8976056622341275215149,0.4911110657267272472382,\
0.3402217179536819458008,0.9966153600253164768219,0.0215395865961909294128,\
0.6876890822313725948334,0.0044924151152372360229,0.6397854541428387165070,\
0.5416147718206048011780,0.2247649203054606914520,0.7364005260169506072998,\
0.4496364505030214786530,0.9678138038143515586853,0.6489060199819505214691,\
0.2544666919857263565063,0.1923975017853081226349,0.6861492367461323738098,\
0.4231455805711448192596,0.6734441593289375305176,0.8270696722902357578278,\
0.9360805852338671684265,0.8326222090981900691986,0.7424779590219259262085,\
0.0194640238769352436066,0.8016031915321946144104,0.2554539437405765056610,\
0.2688109613955020904541,0.7558490769006311893463,0.4347589677199721336365,\
0.6425966522656381130219,0.6957868058234453201294,0.6499576461501419544220,\
0.2303190128877758979797,0.5504368054680526256561,0.3038997054100036621094,\
0.0371030517853796482086,0.1703881053254008293152,0.5698686256073415279388,\
0.0036411266773939132690,0.4491547052748501300812,0.0576810697093605995178,\
0.4956056098453700542450,0.1888933442533016204834,0.5641230703331530094147,\
0.8562210192903876304626,0.0794764286838471889496,0.6196198705583810806274,\
0.2241039988584816455841,0.8582094730809330940247,0.7114551994018256664276,\
0.8026027604937553405762,0.6153324418701231479645,0.8958183480426669120789,\
0.8721761344932019710541,0.8389767911285161972046,0.2040955354459583759308,\
0.3166538262739777565002,0.7006825651042163372040,0.2073105163872241973877,\
0.5222550616599619388580,0.9416420971974730491638,0.52116033947095274925,\
0.4509841967374086380005,0.3961292845197021961212,0.7240869747474789619446,\
0.6724055963568389415741,0.2386146038770675659180,0.7124841609038412570953,\
0.3286493895575404167175,0.4837769134901463985443,0.7662767004221677780151,\
0.3153839264996349811554,0.3489987561479210853577,0.7413818310014903545380,\
0.9702721945941448211670,0.1276510567404329776764,0.3828862151131033897400,\
0.4882477498613297939301,0.5191949699074029922485,0.0906856027431786060333,\
0.6833897503092885017395,0.5022272053174674510956,0.0540433898568153381348,\
0.0163939022459089756012,0.6050811810418963432312,0.2953875153325498104095,\
0.6451294776052236557007,0.9449766655452549457550,0.5638650292530655860901,\
0.9786348040215671062469,0.9345349706709384918213,0.1023264364339411258698,\
0.7292392617091536521912,0.8353224000893533229828,0.9328642506152391433716,\
0.0507844281382858753204,0.1677279071882367134094,0.9475936102680861949921,\
0.9390441477298736572266,0.1270067342557013034821,0.6562355486676096916199,\
0.7192088677547872066498,0.5519206207245588302612,0.7606899146921932697296,\
0.8840736905112862586975,0.6386072556488215923309,0.2424023114144802093506,\
0.7679059565998613834381,0.2624090006574988365173,0.1259524053893983364105,\
0.4549009744077920913696,0.2127966103143990039825,0.0598834278061985969543,\
0.8079127701930701732635,0.7068187817931175231934,0.9313771002925932407379,\
0.0831561936065554618835,0.0639262734912335872650}

#define RESULT {2.3971700177038997026102,2.0241173275316319823958,2.4434596929789558217294,\
1.2727096230040590985055,5.7594787634974791146192,1.0816656533775219628524,\
1.3880228773309635226241,3.5929894899598955326780,6.3560857138200033134012,\
3.2991285007258008832309,1.4185874159639277891642,3.8767970491010381728358,\
1.7968397576993500042164,9.9831591347336789965539,4.3641301682226361080552,\
3.5536251298653307451048,2.8886888633814562510338,3.9201329280029257873252,\
4.506292282304419138939,2.6111634148093250118450,9.7952503109731186015097,\
2.3554725153952857930051,5.0837291957799548569596,3.7851800417010572630261,\
4.0023921772430028909184,3.7282899025795783742865,1.1349138714412994044523,\
1.3200350064956956064322,1.033622723333016191205,1.0611948240957502775927,\
6.9362522133054556050524,2.7427628125876060138921,2.9129978203666571090480,\
2.6287097779191044288893,6.3440332316119087963102,3.3331803790647938079417,\
3.232303288716906752853,2.8392132821292248578970,6.0503685885843978553567,\
5.97801550527315583849,1.1132838793654469267125,3.245881561190152808649,\
5.6261355226100322468596,4.879360051235307693673,1.0393830059871540516525,\
8.600844382521195541358,3.6390362044693791432337,1.6618227902609816748480,\
5.8190766171103653903174,3.0317800975513509165182,1.4317874896288145247780,\
1.7684883582783652578030,3.3239379437878064926792,1.2037132434952326764943,\
2.7602074516612016275019,7.7838303437469935630588,9.5073412259646765676280,\
2.876135722709581621359,3.5566735327883938211357,1.2476595365735951848052,\
2.6283216080771176770270,5.626724486525223944966,5.2700527142503661437445,\
1.947843685866482488223,2.4591014722412456450229,4.6629613384726322777851,\
3.0744375934314547293980,2.941691847776138235560,2.2712495380631962937912,\
2.2091873443061853521385,2.6627523904580243652163,3.620810677149941980701,\
2.1403583776871992760960,2.60459578833533411668,1.44405011565138674534,\
2.4451768086326421958177,8.7406971172900771449576,2.9668660249388048022468,\
7.1345282822869320327186,1.3206079780376647203610,7.9421501528532889579992,\
2.7446705104699793409395,7.899610206034289205945,3.0982115292188217026137,\
2.188878814912672332582,9.9223686842029490406958,1.050847236808647444661,\
4.8717958623764170411619,1.0103978539346472054206,4.3630024226971446665857,\
3.4802846963616036468636,1.6778955425132806578148,5.4500504945081766905446,\
2.8160246398239912046790,9.2856819400663770380788,4.4555982016116564281560,\
1.7966632806306144232167,1.5573904303972738727424,4.8545528865355054293218,\
2.6493880955344351058045,4.7145924820058668913703,6.715365764647851953839,\
8.6313869205483300106607,6.8017741785747647398352,5.5268535777229557126589,\
1.0458370517364794505255,6.3329081834648581761371,1.8007521573290650174215,\
1.8569959706339840277423,5.6996616704912836937069,2.7211906353565828986518,\
4.39133583975054442305,4.9634860523035060353436,4.4664003219774368602657,\
1.6994915629457518768675,3.5517043359266669000363,2.0132592604656482926373,\
1.089188511318553986840,1.4804307775633922528158,3.7142285642082217833604,\
1.0084192481976341770888,2.8129026699324310989425,1.142039354028792752516,\
3.1304416262076188992580,1.5448749964710146720392,3.6654143041103313116480,\
7.181596810407055997416,1.200815897009761545888,4.1650466551411478022260,\
1.6753440162955879344509,7.21455374553604489307,5.1458272136838258958846,\
6.3475007446385660614396,4.1241309049764449667919,7.8671666160643907161898,\
7.450340721306332625318,6.9020291813359317956156,1.5999099356849897368704,\
2.0732602743658210542321,5.0197555099972408498843,1.6117976431404783532741,\
3.3285498202301311287954,8.7426299668587681424015,3.3201701404059416056214,\
2.824777184045289768477,2.4895983330428896884712,5.297695284941288385028,\
4.7033315715610184426509,1.7322660897889763376156,5.1580335293393115847493,\
2.1313235787699511547544,3.0463297621649392254994,5.8381695091926415486228,\
2.0672068075526839336931,2.2335658257207593457849,5.5129217858217156589262,\
9.3383940240121710019139,1.3416865210022335119788,2.414828068089148516151,\
3.0778521213560718905455,3.3051788871815572790069,1.2322124790790967008292,\
4.8238050773970124751600,3.1785365175695079464901,1.1325135056912927211670,\
1.038469874168215900667,4.0279231974946911876145,1.97418348876764548905,\
4.4170211379151878006155,8.8100153590470213771368,3.663237102755284801958,\
9.5199529943728755654320,8.6007231965720354338600,1.2656873409568392130353,\
5.3609192017188229684166,6.8441954007674699056452,8.5676999890922083125133,\
1.1240468894427289026083,1.471390362736320067683,8.8632624680127776173322,\
8.690487669968261386089,1.3396974608773437598330,4.5314328497492990521778,\
5.2385231533328031616747,3.5638598811998751791918,5.7635480038278910086547,\
7.6572652334911666116568,4.351182064426246220989,1.7474401555184173595592,\
5.8601125417902917291713,1.8298226565740485227707,1.336449046213224356450,\
2.8503682671020214023372,1.6322873327021125700043,1.1478454784492588824918,\
6.4255864384701686375934,5.0911838672535516536755,8.538411872415464287656,\
1.211033602346728965671,1.1585806569998515769271}

#define ZSOURCER {0.0521394181996583938599,0.4229906541295349597931,0.9028727160766720771790,\
0.270216043572872877121,0.4369520992040634155273,0.0152578153647482395172,\
0.6548111913725733757019,0.0449309810064733028412,0.2133925389498472213745,\
0.5342523609288036823273,0.7069207737222313880920,0.2409008811227977275848,\
0.2901745550334453582764,0.7550916881300508975983,0.2289740880951285362244,\
0.4858699417673051357269,0.6168978903442621231079,0.8581895199604332447052,\
0.9484143527224659919739,0.2478762450627982616425,0.3616605177521705627441,\
0.4686846160329878330231,0.0340223712846636772156,0.5221414058469235897064,\
0.3054678197950124740601,0.2017288585193455219269,0.4932554000988602638245,\
0.3831945951096713542938,0.9221886433660984039307,0.8073847130872309207916,\
0.3020078903064131736755,0.2459809384308755397797,0.1128082294017076492310,\
0.5088820648379623889923,0.9855441050603985786438,0.1797042894177138805389,\
0.0627280175685882568359,0.6279844292439520359039,0.8693526117131114006042,\
0.1181543781422078609467,0.1908623259514570236206,0.0912145380862057209015,\
0.7186726490035653114319,0.310268334578722715378,0.6592819057404994964600,\
0.9106893003918230533600,0.9854423692449927330017,0.8546765870414674282074,\
0.4121543709188699722290,0.2333141383714973926544,0.3814189555123448371887,\
0.6619831356219947338104,0.212731502950191497803,0.0520866983570158481598,\
0.9962206138297915458679,0.6885302006267011165619,0.6471334304660558700562,\
0.1732599367387592792511,0.6790404403582215309143,0.7853972460143268108368,\
0.5636796839535236358643,0.5331145809032022953033,0.9027821635827422142029,\
0.0063843778334558010101,0.9165171254426240921021,0.4580909651704132556915,\
0.8293677615001797676086,0.7187301176600158214569,0.4822947531938552856445,\
0.9620302417315542697906,0.7949669538065791130066,0.3603135510347783565521,\
0.4186353813856840133667,0.6742749665863811969757,0.9338985690847039222717,\
0.18709085090085864067,0.1331541948020458221436,0.4923790604807436466217,\
0.1599537869915366172791,0.8545161760412156581879,0.4317741785198450088501,\
0.5531771448440849781036,0.2238912554457783699036,0.1766969445161521434784,\
0.4150884225964546203613,0.6159632527269423007965,0.0658540828153491020203,\
0.9070334821008145809174,0.0915193017572164535522,0.4515289147384464740753,\
0.1814587051048874855042,0.8840930457226932048798,0.1760245300829410552979,\
0.3308106199838221073151,0.2203056281432509422302,0.3864682218991219997406,\
0.0431000906974077224731,0.2068966520018875598907,0.5356620447710156440735,\
0.0403697001747786998749,0.3028300404548645019531,0.6841432997025549411774,\
0.9040663270279765129089,0.1237034215591847896576,0.9687331896275281906128,\
0.3681504433043301105499,0.1336043933406472206116,0.6103821019642055034637,\
0.6861566565930843353271,0.6903465152718126773834,0.779607950709760189056,\
0.7986211306415498256683,0.9899662975221872329712,0.8009328362531960010529,\
0.6865246118977665901184,0.8669688436202704906464,0.0602840110659599304199,\
0.6239373260177671909332,0.5747098876163363456726,0.2018211721442639827728,\
0.9450219180434942245483,0.6681275893934071063995,0.3908910537138581275940,\
0.8401706661097705364227,0.7179634161293506622314,0.6875333772040903568268,\
0.6410528933629393577576,0.8713398925028741359711,0.5411411095410585403442,\
0.7853284222073853015900,0.4244953142479062080383,0.1414492088370025157928,\
0.1002616137266159057617,0.0548216500319540500641,0.3878128407523036003113,\
0.1043689115904271602631,0.3819272350519895553589,0.3513077651150524616241,\
0.3175459811463952064514,0.1629057596437633037567,0.2614045254886150360107,\
0.2885272116400301456451,0.5902544697746634483337,0.3439738727174699306488,\
0.8696897123008966445923,0.0534855094738304615021,0.1987623842433094978333,\
0.6515000048093497753143,0.2086210027337074279785,0.1333819651044905185699,\
0.5733251376077532768250,0.9408131926320493221283,0.9827877636998891830444,\
0.5483977575786411762238,0.9164683455601334571838,0.6582687790505588054657,\
0.1169865764677524566650,0.6840933994390070438385,0.2702485686168074607849,\
0.2898568115197122097015,0.9279741663485765457153,0.3171655726619064807892,\
0.0346859293058514595032,0.8625448155216872692,0.4192672073841094970703,\
0.9283133395947515964508,0.1561186043545603752136,0.3421049430035054683685,\
0.6677390020340681076050,0.8959637288935482501984,0.7042291918769478797913,\
0.2711754958145320415497,0.7707630358636379241943,0.6646066964603960514069,\
0.0564929535612463951111,0.4913068241439759731293,0.3226534072309732437134,\
0.4814894613809883594513,0.4087979318574070930481,0.2927415999583899974823,\
0.8891521319746971130371,0.7954202168621122837067,0.8309869421645998954773,\
0.8356794654391705989838,0.4487133231014013290405,0.9114312161691486835480,\
0.5860714400187134742737,0.186776056420058012009,0.2693342454731464385986,\
0.9950512335635721683502,0.9318672632798552513123,0.8146264008246362209320,\
0.1896832454949617385864,0.0199374002404510974884,0.1238022493198513984680,\
0.8879826921038329601288,0.7732745558023452758789,0.7526164152659475803375,\
0.8376457272097468376160,0.2204564376734197139740}

#define ZSOURCEI {0.3044399749487638473511,0.3680851315148174762726,0.7309098849073052406311,\
0.2054549823515117168427,0.0948474220931529998779,0.7900205166079103946686,\
0.3616730114445090293884,0.5851024067960679531097,0.0693163666874170303345,\
0.3493489888496696949005,0.1835746141150593757629,0.3968948009423911571503,\
0.0996801331639289855957,0.8549251281656324863434,0.8357324106618762016296,\
0.9418399124406278133392,0.0554450806230306625366,0.6700697620399296283722,\
0.4463311964645981788635,0.1178311700932681560516,0.0399966575205326080322,\
0.8887174264527857303619,0.1686335867270827293396,0.9620060822926461696625,\
0.781102331355214118958,0.2049232018180191516876,0.6681626336649060249329,\
0.7458390104584395885468,0.6444613933563232421875,0.5694789239205420017242,\
0.7798063186928629875183,0.4667183174751698970795,0.2390516381710767745972,\
0.2273887698538601398468,0.0535939196124672889709,0.0797578911297023296356,\
0.0830229185521602630615,0.2299542189575731754303,0.4078942527994513511658,\
0.3135930425487458705902,0.2988875750452280044556,0.0152183887548744678497,\
0.6087857903912663459778,0.4139107796363532543182,0.8067577406764030456543,\
0.1505197458900511264801,0.7943486524745821952820,0.6584644555114209651947,\
0.9843795206397771835327,0.8309051920659840106964,0.7626284742727875709534,\
0.9873227919451892375946,0.2627140469849109649658,0.2271525249816477298737,\
0.242022148333489894867,0.5921032777987420558929,0.6258154083043336868286,\
0.2771522742696106433868,0.8628354417160153388977,0.8079399424605071544647,\
0.4837554544210433959961,0.0143989124335348606110,0.0487624881789088249207,\
0.1519355042837560176849,0.8873454760760068893433,0.0273414407856762409210,\
0.5470371553674340248108,0.8518478940241038799286,0.5534047596156597137451,\
0.1433433503843843936920,0.8160062870010733604431,0.7087611532770097255707,\
0.6693260166794061660767,0.9310019579716026782990,0.9888748200610280036926,\
0.6374907079152762889862,0.9456876888871192932129,0.1145771169103682041168,\
0.6323727769777178764343,0.7284730165265500545502,0.8856631275266408920288,\
0.4942793031223118305206,0.0190941328182816505432,0.1748895938508212566376,\
0.7399766482412815093994,0.4661670760251581668854,0.1322575574740767478943,\
0.9087754092179238796234,0.11615646071732044220,0.7354039144702255725861,\
0.1216390328481793403625,0.2898616599850356578827,0.7108344733715057373047,\
0.3166244276799261569977,0.4294263450428843498230,0.6909029199741780757904,\
0.1338429730385541915894,0.4151599411852657794952,0.3047454515472054481506,\
0.323238662909716367722,0.2928581796586513519287,0.2828734577633440494537,\
0.9256087234243750572205,0.1463391608558595180511,0.3073406759649515151978,\
0.6423539933748543262482,0.8470350624993443489075,0.2050857576541602611542,\
0.4205227121710777282715,0.7732202881015837192535,0.9940918935462832450867,\
0.2385355173610150814056,0.87819238565862178802,0.8542838920839130878448,\
0.9186090314760804176331,0.9039202476851642131805,0.2430246956646442413330,\
0.6553216264583170413971,0.5383144235238432884216,0.4596298984251916408539,\
0.1132094729691743850708,0.1722074192948639392853,0.0771417664363980293274,\
0.2509303349070250988007,0.7141261845827102661133,0.2991535165347158908844,\
0.4254599986597895622253,0.8421654864214360714,0.3318156134337186813354,\
0.1318110679276287555695,0.6389746675267815589905,0.1391938696615397930145,\
0.0569984130561351776123,0.9949800879694521427155,0.7950511714443564414978,\
0.3458094871602952480316,0.8083905372768640518188,0.7886787918396294116974,\
0.9252098770812153816223,0.0978971007280051708221,0.1040655449032783508301,\
0.7463223063386976718903,0.2425431115552783012390,0.6190718798898160457611,\
0.5496137794107198715210,0.1987607558257877826691,0.3828040296211838722229,\
0.2415534253232181072235,0.5118484236299991607666,0.4379267231561243534088,\
0.8779173558577895164490,0.1360241672955453395844,0.9468084294348955154419,\
0.2738420856185257434845,0.5806620018556714057922,0.5942221391014754772186,\
0.8508083224296569824219,0.378734225872904062271,0.2592755584046244621277,\
0.7080181255005300045013,0.3032848816365003585815,0.0120116178877651691437,\
0.0807306626811623573303,0.7887271861545741558075,0.5701906941831111907959,\
0.2198487878777086734772,0.2014332404360175132751,0.3704045540653169155121,\
0.2366845849901437759399,0.103130650240927934647,0.1840926231816411018372,\
0.1408759090118110179901,0.8378689214587211608887,0.2475062184967100620270,\
0.4595135403797030448914,0.6442520259879529476166,0.9563237931579351425171,\
0.9093016912229359149933,0.552059986628592014313,0.0986777986399829387665,\
0.2551880665123462677002,0.0510429129935801029205,0.287540963850915431976,\
0.1730656377039849758148,0.4155373144894838333130,0.8203372103162109851837,\
0.7022680984809994697571,0.0665632444433867931366,0.4468086212873458862305,\
0.5658646025694906711578,0.8720351336523890495300,0.7345057590864598751068,\
0.3390222620218992233276,0.9842283879406750202179,0.3797692963853478431702,\
0.6046022842638194561005,0.5255502574145793914795,0.4914151043631136417389,\
0.6406045397743582725525,0.6271067834459245204926}

#define ZRESULTR {0.8616789149319691309969,1.7528026973616770423092,-0.8951576871785223987743,\
1.65839939772781952421,2.670002318435218402470,-0.2545370391954314692740,\
3.0388538062879217882539,0.2458549627872582132859,1.613753544958956620547,\
2.373140931257777808128,4.6441801233654604885714,1.0634345748771927286924,\
1.8994737292284431529055,-2.2038440203063891509316,-0.5865941523645769040129,\
-1.7230123422001577537799,4.1053385752577806755426,0.2012772387479372093733,\
4.5889850773872540301568,1.7048706561180972940406,2.2898980543543361321213,\
-1.3470616397449584056289,1.000979918376255772827,-1.998745505240199671348,\
-0.4562266859878671976247,1.4173389563254865652908,0.1005345377926576272420,\
-0.3529055360142766550879,0.7252834368660135977436,1.6469252220572825340383,\
-0.4467771279955162211373,0.8387209999987794706300,1.1050928340202259558822,\
2.7952258554924300781863,9.5990623048041356923932,1.4870960004060611581167,\
1.1343408485170072275139,3.664612325782657276108,4.3703600670610898148993,\
0.9850722877732481785884,1.1986551091809227731488,1.2329567566066641504108,\
0.8800935914266996284994,1.1832797973754654030643,-1.2910350436339537161246,\
7.6571266019263468649569,-2.4697863053099986530015,0.3907140975028082774401,\
-1.655858606271026545187,-0.5746050598208488624508,-0.4432229757632685229751,\
-2.9672355970693655713433,1.3424314109887605095395,0.9766924789772336579219,\
8.4134496859782270661299,1.0052614992336186272581,0.5743785834192948192012,\
1.1969550027714319639927,-1.929705102086765711178,-1.7419725915375741109870,\
1.6154412531361730387403,3.4109538321538344085582,7.9439933441705683492273,\
0.9533381558732610949747,-3.7544424962625675412653,2.8656935239804841586420,\
2.0671417342103679537502,-1.992605711686495695290,0.8871291147322790671126,\
8.6682584526683399417379,-1.8914875129526329544660,-0.1401839917101320720505,\
0.0776428549278006530088,-2.560598020200964608506,-5.5730608716054170770349,\
0.1580601872370170912774,-0.7747638844786981504598,2.9997587850927698305270,\
0.1654170760372596638010,-0.7609360918468449641594,-1.2203777718239325889016,\
1.4986628046871217634362,1.6729053694884241654250,1.381936351079181113377,\
-0.3450348611667466425246,1.9706824980594530583033,1.1101876800122791877357,\
-4.0234586128898426338196,1.1906849924222373537930,-0.3456983902450189716227,\
1.459474884821820195313,6.0143936939361175575414,-0.0988538832443286719087,\
1.597480633260187854461,0.9129179205342567993142,-0.0488550375477847867445,\
1.0523032581716083022627,0.9288642069528815214952,2.6218635570145862878633,\
0.8072263924219229558332,1.5687383989731884526009,3.842899231404802939949,\
-4.2624261266025849081984,1.2547786671163203564561,7.0708952400269708959968,\
0.2138025786160810681746,-0.5039897261739162415140,3.6311482225254705369366,\
2.7511697563589119219785,-1.0199337285771719052718,-3.9613785741953506658319,\
5.3644844232216355450760,-4.261894060044243204288,-2.440577323716713653567,\
-2.5162841502447741426352,-3.5973154891472156613474,0.9736685483701841281601,\
0.2600685777468328963025,1.2216142738714919069309,0.7803738463829824612006,\
8.5132680918277277015704,4.2958732896863782713126,2.4210488328114880829389,\
5.79755622526757630197,-0.3837915438103189358365,3.75964173341358565139,\
2.4386368546342671592697,-2.6776116153796971630641,2.5102046010802867570533,\
5.821177306248865868099,0.2640059162189042352153,1.31446884371506267364,\
1.2488505950260830879017,-0.7482976046844636019983,-0.6275966789165404735584,\
0.8893791469828959961319,-0.6903683581860716733658,-0.5450973252013330272447,\
-1.1028092549899868313190,1.4183297900536229185775,1.773434980128008042755,\
-0.2859252183654940604463,3.3012839410905678860786,0.3197431184385559066463,\
2.2263782918939738487,1.0146592610810074575056,1.0051892636742449926857,\
3.8066700246852320788093,0.6179593115281443171938,0.7249522760637888696422,\
-1.6307732738859830323719,8.3014440376437921287334,-5.5006403965152692592255,\
2.8552972304138433123910,1.9111692714948702587208,0.9158531650125845136046,\
-0.4956155140563224259509,3.1079184772588979157604,1.5408715933614589577161,\
-0.1158617194706384467828,6.4886221326459514457952,2.0749108619541400955200,\
1.0644832532013759340828,-1.769719547358157507588,0.6696790607045245424800,\
7.4150575771959807980238,1.2812290258043323998294,1.4461251309266722753222,\
3.9789946052408695642555,7.6489498856535602655526,4.6130068144799594165306,\
1.7697609579312818528507,-2.069533011859056692572,3.8895055335340873448047,\
0.5587033140125831076617,0.2704103697575463982616,-1.2405136002402707973147,\
-1.5134557095053997599621,0.7566012248243810800474,1.9117596963451992664318,\
6.447932326957059423478,6.2003146906774571078813,5.344469754581457898723,\
6.3131049040564706231748,1.6189521464425622454542,-2.550619599252561098268,\
-0.1781945407584817342439,1.5193399835582135359857,0.9590574537903557850171,\
2.6165522176992435099407,-3.6188103766399173366608,-0.7842216609502735691350,\
1.0995885822264845899099,-0.6708497380942372023682,0.8529889923514888394607,\
1.3729938244229744626068,2.0937757207972880202362,2.4059764571152468803916,\
0.6578397026948303860650,0.2101416292188336421010}

#define ZRESULTI {0.7272548245748866602156,1.9854303798419310478351,7.9457339679995211412233,\
0.8488412125630352411676,0.5925642663233093854203,1.0039936024574043216262,\
3.3414071705695578273776,1.081403318108233868600,0.2597757190370896807075,\
2.4651157060741901716483,2.0890001084665330566281,1.3789900497554921088295,\
0.4437915251064282751159,5.2455794258294652365748,1.5894481231762551676212,\
2.5300661616939024156636,0.5269825145414556155643,7.2114139192406465639351,\
7.6023759189514121814568,0.474253708603649237752,0.2114880398457448518190,\
2.615809838094426353905,0.40946194724304191270,2.660538085383924222782,\
1.96836124960102032411,0.7232671662286862535041,3.111923291962274351619,\
2.3906358097335185242116,8.3281383621146503060118,6.2028635418634419096406,\
1.9540840065283944237962,1.5494625392422922693925,0.678202414336372183534,\
1.6137618479690827300033,1.1906180579664376040228,0.2762165158082148241903,\
0.2195296884715036700442,2.1446447456633843664520,5.9741482912408789829328,\
0.867597682821533044972,0.9856997170507159067299,0.0432225133986508733286,\
5.157507023966152459593,1.6654420749486735786604,4.3768952511866894283799,\
2.7654687058579336955688,9.3496470896606780343063,7.1454288620924977237792,\
1.9826603369952136013410,1.6118978629668390123442,2.3655185893491501580854,\
3.5043054723514432957643,0.9281385166491339377970,0.5631636514321668451899,\
5.2429430139302253266465,4.7766052326802679317552,4.4001190809809767046090,\
0.8877792684794596489439,4.368513033448009785786,5.8469722698220429890625,\
3.2860624631665138473124,0.1131306785331901154645,0.8957170057781025374055,\
0.3478275260751592101727,7.3475483360254925102595,0.1806513152317329173879,\
6.4267295981620362610442,4.8385133662587431757629,2.9034462647978491744993,\
2.9696777404396668131881,5.9431363200854443462617,2.288232180725223052775,\
2.6208664370161969259243,3.9693733894002809492463,6.5342907486237020719955,\
1.5303355006050158859665,1.1162736854609731640409,0.8102944693911555695820,\
1.4357885386399356075771,7.1128736564949752718690,2.4113210957685655699834,\
3.2448135685253003401840,0.0735981604163226527104,0.5886735706121437594618,\
2.5776994154551164939448,3.629648394334391792171,0.3489446690644626425382,\
6.9989048057282028381110,0.3262782224609265258053,2.8071160078618211386470,\
0.4198114062820728631387,4.7398318369933782889802,1.4965081339145251959621,\
1.4268961804460684739126,1.3873315379595159146930,2.4343374430326063517782,\
0.3349767990169579268134,1.3153540511429153703205,2.2160059373349834110911,\
0.7434370339011254769090,1.253936082334201174149,2.929523877257661279572,\
6.7911802335851190193239,0.4395719515095502516466,6.0491461603781946365643,\
2.324454495134102849363,1.263389181071626898856,1.8546860110985297076525,\
3.9998192433092101261,4.7944107664763828680066,4.5331878790851858340716,\
3.2834478309428574149820,8.7932187934310537258398,5.8331542843869588210737,\
4.1564133542481211947006,6.4227435117275550879867,0.6098783468239901139896,\
4.1986123528738117371972,3.5516439676096513977654,1.3871043178012487651074,\
2.2708618645232787613963,1.7986812579372670750644,0.4346204841779990335482,\
3.7800771946382365484851,5.2094034804655127146589,3.0955575196143279015359,\
3.6332179827516117853747,6.9371912371180162182327,2.4051741186173338782339,\
1.8230887730163647386661,2.6444893659134645069742,0.4363389413001144689908,\
0.1648513733929060642858,0.8527852017899220093966,2.3603668450398678224644,\
0.9089049761135811200674,2.308482167770112614136,2.1783058145209865941183,\
1.760657933306752465086,0.3252423522775149677955,0.4332745364849133751228,\
1.922093093505325978043,2.0627370874500741138036,2.184596685297794049774,\
7.065327858525169979487,0.4997624596555385045882,1.2195103000378291202566,\
2.3664724579469695875389,1.4939021538810592915070,1.1500903795661745476764,\
3.3700776947908237524132,2.6885676432811540514933,7.8817788746511769915060,\
2.0842223123540501994455,8.0258609977666459656120,4.459626216287859712395,\
1.211699888667206126414,3.6993867326108555992903,1.0474037470444790276503,\
1.9457553430070655409168,5.4468957190088280739815,0.0574020495019843535189,\
0.200187099983916316770,7.068768975957844702407,2.5390022146337085651169,\
4.1109611351982495719426,0.6408861046921948689814,1.6557914176531909333789,\
2.4121782951381569581883,1.8513041911556680219064,2.0815970551782250197448,\
0.5950929849744456268112,5.5238367721873160576251,2.4925246722707656843454,\
0.9924655082402137340480,3.0877905115051524909120,1.6970418763867407552226,\
2.6253251426459978112860,2.4490847102298514137431,0.4420113886405674930025,\
4.2948005817238108505762,0.7321010758042626465070,4.1657752085548631626466,\
2.6579704039050806585465,2.2968127063505034968216,7.7460044759776618406022,\
3.851297516891551087070,0.2347062006554227753252,1.5927846479405329827017,\
9.5341720234343370066199,7.7442521101341821321284,6.478396320140080710814,\
1.0891470158039435744968,0.8038176255057727370712,1.0202487324661473344634,\
7.6035293179001266494765,5.5512724543076572558675,5.1202912658114749788751,\
6.849389505178533177343,1.6479880468591965314573}




void dexp10sTest(void) {
	double in[]=SOURCE;
	double res[]=RESULT;
	double out;
	int i;

	for (i=0;i<200;i++){
		out=dexp10s(in[i]);
		assert(( (fabs(out-res[i]))/(fabs(out)) )<3e-16);
	}
}

void zexp10sTest(void) {
	double inR[]=ZSOURCER;
	double inI[]=ZSOURCEI;
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex in,out;
	int i;

	for (i=0;i<200;i++){
		in=DoubleComplex(inR[i],inI[i]);
		out=zexp10s(in);
		assert(( (fabs(zreals(out)-resR[i]))/(fabs(zreals(out))) )<3e-16);	
		assert(( (fabs(zimags(out)-resI[i]))/(fabs(zimags(out))) )<3e-16);			
	}
}

void dexp10aTest(void) {
	double in[]=SOURCE;
	double res[]=RESULT;
	double out[200];
	int i;

	dexp10a(in,200,out);
	for (i=0;i<200;i++){
		assert(( (fabs(out[i]-res[i]))/(fabs(out[i])) )<3e-16);
	}
}

void zexp10aTest(void) {
	double inR[]=ZSOURCER;
	double inI[]=ZSOURCEI;
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex *in,out[200];
	int i;


	in=DoubleComplexMatrix(inR,inI,200);
	zexp10a(in,200,out);

	for (i=0;i<200;i++){
		assert(( (fabs(zreals(out[i])-resR[i]))/(fabs(zreals(out[i]))) )<3e-16);	
		assert(( (fabs(zimags(out[i])-resI[i]))/(fabs(zimags(out[i]))) )<3e-16);			
	}
}

int testExp10(void) {
  printf("\n>>>> Double 10-Base Exponential Tests\n");
  dexp10sTest();
  zexp10sTest();
  dexp10aTest();
  zexp10aTest();
  return 0;
}

int main(void) {
  assert(testExp10() == 0);
  return 0;
}