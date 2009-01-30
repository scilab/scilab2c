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

#include "testAsin.h"

#define SOURCE {0.9356911443173885345459,0.5202743173576891422272,0.8356943717226386070251,\
0.1390841729007661342621,0.1484344247728586196899,0.5062630889005959033966,\
0.6569615425541996955872,0.1527653667144477367401,0.2077333852648735046387,\
0.1310311132110655307770,0.2355898572131991386414,0.9000837444327771663666,\
0.0360118653625249862671,0.4438733388669788837433,0.2795370602980256080627,\
0.3609029497019946575165,0.0737524814903736114502,0.8877843604423105716705,\
0.7357059037312865257263,0.1533541432581841945648,0.2168745566159486770630,\
0.7783402544446289539337,0.6990017639473080635071,0.6133037763647735118866,\
0.1271589249372482299805,0.3196897902525961399078,0.2413121340796351432800,\
0.0203057392500340938568,0.8844696115702390670776,0.7514050160534679889679,\
0.8791579911485314369202,0.3137878845445811748505,0.4495223872363567352295,\
0.7199412197805941104889,0.8987670382484793663025,0.1432229257188737392426,\
0.9059501979500055313110,0.4684562650509178638458,0.2573188217356801033020,\
0.5960337105207145214081,0.9504154697060585021973,0.9387393021024763584137,\
0.2791117234155535697937,0.4469828694127500057220,0.5995192881673574447632,\
0.3789988537319004535675,0.8654018277302384376526,0.2727968390099704265594,\
0.5822574533522129058838,0.5512602762319147586823,0.4366636639460921287537,\
0.2757742605172097682953,0.3867734093219041824341,0.1321225953288376331329,\
0.3260228233411908149719,0.1601287531666457653046,0.4301580488681793212891,\
0.4006247171200811862946,0.8426104513928294181824,0.9048160626552999019623,\
0.320046393200755119324,0.8069710140116512775421,0.7235896149650216102600,\
0.7765955845825374126434,0.6767611466348171234131,0.5158662856556475162506,\
0.1936035444959998130798,0.4270762628875672817230,0.4847531262785196304321,\
0.5182100948877632617950,0.3503957511857151985168,0.4174968632869422435760,\
0.442088566720485687256,0.4049004786647856235504,0.0953520191833376884460,\
0.0149906217120587825775,0.2767332997173070907593,0.396497034002095460892,\
0.3277142727747559547424,0.6040842677466571331024,0.4983838088810443878174,\
0.7224933789111673831940,0.6212163185700774192810,0.5571814230643212795258,\
0.5545951593667268753052,0.9439489883370697498322,0.1018914626911282539368,\
0.9077803748659789562225,0.8599558025598526000977,0.3132304050959646701813,\
0.7458020029589533805847,0.6701762243174016475677,0.6670592557638883590698,\
0.7646118258126080036163,0.8154405960813164710999,0.1493974099867045879364,\
0.2480226568877696990967,0.6294850618578493595123,0.6535534998401999473572,\
0.0851266062818467617035,0.3553021941334009170532,0.6699288752861320972443,\
0.5531356902793049812317,0.9733559968881309032440,0.4305554106831550598145,\
0.5243876897729933261871,0.9223478538915514945984,0.4095269232057034969330,\
0.5303003843873739242554,0.1592096765525639057159,0.4631052548065781593323,\
0.7969039077870547771454,0.4371217824518680572510,0.4197942153550684452057,\
0.5820884769782423973083,0.2639330527745187282562,0.9251737911254167556763,\
0.2750987303443253040314,0.7529260413721203804016,0.1343348133377730846405,\
0.6487299203872680664062,0.8492549010552465915680,0.0482988981530070304871,\
0.7936811461113393306732,0.6225296836346387863159,0.8340442483313381671906,\
0.5607167938724160194397,0.2962070326320827007294,0.7626721523702144622803,\
0.3759830952621996402740,0.9307165136560797691345,0.5556063777767121791840,\
0.4568063858896493911743,0.0317669031210243701935,0.7012319983914494514465,\
0.4635622831992805004120,0.6323687359690666198730,0.8858239823020994663239,\
0.7168863369151949882507,0.7797616957686841487885,0.2916170265525579452515,\
0.4237285782583057880402,0.28695563320070505142,0.1371444310061633586884,\
0.9822116084396839141846,0.2552233324386179447174,0.3307547485455870628357,\
0.0061365715228021144867,0.1720932889729738235474,0.2806011182256042957306,\
0.2241949187591671943665,0.9616182404570281505585,0.9974081367254257202148,\
0.3941962518729269504547,0.5662632463499903678894,0.0963757499121129512787,\
0.3522291611880064010620,0.3187350784428417682648,0.5841740677133202552795,\
0.9247881243936717510223,0.7888248674571514129639,0.6642959327436983585358,\
0.3959421953186392784119,0.6204979992471635341644,0.1972246859222650527954,\
0.8056284752674400806427,0.8491280348971486091614,0.9318168940953910350800,\
0.7328312769532203674316,0.6715824031271040439606,0.1545045776292681694031,\
0.6186148612760007381439,0.9608297105878591537476,0.0403955359943211078644,\
0.0333962673321366310120,0.7544445092789828777313,0.6861435212194919586182,\
0.4345912770368158817291,0.5974397426471114158630,0.7376494011841714382172,\
0.4376876372843980789185,0.2092354488559067249298,0.6795164542272686958313,\
0.3552068280987441539764,0.0756681859493255615234,0.9273025044240057468414,\
0.8346071569249033927917,0.743054957594722509384,0.4906791727989912033081,\
0.6159011130221188068390,0.7293182769790291786194,0.5866543571464717388153,\
0.8633460365235805511475,0.9971091211773455142975,0.1388301542028784751892,\
0.4055338925682008266449,0.4532660786062479019165,0.2871678886003792285919,\
0.2700171591714024543762,0.2655710014514625072479}


#define RESULT {1.2102129173972693276795,0.547172134283395505960,0.9893959167427971435060,\
0.1395365387198562734383,0.1489849714320161666592,0.5308459929384929942842,\
0.7167814580056727224999,0.1533658822581816516539,0.2092572247647190852859,\
0.1314089889300391889027,0.2378254645317898763324,1.1199616760260284742401,\
0.0360196535997655206685,0.4599165600749937077296,0.2833119142414158297960,\
0.3692359156088362848180,0.0738195075749003143395,1.0925087004242901578266,\
0.8267083221396219760990,0.1539616791242165161346,0.2186116813912043488344,\
0.8920178989455170848188,0.7740006423727355810982,0.6602366372124121030041,\
0.1275041230444604323235,0.3254020787470935927033,0.2437177159295554063068,\
0.0203071349297229801489,1.0853560691206285415689,0.8501888295310906507041,\
1.0740923528156336441697,0.3191797921431215878663,0.4662305874507110536875,\
0.8037176217662085342397,1.1169491151572188414320,0.1437171522303946902266,\
1.13361865210398771175,0.4875426458125770023955,0.2602465647055824948808,\
0.6385524103330081358010,1.2545691699775671779093,1.2189537472935179085454,\
0.2828689457902803794376,0.4633896660240007236986,0.6429003543060739511716,\
0.3887142006801726501486,1.0459517428704359076619,0.2762989388590115780175,\
0.6215026189895035413358,0.5838740042814533071081,0.4518867349636846997285,\
0.2793951051102595561915,0.3971301217078890832823,0.132510043706192570667,\
0.3320934649289025153429,0.1608210878711773539340,0.4446678438400747945813,\
0.4121985697961437211667,1.0021124190562762379386,1.1309475449498487265032,\
0.3257784557613874198978,0.9390052579549887923349,0.8089888457708835911575,\
0.8892438326422247296676,0.7433542835357417333242,0.5420185672225497075516,\
0.1948338635337260038582,0.4412568471414960447063,0.5060808916267004464729,\
0.5447567844134539871703,0.3579936097184594490095,0.430688870641149468277,\
0.4579258061456900619213,0.4168699854700866902490,0.0954971037836137986998,\
0.0149911832144437959929,0.2803929768115001053275,0.4076979699824179737000,\
0.3338832266123987202455,0.6486162776185823153341,0.5217335620683097863193,\
0.8074019476106287784845,0.6702938912826584827442,0.5909876416606805182852,\
0.5878763702657983092337,1.2343959660274554934745,0.1020685954711661458383,\
1.1379615773910940479396,1.0351830670880448614923,0.3185927153117306676045,\
0.8417379366997205236700,0.7344461964462585257252,0.7302544939241956134524,\
0.8704388193816158247884,0.9534899570984974870314,0.1499588151786827583400,\
0.2506386006706501912156,0.6808903181988129604818,0.7122699052095804450602,\
0.0852297552133160912780,0.3632373356223638216633,0.7341129828114539845885,\
0.5861234773434839118167,1.3394387326603169885431,0.4451080564403126493822,\
0.5519958405399131295965,1.1741139184516546922765,0.4219354466987135787726,\
0.5589548324277814339567,0.1598900667546140630382,0.4814956074594635149211,\
0.9221526721268241688634,0.4523960307711298312050,0.4332185780481620507310,\
0.6212947925772885904294,0.2670975836918499934924,1.1814932336008394653248,\
0.2786923935221553016994,0.8524970032637724237645,0.1347421608080361932203,\
0.7059143267628599227592,1.014572470500166190277,0.0483176963724658639632,\
0.9168365263416731192336,0.6719709888964939814571,0.9863981265157644173769,\
0.5952512315907774187451,0.3007190162077965633891,0.8674345484889434132469,\
0.3854574865641427483531,1.1963670583888645904125,0.5890920941092092633085,\
0.4744017948433008613485,0.0317722484037002914081,0.7771241013419247778415,\
0.4820113338532510671719,0.6846071548899330672100,1.0882667543007658040,\
0.7993259845681112141236,0.8942850957473000850229,0.2959169071935129347040,\
0.4375577621669283212569,0.2910472961271438063768,0.1375780266978623433971,\
1.3818975127290542559422,0.2580786782411462754183,0.337103224922307598277,\
0.0061366100381220973006,0.1729542689024595181202,0.2844203312567258890020,\
0.2261168471284604464255,1.292840105239649206581,1.4987826659389660299837,\
0.4051931219540680362279,0.6019650966008720516243,0.0965255712145899474885,\
0.3599518411886321600512,0.3243946620517429990649,0.6238620609478121581404,\
1.1804783562721565814968,0.9088946724537740884386,0.7265514890656400437408,\
0.407093673069975237055,0.6693775784027574671242,0.1985261923397042549411,\
0.9367355633059043507060,1.0143322323911900806337,1.199387299048776833743,\
0.8224738107516712526390,0.7363424248289601736772,0.1551259899908567496674,\
0.6669785285495629656438,1.289980681935538386895,0.0404065303042144760570,\
0.0334024783187645626925,0.8548073921139841546690,0.7561744594372630245971,\
0.4495844069894625594230,0.6403046132494145670222,0.8295822852568314198507,\
0.4530252724246893181181,0.2107930369382310653581,0.747103346555288094777,\
0.3631353147252046054128,0.0757405812005388645591,1.1871407475057926816930,\
0.9874192358186812956689,0.8376237455287295352591,0.5128690395827339987278,\
0.6635292564994419439728,0.8173250039556049229006,0.6269213761078136215588,\
1.0418634321911146578543,1.4947401270369859993536,0.1392800314888206769659,\
0.4175628314057308609897,0.4704260294397792363519,0.29126887742414786509,\
0.2734108525510542397896,0.2687961431094310627010}


#define RSOURCE {0.0100881215184926986694,0.0074436445720493793488,0.2989360922947525978088,\
0.3327573235146701335907,0.237830940634012222290,0.8535961345769464969635,\
0.7922197943553328514099,0.9695409736596047878265,0.6468791384249925613403,\
0.9159972262568771839142,0.7485287981107831001282,0.5446169781498610973358,\
0.4380150139331817626953,0.8022991069592535495758,0.0770919052883982658386,\
0.6038356139324605464935,0.0416274946182966232300,0.0491319303400814533234,\
0.2167323390021920204163,0.5511633078567683696747,0.5648556910455226898193,\
0.7904387773014605045319,0.8203159859403967857361,0.8707285351119935512543,\
0.7680293265730142593384,0.9941699919290840625763,0.7653715135529637336731,\
0.7766020926646888256073,0.0391560420393943786621,0.3610868924297392368317,\
0.7096323622390627861023,0.1340617476962506771088,0.3352055754512548446655,\
0.4794248570688068866730,0.9102506125345826148987,0.9960912610404193401337,\
0.5589408166706562042236,0.3291657851077616214752,0.5254327272996306419373,\
0.5988637856207787990570,0.3400457371026277542114,0.7296699327416718006134,\
0.1172471689060330390930,0.1599596398882567882538,0.6893001943826675415039,\
0.8244171240366995334625,0.5743538914248347282410,0.3230684562586247920990,\
0.4945516120642423629761,0.1966073368676006793976,0.1734057078137993812561,\
0.5929257045499980449677,0.3272335343062877655029,0.7093706638552248477936,\
0.9978715321049094200134,0.6042335904203355312347,0.5281810555607080459595,\
0.6643366483040153980255,0.4330314965918660163879,0.5683163288049399852753,\
0.0414931252598762512207,0.3723129951395094394684,0.9558939440175890922546,\
0.7412597923539578914642,0.9651917275041341781616,0.7298236568458378314972,\
0.9387842947617173194885,0.2572855348698794841766,0.2874279357492923736572,\
0.8952562944032251834869,0.6853557890281081199646,0.1711091897450387477875,\
0.7769848424941301345825,0.658369113225489854813,0.4177721040323376655579,\
0.0530332433991134166718,0.4968273639678955078125,0.59690707409754395485,\
0.4338118461892008781433,0.9805241837166249752045,0.9094489198178052902222,\
0.6140774791128933429718,0.152644918300211429596,0.2700240234844386577606,\
0.0427649877965450286865,0.9506349326111376285553,0.2680307617411017417908,\
0.7927461988292634487152,0.6853035334497690200806,0.2653256771154701709747,\
0.7276884736493229866028,0.2182058426551520824432,0.0794423148036003112793,\
0.8774413042701780796051,0.7575887991115450859070,0.0292344330810010433197,\
0.0814430620521306991577,0.7652318407781422138214,0.6499179983511567115784,\
0.652228816878050565720,0.2570325322449207305908,0.4139282093383371829987,\
0.5334635889157652854919,0.5463846079073846340179,0.8812804389744997024536,\
0.1071240645833313465118,0.8451719628646969795227,0.5956639605574309825897,\
0.3115242570638656616211,0.7552670040167868137360,0.7216278789564967155457,\
0.64724771818146109581,0.7020909022539854049683,0.8550091539509594440460,\
0.0292058298364281654358,0.5402219365350902080536,0.5295652858912944793701,\
0.6731671304441988468170,0.2516432842239737510681,0.4682487822137773036957,\
0.8973557446151971817017,0.2490413752384483814240,0.953785804100334644318,\
0.0199718060903251171112,0.0883063450455665588379,0.3088448666967451572418,\
0.0402540368959307670593,0.7409055917523801326752,0.3341060634702444076538,\
0.6859912057407200336456,0.5277825826779007911682,0.5605597789399325847626,\
0.2702448405325412750244,0.3409920767880976200104,0.0499807363376021385193,\
0.9285474619828164577484,0.0452665109187364578247,0.5747140836901962757111,\
0.8132651047781109809875,0.0034279632382094860077,0.5530686080455780029297,\
0.5287449606694281101227,0.2227140991017222404480,0.7380339815281331539154,\
0.7569990437477827072144,0.5666191582567989826202,0.8965943017974495887756,\
0.205033115576952695847,0.5744996629655361175537,0.6296528042294085025787,\
0.28830870892852544785,0.0064737624488770961761,0.2910466734319925308228,\
0.161138039547950029373,0.6345168473199009895325,0.1110653909854590892792,\
0.9721379503607749938965,0.6926467292942106723785,0.4481767667457461357117,\
0.9629431902430951595306,0.8420772161334753036499,0.6861935486085712909698,\
0.2752589071169495582581,0.2056670929305255413055,0.0983050949871540069580,\
0.7260084436275064945221,0.9338818406686186790466,0.8652051738463342189789,\
0.1300270427018404006958,0.6536684674210846424103,0.9546198891475796699524,\
0.3356514233164489269257,0.6098881512880325317383,0.7403389909304678440094,\
0.4407326159998774528503,0.0114278956316411495209,0.4274448286741971969604,\
0.4898742889054119586945,0.0670661935582756996155,0.9097212324850261211395,\
0.9331833533942699432373,0.1665275008417665958405,0.4363766452297568321228,\
0.1269035614095628261566,0.4618353042751550674438,0.6410199669189751148224,\
0.5118249626830220222473,0.4726877692155539989471,0.6037398651242256164551,\
0.6487199389375746250153,0.3443940980359911918640,0.1257671504281461238861,\
0.1930030044168233871460,0.0536806662566959857941,0.813977831043303012848,\
0.6546894307248294353485,0.4812035299837589263916,0.2122878567315638065338,\
0.6028915112838149070740,0.2477151653729379177094}

#define ISOURCE {0.4653960186988115310669,0.0302665126509964466095,0.1205546753481030464172,\
0.4954105126671493053436,0.8391606211662292480469,0.8067971416749060153961,\
0.5980955390259623527527,0.5697243823669850826263,0.535449741408228874207,\
0.4594913427717983722687,0.0716273644939064979553,0.1432999591343104839325,\
0.3299815915524959564209,0.2239767671562731266022,0.4729467025026679039001,\
0.8927706009708344936371,0.4739306215196847915649,0.4218414542265236377716,\
0.5464035095646977424622,0.9297901126556098461151,0.8246648237109184265137,\
0.3906875425018370151520,0.8106931401416659355164,0.0035473941825330257416,\
0.4432799126952886581421,0.1700443555600941181183,0.2843202138319611549377,\
0.8185154641978442668915,0.1276803798973560333252,0.0368908629752695560455,\
0.1934843575581908226013,0.3111848584376275539398,0.8499574232846498489380,\
0.4845375162549316883087,0.3811378227546811103821,0.2295314031653106212616,\
0.5668137520551681518555,0.7386174597777426242828,0.6359649775549769401550,\
0.8589683636091649532318,0.3717852663248777389526,0.4039371167309582233429,\
0.6600336739793419837952,0.2385329673998057842255,0.4580096118152141571045,\
0.3359361500479280948639,0.8938684901222586631775,0.7110573030076920986176,\
0.8602916095405817031860,0.3305067983455955982208,0.9176958473399281501770,\
0.15107359318062663078,0.4452155604958534240723,0.7259225868619978427887,\
0.6476110024377703666687,0.7142038433812558650970,0.1180544253438711166382,\
0.5106264133937656879425,0.0454169148579239845276,0.4517838652245700359344,\
0.7152258791029453277588,0.0306280092336237430573,0.5608849888667464256287,\
0.6344716749154031276703,0.5510452408343553543091,0.8902607751078903675079,\
0.0251876907423138618469,0.1285902666859328746796,0.0875252783298492431641,\
0.1400479921139776706696,0.2142530409619212150574,0.6689547612331807613373,\
0.6959728877991437911987,0.3454284076578915119171,0.8007909813895821571350,\
0.3719339291565120220184,0.9791326485574245452881,0.6300911963917315006256,\
0.9137416174635291099548,0.3324960893951356410980,0.6226272527128458023071,\
0.2876702961511909961700,0.0238953353837132453918,0.6489893826656043529510,\
0.2444448098540306091309,0.0555481188930571079254,0.374434794299304485321,\
0.7194064198993146419525,0.2112230267375707626343,0.6445186366327106952667,\
0.6751487934961915016174,0.1528833056800067424774,0.8900802619755268096924,\
0.6180598423816263675690,0.27906801458448171616,0.1401830366812646389008,\
0.3047434557229280471802,0.2149655860848724842072,0.5602726386860013008118,\
0.6269132751040160655975,0.6647229343652725219727,0.2090867855586111545563,\
0.7116218386217951774597,0.133228497114032506943,0.7362840902060270309448,\
0.3999320124275982379913,0.6811551460996270179749,0.5637665162794291973114,\
0.523965936154127120972,0.8278774530626833438873,0.4659156939014792442322,\
0.8515693820081651210785,0.23139653541147708893,0.3077362445183098316193,\
0.4819453330710530281067,0.7797386529855430126190,0.9701553061604499816895,\
0.3744371854700148105621,0.2292016251012682914734,0.8245750456117093563080,\
0.1854322012513875961304,0.2345628221519291400909,0.9701467091217637062073,\
0.3639524574391543865204,0.2672337628901004791260,0.8174969092942774295807,\
0.6407580440863966941833,0.0946763656102120876312,0.3158860523253679275513,\
0.5199312460608780384064,0.7127110259607434272766,0.0025766002945601940155,\
0.5305844545364379882812,0.7374818869866430759430,0.2254834799095988273621,\
0.7290844931267201900482,0.1897403579205274581909,0.7771647279150784015656,\
0.7071320274844765663147,0.67804440064355731010,0.6918747089803218841553,\
0.2444804669357836246490,0.2024903288111090660095,0.7065096027217805385590,\
0.6258084420114755630493,0.4988589403219521045685,0.1275391997769474983215,\
0.7432725760154426097870,0.3388997837901115417480,0.2712128334678709506989,\
0.1686986042186617851257,0.1788796423934400081635,0.9720784332603216171265,\
0.0373507668264210224152,0.9457915211096405982971,0.3708799923770129680634,\
0.4304266162216663360596,0.2409997568465769290924,0.6574296867474913597107,\
0.1080590835772454738617,0.2580570150166749954224,0.9601870519109070301056,\
0.4275712119415402412415,0.3774064141325652599335,0.8860375732183456420898,\
0.1107313432730734348297,0.572000074200332164764,0.2775676711462438106537,\
0.2221131753176450729370,0.7805933509953320026398,0.5034774849191308021545,\
0.4225312541238963603973,0.0509742014110088348389,0.7888357848860323429108,\
0.4943151315674185752869,0.6792991734109818935394,0.2138219568878412246704,\
0.0629426804371178150177,0.0151202948763966560364,0.5832923236303031444550,\
0.0359809771180152893066,0.9282481097616255283356,0.8684628410264849662781,\
0.2752401321195065975189,0.9713082071393728256226,0.90322426753118634224,\
0.8362140888348221778870,0.3033045823685824871063,0.9321490563452243804932,\
0.0943789319135248661041,0.0593075519427657127380,0.1341886124573647975922,\
0.2735903281718492507935,0.7845123005099594593048,0.868671556003391742706,\
0.7169788884930312633514,0.9007600247859954833984,0.3080832012929022312164,\
0.2860837308689951896667,0.9434729530476033687592}

#define RRESULT {0.0091461935615653692372,0.0074403059517685150512,0.3011120408510194468299,\
0.2998770814044370847107,0.1819248875927510500361,0.6444988336836313669309,\
0.6791245188293772994115,0.8328839139359748289237,0.5765876696591275551995,\
0.8504976129204943058326,0.8394277222457392495514,0.5667892427465585081237,\
0.4244768273740840425212,0.8613255288489666261498,0.0697161665763657567574,\
0.4438565921449716400460,0.0376207427201287192275,0.0452773943778729953680,\
0.1905350234324321712087,0.3984765801447008870539,0.4314770699424559374791,\
0.7678818181682768306828,0.6201489749119961647494,1.056635799167679801158,\
0.7224469139675204765183,1.1570753191068809950792,0.7891360295709419769850,\
0.5869418614770346431797,0.0388500272557359208059,0.3691306128445250300807,\
0.7557159781600413239744,0.1282646090865436350192,0.254601106881209460209,\
0.4365177363889400918850,0.8917468285467748945194,1.0969945987775304718781,\
0.4896234023783549438313,0.2644825052430134770809,0.4440381533885026654751,\
0.4483584089258232929787,0.3221387984110837821028,0.7011289310321348056121,\
0.0978674265602834936306,0.1561241830600058055900,0.6415261435351872210120,\
0.8301262834168886550756,0.4226589438886647065452,0.2631688682703156034748,\
0.3718501469694869832061,0.1874416812787549069252,0.1276292125120765952317,\
0.6223362931435947320580,0.3011173751873987280980,0.5675795050042053979666,\
0.8129219748246857557561,0.4890104311779664980619,0.550584097940126637738,\
0.6003329153401916196131,0.4472450285127820834852,0.5277749449162034700578,\
0.0337492295725758256753,0.3812817338877603767777,0.8272241071562403957884,\
0.6236783490132045137955,0.8396686488386544411355,0.5323480108875771055210,\
1.2121602671977980136830,0.2578891950501832064369,0.2902963532926625123132,\
1.0407218420407280401463,0.719658282922589376263,0.1422515549798589185038,\
0.6295643770268913863575,0.6485925881357603728361,0.3247882629711342783452,\
0.0497195040545942226751,0.3510527044460081680377,0.50563338590045081578,\
0.3179706585678286345775,0.99285160840273078975,0.7609503370287584722576,\
0.6176058717047394619470,0.1531988771495936818567,0.2266760787365090790146,\
0.0415517947772082799074,1.218422457974889017152,0.2526690822330791563743,\
0.6329425814457148025127,0.7204713317072120037921,0.2231989518352319179506,\
0.5985707095895493878857,0.2172853881448477131322,0.0593293879714889560439,\
0.7385713745542424879531,0.7823911147317434977566,0.0289551632441432602039,\
0.0779646258693818400287,0.8182888473500083970080,0.5715052817983971022997,\
0.5528641949610285655226,0.2141542425335012378440,0.4153673917132313930800,\
0.4332354240667932732123,0.5700436227902923036481,0.6908832900189864067997,\
0.0995605703740609776498,0.6869435543144543077076,0.5227653368830831315250,\
0.2770997202417057603263,0.5689013982218961151816,0.6692632096949825415422,\
0.4851064406738322953849,0.7345650510869129456992,0.8789819041715580816287,\
0.0263110479671970418081,0.4230828882691921033476,0.3752940809060429927513,\
0.6545085349432201438091,0.2474097208124308444610,0.3590569749582296354973,\
1.0107395629243736134839,0.2444967346619240644578,0.6498559643022308041083,\
0.0187681811419864209844,0.0853955435810109381167,0.23858632896482903640,\
0.0338939736966144267161,0.8239189153398052134492,0.3225505736889286989566,\
0.6168540121263207387514,0.428433060998039016987,0.5950583374560662885955,\
0.2394573971728722883157,0.2741095497000874958715,0.0487731652979911251000,\
0.7269475532699710695894,0.0444861838193508288275,0.4501104783981072499088,\
0.6528448282940336744318,0.0028372513246705619722,0.4536708244402919421034,\
0.5336004611058299262893,0.2198360890060693795256,0.5959746705988369086526,\
0.6396262340663229073456,0.5139896603726894497299,1.0518513414805021888299,\
0.1644962891003966809489,0.5624905673203877132238,0.6391528366469793054350,\
0.2879084713580257748333,0.0063726492100631259435,0.2079683900269996554844,\
0.1617268596829900817458,0.45252598419205131153,0.1042540297218644135269,\
0.9167320764408587452365,0.7202498119943631094131,0.3747568855205881677151,\
1.1832506588357394328170,0.8926873380378329558837,0.4837753498734558843530,\
0.2545199640454580136684,0.1931610886369621860048,0.0735568361645391743942,\
0.7995145050294805155744,0.8044454260553820512669,0.9085111724757110041040,\
0.1272278092834613905104,0.5090362502018392909520,0.8578711409272452570463,\
0.3118078521746414644156,0.6543371722769727449887,0.5706133911152972970626,\
0.3988750643962680753063,0.0094531166452282121282,0.4291477558442853834642,\
0.5104896641888095887296,0.0671088543520260150110,0.7800123094015957159186,\
1.1912011959193866683648,0.12192992647229736192,0.3274120948460061963914,\
0.1225950921700365431333,0.3281975873099651774822,0.4674494885223512974370,\
0.3894697523335833855285,0.4641231634718703258358,0.4345931392944782367671,\
0.6995072076723701792744,0.3508640282412981981075,0.1249574421756384084992,\
0.1870180747450552183331,0.0422329366873970546425,0.5961240984598299430530,\
0.5279606410558730367200,0.3544288908497560397493,0.2039132017920733119798,\
0.6057722587792238044813,0.1797611770377918194441}

#define IRESULT {0.4500666085684790207466,0.0302627309405466352055,0.1259014236203331582598,\
0.4977434045460411571327,0.773705242465913545225,0.887900733341152936795,\
0.7079916425568136828517,0.7688472856787659237554,0.6017352744773040162940,\
0.6498883599394120746950,0.107039917160296094156,0.1690548918257823163280,\
0.3546374548515999203246,0.3373847934787007063484,0.4579255569364570899182,\
0.8732609696455944092719,0.4580771972571195393975,0.4106361461893539566148,\
0.5311452992294272146268,0.8876026166669700456779,0.8147068623051754165942,\
0.5194139247849689500214,0.8786785088163897583513,0.0072129604104987166471,\
0.5609976062745508640361,0.4112823226813016597170,0.3933766150232178571144,\
0.8693290272249873940,0.1274316261040582265451,0.0395449426043308974177,\
0.2628191746325336808354,0.3088296914886584088045,0.7926272523547727155702,\
0.5120084435293993374572,0.5746945549365780614437,0.4839450538685827751806,\
0.6047355489888047719305,0.7052834690539023787537,0.6561539945033735277136,\
0.8478769656358153827824,0.3825478020514606614100,0.5066754044490697772574,\
0.6222644111952397860676,0.2391828028480158796487,0.5443776858218749570284,\
0.4792822085648152929949,0.86724431342169228110,0.6822409980077328572889,\
0.8261589834748411798060,0.3303572550644504612904,0.8274965298010771297399,\
0.1848774585857928254296,0.4507700784722463716037,0.7795271583399024928340,\
0.8398668346264467343687,0.7396983997066739480175,0.1380866564681807739934,\
0.5849046253180708587749,0.0503500622675033676634,0.5016357319277500170784,\
0.6654269099346773463921,0.0329916341046517930247,0.7548317451254575871644,\
0.7182541963203104007363,0.7522847340656214631949,0.9046859380442064946237,\
0.0716988879790057820340,0.132599207337852937,0.0912207697238807957429,\
0.2735698269446988906139,0.2811794411108771152286,0.6327124304403525245633,\
0.7796338249130402298093,0.4209075105417727225010,0.7673980540361009516914,\
0.3642835980514441684974,0.9112659650125345400795,0.6691470644846674309392,\
0.8542200565296905745427,0.5762098993480122555155,0.7786617427494030296842,\
0.3459141320122436358275,0.0241761593182958818560,0.6246129374546308676841,\
0.2422787652159511528893,0.1602629717157874056355,0.3776710192863622084225,\
0.8030895628249021811484,0.2774953901907728504028,0.6203514328186836568335,\
0.7460670209249947726349,0.1559320495131248929255,0.8026468549051214429468,\
0.760424886296417135156,0.3839751822834133743179,0.1397861363985309635094,\
0.3011015740622249303726,0.3095528263794048440261,0.6246974136518177456168,\
0.6824390801574051756972,0.6364220425441351469686,0.2265745526065163772955,\
0.7201722295639139126422,0.1575984581645545612449,0.8494571876510255137305,\
0.3918195908099642577049,0.7946547307771568702250,0.6117848393634578441080,\
0.5208720859508298994811,0.8690531065973791102763,0.5637323042761468450124,\
0.8547026638602744919027,0.306960447908322775490,0.4654093394618514789585,\
0.4651555318578067255153,0.7751475575968125308890,0.9112674172531984861934,\
0.4560028346615129235531,0.234251732325255618283,0.7944832243829529350165,\
0.3423334159329023407281,0.239457736168475460170,1.02777275826487124455,\
0.3564220429250729016424,0.2650952420467553305450,0.7646166714313819001703,\
0.6037691171359901298743,0.1389158036998756340363,0.3271927879913820724767,\
0.6006321860598116124663,0.7197540296752282795723,0.0031113959438069660468,\
0.5221204081389118067946,0.7059634191281195514378,0.2238770907129097598176,\
0.8641197102092305071253,0.1888045378279312735970,0.7812121068214791241857,\
0.8015589685608611736356,0.6345893564856053270518,0.7088628827258813824841,\
0.2802718253544457249760,0.2060232397943899673720,0.7740411253804675428825,\
0.716974289181374180302,0.5454318495795067445187,0.2544009667091767235014,\
0.6958995710025659420239,0.3906147496642403682543,0.3317958100335353655019,\
0.1750450440110335736943,0.1779427350870727009280,0.8767597428372501111582,\
0.0378355850756998610129,0.9174242179663641971743,0.3647620293190586560073,\
0.6587619708007782515224,0.3153773564551797248257,0.6579511103942273786416,\
0.2821737200327205097317,0.4005650534773762538876,0.9399862930023007434599,\
0.4285643691635598884204,0.3756601850966035938129,0.8002497169354958472809,\
0.1581953331446839250418,0.7519083154621302167442,0.4373149903759625534150,\
0.2220927412218937635480,0.804348871566688328,0.7089002298114742695034,\
0.4305150724386235805419,0.0641995146174158398678,0.8363640441971674777122,\
0.5135521078813733986124,0.6356504507416418370269,0.2330299466993880075361,\
0.0720777388352223102874,0.0151538267615728122067,0.7485905695903387613299,\
0.0969510446209165821507,0.8347965442360075760675,0.8215865796515979813108,\
0.2738845295035164384423,0.8996918043828731059719,0.8896690120740690099765,\
0.8117683352741612567982,0.3329971294517217184072,0.9008120497468148357711,\
0.1230347833276769775601,0.0631133065200175230602,0.1348341818397757463366,\
0.2749675342978448178144,0.7210794354646373749418,0.9161054973709473747689,\
0.7559186765863976642521,0.8531345425055275599746,0.3096300406745840505529,\
0.3413400734450014462062,0.8520286730709790701255}

void dasinsTest(void) {
 	double in[]= SOURCE;
	double res[]= RESULT;
	double out;
	int i=0;

	for (i=0;i<200;i++){
		out=dasins(in[i]);
		assert( ( (fabs(out-res[i])) / (fabs(out)) ) <1e-15);
	}
}

void zasinsTest(void) {
	double inR[]= RSOURCE;
	double inI[]= ISOURCE;
	double resR[]= RRESULT;
	double resI[]= IRESULT;
	doubleComplex out,in;
	int i=0;

	for (i=0;i<200;i++){
		in = DoubleComplex(inR[i],inI[i]);
		out=zasins(in);
		assert( ( (fabs(zreals(out)-resR[i])) / (fabs(zreals(out))) ) <1e-15);
		assert( ( (fabs(zimags(out)-resI[i])) / (fabs(zimags(out))) ) <1e-15);
	}
}

void dasinaTest(void) {
 	double in[]= SOURCE;
	double res[]= RESULT;
	double out[200];
	int i=0;

	dasina(in,200,out);
	for (i=0;i<200;i++){
		assert( ( (fabs(out[i]-res[i])) / (fabs(out[i])) ) <1e-15);
	}
}

void zasinaTest(void) {
	double inR[]= RSOURCE;
	double inI[]= ISOURCE;
	double resR[]= RRESULT;
	double resI[]= IRESULT;
	doubleComplex out[200],*in;
	int i=0;


	in= DoubleComplexMatrix(inR,inI,200);
	zasina(in,200,out);

	for (i=0;i<200;i++){
		assert( ( (fabs(zreals(out[i])-resR[i])) / (fabs(zreals(out[i]))) ) <1e-15);
		assert( ( (fabs(zimags(out[i])-resI[i])) / (fabs(zimags(out[i]))) ) <1e-15);
	}
}

int testAsin(void) {
  printf("\n>>>> Double ArcSine Tests\n");
  dasinsTest();
  zasinsTest();
  dasinaTest();
  zasinaTest();
  return 0;
}

int main(void) {
  assert(testAsin() == 0);
  return 0;
}
