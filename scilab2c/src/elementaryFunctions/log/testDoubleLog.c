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

#include "testLog.h"

#define SOURCE {0.3628176329657435417175,0.924179898109287023544,0.5243524145334959030151,\
0.7886543427594006061554,0.6525151440873742103577,0.2477638195268809795380,\
0.2364655844867229461670,0.7240293831564486026764,0.8278210600838065147400,\
0.4287728047929704189301,0.4858888480812311172485,0.5923984018154442310333,\
0.0949383648112416267395,0.1356843891553580760956,0.9917455688118934631348,\
0.7212927364744246006012,0.0115638775750994682312,0.0211908905766904354095,\
0.1524727698415517807007,0.9165380974300205707550,0.4467271203175187110901,\
0.5868234331719577312469,0.1882771886885166168213,0.4196520284749567508698,\
0.2730510598048567771912,0.7565603456459939479828,0.9378882069140672683716,\
0.0586007428355515003204,0.5101847248151898384094,0.5031699347309768199921,\
0.7783576548099517822266,0.6856653341092169284821,0.1381576983258128166199,\
0.371037633623927831650,0.6366564910858869552612,0.4961673622019588947296,\
0.2994064847007393836975,0.2392275254242122173309,0.5618183575570583343506,\
0.3218038142658770084381,0.1082227518782019615173,0.1685282415710389614105,\
0.8263800088316202163696,0.4923414406366646289825,0.7863734485581517219543,\
0.6762332352809607982635,0.0258686169981956481934,0.3594204657711088657379,\
0.3436427963897585868835,0.2824054299853742122650,0.1450859513133764266968,\
0.0762176741845905780792,0.5220461571589112281799,0.6713762427680194377899,\
0.0599394328892230987549,0.7267188713885843753815,0.2224657749757170677185,\
0.3122289828024804592133,0.4435700643807649612427,0.3983507198281586170197,\
0.1324583934620022773743,0.8820166247896850109100,0.5455272346735000610352,\
0.2917219498194754123688,0.7739847479388117790222,0.3354639573954045772552,\
0.8127403985708951950073,0.4612239454872906208038,0.6898109326139092445374,\
0.9649041066877543926239,0.8210376314818859100342,0.2802407057024538516998,\
0.9873316427692770957947,0.294199434574693441391,0.4859610591083765029907,\
0.2247181800194084644318,0.9585652919486165046692,0.1503968122415244579315,\
0.0216291621327400207520,0.0688429796136915683746,0.9950710041448473930359,\
0.7568672685883939266205,0.6163959559053182601929,0.0865804632194340229034,\
0.5165374809876084327698,0.1916800136677920818329,0.2940570451319217681885,\
0.3528221980668604373932,0.1317937439307570457458,0.0549608371220529079437,\
0.929352553561329841614,0.737892795819789171219,0.7509917514398694038391,\
0.6889848816208541393280,0.8865169286727905273438,0.6891661235131323337555,\
0.8677108911797404289246,0.7947537912987172603607,0.2496256213635206222534,\
0.3935408894903957843781,0.7297343472018837928772,0.7888072351925075054169,\
0.113488640636205673218,0.4145256043411791324615,0.6172473421320319175720,\
0.7440188056789338588715,0.9038409832864999771118,0.3976829168386757373810,\
0.9472072543576359748840,0.2581262919120490550995,0.1955799385905265808105,\
0.9381833248771727085114,0.4226356102153658866882,0.0937463282607495784760,\
0.9977992679923772811890,0.2042182614095509052277,0.9455819511786103248596,\
0.9336234177462756633759,0.9743702597916126251221,0.4100225553847849369049,\
0.5125095760449767112732,0.0948633304797112941742,0.5688196588307619094849,\
0.7322562676854431629181,0.8108531581237912178040,0.5459008770994842052460,\
0.5022544711828231811523,0.7634959020651876926422,0.7354982374235987663269,\
0.0699520572088658809662,0.6130836438387632369995,0.0965849910862743854523,\
0.5439325878396630287170,0.9187005828134715557098,0.5072866193950176239014,\
0.1335940570570528507233,0.8688194593414664268494,0.7999687767587602138519,\
0.9879787657409906387329,0.7131399479694664478302,0.3067426951602101325989,\
0.5431228461675345897675,0.7330236807465553283691,0.6498145484365522861481,\
0.8018737239763140678406,0.2859625308774411678314,0.1894423719495534896851,\
0.7794728656299412250519,0.5433104271069169044495,0.5268451268784701824188,\
0.1533693112432956695557,0.6041304902173578739166,0.5948378806933760643005,\
0.8857938847504556179047,0.0043053645640611648560,0.1302204323001205921173,\
0.9758609728887677192688,0.9183407831005752086639,0.0624175965785980224609,\
0.9939593323506414890289,0.4122588960453867912292,0.8258536770008504390717,\
0.0376359503716230392456,0.4675730471499264240265,0.4759115139022469520569,\
0.4060978214256465435028,0.0392968021333217620850,0.4401316107250750064850,\
0.3316476037725806236267,0.0877817696891725063324,0.1150833908468484878540,\
0.9667435702867805957794,0.8103649737313389778137,0.3928376468829810619354,\
0.7880131229758262634277,0.4798596971668303012848,0.0270724548026919364929,\
0.6701857983134686946869,0.5602217521518468856812,0.2564360727556049823761,\
0.2626037681475281715393,0.4447338129393756389618,0.8522944338619709014893,\
0.2347065494395792484283,0.3277532672509551048279,0.2253599218092858791351,\
0.3468936551362276077271,0.7743145865388214588165,0.1285835551097989082336,\
0.1156307714991271495819,0.2054340392351150512695,0.4535544612444937229156,\
0.6516549764201045036316,0.0710035725496709346771,0.1265540253371000289917,\
0.4974718545563519001007,0.0879269847646355628967,0.1462626229040324687958,\
0.715134423226118087769,0.9305738122202455997467}

#define RESULT {-1.0138549594808059506335,-0.0788485313675790222554,-0.6455912738997077182646,\
-0.2374271494900490608870,-0.4269209307253117313685,-1.3952793271990111545477,\
-1.4419526017799386696794,-0.3229233029497151630238,-0.1889582589621221220266,\
-0.8468280928949678543205,-0.7217753888910144466351,-0.5235758944053595653756,\
-2.354527389398466841186,-1.9974237581445692946147,-0.0082886876471943305572,\
-0.3267102095711482134810,-4.459869041610169837497,-3.8541838794260296907623,\
-1.8807692572941765440930,-0.0871516441756800402940,-0.8058073398690168698266,\
-0.5330312996797691438289,-1.6698399941066854879068,-0.8683294147345963498452,\
-1.2980964690333058886296,-0.2789729794097077220094,-0.0641245194730828693697,\
-2.8370079061049158219987,-0.6729824133243695882811,-0.6868273235307851276588,\
-0.2505691498856313370602,-0.3773656214470872405364,-1.9793595047655996310709,\
-0.9914517831797942104544,-0.4515250293249062352174,-0.7008419853775434971155,\
-1.205953148244055972427,-1.4303401906823356437570,-0.5765766885249945516989,\
-1.1338131915858427056776,-2.2235636585360341044293,-1.7806519374711546888079,\
-0.1907005521377241608061,-0.7085828181522180191365,-0.240323473997209546837,\
-0.3912172398408133022762,-3.6547247438886865111840,-1.0232623619826317629133,\
-1.0681525436893481995071,-1.264411545554370741584,-1.93042894450046809141,\
-2.5741618985048786427683,-0.6499992713325659643431,-0.3984255796794416437656,\
-2.8144206784459675496635,-0.3192155730871417684824,-1.502982009541258934249,\
-1.1640184411209602011184,-0.8128995091446955534309,-0.9204224561330225373723,\
-2.0214866944753584476757,-0.1255443741850884864508,-0.6060025488810325544620,\
-1.231954157015291428934,-0.2562031110919770759971,-1.092240757863258915350,\
-0.2073435333764902521736,-0.7738715719712579987899,-0.3713377296431035756719,\
-0.0357265538888332026546,-0.1971863344268207918208,-1.2721063818886333418590,\
-0.0127492850765575892191,-1.223497392724554932997,-0.7216267835832522736794,\
-1.4929081951001816896962,-0.0423175999341945593968,-1.8944780628936490618486,\
-3.8337127761178795282149,-2.6759270254015836698613,-0.0049411834200203501311,\
-0.2785673796390666367984,-0.483865736386189515539,-2.446681086792801718133,\
-0.6606074257995434573232,-1.651927892749795789840,-1.2239814994040887352611,\
-1.0417910371382139711471,-2.026517124423018234580,-2.9011343997056400212387,\
-0.0732671142462539837226,-0.3039567280501898061118,-0.2863606107139139989037,\
-0.3725359507043504159185,-0.1204550575726043570857,-0.3722729288835950889336,\
-0.1418966944811957953121,-0.2297229087732643171282,-1.3877929980613914473508,\
-0.9325703042223095762253,-0.3150747190128889152483,-0.2372333033314831252092,\
-2.1760525295696577785520,-0.8806205346832632896437,-0.4824854567490562962107,\
-0.2956889680183093505050,-0.1011018375069230867958,-0.9221002825850308504130,\
-0.0542373561426655603768,-1.3543063102932182406590,-1.6317860900845253535607,\
-0.0638099067725128449302,-0.8612449127611128130155,-2.3671627801172654415041,\
-0.0022031571770593774348,-1.5885659482121525787335,-0.0559547196755256631695,\
-0.0686821150485829451382,-0.0259639040526286474231,-0.8915431076633286711086,\
-0.6684358831783273613425,-2.3553180497276513527538,-0.5641918391516044239964,\
-0.3116247338224413798713,-0.2096683039932461523058,-0.6053178634921361211951,\
-0.6886483730214458809371,-0.2698475216395072595610,-0.3072071353764207479742,\
-2.659945168598087494871,-0.4892539023727084379622,-2.3373319216128076725170,\
-0.6089299592172232600262,-0.0847950173155939540548,-0.6786791108759814283857,\
-2.0129495019748864237386,-0.1406199321004115432299,-0.2231825811274127380202,\
-0.0120940736302183569906,-0.3380775973662459854552,-1.181746009333312530387,\
-0.6104197485997391314783,-0.3105772710053884000381,-0.4310682668987352861301,\
-0.2208041349135003439397,-1.25189448766300226445,-1.6636704065163092636226,\
-0.2491374010581904052675,-0.6100744334370675758805,-0.6408486505219985751580,\
-1.8749064671471911136535,-0.5039650609751163967687,-0.5194663799859419173188,\
-0.1212709911627764675091,-5.4478934608177302933996,-2.038526631411456513376,\
-0.0244351485261014196582,-0.0851867338269072515988,-2.7739080469083896574034,\
-0.0060589862906551463645,-0.8861037385262900967220,-0.1913376676415258770270,\
-3.2797955584796012473703,-0.7601996918711692030612,-0.7425233371947113081291,\
-0.9011612089296217043000,-3.2366121340710831688625,-0.8206814815116268979622,\
-1.1036823082060371881141,-2.4329014344197728014763,-2.1620982756055884266289,\
-0.0338219993709664781822,-0.2102705479450195091840,-0.9343588647242980771424,\
-0.2382405357403041268327,-0.7342615153765646995865,-3.609238495954611991579,\
-0.4002002941250653034189,-0.5794225876492602456125,-1.36087587445700952671,\
-1.337108967835097139698,-0.8102793489627861944768,-0.1598232322015146200656,\
-1.449419270934711789778,-1.1154941876589379301521,-1.4900565023732303959747,\
-1.05873701535465292167,-0.2557770454111949476328,-2.0511763516400991491651,\
-2.1573531687271665369110,-1.5826302735280548539265,-0.7906399256902217898002,\
-0.4282400343889684046772,-2.6450250856057104797969,-2.0670859842226763092299,\
-0.6982162977399214431884,-2.4312485274946018520836,-1.9223514861397812403254,\
-0.3352847494467096622905,-0.0719538807151878373469}

#define ZSOURCER {0.3140813848003745079041,0.5769402063451707363129,0.1306138429790735244751,\
0.0478980806656181812286,0.4500174494460225105286,0.0384718659333884716034,\
0.483350999653339385986,0.2981918179430067539215,0.7112689120694994926453,\
0.9268360524438321590424,0.9477838929742574691772,0.1729496796615421772003,\
0.2750928336754441261292,0.0044281478039920330048,0.0611358620226383209229,\
0.1950612799264490604401,0.3789803450927138328552,0.2549188635312020778656,\
0.1764185149222612380981,0.6008180272765457630157,0.3703392641618847846985,\
0.2908470141701400279999,0.5384815335273742675781,0.8090293356217443943024,\
0.9260985879227519035339,0.1576966657303273677826,0.9518593531101942062378,\
0.2709982101805508136749,0.1609848598018288612366,0.8782086591236293315887,\
0.5091647170484066009521,0.7951062084175646305084,0.8432204117998480796814,\
0.5806765086017549037933,0.3487791065126657485962,0.9397577759809792041779,\
0.4363934816792607307434,0.5549766751937568187714,0.9105900451540946960449,\
0.5684339576400816440582,0.1862502051517367362976,0.0800832151435315608978,\
0.6585252787917852401733,0.1606054832227528095245,0.9711584830656647682190,\
0.3668168033473193645477,0.7386338301002979278564,0.9722552285529673099518,\
0.1349937235936522483826,0.4595781317912042140961,0.5414639282971620559692,\
0.6397600513882935047150,0.0211964594200253486633,0.4408156829886138439178,\
0.6374878138303756713867,0.3208820023573935031891,0.4267518399283289909363,\
0.7819778784178197383881,0.0543234180659055709839,0.9666189108975231647491,\
0.6948409983888268470764,0.1846996019594371318817,0.3645029179751873016357,\
0.8176643461920320987701,0.664914294146001338959,0.7559730983339250087738,\
0.5525381658226251602173,0.7192269531078636646271,0.1989364298060536384583,\
0.8610532465390861034393,0.1300329938530921936035,0.347959163133054971695,\
0.5025534434244036674500,0.4978472082875669002533,0.4675923939794301986694,\
0.9447452803142368793488,0.9599315756931900978088,0.5365384514443576335907,\
0.8122785724699497222900,0.6470989421941339969635,0.7010180121287703514099,\
0.6681951484642922878265,0.9593638796359300613403,0.0149199557490646839142,\
0.6199735002592206001282,0.4061129498295485973358,0.0471306145191192626953,\
0.8433605083264410495758,0.0635268418118357658386,0.9836421324871480464935,\
0.4434677045792341232300,0.8565507535822689533234,0.9080012599006295204163,\
0.4922491232864558696747,0.1930142603814601898193,0.3759337724186480045319,\
0.2437626412138342857361,0.1035623974166810512543,0.9936000052839517593384,\
0.5569599089212715625763,0.3858396532014012336731,0.7191527518443763256073,\
0.1707325801253318786621,0.2878904812969267368317,0.4294657362625002861023,\
0.8917979537509381771088,0.6188817229121923446655,0.3444608678109943866730,\
0.0692929709330201148987,0.3619817639701068401337,0.1783103235065937042236,\
0.8941529677249491214752,0.9010278200730681419373,0.0533773354254662990570,\
0.4162023533135652542114,0.9438270372338593006134,0.9242387460544705390930,\
0.8710649865679442882538,0.2808376699686050415039,0.8244629004038870334625,\
0.4650857029482722282410,0.1462343498133122920990,0.5975636970251798629761,\
0.3067605351097881793976,0.2377215037122368812561,0.0711208949796855449677,\
0.8753139786422252655029,0.4413500339724123477936,0.7631150623783469200134,\
0.9679268277250230312347,0.3924236092716455459595,0.717360940296202898026,\
0.8640465112403035163879,0.7354763629846274852753,0.0304915383458137512207,\
0.6331009590066969394684,0.4550241930410265922546,0.3173553734086453914642,\
0.8250397499650716781616,0.2725940425880253314972,0.3458735281601548194885,\
0.5352854127995669841766,0.7017193175852298736572,0.9817278520204126834869,\
0.2777477568015456199646,0.1314821145497262477875,0.366813333705067634583,\
0.7377605927176773548126,0.9103105561807751655579,0.3637479650788009166718,\
0.8207867145538330078125,0.3059372254647314548492,0.9788405327126383781433,\
0.9970494522713124752045,0.4636328797787427902222,0.7769650523550808429718,\
0.3400075891986489295959,0.0353285889141261577606,0.2607673071324825286865,\
0.5790986777283251285553,0.1250711670145392417908,0.0372988111339509487152,\
0.9382179621607065200806,0.5585843441076576709747,0.7192503632977604866028,\
0.3599752518348395824432,0.6758626028895378112793,0.2222136431373655796051,\
0.7860159231349825859070,0.1736893891356885433197,0.2674629595130681991577,\
0.7357366015203297138214,0.0550541067495942115784,0.5923380698077380657196,\
0.2162457890808582305908,0.7718841419555246829987,0.0926524316892027854919,\
0.7626169077120721340179,0.7347808051854372024536,0.8017499190755188465118,\
0.7732572900131344795227,0.2559880572371184825897,0.1179054826498031616,\
0.9232815303839743137360,0.6709534404799342155457,0.6071323617361485958099,\
0.4574467372149229049683,0.8206311021931469440460,0.0896153757348656654358,\
0.3426358769647777080536,0.1674894802272319793701,0.9481152505613863468170,\
0.9504805644974112510681,0.3436607695184648036957,0.2889420483261346817017,\
0.5325344172306358814240,0.2558945687487721443176,0.8863505902700126171112,\
0.0421485081315040588379,0.4876015805639326572418}

#define ZSOURCEI {0.347978035919368267059,0.2037199228070676326752,0.5962978359311819076538,\
0.8342303414829075336456,0.6809655660763382911682,0.9127784068696200847626,\
0.5243799723684787750244,0.7204323844052851200104,0.3259664541110396385193,\
0.1506391367875039577484,0.9124387521296739578247,0.6345743131823837757111,\
0.9268973069265484809875,0.7633614349178969860077,0.5918717086315155029297,\
0.9057438620366156101227,0.3263365356251597404480,0.3912780000828206539154,\
0.4635267537087202072144,0.0849754814989864826202,0.5800507226958870887756,\
0.7945564310066401958466,0.3823457323014736175537,0.3010852993465960025787,\
0.5789428642019629478455,0.2627451247535645961761,0.5713048521429300308228,\
0.1848654565401375293732,0.9971724869683384895325,0.4520535501651465892792,\
0.0334019884467124938965,0.4553878181613981723785,0.7851976407691836357117,\
0.4941168962977826595306,0.9304408635944128036499,0.7621670593507587909698,\
0.9264887655153870582581,0.7199950958602130413055,0.3973621018230915069580,\
0.8769331262446939945221,0.6766644334420561790466,0.8431562236510217189789,\
0.7608711589127779006958,0.8287630719132721424103,0.0037989662960171699524,\
0.9451942699961364269257,0.6311131268739700317383,0.0763222672976553440094,\
0.4486519275233149528503,0.1080312891863286495209,0.8351444136351346969604,\
0.3109649871475994586945,0.1235694894567131996155,0.0363539229147136211395,\
0.6609512977302074432373,0.9844443709589540958405,0.0688076755031943321228,\
0.5140342987142503261566,0.3807653579860925674438,0.1549817589111626148224,\
0.6850274773314595222473,0.0382853033952414989471,0.5224257782101631164551,\
0.7454454028047621250153,0.4607118470594286918640,0.4753002314828336238861,\
0.8575385268777608871460,0.8073885519988834857941,0.7132545644417405128479,\
0.0811268086545169353485,0.5751824118196964263916,0.884696914348751306534,\
0.5624709790572524070740,0.7315255901776254177094,0.6099120099097490310669,\
0.0705954921431839466095,0.8552806274965405464172,0.7045627343468368053436,\
0.5928074717521667480469,0.8517647930420935153961,0.2603117255493998527527,\
0.8596871509216725826263,0.3943212013691663742065,0.3333164160139858722687,\
0.2511775353923439979553,0.5570420245639979839325,0.7276714108884334564209,\
0.9383780122734606266022,0.1971746077761054039001,0.1607607132755219936371,\
0.7815325502306222915649,0.1760376212187111377716,0.2801528992131352424622,\
0.4699970218352973461151,0.3507726117968559265137,0.5713973813690245151520,\
0.4563077641651034355164,0.9214398502372205257416,0.4339873101562261581421,\
0.3514866163022816181183,0.1816438222303986549377,0.9070622171275317668915,\
0.7665811367332935333252,0.9807842955924570560455,0.1198607003316283226013,\
0.0508546582423150539398,0.2581452894955873489380,0.1401008707471191883087,\
0.5514106499031186103821,0.7882929998449981212616,0.8028824776411056518555,\
0.2425694861449301242828,0.7024780390784144401550,0.0922905071638524532318,\
0.4318286012858152389526,0.0804965649731457233429,0.7126307198777794837952,\
0.6893844078294932842255,0.2756213061511516571045,0.6968217701651155948639,\
0.4598932703956961631775,0.6099067903123795986176,0.3065654132515192031860,\
0.0749373403377830982208,0.9619921119883656501770,0.4158898773603141307831,\
0.3287452235817909240723,0.7406168007291853427887,0.5725225014612078666687,\
0.9504556744359433650970,0.1849336978048086166382,0.8698030491359531879425,\
0.6907873982563614845276,0.9524399931542575359344,0.6490485109388828277588,\
0.9960058168508112430573,0.2040582066401839256287,0.3800008497200906276703,\
0.9729049820452928543091,0.9110585046000778675079,0.3810073928907513618469,\
0.7869612383656203746796,0.5560158789157867431641,0.8529843934811651706696,\
0.4350629774853587150574,0.5956362797878682613373,0.7071880977600812911987,\
0.5747222309000790119171,0.4764349022880196571350,0.6098947445861995220184,\
0.9666662178933620452881,0.3874611915089190006256,0.0715632727369666099548,\
0.6122049516998231410980,0.9575729314237833023071,0.7723352131433784961700,\
0.1287384750321507453918,0.3884150418452918529510,0.2353963479399681091309,\
0.6542267077602446079254,0.3286431683227419853210,0.024017625954002141953,\
0.1042741741985082626343,0.9314296473748981952667,0.8185661518946290016174,\
0.8156488086096942424774,0.8688247688114643096924,0.3549220249988138675690,\
0.3890381073579192161560,0.6415715864859521389008,0.4902750719338655471802,\
0.3509976905770599842072,0.8516392158344388008118,0.1348936217837035655975,\
0.1156354099512100219727,0.8810075619257986545563,0.8367286501452326774597,\
0.5032693906687200069427,0.4486711751669645309448,0.9319602106697857379913,\
0.7298459419980645179749,0.3388367067091166973114,0.4314213804900646209717,\
0.7317318231798708438873,0.9655342241749167442322,0.2621376193128526210785,\
0.2050140891224145889282,0.2826355365104973316193,0.3973353477194905281067,\
0.7437736871652305126190,0.8185287192463874816895,0.3071001493372023105621,\
0.9627068741247057914734,0.9475456266663968563080,0.6546552237123250961304,\
0.1992082078941166400909,0.3616109425202012062073,0.9388273353688418865204,\
0.0409001447260379791260,0.0758434669114649295807}

#define ZRESULTR {-0.7576646139762764908809,-0.4912662732014974609207,-0.4935831983604013761813,\
-0.1796001444111503253520,-0.2030603062114124668369,-0.0903746939402042676059,\
-0.3380442117380291211504,-0.2488385719103628768156,-0.2453827611475934422636,\
-0.0629419446509737884332,0.2743030686751847802007,-0.4189753318430110562431,\
-0.0337034837449739430038,-0.2700068328094388236948,-0.5191589716059612502619,\
-0.0763304013057857499991,-0.6929039668216129266298,-0.7614418400301237177530,\
-0.7012514181881327468560,-0.4995602487864141960650,-0.3736855282655331400576,\
-0.1670990767606896909570,-0.4148838171877601843640,-0.1470641870540525808497,\
0.0881657571965975273010,-1.1827451998005302780115,0.1044920740886167709327,\
-1.1145963776166571967963,0.0100332050022288142566,-0.0123498399546466911675,\
-0.6728365416861274983518,-0.0874315516128119363248,0.1416698281269971604335,\
-0.2712125731855208887744,-0.0063567040970050154788,0.1906009971260032298535,\
0.0238331967155752874610,-0.0953429917974444041118,-0.0065067191893498198957,\
0.0440644425532304637172,-0.3540655459766552382028,-0.1661126167793314234444,\
0.0062509933701612868662,-0.1693877982336349785619,-0.0292579566847096204929,\
0.0137816953226981269570,-0.0288761524361324552201,-0.0250652390791611112686,\
-0.7581745137578204118967,-0.7505545612383084375097,-0.0046973071232757198853,\
-0.3406170651999906873186,-2.0764518222153585114143,-0.8157393323281721952966,\
-0.0852474852363154095292,0.0348077956215509243254,-0.8387202021909221372198,\
-0.0663540586103768398329,-0.9554969196553003696337,-0.0212599130834864695483,\
-0.0245601140031842454792,-1.6679899099681032570430,-0.4509584277017124609443,\
0.1011698547763601602201,-0.2120439010955574854478,-0.1131958883879479044188,\
0.0199327284817682297280,0.0781443465987670671247,-0.3004592565973881468366,\
-0.1451799924584522560878,-0.5281452333714923286223,-0.0505933914241510074294,\
-0.2819958038859460280889,-0.122323084811984963971,-0.2632782651610236501760,\
-0.0540558326414990047981,0.2512879183645665981395,-0.1214932149359973512226,\
0.0055773659320434761794,0.0673704632706614986448,-0.2906343733694730646633,\
0.0851020319327377705587,0.0365640112295984101576,-1.0976622196833336619903,\
-0.4020870876485082012763,-0.3719849821436939651953,-0.3158125612041708385469,\
0.2324359424588408329360,-1.5742845766045041600023,-0.0033130260706617652329,\
-0.1069329039454427060507,-0.1341564770393289252048,-0.0510429776001832605226,\
-0.3847912680433241972011,-0.9153668051115183557087,-0.3798345871473772783489,\
-0.6590618454479428844905,-0.0755413642077243097095,0.0808833545731707098669,\
-0.417646722764209388234,-0.8522405945532404158982,0.1463133685463073596633,\
-0.2416082657366604991012,0.0219217192558878656850,-0.8077093656959043466159,\
-0.1128924015633438332484,-0.3996389102953575300781,-0.9892317511551623754329,\
-0.5874413267393940873973,-0.1422192352759769073955,-0.1954743580270074387872,\
-0.0763719684521397823573,0.1332266112260754309382,-2.2385346085566988350024,\
-0.5112419918132667939759,-0.0541885453710462053345,0.1544990573544810508189,\
0.1051325180789595692410,-0.9326914829433226028499,0.0764891336322670034598,\
-0.4245421077023512346216,-0.4665013282915527192962,-0.3980722181205589849107,\
-1.152706389176620049852,-0.0091123646200983177135,-0.8629224644504486230190,\
-0.0671956049468366567456,-0.1483256896732535745631,-0.0470857769330114903084,\
0.3049502630226416100001,-0.8351336293434713509143,0.1199665328310368234144,\
0.100965515388687754328,0.1851149271955789266109,-0.4311455286578065315695,\
0.1656739977240755667953,-0.6957805672270640506838,-0.7030137346248552798755,\
0.2434410334133135511703,-0.0502776447144934607314,-0.6643994214275527054880,\
-0.0494471424057717073852,-0.1105954430789197057150,0.2627700024490645658304,\
-0.6613338575819812659162,-0.4943364682181946023753,-0.2273273919604619497381,\
-0.0669964153308245241591,0.0270809622513717325465,-0.3423076587443550367063,\
0.2375373770411028651051,-0.7058599113455784612725,-0.0187211007688289424178,\
0.1570046667576522059218,0.0619494218295955287323,0.0912342621811634557627,\
-1.0118000314587793919685,-0.9415613562651380386015,-1.04611739737066766764,\
-0.1350076179226963601909,-1.045153664947628735504,-3.1153566294303054462489,\
-0.0576346967934074291828,0.0825782285147220879162,0.0858710750707356584854,\
-0.1147913938093602786994,0.0959901869720326261781,-0.8704897942843184965866,\
-0.1312205414500346722928,-0.4084692473683823599195,-0.5825265796688483543875,\
-0.2043543873503067542785,-0.1585071715930248537063,-0.4983971045262390875408,\
-1.405591688480441803222,0.1581272765392360557524,-0.1721619754559372272862,\
-0.0902428450071243726249,-0.1497365537505691013287,0.2065025609822116192671,\
0.0613750886386554700413,-0.8564551079948240497330,-0.804653684520539647096,\
0.1638887899169061412863,0.1619231669215081825808,-0.4135383706484943022730,\
-0.6905772083929240245936,-0.1416337472709212619293,-0.8981660716461068449945,\
-0.1997922350746098307805,-0.1797380100619248022298,-0.0033949848444226812805,\
0.3022174959979692654422,0.0079098230306947625579,-0.3346557902575436060921,\
-0.5646231542298842942529,-0.8141969637368523526888,0.2555170413707821830407,\
-2.8347892907784113525338,-0.7063037006217763869032}

#define ZRESULTI {0.8365523024247201178127,0.3394374381847692356828,1.355160662925530390410,\
1.5134434006476746858993,0.9868300791435297147913,1.528673168936313331301,\
0.8260899014265745687879,1.1783591647662248202977,0.4297253343366602140740,\
0.1611216299891750081130,0.7663999599077054858398,1.3047144916618338417180,\
1.2822880914611145541926,1.5649955384218765530591,1.4678689248356304730692,\
1.3586758006659467312716,0.7108977814935093508808,0.9933651109027943348906,\
1.2071246910756632253481,0.1405010934420483359464,1.0025763105214653414521,\
1.21989563358396813086,0.6174353300937470701015,0.3562751652356153653223,\
0.5587012199090121145062,1.0302380576516638743811,0.5405656721364887618009,\
0.5986555168040823549092,1.4107360213988626718162,0.4753739371565622318094,\
0.0655076733245526648952,0.5201329289544929235234,0.7497818580560413614933,\
0.7050355621930805005704,1.2121540141336599738509,0.6814274485183255958276,\
1.1306014284455374596661,0.9141116926495304051414,0.4114688990228685949724,\
0.9956827833608694611200,1.3022000158632660582469,1.4761001233596913184698,\
0.8573788009054216230354,1.379379585022410426021,0.0039117682490215858332,\
1.2006025140002900553071,0.7070620318380608226860,0.0783395850399789817065,\
1.2785255791075276210478,0.2308747034561683952880,0.9955835564035591112031,\
0.4524376138027601523817,1.4009149235535949262754,0.0822834615192538504358,\
0.8034667275967887212218,1.2557032585647818212493,0.1598599852603853899158,\
0.5815258576469973794687,1.4290836436420499833133,0.1589807896730044689537,\
0.7782863583371778526399,0.2043896563749957318024,0.9616073478994561218869,\
0.7392289023091881405847,0.6059375681629087795343,0.5612744745893767372991,\
0.9984170767670760282542,0.8430838000818645650014,1.29879528501095431459,\
0.0939407915654127262384,1.3484611857054962236191,1.1960714214373144859138,\
0.8415982269448546437829,0.9732366936364994502995,0.9167206383382787704406,\
0.0745857498941502189416,0.7278097264573785141195,0.9199632393837048338625,\
0.6304525502744320331061,0.9211062195464506663356,0.3555526540057888373880,\
0.9100796877015666641597,0.3899732161636976779384,1.5260640477653748536824,\
0.3849315818496458763143,0.9408368768631211187525,1.5061175798419510485360,\
0.838676229611447277001,1.2591119550131308901797,0.1620018843959732390836,\
1.0546671087981356329522,0.2026968016035011754816,0.299271305708051660321,\
0.7622771187183752239491,1.067757629024185028754,0.9888735682758375000745,\
1.0801593307389727449674,1.4588740911245949849473,0.4118082358815949306496,\
0.5629599662610861310341,0.4399958138718327860239,0.9004381750108224613527,\
1.3516535386697041687398,1.2852850170743990165789,0.2721670546404741375390,\
0.0569631738604013462823,0.3951736758236387148102,0.3862903740059538404417,\
1.4457867030840705346861,1.1403205655573340759901,1.3522555755333163229892,\
0.264908300074692404369,0.6622029195378335009181,1.0464389789763977045567,\
0.8038225849224520658254,0.0850815175089563863198,0.6568351393392068970911,\
0.669491640154789569017,0.7760242270392859742500,0.7016907095208140265896,\
0.7797846541592131641707,1.335473484345777617222,0.4740136251481967821775,\
0.2395937042296285568455,1.3285359486862795552753,1.401425714315664317056,\
0.3592738595863486095183,1.0333805631652628331807,0.6436572543635337151358,\
0.7762911838119904706090,0.4403927201098556398762,0.8811512979588507210593,\
0.674423430961778702653,0.9132365009577151360176,1.5238520140402758151765,\
1.00458246450610100275,0.4215689680173497211335,0.874990498737184374534,\
0.8674547514202983755638,1.2800682610709759323697,0.8336956783393613124034,\
0.9734878037135866746254,0.6700663792657182149526,0.7153420705223627606983,\
1.0026132338500262086711,1.3535381134312993722801,1.0923065980664201646277,\
0.6618099327465949421878,0.4821732258146940175436,1.033019939116806895640,\
0.8668307442664776596430,0.9024324853624734465996,0.0729804020494689703602,\
0.5506621520352920073904,1.1198886719657494825952,0.7824098301910974440077,\
0.3619529370272654977825,1.4800901440707066036850,0.7343084050589578914980,\
0.8462379976616437593506,1.2071528313995831815930,0.5720924999360996743292,\
0.1106864208392598775132,1.0305927183418297499173,0.8498909387724447039858,\
1.15517062965696792887,0.9096742728488710350021,1.01141253782177353848,\
0.4595989696224830889371,1.3064089912173471041967,1.071386424855859109684,\
0.4451357270611538408112,1.5062412806888749727818,0.2239121309027737871666,\
0.4910523338147070870896,0.8513221989625705532490,1.460513851259993778342,\
0.5833202395880134893957,0.5481910770820362932554,0.8603624185522980027940,\
0.7565250407629732221082,0.9237902776741101495972,1.3040155501467787235725,\
0.6701717740731456540715,0.9634987985586029868301,0.4075854524817449364704,\
0.4213313914917447000619,0.3316883655770838101873,1.3489670985956061510791,\
1.1391029061589752480188,1.3689599297259111843061,0.3132420296422914196555,\
0.7917886209906572769768,1.2228656637749606428400,1.1551462426298317875961,\
0.3579601167993540777879,0.9549534865181378284760,0.8141418225805733266398,\
0.7703675837106083168493,0.1543074266086776613616}




void dlogsTest(void) {
	double in[]=SOURCE;
	double res[]=RESULT;
	double out;
	int i;

	for (i=0;i<200;i++){
		out=dlogs(in[i]);
		assert(( (fabs(out-res[i]))/(fabs(out)) )<1e-15);
	}
}

void zlogsTest(void) {
	double inR[]=ZSOURCER;
	double inI[]=ZSOURCEI;
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex in,out;
	int i;

	for (i=0;i<200;i++){
		in=DoubleComplex(inR[i],inI[i]);
		out=zlogs(in);
		assert(( (fabs(zreals(out)-resR[i]))/(fabs(zreals(out))) )<1e-14);	
		assert(( (fabs(zimags(out)-resI[i]))/(fabs(zimags(out))) )<1e-15);			
	}
}

void dlogaTest(void) {
	double in[]=SOURCE;
	double res[]=RESULT;
	double out[200];
	int i;

	dloga(in,200,out);
	for (i=0;i<200;i++){
		assert(( (fabs(out[i]-res[i]))/(fabs(out[i])) )<1e-15);
	}
}

void zlogaTest(void) {
	double inR[]=ZSOURCER;
	double inI[]=ZSOURCEI;
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex *in,out[200];
	int i;


	in=DoubleComplexMatrix(inR,inI,200);
	zloga(in,200,out);

	for (i=0;i<200;i++){
		assert(( (fabs(zreals(out[i])-resR[i]))/(fabs(zreals(out[i]))) )<1e-14);	
		assert(( (fabs(zimags(out[i])-resI[i]))/(fabs(zimags(out[i]))) )<1e-15);			
	}
}
int testLog(void) {
  printf("\n>>>> Double Logarithm Tests\n");
  dlogsTest();
  zlogsTest();
  dlogaTest();
  zlogaTest();
  return 0;
}

int main(void) {
  assert(testLog() == 0);
  return 0;
}