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

#include "testExp.h"

#define SOURCE {0.2179693998688542744269,-0.0965447246339290049422,0.7336822469173450711466,\
0.1536179219946321450330,2.4661907147341337598334,0.6332832861607330388054,\
0.4890665386763063948727,-1.2667347141842044688786,0.1055086446255857485221,\
-0.5936826571652784600985,-0.7816336465253074239357,-1.2815191120322371176599,\
-0.9972908908531801230879,-0.5763370349806613557320,0.3762718127153176217448,\
-0.8343599392689131644119,-1.0647534449045219506758,0.8534997909421322415113,\
0.4306578956143343739349,0.5321132560429659985601,1.5974906319789743402993,\
0.7312358120089610391545,0.4431279991113933891533,0.0087064913021668820237,\
-0.8280501749431711244753,-1.0000194068543815095751,-0.8231062295149559338014,\
-1.014391306624823796412,0.9121054970139131912177,-0.3855306050210344781526,\
-0.2598191828862038144088,-0.0831341089570867414205,1.6949336044621277075350,\
0.2429392861367114797577,1.8753502720069497033961,0.1984146246369250243813,\
-0.7119008641532499348514,0.2504295152565002013922,1.8412596530958635909769,\
-0.8228059182439799723596,0.6769888144769687920999,-0.4970822573553836942750,\
0.0527831065241245664388,0.9397902577952749192391,-0.1148979773734264131502,\
0.0647134776331551031525,0.3730550115687696344224,1.8451193005461747898011,\
-0.5388550697275177325807,0.9483924031089353556823,0.0149553330989996690475,\
0.3492458987360779198994,0.6782119558587149654727,-1.0638111247721440122405,\
-0.0013200516387791912543,0.5311672327771198576229,-0.6446734157979014945283,\
0.7518088875179287366990,-0.6321033286458267452801,-1.7783294717850963717609,\
-0.9695340176537615706209,0.0585248375044749719054,-0.4174672618194515405499,\
1.067002270541741681953,-0.1107931733964626630495,0.9733263412399585368107,\
-1.5676178926909869471018,1.5082394419009976793689,1.4975531724590585014312,\
0.0773364211376570409584,0.8296923447513622207339,-0.9966607229071756668404,\
-0.5179876589725144198084,0.4414952679928694223577,-0.8736872755871413209761,\
-0.0349791375435402618344,0.9274876201813765375093,0.4517463561226834900530,\
-0.9961910310034214344199,-0.4760507657625145383484,0.2735565496341169633432,\
-0.8683706445498747816814,-0.5819104976015757602070,1.0334934603683001430596,\
1.3664069352627037368109,0.7304950466471921144418,-2.2795501799654798169570,\
-0.3686784792993444970222,-1.2288389604009317679356,-1.372993238103811464157,\
0.4327366693143714915237,-2.5372469745505505933636,-0.6466940204055214858059,\
0.3727678446055545102844,-1.2012067538727111415398,-0.4120248811585083825726,\
-0.1824358873620524901238,-0.7071004997444696460462,-0.0734584462405756949410,\
0.4857107830752938615326,-1.5839443933479926407415,-2.6376393427060378371607,\
-0.1810786671588598961691,0.8157163062709066325695,-0.3867087459826359374659,\
0.4198660262170845203222,-0.6048459538042058047935,0.7659922557941690746119,\
0.7134643264223192726803,0.1349874125377001632398,0.9411487010623025284417,\
-2.1973029826905001726800,-1.9520696706230427075468,-1.2525761477383645647876,\
0.3859074186443228193788,2.7807429866034785170825,-0.4523923998873963236989,\
1.585571863180605944876,-0.8857651118640259557679,1.3802479208151854361830,\
-0.3327040930736118173883,-0.2328335442849216174732,-0.7859150581069940244561,\
-0.7298755566585160003967,-0.2812060079915064125800,-0.5573134267677620767856,\
-0.5509002031358800621774,1.5296906305375963519566,-0.5702710404977533453774,\
-1.3692402567978680938410,0.1826473558262797503016,0.1798346311903204763905,\
0.4425890891364235302241,-0.9017692018513575602512,-1.4772671313778520385540,\
0.4118240527515873439235,-0.3831680771908100302525,-1.7286187555088927680913,\
0.9581454530897092203290,-0.4289057042708049327651,-1.2735233142733974887051,\
0.7534058867095866363073,0.4695440194018555835065,-1.4064759963786124252749,\
0.4697098567590811124539,-0.4910731440349740406504,0.9955428392828012951199,\
1.1510113490256201895789,-0.1082632054930593029640,0.4856574660939540488691,\
2.8432492089162182402617,-0.2526776656626389394589,-2.1526240294434693112180,\
-0.1700067035996372932782,-1.2942848891673066624719,0.3501843381023743151381,\
0.1214335524018897854992,-0.0093577680302103644072,-0.8404790744305570271422,\
-0.2709432496692772418534,2.129923383430207373124,0.1924976275921922719281,\
-0.9958949135265199315015,0.5029057807067898178133,2.1223686722196575260568,\
0.0454634212534271303641,0.9495546668659169409210,0.9477155819428292327089,\
2.5219360071943213164047,0.6965268573783115479969,1.0778432726775772909633,\
-2.5098595900849196560500,0.4486528645511871360441,-0.4241938936353907840804,\
-0.1335517966712884141423,-0.1078744374453666915459,0.2327494623534509532448,\
0.9351842746020352370451,0.5235744811910800766697,-0.0660252647673259390748,\
-0.5945113005344258017004,0.8805986363667026584068,1.4189560003612493588321,\
1.409077916250558226707,0.696455894185944335284,0.90951587071067696577,\
-0.3637587731642325517001,-0.6227550415243503501017,-0.8451138025419450139353,\
-0.9376931811420606832641,-0.5548689487135263220807,-0.5854929781645817898905,\
1.2660172290794624583299,0.5877121654077364087954,-1.2764933780334013491142,\
0.7392453034050661120347,0.3032161878585472591929,-0.4000095029594706308451,\
0.6502681159628262985706,1.845716594779029051665}

#define RESULT {1.2435490142739233920821,0.9079692880976051316821,2.0827356520772775105854,\
1.1660452814005672905751,11.777497445956059962668,1.8837854434705150197260,\
1.6307932268341887027674,0.2817501160466636123125,1.1112757110437740948328,\
0.5522896416607726566284,0.4576577492819154380221,0.2776152512958051654657,\
0.3688774179340663095239,0.5619530154526948262372,1.456843068428832488337,\
0.4341522763440999188589,0.3448128596551297553319,2.347849472141609439291,\
1.5382692112870990364115,1.7025263838493789325668,4.9406190246302923441135,\
2.0776466024256405873416,1.5575716893750450875444,1.0087445030337489626504,\
0.43690033557496926742,0.3678723018579735937195,0.4390656952911728971856,\
0.3626230889407328072949,2.489558777574301107194,0.6800896814511222521205,\
0.7711910177313587855252,0.9202277281636028760659,5.4462843442294808227189,\
1.2749912121263455855313,6.5231035807982653551562,1.219467910454189230052,\
0.4907105362925133218432,1.2845770436515608903250,6.3044747124787887671005,\
0.4391975714691279120139,1.9679429600133448996502,0.6083029443616727593991,\
1.054200971008417697661,2.5594445384876851612432,0.8914570880611734082777,\
1.0668533032547884431551,1.4521642234675371518904,6.3288547811978252966014,\
0.5834158405874197983465,2.5815562199289581180039,1.0150677236735847763782,\
1.4179978313495280595191,1.9703515051800046808950,0.3451379368940441505487,\
0.9986808192461388289374,1.7009165158858785549256,0.5248339165868535216575,\
2.120832897097891578397,0.5314727626805419991030,0.1689200974890469886258,\
0.3792597252702665788782,1.0602713198612101486162,0.6587130565620143984873,\
2.9066530672450663352890,0.8951238652136722651065,2.6467337728218058856555,\
0.2085413590449486931355,4.5187682330848559786318,4.4707365550132545095607,\
1.0804054865026515575011,2.2926132972391299880144,0.3691099459169989716045,\
0.5957181306287809841038,1.5550306685748274126979,0.4174096039635283306168,\
0.9656255613686579586386,2.5281495201925832105871,1.5710534099579722688844,\
0.3692833545913285497875,0.6212319441335979464114,1.314631699051673319190,\
0.4196347266560193634000,0.5588297032433613420466,2.810868359578304609414,\
3.921236098173682904644,2.076108123684798468,0.1023302265504790059536,\
0.6916477537748028092679,0.2926321380214171319345,0.2533474941164985949626,\
1.5414702508327886576467,0.0790838201409621577298,0.5237745054427331847791,\
1.4517472697479263388232,0.3008309638501235339092,0.6623077968618373834175,\
0.8332380633061603480982,0.4930717885873925898643,0.9291747556935816554358,\
1.6253298553258777037200,0.2051642515979318348585,0.0715299280520010488660,\
0.8343697186187617464981,2.2607945137747993413768,0.6792889117422631350962,\
1.521757666329790259496,0.5461585538073224777023,2.1511277850444776582606,\
2.0410498879452951825897,1.1445223776283628414063,2.5629237613167004106174,\
0.1111023997465931806294,0.141979915628105440861,0.2857676680597394103245,\
1.470948482105968180278,16.13100161483945527152,0.6361045134063019190762,\
4.882082463582880116348,0.4123985215384664559934,3.9758872105147431419425,\
0.7169823228043985530,0.7922854429887553617817,0.4557025166581872288596,\
0.4819689641868314944340,0.7548728096296193346149,0.5727457220779371693808,\
0.5764306720519700721894,4.61674832039780813631,0.5653721791738470781041,\
0.2543000889430159783267,1.2003910225327127925254,1.1970193970806983774224,\
1.5567325245923557819339,0.4058509918676029837314,0.2282606431186239848152,\
1.5095688084830436448414,0.681698311719268423836,0.1775294522772180583203,\
2.606857448284196188126,0.6512213336764225424247,0.279843904757457517807,\
2.1242225714533806701922,1.5992647932168715385615,0.2450051627087996841681,\
1.5995300330564117263776,0.6119693104596294341846,2.706192970479794457361,\
3.1613885606985867582353,0.8973913670061375302822,1.6252431999544321161721,\
17.171468681707562353722,0.7767182044255251938125,0.1161789005908738792172,\
0.8436591610241814809257,0.2740938017114021296727,1.4193291609241254214169,\
1.129114336496770620855,0.9906858796267230538035,0.4315037514894317638436,\
0.7626597763715156075293,8.4142221179071938763627,1.2122736276966128432520,\
0.3693927220385589405005,1.6535190604459728547226,8.350894611450568660871,\
1.0465127237901119539032,2.5845584134924157737601,2.579809559192972390207,\
12.452681823131790395109,2.0067707887308077197019,2.9383355238494659467108,\
0.0812796509085991214505,1.5662008789775083705820,0.6542970055839620879823,\
0.8749821466412209813868,0.8977403119208263726492,1.2620652448583575822028,\
2.547682887735915890914,1.6880507842731462542218,0.9361072134619135010070,\
0.5518321800737933102710,2.4123433907357978434050,4.132803541818598880297,\
4.0921803308889375117019,2.0066283869219931901284,2.4831200911745119341845,\
0.6950588413666404230540,0.5364644180251368910106,0.4295084762729607374965,\
0.3915299831612857883734,0.5741474990346947526731,0.5568312884718313870991,\
3.546698706809571000065,1.7998659059051445030519,0.2790139835869558937453,\
2.094354315836046254162,1.3542071959523713786666,0.6703136760416763539894,\
1.916054484944200275720,6.3326360988263932227937}

#define ZSOURCER {0.4962097263673624913949,0.8910778018246798826141,0.0947801220713381104011,\
-0.4603936178711778848260,-1.0252845699539288037982,-0.98492140788616533431,\
0.6666841978684399094846,-0.8284280082188715255143,-0.8087801325930177309687,\
0.4980076621960153326896,0.7628920854029445086653,2.8126683658021311984498,\
1.691339266824742670892,-0.658296432197564951316,-0.8165943259043131341457,\
-0.153838313722479663737,1.0488069232465311308999,0.8083896014295570697783,\
-2.5696290069516263265825,-0.1755006665720788838758,-0.4111892069294727503070,\
0.4347439848326261624401,0.2238731702156319669506,0.1031628567688149950010,\
-0.8488244709313933489270,-1.4082269940133023133910,-0.5694039300480933096793,\
0.6847821865673663355167,-0.2355866905280663559097,0.126244929305970754463,\
-0.7524531768104696372035,1.547744870456928323321,1.9472508676223883039569,\
0.4418443111187473348878,-1.2649638329504953038196,-1.8396310805312170444381,\
-1.8200055182230749917238,-0.2830037881038854896687,1.0167783703917296911357,\
-1.3736934824588333814432,-1.6523791477656657455952,2.0750211192468381860010,\
-2.2299199681252757088146,0.0617102387651526432255,-0.1883752530215108134115,\
0.2017498149536396945258,-0.3785108864619266544338,1.4258759859183376406122,\
-0.2179348061181922979745,0.1732283900046150681984,0.1667406411484310679860,\
-0.6517590587731293405582,0.2359187276296556834421,0.2867271206877638478616,\
0.0606400241806124770672,-0.0258227029380159664451,0.0208448589487377940188,\
-0.1006137675958410082622,0.6887664099542869511339,0.1558887949250353788244,\
0.8324928725743804269754,-0.3151516259195137337201,-0.3438938576674008262835,\
0.0533533125037666533519,1.410105419112359426137,-0.72771444778030081046,\
-0.0273112350183467821052,-0.1234715201495915903873,1.6876811670344133986532,\
1.7843408966113634139816,0.4553194681918236175200,-2.482440448619641859551,\
-0.5647234157267987386675,0.4002741476630126693514,2.0575413657607160011764,\
0.9910894257133318063779,-0.8534666223545112062610,1.0313921190741603961527,\
-0.5817813998765138938651,0.6420267245927361310365,-0.9597162563373448085358,\
0.1578963713606084673380,-0.3170234887209238405781,1.1563426252866808585651,\
-1.9325017123145520336891,0.6854693920869295853393,-0.5604369008834102494632,\
-2.2658178544445064517276,-0.3315993869783789849137,-0.3992162906900829644208,\
-1.538475385459755262474,0.7929279218821023711428,0.4799096678735629839530,\
0.3842559929950347674676,-0.2870732232583454446306,-0.5902902430980193626553,\
-0.7496420812260378152558,-0.5047035567506975572982,0.2586980379965187482050,\
1.5714132313006403673938,-1.0578766388700049372318,0.7485548459128271714391,\
-1.3801279040397811392893,0.4597603556312274686313,1.6137862227144141868962,\
-1.2277987398411676078780,0.2068847811693011184975,-0.2479337336106740286024,\
-0.3541997324021416981843,0.1707344260894599619061,-1.1381496515511626554940,\
-0.8140025532586576684224,0.0735093571009233642810,0.3035280587071761959628,\
-0.2782846453257922791913,1.6871692459980407452491,-1.323166422518824214549,\
-0.0753800807237546693917,-0.4003058770927516718530,0.4033101968714281615469,\
0.1113491527432870636938,-0.8349617120636146916368,-0.6907116891918870793532,\
-0.0170584241359153961082,0.8194033291997417922659,0.1556399708519044799981,\
0.1516310573630105518195,0.7495489249293494360415,0.1716685606331417590642,\
0.4519531238973814590842,0.9288803038597209793537,-2.3544674327002401703623,\
-0.4112942143200571387673,-1.3097240599804396143924,-0.6114852145918039383332,\
-0.8710601639646612381895,0.3633484479767548624984,-0.3041452834723618048329,\
-1.3937055405477738467823,-0.5975281694506322516247,-0.6997444046104884796122,\
-0.3196851144737095085091,1.09857442199734944843,-1.77236020622582612916,\
-0.0885003512087364219152,1.3820373060805490883496,-0.3478356988431264840145,\
-1.5917082966936921817336,-1.2805101534361520432270,0.2630673092127150392017,\
0.3354398592128065015316,0.3056832398609472534190,-0.3465598133034439864986,\
-0.0149898968435104897046,-0.8499089854435717406034,1.1188306614388350279654,\
-0.6366826455916885230124,0.7478712286232889194793,-1.1407898077101095157815,\
1.7416298413146675816421,-0.6492757257758221545174,0.9050061520410521698210,\
-0.7214302149042788325772,0.1880549880800692907901,-0.6074290437972867939820,\
-0.3926402375420063872724,-2.1738375226761288416810,-0.3077758151743882342188,\
-1.4339354091797107404460,0.5131602976051053977002,0.0609103217068958785463,\
-0.0915059705228822850565,0.2851713506321221225370,0.3850345796175008161732,\
0.5344891195679912776484,-0.3352957511414503266600,0.5011675332336322785665,\
0.9817842562968046582483,0.3201410638941641906285,2.908782756663177426759,\
-0.8167435983319983883177,-0.6395703111646185989869,0.4768832439562080693918,\
-2.3940570181394389415175,1.181268742272832517060,0.7860988797801938821053,\
0.2080213710796271764369,-0.0657191135894376471382,2.2596861347367309669210,\
0.7576187360739459197845,0.0816850726713814895286,0.713209526903904489359,\
1.0221713946590338384368,-1.3357158672812421418286,-1.3632163488573514342761,\
-0.1933486222136764076662,0.1054205318382937656141,0.8628332102807707570946,\
0.6890069943729065782279,-0.1425645528482178403529}

#define ZSOURCEI {0.4187679309893236334617,0.9571040727588696617190,1.172760842677368797737,\
0.8367787345559263290085,0.0537934646406551114639,-0.3937773223205939254754,\
1.7876375988580777143255,-0.5864530819794440130721,-0.9799596671663597380331,\
-1.435491321041636902933,-0.7958478780018579668010,0.5425829186077295585022,\
-0.6690160051984340716658,0.4469912205186009623858,-0.2043520888417388603475,\
-0.4718547031305261874046,1.2345904036110504353729,0.2305518055397126619965,\
1.0780366202665678798667,0.4904320988250001067676,-0.2652022209879114633679,\
-0.9976659763947106629445,-1.349099117857334384496,-0.4904839979026296425957,\
0.5445911400019642911730,1.5676016792969027502380,0.9705535858979048580153,\
1.562322752104617240576,0.9312705713450669664510,-1.491064034017491879425,\
0.5387480326121706353248,0.2780267771815282396020,-0.6792511192992195523388,\
-1.7001946270260519522566,1.1064967394734230854425,0.6449691334115315033415,\
1.010191395265231717460,0.7617257042808376343856,0.7130320908537892687917,\
1.3873980946032253847022,1.0464400502880701893105,0.7743318486747019502303,\
-1.0385544825558827852774,0.2570923151837984921286,-0.8100639413180467096609,\
0.9637587964856539901604,1.5615765140914361630564,0.5804915960065005764434,\
-0.2022297555607953933876,0.6091855774356720321094,-0.5513582447276994535912,\
-0.4240953703415643594177,-0.8690915476323599619946,-1.0352497689734347918744,\
0.3275700398280019243202,-0.7970043301223290743707,0.2341992112983941609627,\
-0.2288430429610794625273,1.213479264737873375424,0.9031823906644896871043,\
1.4754958638303785622981,1.6520423035243945175665,0.8178319166692843422695,\
-0.4286042039456253727181,0.4413804125451418203241,-0.8566414495458910538517,\
-1.3669367412247732662678,2.0376720143917643746079,-1.8253356531263227324757,\
1.5266365006585700392350,0.1161871811298216261576,-0.6659495480394291844206,\
-0.5450277852280467349999,1.2558648076421243811041,-0.7854748651398538727975,\
-2.1498185127975446562232,-1.4516576281976432127863,0.4432114256783392658434,\
-0.0042605582120147401926,-0.0805101613497762047533,-1.1324416682104487819061,\
0.1150256099470636506066,1.3050405907321147580546,-1.0622634828383090699333,\
-1.35922814179336781670,-1.703726701643710983447,-0.282327674589286536921,\
1.4699227361546476355869,1.2714945342939698580409,0.8438338325656443705824,\
1.6086130230417976516577,-0.8654237444216958952126,-2.1306341506077157710308,\
0.4262366479533865049056,1.2202306126621282889033,-0.4781944951046422920271,\
2.2327961471769124379705,0.6988675202840052280706,-1.1016041402782228431079,\
-0.0366155088206388534822,0.9663901570211483882389,-0.3288372819689815984567,\
1.8550047995758884855633,-0.9247532047817873523954,-1.1547662665953339899971,\
1.4270134659704167834349,-0.2267973730507581442417,1.4593991828148868972193,\
-0.8205572609516469384516,-0.3297213070039397009303,-0.5787995844520394950194,\
1.8452573890170231862840,-0.5998455574460443973095,0.5461062118050383773493,\
0.3989213456307151295377,0.6223400150931739371885,-0.661605777551548035476,\
-0.806522789665139905324,-0.2812497112451433634028,-0.4100128914055168882768,\
-1.50945722493549672194,0.4603669785905236677692,-0.4126050173509914209546,\
1.6611257451475334168123,-0.8697907951355576816610,0.6696537851786207307114,\
-0.5134482200325719558620,0.1007092240430608326429,1.2778361566544564897896,\
1.2322028231309287704676,0.2307590408528507608388,1.5263506644977615778203,\
-0.8569947230359247214437,1.1048772379802629384216,-0.2109985124170330184068,\
-0.0551453334787995949617,0.1230778288705814127457,-1.423405390861443020611,\
-0.394586285353004440069,-0.2879823286948200999902,0.1062021177580684955233,\
-0.6907035832345697068391,0.3653158847737960068791,0.9338855454474609407711,\
-0.4120224826154939568035,-0.1450379965292624417916,-0.9040960399672915981384,\
-0.3390386771829260181832,1.625054083669380089461,0.4716305826679590418316,\
0.6165901874856758446697,0.4270688825812783973035,-0.8343519087812022450024,\
-0.5142102680242138790234,-0.3269678763130224319333,-0.4453255190855087697344,\
-1.2280852212014194968503,0.0988020658802584578195,0.7533305302295955074854,\
0.1183515262592216288340,0.4361801271894044096378,-1.203233821600386388440,\
0.6270203182178656353685,-0.2147899120281239748742,-1.6199408065241285293,\
-0.3813310069938283253244,-0.952339709740829487572,-1.3753328967678597472002,\
0.1397812751994848834425,1.043902134788026403456,1.1627380196617531638026,\
-1.0121704799221244996943,1.0517816399459063436694,0.0479426304050067017548,\
-1.9256009187313227748461,0.0702119825151238802219,-1.5960860779727858993482,\
0.3892567541356096727512,-0.3405739777798729162051,-2.3927967690864724303879,\
1.4571677327957668346414,1.7033833498531005812282,1.4103109856750082329313,\
0.8887233594164675176685,1.085007779468186495109,-0.1517851031708108977547,\
-1.4279908879739833249545,0.8317119599758505676945,-0.100625285489182120235,\
-0.0641469431098572184791,0.9441650291895723468016,1.7557389523285045207501,\
-1.4553402741895795635685,0.8280178925672729839391,0.3768033744738639723160,\
0.769460862052703697955,1.7363387952951863102413,0.2883880023549790228010,\
0.1937130526956079012990,0.7931867418127547253448}

#define ZRESULTR {1.5005579968888511643854,1.4038788522636540534450,0.4261430281005708642361,\
0.4227040163485943913280,0.3581755188101993225835,0.3448856718113299524298,\
-0.4190544272790215352131,0.3637606739341552875011,0.2481133547640819725366,\
0.221957537083997319405,1.5004406253943489701896,14.262372555443052490887,\
4.2569132214783609313713,0.4668662514373775884735,0.4327387090783468837074,\
0.7637186245018753316671,0.9416373255706453893055,2.1849079400266222528160,\
0.0362192687509753849517,0.7401390786280732658753,0.6396875438787329448687,\
0.8375646978007738052696,0.2750576263630330475785,0.9779650400990845815485,\
0.3660147454727735727431,0.0007813344853740371429,0.3196234331185683896770,\
0.0168057767355581332003,0.4715477957119850183076,0.0903652551480593341227,\
0.4044631913155857239062,4.5203389894684722349893,5.4536105990647092411905,\
-0.2007273149144214174910,0.1263903817022170861240,0.1269607449461356840636,\
0.0861483947375209779818,0.5452795580354135029921,2.0908477302753070148356,\
0.0461711120003356623176,0.0959224290498517928594,5.6938820505915233027849,\
0.0545714270555244795879,1.0286954018234739649529,0.5710758281447196882397,\
0.6979532622664902374865,0.0063143806135506170760,3.4798191533417077714319,\
0.7877896535828416979541,0.9752288031986856564615,1.0063735441532775105600,\
0.4749622284565679919410,0.8172752232835529540012,0.6797654131732457916115,\
1.0060191413953609718135,0.6810372893714221609329,0.9931890911476703998062,\
0.8807071418681532426476,0.6964662788868779541573,0.7235561661943166189559,\
0.2187683453764143193254,-0.0592182210929489902251,0.4848204523909904195555,\
0.9593919417277750882889,3.7038010572869821679376,0.3163625232453476932015,\
0.1969961410854516870028,-0.3978181614570159285726,-1.361462433143773242961,\
0.2629151417766518727959,1.5660468223975476664833,0.0656893454691978989635,\
0.4861465273206775350445,0.4622214272783724542393,5.5338903531227128240744,\
-1.474264258662732141048,0.0506254763419271280878,2.5339495141019958701634,\
0.5588967788586440832432,1.8941728912398605455536,0.1625651067402884841773,\
1.1633063892460699940,0.191283239298288054719,1.547496475194143350507,\
0.0304040029736053936393,-0.2630510364909662279764,0.5483550218772245132826,\
0.0104474069781232917903,0.2116381376777875800155,0.4458460510519014485808,\
-0.0081176195921236100894,1.4326892345597483924280,-0.8581368290819433308769,\
1.3371299915531948965253,0.2577287469128092811665,0.4920040313161565537214,\
-0.2904655234170689381834,0.462163508824150970344,0.5856645720520745612703,\
4.81021957957627943614,0.1973001680885165531887,2.0006745533290084537725,\
-0.0705330419570823624609,0.9534341938168940933096,2.0294673010324730810794,\
0.0419743009154483204259,1.198346516707147646486,0.0867559391436964755240,\
0.4784523700257174994022,1.1222795076752876131110,0.2682227152927741387067,\
-0.1200874658138830208820,0.8883849124062789259781,1.1576031776174615650632,\
0.6976356512079191496412,4.3909706615004120422441,0.2101052025810229428870,\
0.6417663596495127853458,0.6437857682896207522916,1.3727122635941697570416,\
0.0685209480693795836004,0.3887184828749501441791,0.4591565751761637059758,\
-0.0886808967743262233085,1.4635680657432861284661,0.9160726657458563293446,\
1.0136746786541579457008,2.1053235388732902677589,0.3428728910762353088160,\
0.5219502401364545240980,2.4645660104152655733856,0.0042184623117796499203,\
0.4339378404381282194890,0.1212485246955130047120,0.5305120745426482598006,\
0.4178714460322863755160,1.42725807301201368382,0.1083449257198766668697,\
0.2290848259097614525448,0.5275132726780440428627,0.4939136954488312358791,\
0.5598904753492991437369,2.8019267774958218630843,0.1010607343958155046604,\
0.838703631682240602,3.9411880425167020725041,0.4367206268973685134860,\
0.1919888550719570374792,-0.0150705892655913463452,1.1588916915452081024540,\
1.1410183495054209146247,1.2356219575708369262657,0.4749404480211336654349,\
0.8577273295080861670314,0.4048075578221899673004,2.7627080603314042583918,\
0.1777810656017677348739,2.1021956426305754561668,0.2330964886175431460824,\
5.66671671967639412060,0.4735105506685184928450,0.8882739731815125772130,\
0.3935986079583607688548,1.1791667609118299253623,-0.0267606605538480354922,\
0.6267669571981022702545,0.0659441611256419563114,0.1427681092204574897497,\
0.2360440610261224370081,0.8400442654362825223302,0.4217500256271256020568,\
0.4836741737176751265714,0.659708006511050548681,1.4679764549267637629981,\
-0.5928767353529774686294,0.7133645918582519618312,-0.0417400106828591799246,\
2.46953429512858368966,1.2982129272812710230056,-13.430164449559464756589,\
0.0501008887550637785346,-0.0697374371031275891442,0.2574407425697148865673,\
0.0575298048786480678563,1.5214153238495213837922,2.1695830700438989424583,\
0.1752306830704533635590,0.6307656294349494041640,9.5316214402790411241995,\
2.1288031244453153867369,0.6363319322612546180551,-0.3752333236632875990146,\
0.3201657030914684676226,0.1778562682310512732542,0.2378885254191149545289,\
0.5920073359495072740089,-0.1831081087669608753465,2.2719985676152019138385,\
1.9544837479586136819165,0.6083604660209539494176}

#define ZRESULTI {0.66789173388469347259,1.9929317082415038964172,1.0134693185160317252524,\
0.4685368189063157107199,0.0192861086704356442245,-0.1432921900711904839021,\
1.9021551721948490865088,-0.2416937871379007396477,-0.3698944066530311935992,\
-1.630400797414071512037,-1.53213128993891678498,8.5994415909131678432686,\
-3.3657446415150640284253,0.2237921440211748103088,-0.0896829281433757230513,\
-0.3897266612271670926937,2.6944436446476398572258,0.5128535974480390446928,\
0.0674551867661900700357,0.3951923071518532726287,-0.1737389326052603821804,\
-1.2977574398167355251843,-1.220297105474789312041,-0.5222431149169146635813,\
0.2216906290760837783260,0.2445752865761168237668,0.4669490113374816231406,\
1.983268587510182312528,0.6339653057626817300729,-1.1309555970451541373478,\
0.2417594109687444814405,1.2901913158229225686568,-4.40337349863430294050,\
-1.5425684980543696855904,0.2523692809573465090089,0.0955121010048793767089,\
0.1372242993017437351355,0.5200557398879992465623,1.8081956965026793060503,\
0.2489243937541025242233,0.1658522561714183829462,5.5692357559437404290748,\
-0.0926616074754614826858,0.2704548071084568183764,-0.5999663537818090697229,\
1.0049457307841926922976,0.6848514061793418150614,2.2823134654584236180597,\
-0.1615224571979621548401,0.6804242491001384340876,-0.6188951521875099004433,\
-0.2144424405243884335093,-0.9669529580119747835809,-1.1455586484969144667190,\
0.3418574459217512129250,-0.6970321107785095726683,0.2369522455719338394076,\
-0.2051372202341115724700,1.8654869710971573315561,0.9177784888023613474317,\
2.2886105642667078363672,0.7272712824943110554443,0.5173355346085974915127,\
-0.4383775740596613790245,1.7499274197824987719940,-0.3649863488832993385635,\
-0.9529087376623858185454,0.7892565481221736067852,-5.2327138940157267299469,\
5.9498471753939741191175,0.1827777741034706804335,-0.0516109653428112533091,\
-0.2947431961312417803001,1.4188420873857061632606,-5.534739336307598733811,\
-2.255013513539458447354,-0.4229165121855131270756,1.2028903349471207206989,\
-0.0023812266691438442427,-0.1528305178806574626815,-0.3467892290786088183019,\
0.1344033089941876202289,0.7027456808048029301972,-2.7761066302583010667604,\
-0.1415572225289876973076,-1.9671936933888867216069,-0.1590647203810587884121,\
0.1032177704018006486608,0.6858644064375456483873,0.5012535303694961585919,\
0.2145546901849673948615,-1.6825191334017586264338,-1.3692428047734856999540,\
0.6071558835309880386433,0.7048129294793062937785,-0.2550146122571063656004,\
0.3727193608915256306524,0.388381095349859650767,-1.1552707405821953656755,\
-0.1762073913025017923850,0.2856835610783352019659,-0.6826826797070948416035,\
0.2414553165222597663764,-1.2645359787455874300832,-4.5934329346040874142432,\
0.2899138963758796094794,-0.2765396421605960108892,0.7755744714874250878012,\
-0.5133371708548779555059,-0.3840592062347947810430,-0.1752712350242682792789,\
0.4264971552447213154480,-0.6075754177972138014852,0.7035454748522144141631,\
0.2940690048846716919684,3.1502912129208726632612,-0.1636049555981854697340,\
-0.66946985566275640789,-0.1859947683471395718513,-0.5966446238894932418972,\
-1.1156829506070020663344,0.1927677941084386115111,-0.2009874518146967659060,\
0.9790782744873792742268,-1.7340674208694739633074,0.7252463079270474732851,\
-0.5716056662861231929540,0.2127452321317529204681,1.1366978856910239237266,\
1.4821597980401888250412,0.5790353877850622499324,0.0948502955617512716335,\
-0.5009900731541635510169,0.2411262068342296116530,-0.1136285464587050847429,\
-0.0230670473414846290139,0.1765562266540864622133,-0.7297546590556842627251,\
-0.0953969444497970303631,-0.1562582727501122537017,0.0526527844386815990774,\
-0.4627604755682861448207,1.0716924742142539539458,0.1366141387590569244992,\
-0.3665452417574971422098,-0.5756642515297435425126,-0.5549906098825418965248,\
-0.0677059511108183409434,0.2774865464288255867409,0.5910566892682205253351,\
0.8087239218207783464365,0.5623045509398011398972,-0.5238753172271245484026,\
-0.4845296390188432167356,-0.1372866414817625335676,-1.3186482320231969200819,\
-0.4982790611331439079024,0.2083797712931309276119,0.2186064764396851156647,\
0.6738135687471651369407,0.2207138713569412324933,-2.3068359206298949537484,\
0.2851861631055106482968,-0.2572412622481385358064,-0.5440918958783450554151,\
-0.2513065277256731899769,-0.0926726651078676189055,-0.7210825269104839119194,\
0.0332111240217310629830,1.4439889712068714189286,0.9755400591442719981927,\
-0.7738329957764321642699,1.1548413262354173536295,0.0704326239228644929158,\
-1.6002810307194081929083,0.0501692094503282184914,-1.6501195063537017482247,\
1.012969261434880197115,-0.4600643435261628222399,-12.481321255158581706723,\
0.4390187012381037146014,0.5228891202405995253244,1.5903431490098800527022,\
0.0708411654197008272549,2.8815196278940593543894,-0.3318628781486120393751,\
-1.218706228014425851924,0.6920752550579561956923,-0.9623724741584287478702,\
-0.1367438235977035676516,0.8789505770880949864221,2.005732337058288017317,\
-2.760719914038102906773,0.1937015573007111746140,0.0941350707005644549152,\
0.5734318083679456057311,1.095987006643926342520,0.6740067391703287169591,\
0.3834169282796987543449,0.6179115751021659885822}




void dexpsTest(void) {
	double in[]=SOURCE;
	double res[]=RESULT;
	double out;
	int i;

	for (i=0;i<200;i++){
		out=dexps(in[i]);
		assert(( (fabs(out-res[i]))/(fabs(out)) )<3e-16);
	}
	
	assert(( (fabs(exp(3)-20.085536923187671476398))/(exp(3)) )<3e-16);
	
}

void zexpsTest(void) {
	double inR[]=ZSOURCER;
	double inI[]=ZSOURCEI;
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex in,out;
	int i;

	for (i=0;i<200;i++){
		in=DoubleComplex(inR[i],inI[i]);
		out=zexps(in);
		assert(( (fabs(zreals(out)-resR[i]))/(fabs(zreals(out))) )<3e-15);	
		assert(( (fabs(zimags(out)-resI[i]))/(fabs(zimags(out))) )<3e-15);			
	}
}

void dexpaTest(void) {
	double in[]=SOURCE;
	double res[]=RESULT;
	double out[200];
	int i;

	dexpa(in,200,out);
	for (i=0;i<200;i++){
		assert(( (fabs(out[i]-res[i]))/(fabs(out[i])) )<3e-16);
	}
}

void zexpaTest(void) {
	double inR[]=ZSOURCER;
	double inI[]=ZSOURCEI;
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex in[200],out[200];
	int i;

	for (i=0;i<200;i++){
		in[i]=DoubleComplex(inR[i],inI[i]);
	}
	zexpa(in,200,out);
	for (i=0;i<200;i++){
		assert(( (fabs(zreals(out[i])-resR[i]))/(fabs(zreals(out[i]))) )<3e-15);	
		assert(( (fabs(zimags(out[i])-resI[i]))/(fabs(zimags(out[i]))) )<3e-15);			
	}
}

int testExp(void) {
  printf("\n>>>> Double Hyperbolic Cosine Tests\n");
  dexpsTest();
  zexpsTest();
  dexpaTest();
  zexpaTest();
  return 0;
}

int main(void) {
  assert( testExp() == 0);
  return 0;
}