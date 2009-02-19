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

#include "testPow.h"

#define SOURCE {0.4672355107031762599945,0.9742379654198884963989,0.6003209394402801990509,\
0.8107941793277859687805,0.8507457631640136241913,0.2203239351511001586914,\
0.9582479097880423069000,0.0577683029696345329285,0.6003680988214910030365,\
0.0178048145025968551636,0.878713116515427827835,0.9244096884503960609436,\
0.1339239249937236309052,0.4019813351333141326904,0.9738700897432863712311,\
0.5752419373020529747009,0.6085763848386704921722,0.5994307789951562881470,\
0.2787468102760612964630,0.7734748693183064460754,0.1174856307916343212128,\
0.6118692830204963684082,0.5719244205392897129059,0.4209215147420763969421,\
0.9079484730027616024017,0.5168110188096761703491,0.7020753105171024799347,\
0.1115869814530014991760,0.9647724027745425701141,0.9537742473185062408447,\
0.0141105786897242069244,0.9176791971549391746521,0.8026339909993112087250,\
0.7647842485457658767700,0.4686868679709732532501,0.1267915265634655952454,\
0.8111716615967452526093,0.2579231262207031250000,0.5488225766457617282867,\
0.1490072635933756828308,0.9965628399513661861420,0.0626764874905347824097,\
0.5473734443075954914093,0.3126759985461831092835,0.4633354763500392436981,\
0.0458269976079463958740,0.3291175127960741519928,0.7676118602976202964783,\
0.4801639444194734096527,0.2566448096185922622681,0.1611994621343910694122,\
0.2144636334851384162903,0.4733993145637214183807,0.370124869048595428467,\
0.7056843214668333530426,0.6790067506954073905945,0.7920840024016797542572,\
0.5970210935920476913452,0.7679705549962818622589,0.0501071596518158912659,\
0.5882007922045886516571,0.5294274277985095977783,0.8948125229217112064362,\
0.6001070654019713401794,0.6559062353335320949554,0.89065577276051044464,\
0.4157023173756897449493,0.2063825475051999092102,0.5734984236769378185272,\
0.6581607908010482788086,0.0213609733618795871735,0.4928230522200465202332,\
0.9918691380880773067474,0.5282615851610898971558,0.4730890546925365924835,\
0.6099827596917748451233,0.4131903718225657939911,0.1914102546870708465576,\
0.5367266149260103702545,0.8726538261398673057556,0.3035852289758622646332,\
0.3867573235183954238892,0.7349725333042442798615,0.9736115010455250740051,\
0.8835331979207694530487,0.2047640457749366760254,0.0118132256902754306793,\
0.9922811193391680717468,0.4397597997449338436127,0.6066115852445363998413,\
0.9028107305057346820831,0.9170769685879349708557,0.5023606116883456707001,\
0.6291570700705051422119,0.3050001696683466434479,0.9001630311831831932,\
0.7309096655808389186859,0.2441865224391222000122,0.4401465845294296741486,\
0.9633856015279889106751,0.8533022212795913219452,0.3407146632671356201172,\
0.1051111468113958835602,0.3741277782246470451355,0.5010819151066243648529,\
0.7990815918892621994019,0.8030767445452511310577,0.4098358312621712684631,\
0.2850022832863032817841,0.1255963407456874847412,0.8493829430080950260162,\
0.7299674442037940025330,0.9545726603828370571137,0.6164773050695657730103,\
0.0457203206606209278107,0.0741118313744664192200,0.9853384527377784252167,\
0.5198395475745201110840,0.0164341800846159458160,0.505031730048358440399,\
0.4376457869075238704681,0.1644789781421422958374,0.8006876339204609394074,\
0.9153772676363587379456,0.4306405331008136272430,0.5242034085094928741455,\
0.7942340658046305179596,0.0168217038735747337341,0.0752517036162316799164,\
0.186460481956601142883,0.6345489663071930408478,0.5303690480068325996399,\
0.2099092262797057628632,0.1940124779939651489258,0.1230711438693106174469,\
0.7965835509821772575378,0.7827460928820073604584,0.7284079920500516891480,\
0.7783033107407391071320,0.5244910726323723793030,0.2240348826162517070770,\
0.10400049015879631042,0.1135220439173281192780,0.8979023238644003868103,\
0.6526086605153977870941,0.0412637386471033096313,0.2328471210785210132599,\
0.7579079838469624519348,0.2600162508897483348846,0.6881541088223457336426,\
0.8394202315248548984528,0.0802956921979784965515,0.7161618857644498348236,\
0.3582697566598653793335,0.2494430621154606342316,0.4666389161720871925354,\
0.9401792283169925212860,0.4545566774904727935791,0.5058247582055628299713,\
0.8678076928481459617615,0.0802897713147103786469,0.5473116356879472732544,\
0.1851887595839798450470,0.258651246316730976105,0.0463956105522811412811,\
0.0752319693565368652344,0.9919890114106237888336,0.4826024798676371574402,\
0.4391565932892262935638,0.6382622700184583663940,0.7334855501540005207062,\
0.9849543431773781776428,0.2193018416874110698700,0.3509879373013973236084,\
0.7693294645287096500397,0.6535580744966864585877,0.9609256512485444545746,\
0.2253256086260080337524,0.5295072314329445362091,0.4856933178380131721497,\
0.0325177642516791820526,0.0512604638934135437012,0.1943944268859922885895,\
0.2998601151630282402039,0.549478018190711736679,0.7443804051727056503296,\
0.1306688119657337665558,0.2112427735701203346252,0.4418653692118823528290,\
0.6289571113884449005127,0.1768327937461435794830,0.0895956074818968772888,\
0.481131290551275014877,0.6253239680081605911255,0.3720952612347900867462,\
0.7183005558326840400696,0.6095875459723174571991,0.8103008717298507690430,\
0.2223627963103353977203,0.8733466742560267448425}

#define EXPAND  0.4163583382032811641693

#define RESULT {0.7284646681346131913415,0.989192008106873243989,0.8085895400964338008976,\
0.9163769951101256028281,0.9349137762043832067249,0.5326945489743132311489,\
0.9823995642201152067585,0.305083797583213633953,0.8086159867079506513576,\
0.1868945690068203879797,0.9475895783496315338823,0.9678039608420992978566,\
0.4329723055503270634503,0.68423899539773069822,0.9890364718108022312748,\
0.7943497624629932696294,0.8132007898688196068093,0.808090117466149226999,\
0.5875008761072864071906,0.8985735866087510848033,0.4099967340694569695181,\
0.8150299171646913087841,0.7924391432248698574625,0.6974820008616173794280,\
0.9605908201300753512797,0.7597020352483303540225,0.8630591732121281056678,\
0.4012970358491440014959,0.9851790447321197019548,0.9804873634101264334717,\
0.1696475368521674076394,0.9648638597435894581622,0.9125256586220036325585,\
0.8943560812692227246501,0.7294059529194845126199,0.4232180082272890553341,\
0.916554605507083564042,0.5688124226892673496181,0.7789513375488348323472,\
0.4526453084551937400271,0.9985674717102872577357,0.3156199821647662773216,\
0.7780943221002011300769,0.6162804684283178513482,0.7259267967438961521864,\
0.2770427140579521108066,0.6295715021115366738513,0.8957313597799472226768,\
0.7367902678841352637207,0.5676369465830355398595,0.4677127626898579526582,\
0.5267487587241619362288,0.7324505569224598611200,0.6611168125785117366533,\
0.8649036030014317644188,0.8511368159883252459963,0.9075123889490784856449,\
0.8067359928657767964566,0.8959056083070979781269,0.2875361378747636753595,\
0.8017520221011086301033,0.7673694529244873274720,0.9547798347087154136048,\
0.8084695859896496861197,0.8389586175592145256275,0.9529306420557314138975,\
0.6938680535086353406982,0.5183921020261006429308,0.793346444899387437388,\
0.8401580945174779158080,0.2016154416018380302056,0.7448165896518380568736,\
0.9966065805762621687691,0.7666654335848160917166,0.732250650546897197124,\
0.8139827028709292200404,0.6921192559761130125295,0.5023891186631103122906,\
0.7717567966494431885849,0.9448634993544591242909,0.6087559602629232236026,\
0.6733278820109139806149,0.8796721878469864197569,0.9889271210673219458798,\
0.9497503111327298963573,0.5166955674002130516342,0.157548601510365510192,\
0.9967789108028516364968,0.7103130756882061191959,0.812106637266760356120,\
0.9583239035572395092544,0.9646001738095134614426,0.7507845794857243015841,\
0.8245398795703052785555,0.6099356789350187657561,0.9571527235790283638650,\
0.8776442633914852686772,0.5559974763067492276036,0.7105731272697249911730,\
0.9845891777882239681574,0.9360824607784468120997,0.6387148606873016554175,\
0.3914310831295715331635,0.6640844299927105565118,0.7499883148290458212415,\
0.9108419054310594731305,0.9127352082795270327154,0.6897741461687679764836,\
0.5929547610295462511942,0.4215523895030350853830,0.934289925422809419686,\
0.8771730273596389793056,0.9808290164206334704744,0.8175799454103661600968,\
0.2767740197567316595695,0.3384295343168625125330,0.9938692202734674685516,\
0.7615524516687232070566,0.1807639486854548671602,0.7524441192146538170960,\
0.7088893722374375316875,0.4716512920271773157133,0.9116036713239157318611,\
0.9638554137274480959619,0.7041427136462521385596,0.7642077184686376645217,\
0.9085372292434992225196,0.1825266043999770881889,0.3405871110552653457937,\
0.4969386012149143438954,0.8274746814049287468862,0.7679374104413381196821,\
0.5220621091101612654128,0.5052216371459599120186,0.4180025804993992566416,\
0.9096552753365539922825,0.9030424754444578150370,0.8763923131750169792653,\
0.9009048556663895590546,0.7643822986790410611846,0.5364120201901159123992,\
0.3897036620350837199389,0.4041799474476096554199,0.956151132910635803697,\
0.8371998878550279687971,0.2652042210750701900501,0.5450981151899623178281,\
0.8909992090057128333314,0.5707298363723116718660,0.8558922439179788010932,\
0.9297114995403523707296,0.3499125215193959470561,0.8702273048082653783553,\
0.6522163450193463329896,0.560949837269416606844,0.7280772489811332404130,\
0.9746440403672457231110,0.7201681760891580630357,0.7529358332138126330690,\
0.9426752591053616514571,0.3499017784013320198078,0.7780577391146925592125,\
0.4955246248432562672370,0.5694804460964003611778,0.2784687951398606142739,\
0.3405499204525159195889,0.9966567274503397300123,0.7383459049553654507392,\
0.7099072481980015503211,0.8294873733988427089159,0.8789307415943956591775,\
0.9937078900984196438984,0.5316642496139925011534,0.6466638927283177018524,\
0.8965653157624376978774,0.8377067792805890089625,0.9835416334061796161947,\
0.5376965838311716927578,0.7674176109757441244241,0.7403110930323951732746,\
0.2401646248105218373059,0.2902733727718892486891,0.5056355181408417331923,\
0.6056346866145997376307,0.7793385312672220788244,0.8843430174683920563794,\
0.4285591961287324447305,0.5234404705944887270519,0.7117271278107557552772,\
0.8244307605644806136169,0.4860897924292185146022,0.3662484869284197697148,\
0.7374079263129095229701,0.8224445894290783876102,0.6625799211503411445534,\
0.8713083765590698970271,0.8137630792596124429394,0.9161448146036499373679,\
0.5347414781155725993500,0.9451757704519925251674}

#define ZSOURCER {0.6045256052166223526001,0.9455216196365654468536,0.4476299257948994636536,\
0.8624908211641013622284,0.1751048639416694641113,0.2067177616991102695465,\
0.6848411662504076957703,0.1348653226159512996674,0.0069159921258687973022,\
0.1496290047653019428253,0.5665438110008835792542,0.4359452719800174236298,\
0.6547604538500308990479,0.3381605879403650760651,0.4259321158751845359802,\
0.3060420057736337184906,0.7704779822379350662231,0.7058695447631180286408,\
0.2373670237138867378235,0.8205849635414779186249,0.6789963841438293457031,\
0.5250809141434729099274,0.3359806565567851066589,0.8941988362930715084076,\
0.5461782198399305343628,0.7568633262999355792999,0.0259526828303933143616,\
0.3250150899402797222138,0.6072143577039241791,0.8756139636971056461334,\
0.2962085595354437828064,0.4229678637348115444183,0.4243144039064645767212,\
0.7620028969831764698029,0.3622896494343876838684,0.5658242437057197093964,\
0.6424440070986747741699,0.7580267959274351596832,0.2531452132388949394226,\
0.5266989110969007015228,0.2118590380996465682983,0.4779220153577625751495,\
0.1615962767973542213440,0.9168031658045947551727,0.5461866445839405059815,\
0.4686870560981333255768,0.7772213732823729515076,0.5871783248148858547211,\
0.5848031807690858840942,0.3139644009061157703400,0.3204141603782773017883,\
0.3331634956412017345429,0.2282590121030807495117,0.2750317254103720188141,\
0.4963629124686121940613,0.7453477247618138790131,0.1155001949518918991089,\
0.0626524840481579303741,0.0877018878236413002014,0.5507565210573375225067,\
0.2116370312869548797607,0.8335358710028231143951,0.4045845707878470420837,\
0.2880227542482316493988,0.1750094983726739883423,0.0051561561413109302521,\
0.3109287889674305915833,0.6602919283322989940643,0.9722995534539222717285,\
0.9826813959516584873200,0.0455837054178118705750,0.4096118300221860408783,\
0.7104403134435415267944,0.3917615194804966449738,0.5571686858311295509338,\
0.0565565521828830242157,0.1540721096098423004150,0.9109257892705500125885,\
0.5713340407237410545349,0.3488348922692239284515,0.8972954172641038894653,\
0.2973396372981369495392,0.1091936426237225532532,0.7626331257633864879608,\
0.6584706604480743408203,0.6996708759106695652008,0.6756794182583689689636,\
0.9004421546123921871185,0.6668148916214704513550,0.8518152837641537189484,\
0.8365677157416939735413,0.1291190306656062602997,0.6095453463494777679443,\
0.2412315667606890201569,0.4029275467619299888611,0.3019328541122376918793,\
0.1083198729902505874634,0.8456356939859688282013,0.9417407037690281867981,\
0.9083450469188392162323,0.1937242373824119567871,0.5318046086467802524567,\
0.8314437521621584892273,0.4952740012668073177338,0.7465563025325536727905,\
0.7102393140085041522980,0.5811418974772095680237,0.7035941029898822307587,\
0.3746570833027362823486,0.3394373343326151371002,0.6322447275742888450623,\
0.7636191300116479396820,0.6940386760979890823364,0.8735245508141815662384,\
0.3612738298252224922180,0.7933200257830321788788,0.4830590635538101196289,\
0.2469964125193655490875,0.5025922833010554313660,0.7430270477198064327240,\
0.6783937942236661911011,0.4903185223229229450226,0.709806025959551334381,\
0.3303662906400859355927,0.6815545372664928436279,0.0701365978457033634186,\
0.4745870968326926231384,0.8091805852018296718597,0.9447045121341943740845,\
0.5478458073921501636505,0.1216687532141804695129,0.9161847713403403759003,\
0.3045207932591438293457,0.6502694808878004550934,0.0987624628469347953796,\
0.8391053467057645320892,0.0328534897416830062866,0.3461971958167850971222,\
0.2801467711105942726135,0.5500544901005923748016,0.0729318000376224517822,\
0.0225322381593286991119,0.50267804320901632309,0.3478884599171578884125,\
0.4298669416457414627075,0.3537984383292496204376,0.0529730813577771186829,\
0.9533003675751388072968,0.1842019557952880859375,0.958756382111459970474,\
0.3245136169716715812683,0.0003973259590566158295,0.0972583871334791183472,\
0.4378789965994656086,0.3634226778522133827210,0.2685119728557765483856,\
0.2770298384130001068115,0.8854365111328661441803,0.5216628303751349449158,\
0.4979983693920075893,0.8733724001795053482056,0.4699407932348549365997,\
0.9364062966778874397278,0.1337622734718024730682,0.2712419554591178894043,\
0.1766990595497190952301,0.0543269468471407890320,0.8402757882140576839447,\
0.7507283594459295272827,0.3062269617803394794464,0.9195641661062836647034,\
0.1318263853900134563446,0.0826364941895008087158,0.8222710476256906986237,\
0.4441085970029234886169,0.9617503038607537746429,0.0283641982823610305786,\
0.1431905967183411121368,0.3793597565963864326477,0.6144003230147063732147,\
0.2128270715475082397461,0.4704488315619528293610,0.2076055286452174186707,\
0.7435979112051427364349,0.3391801547259092330933,0.2479635034687817096710,\
0.6721735307946801185608,0.9013197491876780986786,0.2140864841639995574951,\
0.8460668534971773624420,0.1650043567642569541931,0.4003686285577714443207,\
0.5522825215011835098267,0.0638249483890831470490,0.6903966935351490974426,\
0.8547787251882255077362,0.0291904583573341369629,0.5434663915075361728668,\
0.6236743135377764701843,0.2417052476666867733002}

#define ZSOURCEI {0.5503273960202932357788,0.6906704087741672992706,0.9835249418392777442932,\
0.8285484607331454753876,0.2062614001333713531494,0.1944643096067011356354,\
0.4367609983310103416443,0.8090620837174355983734,0.8818644303828477859497,\
0.7404803228564560413361,0.7542522149160504341126,0.9921960639767348766327,\
0.9886121451854705810547,0.0113218077458441257477,0.9367801276966929435730,\
0.3874237253330647945404,0.2886805813759565353394,0.567788839805871248245,\
0.7295644441619515419006,0.0303032915107905864716,0.2795897088944911956787,\
0.7047131718136370182037,0.7442112853750586509705,0.8920237845741212368012,\
0.1081438604742288589478,0.8751525697298347949982,0.9068333031609654426575,\
0.2166852983646094799042,0.4824190363287925720215,0.7766945236362516880035,\
0.4510916722938418388367,0.1300636469386518001556,0.5505470838397741317749,\
0.6936193336732685565949,0.1749099576845765113831,0.8636093880049884319305,\
0.2150467522442340850830,0.1886725709773600101471,0.1796098565682768821716,\
0.4374312213622033596039,0.8514516223222017288208,0.7381969136185944080353,\
0.8102188156917691230774,0.1460137623362243175507,0.8999849110841751098633,\
0.4043733575381338596344,0.0156995235010981559753,0.6904196902178227901459,\
0.2990311514586210250855,0.1383218024857342243195,0.8478512773290276527405,\
0.3007262717001140117645,0.229154746979475021362,0.8078110129572451114655,\
0.3176332255825400352478,0.6924462593160569667816,0.1364154014736413955689,\
0.5433279541321098804474,0.3276594849303364753723,0.2006831648759543895721,\
0.5037304237484931945801,0.4962565028108656406403,0.8996161324903368949890,\
0.9357709079049527645111,0.3390339072793722152710,0.6029155333526432514191,\
0.4153500730171799659729,0.3041478390805423259735,0.8489827848970890045166,\
0.4482063786126673221588,0.0903797810897231101990,0.7382151386700570583344,\
0.2669597584754228591919,0.8226196658797562122345,0.3985779182985424995422,\
0.9789295899681746959686,0.3041231036186218261719,0.0663515278138220310211,\
0.6667758254334330558777,0.7548807277344167232513,0.1922533493489027023315,\
0.7942791883833706378937,0.5580398896709084510803,0.2016023616306483745575,\
0.787146832793951034546,0.0955459238030016422272,0.6623697867617011070252,\
0.864868474658578634262,0.7013061288744211196899,0.8015053984709084033966,\
0.9135685982182621955872,0.6317234965972602367401,0.9346773549914360046387,\
0.9157753759063780307770,0.0510348035022616386414,0.4329969524405896663666,\
0.9721843507140874862671,0.8001508046872913837433,0.8452261472120881080627,\
0.0610524858348071575165,0.8168097324669361114502,0.2101262793876230716705,\
0.3055453812703490257263,0.9465212575159966945648,0.9269728232175111770630,\
0.7737778765149414539337,0.5893978821113705635071,0.2377697187475860118866,\
0.5269544571638107299805,0.0077543654479086399078,0.8311711428686976432800,\
0.0268517597578465938568,0.2591186594218015670776,0.4641277943737804889679,\
0.6098861405625939369202,0.0656952331773936748505,0.6466812007129192352295,\
0.1018534512259066104889,0.2742705782875418663025,0.8162728524766862392426,\
0.3357750270515680313110,0.4765891996212303638458,0.8440040023997426033020,\
0.1785074654035270214081,0.5855625644326210021973,0.8426241897977888584137,\
0.7058847947046160697937,0.7396617024205625057221,0.9751448985189199447632,\
0.7606669445522129535675,0.8236690396443009376526,0.8889620001427829265595,\
0.7960178293287754058838,0.3052428201772272586823,0.6803312664851546287537,\
0.6412069997750222682953,0.0988248009234666824341,0.4654508423991501331329,\
0.6714970665052533149719,0.5131103205494582653046,0.8631567060947418212891,\
0.8328299173153936862946,0.1687975851818919181824,0.2961277081631124019623,\
0.2591485660523176193237,0.1700844173319637775421,0.9718958893790841102600,\
0.0695185582153499126434,0.4696230851113796234131,0.9544191421009600162506,\
0.3679352095350623130798,0.2973918146453797817230,0.0415310803800821304321,\
0.4892336544580757617950,0.5171590568497776985169,0.3534862431697547435761,\
0.2354387864470481872559,0.6779259913600981235504,0.3834532154724001884460,\
0.3174350797198712825775,0.3418120350688695907593,0.0535557498224079608917,\
0.9285596096888184547424,0.3862650538794696331024,0.4328473098576068878174,\
0.1581165478564798831940,0.7887120461091399192810,0.7448797873221337795258,\
0.5185996759682893753052,0.8651678604073822498322,0.1524438308551907539368,\
0.2392775672487914562225,0.5761575847864151000977,0.7395762302912771701813,\
0.0583172617480158805847,0.6962534948252141475678,0.4206145536154508590698,\
0.0281158541329205036163,0.8313249954953789710999,0.2333360086195170879364,\
0.8865877203643321990967,0.3746785433031618595123,0.87671328987926244736,\
0.4027077830396592617035,0.2890332732349634170532,0.8538430598564445972443,\
0.5499771209433674812317,0.5128610017709434032440,0.6321087554097175598145,\
0.4165538274683058261871,0.3217771751806139945984,0.9717370062135159969330,\
0.5348322447389364242554,0.3416590173728764057159,0.9565287167206406593323,\
0.9951003189198672771454,0.3422884084284305572510,0.7870580093003809452057,\
0.9234123295173048973084,0.5238970420323312282562}

#define ZEXPAND DoubleComplex(0.3911314327269792556763,0.0342082274146378040314)

#define ZRESULTR {0.8655722944852924927162,1.0080311239181567461998,0.8925609142479407065451,\
0.9964280419988468251447,0.5571485762795388430035,0.5766215951761861635561,\
0.8833535690601446166426,0.7551084203039666320478,0.7412402656397241162978,\
0.7391120775302850720578,0.8861033666941620090540,0.8909045287065679996630,\
0.9553114711351453625099,0.6535792477810216105638,0.8762967780815824614393,\
0.6963121473209069600685,0.9071008437483685238334,0.9080649209860272019768,\
0.7651103758972559454321,0.9246247726026085578255,0.8656267259726894147676,\
0.8620727374643903928586,0.8030427255614291937036,1.014256580496504245303,\
0.7887395917701954806134,0.9690769811804932354349,0.75373087988847220497,\
0.665324036040102595457,0.8564304632009258622105,0.9943426065332526819773,\
0.7091702303650339045404,0.7167445282856460542220,0.7911175844993063588362,\
0.9453949687634901621891,0.6824619663334378083519,0.9058411269303636714767,\
0.8438785717448686884978,0.8969692115256107101118,0.6070703034893107918890,\
0.8141804062940767305889,0.7904108638330922254056,0.8517415416153172325053,\
0.7635694344691914547951,0.9644146393547212703368,0.9063017724357406157409,\
0.7813949726703418585672,0.9055722155740445478145,0.8821341574516833317077,\
0.8226826712356364312839,0.6436863850966426658928,0.8232923424855791427746,\
0.6889381687909778007040,0.6034207402867282077352,0.7986983615906712019594,\
0.7808389246254876514541,0.9393662483390998740873,0.4756496767288962979059,\
0.6410331785900358347874,0.5570736776954752222935,0.7962089930094966572227,\
0.6867653317367202747690,0.9490886605505213236000,0.8617186127290810127022,\
0.8347121855317853889034,0.6099049384775118154423,0.6446553539303585544928,\
0.7064095183446724712795,0.8589826028412402836310,1.0333280419860488841266,\
1.0009679370157384958873,0.3688473932823669865222,0.8275000335386157868101,\
0.8791435711677849651480,0.8404774761127835613905,0.8221259638143403325472,\
0.7823902259896605704270,0.5836984889260519171472,0.9624591212353429403592,\
0.87214445216994962440,0.8101176247061679935868,0.9569519742645639093226,\
0.8025144823533889582023,0.6640375158107885145142,0.8994725858878525048823,\
0.9233788797234009360082,0.8679958766637961842250,0.9100186689417938401547,\
1.0128641777475222429672,0.9127218133217330775509,0.9896138009394465084867,\
0.9993082101967839525614,0.6972926524978265705457,0.9323806069591931144913,\
0.8160101391916357860268,0.6998385921148442267992,0.7068441167224135401881,\
0.7938968406481717865475,0.9874359653522727375830,1.0234238356749769671694,\
0.9614819054159017275296,0.7753407410455703807628,0.7868519463954313231113,\
0.9338642936617034262525,0.8994361995251628494330,0.9734883682358368428567,\
0.9388466429512447586347,0.8625681777851778031518,0.8742421714653901831937,\
0.7644849876693550205786,0.6546359139100853541393,0.9218660826188850299090,\
0.8990166027048773766950,0.8711301239674282825831,0.9615090167391108222361,\
0.7791813215771166145629,0.9117874338036765502480,0.8349616312306362697626,\
0.5854098493033248473694,0.7781598635219196813395,0.9560498319869397132464,\
0.8700533052058453398203,0.8046824930853576640644,0.9493290716357183356422,\
0.6616981690563410456463,0.9011123668510968576229,0.7463274688937293621649,\
0.8438944808683609410949,0.967670917420046960977,1.0395767162530316074509,\
0.8807547325114291059123,0.7554892774648256370540,1.0206386037631571817030,\
0.8053238451013553511615,0.8544388176999402340073,0.7032843861931318274472,\
0.9661800692102989751575,0.3625289807733498292919,0.7365208997706992333221,\
0.7641887204486981222118,0.8370383509177440339855,0.7532858906222718031742,\
0.7301419617080030510792,0.7674102539899976260784,0.6963774291087447831927,\
0.7363495079699874379386,0.6761329476101115565356,0.7795085331527642491523,\
0.9796876475370105419316,0.6630224685689680708123,1.0412428453447015730404,\
0.7007987051265935907196,0.4957725828833144943175,0.4082730584143764995808,\
0.7838070894699612489731,0.7572068286455557739600,0.6666425764079034754772,\
0.6381705607729424301056,0.9863693130746217230254,0.8032162659781901803413,\
0.7816455003905713461165,0.9529341373635599188319,0.7431207805833531798712,\
1.0315213570726253777821,0.6072910725514631957722,0.6918695596662881586170,\
0.5400639166795813128630,0.7250562108574124531302,0.9788012629543616505146,\
0.9194404507581022123475,0.8230461548879194344508,0.9655761323394732587033,\
0.5404820390080352643381,0.6609198489663343778489,0.9720869068178448202389,\
0.7269646989456197694324,1.0139914787794561679135,0.5745919175986482496654,\
0.4679101548416189637614,0.8383907049310611592219,0.8313089288905458618117,\
0.8000776949896156731157,0.7769598400111837888105,0.7959059962591698011991,\
0.9044673697739834539178,0.6897306414144260822141,0.8021024469389655964235,\
0.8925260669951027292512,0.9759461964985622905999,0.7283675470231352200301,\
0.9471290701945646040016,0.5973840169182614845411,0.8760985519463477810831,\
0.8416576754202981236475,0.5517569581734146355601,0.9608393360039786390558,\
1.0156994041747668955367,0.5352727784981988756741,0.8841861277509572847322,\
0.9348154737561720217798,0.7061621510971951565239}

#define ZRESULTI {0.2507352759957017229731,0.2597077035238002373774,0.4311375801547998043439,\
0.3142096700904059569659,0.1689085837110216592460,0.1485678383570865346286,\
0.1928467320522971317764,0.4557228688087557322284,0.5147867499839029470365,\
0.4298954588594036674287,0.3339518115646432083743,0.4361032888669963969441,\
0.3942661152625340226230,-0.0156759414692011767034,0.4216342190154458435814,\
0.2375262387333460234462,0.1218623208365654658758,0.2430961140393538000293,\
0.4005557344949497444731,0.0071165503832518592006,0.1239424146890654998554,\
0.3239999103802678193098,0.3796166421020668590991,0.3301654490061948776791,\
0.0445509799759439481526,0.3433255246943433536266,0.5155063670908992534692,\
0.1333705576653928526199,0.2222401853006255867395,0.2958473844131312979755,\
0.2718238835045109769162,0.0638111633635406738652,0.2844115395647432431581,\
0.2819711640048214729148,0.0995008638276371482068,0.3708897696809553279351,\
0.0957826319358946326465,0.0782020197404261763197,0.1239058544887542273605,\
0.2149541532842871305320,0.4468354605467026452459,0.3454060748345405551518,\
0.4482667635221281310365,0.0571905015324990773085,0.3861704363530624739553,\
0.2095642888443723650394,-0.0006474107340685887483,0.3074538897511936430540,\
0.1416418035595575219965,0.0813510707235199914678,0.4178944079756690133110,\
0.18311799903417008695,0.1665779146084863104882,0.4164312720201777673346,\
0.1619976176982119708825,0.2837987818207240997559,0.1371322947622884147467,\
0.3919995308417341117746,0.286564517326931111896,0.0947138076393856248592,\
0.3217566148347950072406,0.2012986727837245137796,0.4147875243243727139131,\
0.4526264616938408535951,0.2543075867710146709122,0.4351291297892320164564,\
0.25036019692983552121,0.1367950667990639190830,0.3077766302819374688582,\
0.1718309573016958136105,0.1360328259424684049783,0.3601092291418593882568,\
0.115968588156260335453,0.3929767663484189932355,0.1924420270514885511481,\
0.5251513760714544565289,0.2427797113296941700078,0.0243927289528858663725,\
0.3014989005539743804896,0.3801688209308042853962,0.0763497789484379602021,\
0.4062860677618788662890,0.3797590074517701586032,0.0838649495994110844022,\
0.3295489656272450607055,0.0357665894585867810695,0.2829096131593998308951,\
0.3209960925989643332201,0.2983490076404094470952,0.3068339844593696019715,\
0.3442039183940806545969,0.3997229201738806136923,0.3855619142782349961784,\
0.4583545007457388020811,0.0129171956556070680056,0.2615205358423942638702,\
0.5091243033451308130921,0.3071680827115451650755,0.3100250105838900926969,\
0.0221547458511593270414,0.4411750253003750010805,0.1013179671536272169474,\
0.1255083141058383477962,0.4104233196300889341401,0.3610487505240286831842,\
0.3169796206475462563290,0.2701202532733757433192,0.1030111453872422366818,\
0.2857724100202110317781,-0.0183464877937233594718,0.3485944785418330638116,\
0.0040848531118679188429,0.1134446524724902760628,0.1855694326698145713017,\
0.3234291264874709082022,0.0223549106164038433042,0.3105918323857878027283,\
0.0633707862092978274626,0.1386383792252010582757,0.3263302138383256667531,\
0.1495653713305781229437,0.238933687038423103743,0.3403467519630717363910,\
0.1069587420575875136297,0.2532367083846476796261,0.4848918076968742330024,\
0.3344586340162984394731,0.2917134330674172049136,0.3489590836696481734869,\
0.3396338202076644718908,0.4639844509888130796860,0.3265435199559258427904,\
0.4050419249651691089298,0.1381892282967451812681,0.4265392723554026210842,\
0.2540046810921274267336,0.1582030803668608431867,0.2652048658869911035296,\
0.3681251025496489193145,0.2442033766470435018903,0.4897753247400377096810,\
0.4969094538937048333160,0.0808848883024730763713,0.177092893746416069067,\
0.1405588477423546367451,0.0975493235811483866415,0.5243731122097079477840,\
0.0263866256125966647250,0.3160166163140329387282,0.3411837870670260119965,\
0.2224220694199508796540,0.319442449785955595587,0.0331421867036013270691,\
0.2549221660285751478448,0.2842420144041926111100,0.2302184532629851232422,\
0.1567850704050047783156,0.2616647545633992155700,0.1906579007076603937687,\
0.1616590279518919370805,0.1379022630075907862590,0.0139510212573068798775,\
0.3361354155389051356906,0.2959004712785165969180,0.2703106383010808189127,\
0.1300325021070959929936,0.4744646613374619570358,0.2895824249534337813117,\
0.2184961358962822230989,0.426807187423937750559,0.0597990003127331498645,\
0.2115261803479235591663,0.3963149188292993674310,0.2900288348173129526764,\
0.0171555875146988598412,0.259954574571872487621,0.3590435173524976764092,\
0.0046771943868099191341,0.3986564841709960838045,0.1066577525426010836229,\
0.4571171140442078506538,0.1948069655442623004937,0.4555736953569811120701,\
0.172447721502373058078,0.1749336453691343052,0.4380034702144764424681,\
0.2406770716320568714863,0.2014785207952041745649,0.3725791699557115532748,\
0.169353818078211759701,0.2485400584530522705151,0.4375888098622027211349,\
0.2529242309847982150828,0.3057408437536958678571,0.3787762920334192262573,\
0.3662661014371520473709,0.3241866507622078730222,0.3495665845168827723377,\
0.3796220139680390737169,0.3208771087739308858211}



void dpowsTest(void) {
	double in1[]=SOURCE;
	double in2=EXPAND;
	double res[]=RESULT;
	double out1,out2,out3;
	int i;

	for (i=0;i<200;i++){
		out1=dpows(in1[i],in2);
		out2=dpows(in1[i],0);
		out3=dpows(in1[i],1);

		assert(( (fabs(out1-res[i]))/(fabs(out1)) )<1e-15);
		assert(( (fabs(out2-1))/(fabs(out2)) )<1e-16);
		assert(( (fabs(out3-in1[i]))/(fabs(out3)) )<1e-16);
	}
}

void zpowsTest(void) {
	double in1R[]=ZSOURCER;
	double in1I[]=ZSOURCEI;
	doubleComplex in2=ZEXPAND;
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex in1,out;
	int i;

	for (i=0;i<200;i++){
		in1=DoubleComplex(in1R[i],in1I[i]);
		out=zpows(in1,in2);
		assert(( (fabs(zreals(out)-resR[i]))/(fabs(zreals(out))) )<1e-15);	
		assert(( (fabs(zimags(out)-resI[i]))/(fabs(zimags(out))) )<1e-15);			
	}
}

void dpowaTest(void) {
	double in1[]=SOURCE;
	double in2[200];
	double ZERO[200]={0};
	double ONE[200];
	double res[]=RESULT;
	double out1[200],out2[200],out3[200];
	int i;
	
	for (i=0;i<200;i++) {
		in2[i]=EXPAND;
		ONE[i]=1;
	}
	dpowa(in1,200,in2,out1);
	dpowa(in1,200,ZERO,out2);
	dpowa(in1,200,ONE,out3);
	for (i=0;i<200;i++){
		assert(( (fabs(out1[i]-res[i]))/(fabs(out1[i])) )<1e-15);
		assert(( (fabs(out2[i]-1))/(fabs(out2[i])) )<1e-16);
		assert(( (fabs(out3[i]-in1[i]))/(fabs(out3[i])) )<1e-16);
	}
}

void zpowaTest(void) {
	double in1R[]=ZSOURCER;
	double in1I[]=ZSOURCEI;
	doubleComplex in2[200];
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex *in1,out[200];
	int i;

	for (i=0;i<200;i++) in2[i]=ZEXPAND;
	in1=DoubleComplexMatrix(in1R,in1I,200);
	zpowa(in1,200,in2,out);

	for (i=0;i<200;i++){
		assert(( (fabs(zreals(out[i])-resR[i]))/(fabs(zreals(out[i]))) )<1e-15);	
		assert(( (fabs(zimags(out[i])-resI[i]))/(fabs(zimags(out[i]))) )<1e-15);			
	}
}

int testPow(void) {
  printf("\n>>>> Double Powonential Tests\n");
  dpowsTest();
  zpowsTest();
  dpowaTest();
  zpowaTest();

  return 0;
}

int main(void) {
  assert(testPow() == 0);
  return 0;
}
