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

#include "testTan.h"

#define SOURCE {0.7062616096809506416321,0.4090520101599395275116,0.3011248558759689331055,\
0.1880126395262777805328,0.1796709178015589714050,0.2828889950178563594818,\
0.7232380937784910202026,0.7360379849560558795929,0.1852612206712365150452,\
0.7703790138475596904755,0.1914967410266399383545,0.7521587223745882511139,\
0.6205883463844656944275,0.2807604051195085048676,0.2289868686348199844360,\
0.5049233403988182544708,0.8354099662974476814270,0.8174716415815055370331,\
0.0030740275979042053223,0.3677616142667829990387,0.8278525872156023979187,\
0.72754097869619727135,0.5323124285787343978882,0.9267726917751133441925,\
0.9542504185810685157776,0.3162104780785739421845,0.5789009965956211090088,\
0.6881225542165338993073,0.3714061146602034568787,0.1705444059334695339203,\
0.1954363007098436355591,0.978800852317363023758,0.9300233917310833930969,\
0.5357720064930617809296,0.3947123587131500244141,0.1344871171750128269196,\
0.7380615202710032463074,0.588114650454372167587,0.9113173168152570724487,\
0.5682763461954891681671,0.1127616921439766883850,0.9478473584167659282684,\
0.5237770043313503265381,0.8140139640308916568756,0.1400952627882361412048,\
0.2763446993194520473480,0.9059953633695840835571,0.1379901585169136524200,\
0.5603838684037327766419,0.3008610638789832592011,0.4767417535185813904,\
0.8127435916103422641754,0.1988414181396365165710,0.1107953130267560482025,\
0.2159351315349340438843,0.6467244853265583515167,0.6597879612818360328674,\
0.0691898013465106487274,0.9164751060307025909424,0.8635670826770365238190,\
0.5032854294404387474060,0.1832137755118310451508,0.8403698671609163284302,\
0.9247214836068451404572,0.6229452537372708320618,0.2773811477236449718475,\
0.2479109913110733032227,0.3891948559321463108063,0.0436578569933772087097,\
0.8132526441477239131928,0.7686451207846403121948,0.4041520212776958942413,\
0.8579940209165215492249,0.6993723283521831035614,0.0828925184905529022217,\
0.9201254160143435001373,0.5200281282886862754822,0.9351884997449815273285,\
0.8825624976307153701782,0.2245844271965324878693,0.2153332801535725593567,\
0.4327089670114219188690,0.5800157263875007629395,0.8876141034997999668121,\
0.5258982880041003227234,0.859640696551650762558,0.7337234076112508773804,\
0.7134532411582767963409,0.1087165409699082374573,0.8477638359181582927704,\
0.6594733335077762603760,0.7916418449021875858307,0.6067967480048537254334,\
0.4102901122532784938812,0.1958728153258562088013,0.241527963895350694656,\
0.5113455550745129585266,0.9119556057266891002655,0.0928984880447387695313,\
0.7438839026726782321930,0.1938720373436808586121,0.4355978979729115962982,\
0.9922429900616407394409,0.4533818070776760578156,0.8269640663638710975647,\
0.8889675955288112163544,0.4682085178792476654053,0.3856786251999437808991,\
0.4124865522608160972595,0.6955242282710969448090,0.0978972557932138442993,\
0.8728604433126747608185,0.6359515609219670295715,0.4129665228538215160370,\
0.0294486805796623229980,0.1809961968101561069489,0.7658103061839938163757,\
0.1232470511458814144135,0.0170737411826848983765,0.8835507561452686786652,\
0.3164170170202851295471,0.9378212536685168743134,0.3916359134018421173096,\
0.0844073877669870853424,0.6934146797284483909607,0.4618808380328118801117,\
0.9355291295796632766724,0.0842495900578796863556,0.5402926551178097724915,\
0.5613215523771941661835,0.1306025832891464233398,0.5840523042716085910797,\
0.0048661706969141960144,0.2761953338049352169037,0.7478824090212583541870,\
0.0194325004704296588898,0.6444276878610253334045,0.2243968318216502666473,\
0.2478402368724346160889,0.1196091384626924991608,0.1883201440796256065369,\
0.3393343067727982997894,0.959958622232079505920,0.2847225037403404712677,\
0.8766820700839161872864,0.2853349032811820507050,0.5103433504700660705566,\
0.8752629184164106845856,0.5941145820543169975281,0.3945342986844480037689,\
0.4661326166242361068726,0.0073588271625339984894,0.5170202488079667091370,\
0.4690007264725863933563,0.6654530800879001617432,0.9476742581464350223541,\
0.4933638339862227439880,0.2918433747254312038422,0.2016727942973375320435,\
0.7016656589694321155548,0.8736049132421612739563,0.191055159550160169601,\
0.5307010114192962646484,0.8889481076039373874664,0.0115523664280772209167,\
0.4998398735187947750092,0.6700848620384931564331,0.4995208983309566974640,\
0.1538907447829842567444,0.2571737091057002544403,0.9586529098451137542725,\
0.6246025026775896549225,0.9371285131201148033142,0.9923511571250855922699,\
0.3454555813223123550415,0.7558249053545296192169,0.2107181670144200325012,\
0.9372652801685035228729,0.6767524704337120056152,0.7465373151935636997223,\
0.4050982249900698661804,0.5101723610423505306244,0.9497965183109045028687,\
0.0289692510850727558136,0.1634070957079529762268,0.4146909262053668498993,\
0.0021650679409503936768,0.1810030029155313968658,0.4556188201531767845154,\
0.1977851442061364650726,0.6053877938538789749146,0.4363054675050079822540,\
0.8938506888225674629211,0.6104825991205871105194,0.4316215068101882934570,\
0.2315693595446646213532,0.4675927339121699333191,0.6150764389894902706146,\
0.8621218334883451461792,0.3846137975342571735382}

#define RESULT {0.8530491813252144561730,0.4335045992710032103368,0.3105691712500722179158,\
0.1902597554084684006170,0.1816295703181560194928,0.2906848138476661458363,\
0.8828132281173867168533,0.9058504084575731418738,0.1874102230574337113467,\
0.9704039825071290037428,0.193872386487773856745,0.9356368085981127125095,\
0.7147975865621483126944,0.2883777870673323029394,0.233074941053011769343,\
0.5527124758136455762170,1.1053818146408691536209,1.0662960354617996294735,\
0.0030740372807646679752,0.3852902674825339213172,1.0887291048642380175693,\
0.8904988483295813717078,0.589027514944382324380,1.3318828819928720808008,\
1.4110197782284186196478,0.3271889768526293207351,0.6535988324182537834162,\
0.8221846610900451768345,0.3894816929387301396304,0.1722173220386573888607,\
0.1979631660252146874157,1.4871003608159341080608,1.3409392796872054987034,\
0.5936969391438152721108,0.4165742349308056979851,0.1353038396146245825324,\
0.9095411562053630216695,0.666828524289825752547,1.2898724607003566600127,\
0.6385394321030002373618,0.1132420646312260748001,1.3920395973271377787484,\
0.5775879319584731330650,1.058934135979150648055,0.141019050913288951365,\
0.2836009152345423944830,1.2757925164705434806223,0.1388727177433937698403,\
0.6274844177211460483079,0.3102799593553379198241,0.5164764951302321938087,\
1.0562428612021228513385,0.2015041286208432702587,0.1112509099475587071026,\
0.2193551393571971375174,0.7550487488328985197228,0.7757652108685924030596,\
0.0693004223106622879724,1.3037037706937266712259,1.1699705921283873877314,\
0.550576129776577216646,0.1852916762694652719201,1.1164629082914852009623,\
1.3262085052804502005586,0.7183647379901514362643,0.2847210542962326229599,\
0.2531178933037822043062,0.4101140401836267934677,0.0436856155719798008863,\
1.0573204171612526902635,0.9670429620877326604145,0.4276960657258361830913,\
1.156854335998896532445,0.8412159741625684361566,0.0830828979444599852178,\
1.3136054718047147638060,0.5725991803557812787062,1.355492790615370424234,\
1.2159959299593459114419,0.2284380696339281535678,0.2187244120791704826701,\
0.4619038629088654257515,0.6551909258647544698206,1.228594570395200147317,\
0.5804203670779729540286,1.1607121297665823345113,0.9016453790519162181383,\
0.8655510240366158791758,0.1091468929729377396187,1.133211951033040509884,\
0.7752613593928633362040,1.0125659843026109108166,0.6941614960626277808231,\
0.4349761638068749824981,0.1984168266250701806452,0.2463367776963759914199,\
0.5611266025781723732,1.2915741173940875619053,0.0931666557927946503703,\
0.9202369550199469561136,0.1963381019951347117303,0.4654138557801037467954,\
1.531152598161082067918,0.4872328317068129743817,1.0867892686527245160732,\
1.231996743210198141938,0.5057142067082607272965,0.4060123002390389479466,\
0.4375906817398340642455,0.8346659585500807443381,0.0982112043307575288686,\
1.1922276352973026902760,0.7382700256000707117465,0.4381626799731911381386,\
0.0294571964089862109448,0.1829988997674065476229,0.9615720911131384607273,\
0.1238749003414561927761,0.0170754004466078072866,1.2184484210758381728112,\
0.3274176417863428056876,1.3629896342945482246023,0.4129685310508503515159,\
0.0846084171803287293789,0.8310930423770829245100,0.4977934831990530883950,\
1.3564597268158093967827,0.0844494919835185042789,0.5998275037194918946071,\
0.6287920720664262885791,0.1313502491565903540494,0.6609756367352789263592,\
0.0048662091069645377339,0.2834395431640467921675,0.9276488528261589427970,\
0.0194349468870056892034,0.7514487870197579244547,0.2282406932471093830017,\
0.2530426070707028074480,0.1201828114589197499251,0.1905784099029704803385,\
0.352988062986135442411,1.428231701456014857143,0.2926743123472941854324,\
1.2015237487616485800856,0.2933392882321691486069,0.5598095809652490206787,\
1.1980617264883439698764,0.6755313107918682336006,0.4163652909127465440164,\
0.5031101302799753094419,0.0073589599979746594949,0.5686119631638693050491,\
0.5067094190821778143530,0.7848798186452353720100,1.391531190313842980544,\
0.5377167840923406938458,0.3004214213647905529214,0.2044521595617958820146,\
0.8451397437154636316237,1.1940319015577840477960,0.1934142466999154985619,\
0.5868590674474564172769,1.2319476773796440571829,0.0115528803708900857511,\
0.5460945923736312268559,0.792392311128046200608,0.5456805647330320585553,\
0.1551171962759635702955,0.2629975069837691137309,1.4242699230594764170377,\
0.7208802037485926295091,1.3610118285291581408103,1.5315144150725372718114,\
0.3598870449025589057790,0.9425361247426047306419,0.2138933525822492576207,\
1.3614020090881830959972,0.8033042279594378998198,0.925149379458894971506,\
0.4288158062140490778269,0.5595850272060393093554,1.397781375537582970736,\
0.0289773576405878592610,0.1648772252909011803990,0.4402197018088547242343,\
0.0021650713238892428658,0.1830059338084651376910,0.4900039273308094966986,\
0.2004051993228692374327,0.6920756616600035604492,0.4662749757103929471036,\
1.244365984627544330365,0.6996374475054760733173,0.4605850493651166277509,\
0.2357993689411847226811,0.5049411785573922895054,0.7065020490746397596737,\
1.16655281751026174142,0.4047724755535024310227}

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

#define ZRESULTR {0.4622549506274005182149,0.52703543104286754151,0.1827556517526441881572,\
0.3854184255425531224759,0.1693791983359425601385,0.2016515153621968869935,\
0.6100517388487384229379,0.0743340542544716487150,0.0034555684806514769605,\
0.0902156984479902251950,0.3241135973562218053345,0.1760110212342378688266,\
0.2452633832131958513401,0.3516179963878625636120,0.1885474403955421374146,\
0.2692513911062309750477,0.8321367071581778906975,0.5264631357733180472280,\
0.1448019483693787634593,1.0708552390146606203558,0.7125992289896019293849,\
0.3253494174977278885486,0.2001345889867806593365,0.343199696050296210181,\
0.5982400693418048476246,0.3303593637710269814711,0.0125118697596118978038,\
0.3199717638395740970658,0.5061472843217617034739,0.4295842023027047207329,\
0.2465282516242081889413,0.441112206343829249544,0.3219119603275076846316,\
0.4595743499683106469966,0.3660794615870797685808,0.2720878846188879984780,\
0.6972660654407580871350,0.8861718442431221198774,0.2499974132956042649489,\
0.4568598941148580561134,0.1097116340955419794279,0.2836394335106861008811,\
0.0888432657814137161090,1.2330526748467487418992,0.2488174581727523593244,\
0.4160762578947443945943,0.9833017375902159962209,0.3688379479484371614717,\
0.5845995722843282393910,0.3179368621558099627933,0.1652197278936747004696,\
0.3133619394599517771205,0.2199213980004723900663,0.150759611907827051347,\
0.4771998617931776376366,0.4525965638532219448287,0.1138559184839921800680,\
0.0472861014102091622990,0.0790630167394415495075,0.5814611436078345185763,\
0.1667238962880819019841,0.6920944670661310915705,0.1906861485587098559158,\
0.1307919466930784202496,0.1574308648240616004266,0.0036575163164140646332,\
0.2674520780172894851567,0.6735689731298903915047,0.378774827327838792268,\
0.8834054385824835486929,0.0452439501756518244746,0.2447083220521515389834,\
0.7633578523125562620422,0.2078243181020067997800,0.5055052026142557997090,\
0.0245040445592060660007,0.1414831146311008314154,1.2738839652002900137973,\
0.3722074374977639710238,0.2046196449929307825677,1.143222534499549469800,\
0.1658122283683383380026,0.0812521009905448621247,0.8856778536505196530726,\
0.3496455120553698669994,0.8287603905975037266174,0.4374379182437952429119,\
0.3632754548631693114480,0.4065565887334736672187,0.4042071334744706256892,\
0.3223163664494689273354,0.0887658719864259648791,0.2562423384997916109285,\
0.1135016065651749256338,0.4249393631867034448746,0.2555315607462380622650,\
0.0473167224981555015195,0.4038863981107233547263,0.3812800945055046519805,\
1.2694612396144742128001,0.1054006198029389801407,0.5548755616229488207836,\
0.9047138472187979951755,0.2120875774680325287491,0.2977497737582537329359,\
0.3793852632159244175902,0.4216852391721442327999,0.7719661269702553507699,\
0.2909766448133100369411,0.3530800537032807717708,0.3144419867733496687379,\
0.9560423318471079623393,0.7455173297127551945707,0.7647697575929581770282,\
0.2552307563419532465687,1.0071246904841177904899,0.3254058309317561237251,\
0.2493837937457981657197,0.4995060266703120754883,0.3635478722517977989703,\
0.6755663854502449439110,0.4060422219779377672744,0.3354119513743121228089,\
0.3310200365444659897918,0.4956952069626366363941,0.0369899619573449203735,\
0.2949888674609426608697,0.4417162785414836534415,0.2901327037722924995222,\
0.3113814080983853260776,0.0657705595388366343057,0.3468932593605689174154,\
0.1693138876335541220808,0.6604383641650866110240,0.0641696842881706724926,\
0.5420718455446384975716,0.0325460783396350344931,0.2856018727381676169941,\
0.1837045440337584378820,0.4394912998560263073244,0.0373805900188774464787,\
0.0120513737523088183129,0.5299342664002043568061,0.3290248923514364487453,\
0.4232813397541956845771,0.3574733895472496092438,0.0231976592717455104564,\
1.388138041383984555566,0.1495922092250967505578,0.3027074594945061147833,\
0.2906013786665496145822,0.0003641583735012103801,0.0973965246964013098285,\
0.3558085542679609303285,0.2850038039654740895657,0.2413433027684695197923,\
0.2679865438260303767137,0.5240490385593890021454,0.4768351880953459742685,\
0.479037567928660701355,0.9219838892273597430460,0.5060637477109658499686,\
0.3200337217432840941633,0.1160441175011530240413,0.2289284118436291093346,\
0.1740340532494602521219,0.0308192365918868102503,0.4474996159504823212139,\
0.601992209828681956729,0.1542000078067730650666,1.2334589409579821417395,\
0.1251630868814269104128,0.0603288006292757861271,0.4462414520672394746548,\
0.4738309669088760500699,0.5239025685810345667193,0.0238870191275340100490,\
0.1440610501660575526461,0.1990046768508525187880,0.6514000598731057856128,\
0.1047897932784156715957,0.429099188123020058860,0.1037294840964696623908,\
0.6989271583573236634734,0.3217396834648525993927,0.1276324483471362458698,\
0.51478179757014652651,0.7241126844123151329313,0.1471790945486320945079,\
0.7963244963417922539506,0.1499982428024713432269,0.1685430842340138735125,\
0.4298103979039861188838,0.0569704807929593617932,0.2690745622378380996764,\
0.2759880123858853839813,0.0260258640811948625815,0.2968457197721043328009,\
0.2658449701658989750008,0.1869340145100120420540}

#define ZRESULTI {0.6606731609576530495076,1.0352924413907944600766,0.8208009210718538728457,\
0.9855228198847613141354,0.2094799364238341676803,0.2001711092576675676824,\
0.6157063400955946619320,0.6758210089185754387842,0.7073690227519786599686,\
0.6379959312114483749312,0.7691489792855270568595,0.8204717538076390370705,\
0.8992691795054111869590,0.0127212399656787735619,0.7965072880961274748302,\
0.4005414846539865347808,0.5078102333041875082742,0.7442675929748912011519,\
0.6446164613619681515999,0.0651017559751383007027,0.4292463160345246220295,\
0.7218268661973539224164,0.675831849442214971369,1.016847265460205207432,\
0.1468976923106849463707,0.923642083424730087060,0.7198425877508842773977,\
0.2363604106893440193193,0.6057859843456331327971,0.9859934125773722746189,\
0.4546059235344489524167,0.1550160776744255175519,0.5737784438019621902072,\
0.8635696530908816281880,0.1971722712896061546761,0.8187472766310414096225,\
0.3223047939566238695441,0.3428986541358745587793,0.1891956718334251719149,\
0.5208354545548833369750,0.7081524694874962166935,0.7203267007574796210179,\
0.6794103936977667901331,0.3782115660166653348107,0.8246286245352181243362,\
0.4645139855543011786487,0.0308839406628786498910,0.7450942218464524646748,\
0.4028312748892641792509,0.1516356705950959171680,0.7277735925258916882541,\
0.3236400086381776008970,0.2367328033923032648556,0.6968150511733807173087,\
0.3868027398676305850245,0.8499965389936866566600,0.1373663005352325217068,\
0.4969728656393965771088,0.3186158192908606912042,0.2687494032146487410451,\
0.4817044586911616854685,0.8091241454316642212064,0.7745837276131475324092,\
0.7616864033669616951272,0.3357065002058312042088,0.5391311137157557276112,\
0.4267832806356777752832,0.4494653959304828472199,1.07409232431056356205,\
0.9773946189840253540027,0.0903205143448218145119,0.6947943813727951445358,\
0.4320600869989819070582,0.7345738223824911372617,0.4980076917918512258154,\
0.753646277499480543582,0.3015650137112788620186,0.1750320030662110004638,\
0.7223173121894863601966,0.6855367528648522723600,0.4620100861135144620917,\
0.6944021533252422440086,0.5110335784375538148439,0.3672451576697671193905,\
0.8344551064956932107108,0.16170594539219715347,0.7832786921268890534265,\
1.0189285776822756268700,0.7988551639208606447440,0.9719247807905779801274,\
0.9809763387972041392970,0.5656833224514162816732,0.8638733429144607178785,\
0.7441066604777042403640,0.0602264440127683667314,0.4402801210484636462716,\
0.7535199884397705272221,0.9667811691361050119298,1.0493588871220529412653,\
0.1602121578348635611011,0.6872528304663769738170,0.2746926003887739664577,\
0.5904217499472341756928,0.8227770718789775283852,0.9300490141104427177510,\
0.8608967966610167055208,0.6761042332942854837796,0.3862514929365022942065,\
0.5383206023328632738867,0.0087209580621782408633,0.8379947814437334052684,\
0.0514162894427564812205,0.4107196425718538934646,0.8291800128662117908007,\
0.5965153474380232578866,0.1327243053149035900695,0.6666204349503430659496,\
0.1078852700862242136592,0.3410661266092010479589,0.8978136284012265821986,\
0.4999590426790496699994,0.5396356462900459005638,0.8861720904164178680418,\
0.1966865820582558155305,0.7384948934734244518907,0.6889822634082830576929,\
0.7002461629632836803694,0.9202927678328401972507,1.0522470356995357043672,\
0.7633410819201092989417,0.6825068129840573538658,1.032180426666563732852,\
0.6970224139462883883311,0.4448502829538992786596,0.5954971038562514307202,\
0.9072269118636318019355,0.0986096977623509007849,0.4792818549998886235031,\
0.6169344532127701841162,0.5996614784596430158814,0.6997864810760641152143,\
0.6821778350957495851148,0.2159298191152681511973,0.3221001280586711645881,\
0.3026923795099815683862,0.1907050596442291245936,0.7504581695080775327611,\
0.2050797642560421019109,0.4500993401191650811200,1.0616552076870116039231,\
0.3866139253948813192530,0.2889239979563678062391,0.0419016457354280461023,\
0.5291730503201013124937,0.5270449613735276317428,0.3620065401137618765759,\
0.2487989439191494456249,0.9684607851607960338214,0.4659312790851565244665,\
0.3871941948924775833696,0.6912156199525602007228,0.0672566496597855195683,\
1.0473726182255131966770,0.3738845568372618499708,0.4336537904037139901092,\
0.1616849585723995341713,0.6587810404999043800700,0.9478245114156004236250,\
0.7443033774708265326581,0.7329852502477968156924,0.3960943016785423709258,\
0.2387102372514374737378,0.5224647164810142241365,0.9310236182750510902650,\
0.0713841738247450452448,1.0541437904171060413461,0.3977173917051313734028,\
0.0286922698814963753056,0.7352303476692350070465,0.3345177682401353491670,\
0.7257755336052617023412,0.4362132495206523241649,0.7201678840265979264501,\
0.6279860575277228518232,0.3131701555376726897606,0.7154672057942548235587,\
0.7055403294219286802758,0.90419581128384973745,0.5774063124958943582499,\
0.748377680093745611956,0.3188837788675313866804,0.8029276503063254022408,\
0.6186055293635583929301,0.3301554535865592887589,0.907799805701633655275,\
1.0004593122932974313954,0.3297692664500386783288,0.774518614973831232007,\
0.8666563831612021928663,0.5028547740750087813311}




void dtansTest(void) {
	double in[]=SOURCE;
	double res[]=RESULT;
	double out;
	int i;

	for (i=0;i<200;i++){
		out=dtans(in[i]);
		assert(( (fabs(out-res[i]))/(fabs(out)) )<3e-16);
	}
}

void ztansTest(void) {
	double inR[]=ZSOURCER;
	double inI[]=ZSOURCEI;
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex in,out;
	int i;

	for (i=0;i<200;i++){
		in=DoubleComplex(inR[i],inI[i]);
		out=ztans(in);
		assert(( (fabs(zreals(out)-resR[i]))/(fabs(zreals(out))) )<3e-16);	
		assert(( (fabs(zimags(out)-resI[i]))/(fabs(zimags(out))) )<3e-16);			
	}
}

void dtanaTest(void) {
	double in[]=SOURCE;
	double res[]=RESULT;
	double out[200];
	int i;

	dtana(in,200,out);
	for (i=0;i<200;i++){
		assert(( (fabs(out[i]-res[i]))/(fabs(out[i])) )<1e-16);
	}
}

void ztanaTest(void) {
	double inR[]=ZSOURCER;
	double inI[]=ZSOURCEI;
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex *in,out[200];
	int i;


	in=DoubleComplexMatrix(inR,inI,200);
	ztana(in,200,out);

	for (i=0;i<200;i++){
		assert(( (fabs(zreals(out[i])-resR[i]))/(fabs(zreals(out[i]))) )<3e-16);	
		assert(( (fabs(zimags(out[i])-resI[i]))/(fabs(zimags(out[i]))) )<3e-16);			
	}
}

int testTan() {
  printf("\n>>>> Double Tangeant Tests\n");
  dtansTest();
  ztansTest();
  dtanaTest();
  ztanaTest();

  return 0;
}

int main() {
  assert(testTan() == 0);
  return 0;
}
