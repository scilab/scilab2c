/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Arnaud TORSET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "testAtan.h"


#define SOURCE {0.2271646957046519754719f,0.0509554588447201708967f,1.85687282969809008826f,\
-0.0600149264751901750925f,0.1154209251583080408921f,0.3931023811137128731730f,\
-0.3192353063868129114944f,-0.1509983292012369027191f,-0.3971164405532471297633f,\
-0.4879179365092389808467f,0.8039704485327389127391f,-1.6086183006520318183874f,\
-1.4550051558571557297483f,-2.0613539298303464875062f,2.3614638061462338569640f,\
-1.1480101088176024592968f,-0.2658609898928261938700f,1.5427739450302764279144f,\
0.7423335722389889923534f,0.3296187860375025535653f,0.8154893385384427428875f,\
-0.7055736212996815970300f,0.2819847871866195676560f,0.3955156539663013948172f,\
-1.0216483261612141486552f,-0.9217285194529017955389f,0.1388701122197689430404f,\
0.2561008611862776729318f,0.9488840790776944533746f,-0.6033504831579518112861f,\
-1.255847241084065313288f,-1.5093582375924872174267f,-0.2071228671170260715595f,\
-0.3992159361232490155658f,1.1415777038585108726920f,1.2096296402394912661293f,\
1.2000346264198469281581f,0.7648344037454491983752f,0.5126417298496636076877f,\
-0.6005237850264322219118f,-2.2808601123468448257370f,-1.0478316411512684780405f,\
0.3987387706615069249416f,-0.7901557685645255180162f,0.9472076517346639246142f,\
1.2552561019596721880731f,0.4826393798173508331573f,-1.9230607741483070061150f,\
0.4005546162223627693066f,0.1739168390171661471300f,-0.0825727057882147952306f,\
0.8203738818332056981220f,0.9228038015421474726807f,0.4570111559683089907935f,\
0.9219829463190309937204f,1.604104528474896707024f,-0.7201236539398426783620f,\
0.6869793119903724321063f,-1.3399970213280150144186f,0.6385085849830633986102f,\
-2.1392676796592846599765f,0.3031216472852934495918f,1.4731483222685206602165f,\
-0.6666106701273177836953f,2.5253251451367195735f,-0.3387226520606179125394f,\
0.1099263677503663910739f,0.2055796316301525261672f,0.4180157426427644207223f,\
-0.5676554981767482077615f,0.1457986457557736703627f,-1.887021345850510067876f,\
-2.0255226332731517402408f,-1.5021973207858168031237f,-0.1565213082415607970255f,\
1.792895025421787247311f,0.9902819037203779428680f,-1.3877868870664777922741f,\
-1.9114516712610110094062f,-0.1241624780676525430234f,-0.1512289550370426727266f,\
1.0440663453119916059819f,0.8275748256509259936919f,0.9453274386638104154201f,\
0.8371330563424048687438f,0.7021707191099652023425f,-1.06501992349112173386f,\
0.0584382761085656052269f,0.3908208204693481846448f,0.1507745763925768811564f,\
1.0041017891872929812536f,-1.2313120848428102949157f,0.3394895696418271380246f,\
-0.0827142520512850892844f,0.6446222176264210235175f,-1.4935026770981445487507f,\
-0.8052775249062644746800f,-0.5748653112322126279565f,0.9754979932482783500092f,\
-2.2884524191498907264020f,2.022987266935787342703f,0.1637454282369502356342f,\
0.5475744092801727580522f,-0.8932610448161549809853f,-1.2797351399265011195894f,\
0.1118201613432585478369f,-0.9620980829388734445473f,0.3643849907609559291011f,\
-0.6874188098904436827752f,-1.217541476664303568000f,-0.5294220756831705676504f,\
-0.5958966870065123266897f,0.1130069370904074471662f,1.3982224083465000230575f,\
-1.0698899503771839292199f,-0.4886124217435617311800f,-1.3658513358172643670230f,\
0.7879963184644042106797f,-1.4375620975102927356915f,-0.4139225629147579854639f,\
0.4724629049642866118752f,1.3786020791121860185058f,-0.1818007311019581573319f,\
-0.1220915022718044445904f,-2.1432379005797042026416f,-0.8715288727031362814301f,\
1.7328275421264391908949f,0.0746395063981880602100f,0.9478227559099661192477f,\
-0.6746643568348875685814f,-1.12189978973121218253f,0.7712825781700975991129f,\
0.7878967433781322027286f,-0.114954127571938721775f,-0.8797100720757337066757f,\
0.3945983137523260686486f,-0.1335061206135170208675f,-0.8812942795785859706470f,\
0.9678256351883146590964f,-1.2184863124466103201371f,0.2811177412486541848935f,\
0.9039980069833579712224f,-0.8586130195545335075380f,-0.9119525776637865677188f,\
0.7834023749729661645347f,-1.8588322045751330957586f,0.9413946838303350883592f,\
-0.6013167449649100548825f,0.7116576086154465796696f,0.1856739618227061516809f,\
-2.4025809662081938355982f,-1.1900189182655975805858f,0.4811625406314723463197f,\
0.2175387195999395339996f,-0.0380853618830928608574f,-0.6838145482543566133771f,\
-1.5179336348870946515888f,-1.718734246002084020688f,-0.5464611700109887060250f,\
0.7723526959000743818962f,0.3006795138383335785903f,1.4291868716265472283311f,\
-0.0677166634975557846232f,0.0573956162401944233742f,0.1830487012206095109867f,\
0.6989722492840018119864f,0.1910038834963114218191f,0.2306826823577726726100f,\
-0.2565102919971545825106f,-0.3420573662934773273570f,-0.0978166804483409507709f,\
0.1422536753322360680851f,0.5435939242933658377410f,-0.3468100829076145585894f,\
0.4660640367220392210612f,0.8993729143853705920719f,0.7600191222869452367661f,\
0.8968829064436780740266f,0.5805771807617583490924f,-0.2307843851109470378891f,\
0.5165770205506754475522f,0.8824788500189956197417f,-0.7969387348104061130627f,\
-1.8168722946703086407183f,1.5190242407155258863583f,-0.8149773729875190442229f,\
2.4028228775031306163612f,0.4982657796195523181026f,0.2226740315197290043248f,\
0.1768897379163425209736f,0.3603060382424789764855f,0.3218716686921767045071f,\
-1.192570046506437719813f,-0.1122386313819233177869f,-2.0287975179488202392974f,\
0.100288454133301133120f,-0.9179783877737051067669f,-1.1999331406575297620520f,\
0.7483478159755958536437f,2.2060613717090746810356f}

#define RESULT {0.2233738732437201557346f,0.0509114261721980362885f,1.0767942567911201745545f,\
-0.0599430280405672463728f,0.1149124379797051148655f,0.3745460477695387035979f,\
-0.3090091280795300709983f,-0.1498661654051850200542f,-0.3780180809438991595961f,\
-0.4539353243495501954996f,0.6771572627749745665326f,-1.0146085369409014731445f,\
-0.9686564923933993487282f,-1.1191250002845629651915f,1.1702255762215818535310f,\
-0.8541951038511210736459f,-0.2598500531232013632810f,0.9956994243583069392756f,\
0.6385765127412353914238f,0.3184037447477280347030f,0.6841145592833487443230f,\
-0.6144568631857774132499f,0.2748482455938721091826f,0.3766345938432117956829f,\
-0.7961060093123013547967f,-0.7446909349913972686608f,0.1379876022907993438071f,\
0.2507123565043022361820f,0.759175872898178005777f,-0.5428794496736766284073f,\
-0.89833074078511021554f,-0.9856607896834306270506f,-0.2042349952101077392719f,\
-0.3798302772852411579585f,0.8514111742492602719068f,0.8799860018302214648145f,\
0.8760722415122048634117f,0.6529277236314812160600f,0.4737097703113398172725f,\
-0.5408045473230975730417f,-1.1576046419742331838876f,-0.8087511308495316519895f,\
0.3794186378049814734048f,-0.6687094713589172290114f,0.7582929808049961861727f,\
0.8981012978260718426782f,0.4496629050128420623800f,-1.0912735975391061327144f,\
0.3809844030879972476278f,0.1721944986308187042212f,-0.0823858026410947269502f,\
0.6870411688329144395126f,0.7452719880215435965809f,0.4286690862084140407617f,\
0.7448284765591709488675f,1.0133478453990099055204f,-0.6241044852011972121630f,\
0.6019336895450897451099f,-0.9296864924479115721567f,0.5682544332615881987891f,\
-1.1335263715873262757583f,0.2943182248013878621329f,0.9744281865108882501048f,\
-0.5879638357107155322012f,1.1937528186152712716961f,-0.3265930739728566956082f,\
0.1094867742408287547562f,0.2027547884149371593132f,0.3959400774109990694960f,\
-0.5162971747333449101802f,0.1447785328438968288634f,-1.0834879385306221966090f,\
-1.112201615701992940544f,-0.98346913687842862917f,-0.1552615733221418270471f,\
1.062017052786182524926f,0.7805154284284491206236f,-0.9463968404701921244282f,\
-1.088790816976063835497f,-0.1235302727421704604982f,-0.1500916423979053448967f,\
0.8069530021779800499360f,0.6913301738780865957068f,0.7573010048408638228423f,\
0.6969765492354944580455f,0.6121813376326975530972f,-0.8168741064761906311986f,\
0.0583718892203711620104f,0.3725683317450820819516f,0.1496473933205103579169f,\
0.7874448575733706823243f,-0.8886955789071054878647f,0.3272808967598674345645f,\
-0.0825263887088810432768f,0.5725854110105892402771f,-0.980788536566781998793f,\
-0.6779506710306395511623f,-0.5217330517396027156352f,0.772995847351621967469f,\
-1.1588253401537096376472f,1.1117042516684423337f,0.1623050519698593929796f,\
0.5009790459791051420169f,-0.7290794216990050813365f,-0.9074929345625200038938f,\
0.111357569834535111153f,-0.7660835307058299070704f,0.349432040770661034301f,\
-0.6022322122997969540137f,-0.883185569845575946246f,-0.4869072854862174781765f,\
-0.5373968957759416298359f,0.1125295355475867259409f,0.9499457978350420717106f,\
-0.8191503966966299232766f,-0.4544961153792455021971f,-0.9388212744104845741688f,\
0.667378646873721059762f,-0.9630145809992480820938f,-0.3924506725722226585518f,\
0.4413762601275756369823f,0.9432440329190430183814f,-0.1798366074472934617035f,\
-0.1214902252731905191174f,-1.134237248756892579848f,-0.7168606663031997783264f,\
1.0473916695445741886772f,0.0745013609201800736104f,0.7586170976909952790024f,\
-0.5935190472805600414574f,-0.8427835085661474767704f,0.6569834032811123769591f,\
0.6673172133738860534180f,-0.1144517528481678869667f,-0.7214914324609644769026f,\
0.3758410950307565223660f,-0.1327212976140068612096f,-0.722383800988696922474f,\
0.769049408891516961262f,-0.8835660062516154100720f,0.2740448831292710551999f,\
0.7350195594735607906856f,-0.7094731621063239401792f,-0.7393796262522003281958f,\
0.6645381846985234375325f,-1.0772344059827341222757f,0.7552201039546350136433f,\
-0.5413871326815293816281f,0.6185070897724082028546f,0.1835833463904297524483f,\
-1.176386657281365266670f,-0.8719472877519027775861f,0.4484643942741659561335f,\
0.2142014421948802427309f,-0.0380669636860080026763f,-0.5997804502671881810016f,\
-0.9882664118774061590145f,-1.0438491153613729256477f,-0.5001221995547742160682f,\
0.6576540281533080900545f,0.292080085019127744239f,0.9602726979256205330771f,\
-0.0676134413768641334697f,0.0573327152217289193192f,0.1810443840994339081973f,\
0.6100358657130787731759f,0.1887306738654894733287f,0.2267166741276365193869f,\
-0.2510965487437752940991f,-0.3295815282597121531616f,-0.0975064859373050984992f,\
0.141305606529955662953f,0.4979116182528884881897f,-0.3338302007475900112787f,\
0.4361321851910835434296f,0.7324685375973356560309f,0.6498825704253795576548f,\
0.731090278993245523687f,0.526015577583169635645f,-0.2268132361170670519002f,\
0.4768211073463659022131f,0.7230501420836584758334f,-0.6728715276854828619690f,\
-1.0676488164290300897363f,0.9885963208407696489743f,-0.6838069995773392584226f,\
1.1764223744131836468796f,0.4622592705138702240397f,0.2190994523411692873616f,\
0.1750786606269341127984f,0.345826480359459564884f,0.3113998336672463840280f,\
-0.8730018295092231150889f,-0.1117708529226727198758f,-1.1128425715998719880417f,\
0.0999542424787834421496f,-0.7426595867662098005013f,-0.8760306483273037070347f,\
0.6424428721795988339593f,1.1452043748636047126865f}

#define CSOURCER {-1.1795163216180464260674f,-0.6957584169324845246862f,0.8259988996926452831104f,\
0.2005040766836741483736f,-1.2112828126521528737669f,1.577061196992769698255f,\
0.7637772368360737917925f,1.8192271630516374525399f,0.5455430088849253511540f,\
1.146539236621446411490f,1.6240394311350210276856f,-1.4966797534977682726520f,\
-1.59547014335820214193f,-0.7395898851221245351439f,-0.8068636961152658715335f,\
-1.0311002075319768422901f,1.2005970723482952688954f,-0.2648910783446530303742f,\
-0.2626223153489460337973f,-0.7475187472806215094323f,-0.5661153624892958369230f,\
0.7434875747358512532159f,0.7872535238570613769227f,0.451715552409009846180f,\
0.4606878032667490185936f,0.0776842938192593146507f,0.8641526902252117947612f,\
1.207833841833020782630f,0.8731959322473188400693f,0.0203507380205638840898f,\
-2.142561452892851825425f,0.3422111419280877142590f,1.2579314478540355448644f,\
1.7477933051936518360492f,0.5187339957481993391042f,-0.132728581017459240643f,\
-1.1602733035670516059668f,0.4875989045190238790894f,-0.5701105851822111381111f,\
-1.1912139790942799510987f,2.0124340046175204221868f,-2.7045248893564091119401f,\
-0.6431322992574242114472f,-1.9153194443350760600708f,-0.5655545944523592272191f,\
-0.65321727466490830949f,-0.704349532744792949934f,0.1130503418105048285547f,\
0.7790220841116946015603f,-0.8369920883463126681789f,-1.604067362874623814406f,\
-0.2256746981594401069149f,-0.1392938143448255172707f,0.6830835101317246360608f,\
-0.4155213883413004238854f,0.0229733819760836940893f,0.8246417042132325736503f,\
-0.6376565658151804871778f,-1.7068298799179615343746f,1.4073819355206949044401f,\
-0.8295221757203087298294f,0.6373043870424420775933f,-0.2922017410826197592044f,\
2.1752387761511053909658f,0.0600723389389604608968f,0.7835812912685555797765f,\
-1.3959357154825373648066f,-2.0629358999978850697232f,0.2656918800288301518719f,\
-1.1613766205716309354301f,0.8939124507954123721731f,1.6784098435216081579568f,\
1.2683311792448521693188f,1.8385748076192800493089f,-0.9497329202198889763764f,\
-1.270378528387523964227f,0.7963056587352231874277f,-0.8480009473832804678395f,\
-0.8640072224951356183453f,-0.8715001223760306947597f,-1.0437638424148545368553f,\
-0.4238345049288854693437f,1.1151445198271947578661f,-2.2055374030068151114392f,\
0.2874269036908579932899f,-1.141542990475093111158f,0.5076848390265716881586f,\
0.3056363849775944885323f,-0.3052849785217074396471f,0.0155317052678219415240f,\
0.2432114799458970910706f,0.6784283234918451199746f,1.872617399166290219625f,\
-0.5480102320972454199577f,-1.1310137592478748391756f,-0.0865801063652356234224f,\
-0.32288669591661972591f,-0.3304845320488251636526f,0.0611848701378388329375f,\
1.826560717567842440090f,0.7447867877814601245134f,-1.1564474239432984692399f,\
-1.1265940444751152416103f,0.142628529129462972014f,-0.8925873814067234457426f,\
-0.3627863505191566417807f,-0.5662183332585394301972f,-0.2716795089578870614488f,\
1.3639803640910439508360f,1.237612166886607800720f,0.3924305122780659127457f,\
0.7582137693795522048745f,-1.1492170633741971563779f,0.4241382639443282975833f,\
0.4098444400457034175744f,-1.37669132334320454270f,-1.4476326062045372644604f,\
0.7114066611465256206870f,-1.3924830606697651269599f,0.0338524257403221839891f,\
0.0146836062137128426502f,1.2378730149006278438151f,0.2801823548361609406143f,\
-1.3742686169958964192972f,0.1717540380186403925489f,-0.5855903929173471578196f,\
0.1907429151227005570401f,0.7888793090772500127272f,1.1338168541183824000740f,\
0.7778678198128919918375f,0.4430509890900592440133f,-1.8169712227336964893709f,\
-0.1603235606348805963872f,1.0728726966089832117746f,-0.6538383763382829005906f,\
-1.2903854138672581353120f,-1.2588653493715018516497f,0.662482523108547827206f,\
0.8653058064884894262647f,0.8205627120768179683097f,-0.6052538675768098785923f,\
0.1489320223008726296055f,-1.1002545757952191252116f,0.5601748137285590400936f,\
-0.7753064210754536667025f,0.0825270383499445148168f,-1.3301792471357218872186f,\
0.3149537401293732719054f,-0.4413283119409475707684f,0.5584497354764290655282f,\
0.2709448579613401020261f,-0.4281368707331745238065f,-0.2387957265896963054974f,\
-0.4604827882307634956405f,-0.5412644127984000963494f,0.7328783982761175597176f,\
-0.0713404400136534444510f,-1.1936962614002064597685f,-3.042807307214757006619f,\
0.7597050488151386726798f,0.1791274991920646930676f,-0.2506292816675101398083f,\
-0.6351531470374360832665f,-0.121161180968055212648f,-0.3652194549719223193307f,\
-0.9437320920432173965153f,-0.2710022932148818952669f,-0.9443973941449046449748f,\
1.3983220899832822237130f,-0.4381256814836405610869f,0.3765568950431126271639f,\
-0.3219819650340491334894f,-0.1074889504736799422657f,-0.6785727331891553415488f,\
2.4505579021475099033012f,-1.3142551981836398944381f,0.7354780365902759964314f,\
0.3711279315629368302787f,-0.8351813322615772028357f,0.9766824658266765046832f,\
1.461883720898450089720f,1.5553635146325224258845f,1.4271923988949506423296f,\
0.0934141721491809351452f,-0.6278372555306163116384f,-0.7994063607890871114847f,\
0.4560734872063767486594f,1.2736575371127356604006f,0.2044809074410245119946f,\
0.2464253458581916467196f,0.1480097817386342162749f,-0.7352399556856978879438f,\
0.9198120099159204920980f,-0.6013531026590643868701f,-0.6865004071225593307304f,\
-0.104616070370811706236f,-0.3041328910990643286105f,-1.0780356133329238588203f,\
-0.4779521279351744977859f,0.5025105381497957379722f}

#define CSOURCEI {-0.9552428551144188650923f,1.2961834852294731312838f,1.1017640646828426032044f,\
0.8711087850527934328682f,-0.9420760043657475657497f,-0.1497284505613425964476f,\
-1.3185366552605053414027f,-0.6344981208817582762904f,-0.1939736947913383302566f,\
0.5047024828595823020549f,0.571239270735604098839f,0.6329832938920191276466f,\
-1.0836206204774869732432f,-0.2988022043772741165313f,0.0786451729619408040906f,\
0.1005946170325885125063f,0.1951019512685897017157f,1.3036996759610997020928f,\
-1.604446040591435362899f,-1.665829130168900329423f,0.3894119616051456289618f,\
-0.6441312956332616579402f,-0.3024073427875212938254f,-0.4621890957188650173038f,\
-0.6774568059775447625981f,0.445231860114528421590f,-0.5535293580988084327643f,\
-0.0006762893110915249931f,-1.089389506561633025328f,0.5723493142465210237191f,\
0.4420973206857362058919f,-0.1612581930858848211496f,-0.7163329171822375718293f,\
-0.5277733874018479820478f,-0.4768406780661605948168f,-0.3993604887388358948286f,\
-1.3804293506092022436604f,-0.1591254367281162429570f,-1.6980146860343119374903f,\
-1.4761781930573465437817f,0.2862303841437082718713f,0.6052999005919722508295f,\
-0.5483298295339265049364f,0.0209604427664898014527f,-0.6457183807429971444947f,\
-0.0603329310380973649064f,0.0091414413452102355473f,1.0949883817318917245132f,\
1.6400776092272673079009f,-0.623485665086227380804f,0.9132225220115295361012f,\
0.0829708966832887195864f,-0.1905412057335640341194f,1.7237280439025588485435f,\
-1.1486098807701770052603f,0.7656322424078984001383f,0.365608177776686305016f,\
0.8275570484489896960767f,-1.1195346368945833237518f,2.009348617520048563279f,\
-1.3914607990698013573194f,2.0854477679794358735421f,1.2877168046463016715109f,\
-0.8111545211857794646093f,-1.4392639991852771430558f,0.5337937550547192655515f,\
-0.4149967301072188807787f,0.7753596072101661684783f,-2.0802067762281923890555f,\
0.0857878546561958027494f,0.6902510695334604928775f,-0.8020501997457173404271f,\
-0.4448276219158631139550f,-0.4542741017673427861290f,0.7497806557441212271797f,\
0.3761686067694443580400f,-0.5437950704705085680501f,0.1952712229487395811933f,\
1.4963569359039357031804f,0.1448961397504171522144f,-1.6571742156046651572865f,\
-2.266222156481924709936f,-0.6895293883454371997033f,0.2295209621736973848449f,\
0.5362163385171105911553f,0.9313103118348207143384f,0.6330960821019180340130f,\
-1.0858111091662558944648f,0.0887541886374976635166f,-0.34952319730873010473f,\
1.2435770678983146808605f,0.3496891344866185913354f,0.8861210080034624958500f,\
0.8494363200871917207735f,-2.6007673657870293837391f,0.1208397242502698559763f,\
-2.7285983994246283401708f,-0.9589084058643195795923f,0.5028677894031623463178f,\
0.1177935239520793014867f,-0.8303109816686591315715f,0.1392963806792855974148f,\
-0.7007200653415375235511f,0.3010279059055253614297f,0.2808756871176958935798f,\
-0.3407758216783158822238f,-0.1629402754377415607490f,-0.9384370915542669111531f,\
-0.9062708617577245329144f,-3.8216620591432644005181f,-0.4342151148359789103459f,\
-1.8035270857235303765265f,0.5183732162291515566110f,-0.6322771366436347184603f,\
-1.565814486101537061913f,-0.1275146747340561437234f,1.64064977802353451075f,\
0.3863617690782851776810f,2.0004008659625807098337f,-0.6217884089242305956091f,\
0.5238947303594374549363f,0.6235004214546735479274f,0.2053444204279457063755f,\
0.8703948860420792632553f,-1.0392069272746413677311f,1.003277086375655047235f,\
-0.592126107443248783646f,1.4081926997371712051432f,0.3085101089696197229628f,\
1.3401416840168169919423f,-0.1266586333113026985320f,-0.6461594510334438545840f,\
-1.0118098370918304773625f,0.6188273552553577028235f,0.3590555220619524590120f,\
-1.1731665361057745933238f,-0.6396350210213861409159f,-0.1754282371769660675564f,\
-1.4007581459609705909486f,0.9435849228454418202716f,-0.8904968184314612233976f,\
0.2054651558278166589844f,0.4710457442017800810952f,-0.9616306477690889087384f,\
-0.121221389008828367428f,-0.4940626370918775878138f,-1.6256998584585298228689f,\
0.2527933604007285839366f,0.9910414428133418329736f,-0.4204166976073123729307f,\
-0.3726016912019385896038f,0.9512465231833235890235f,1.9770278000388763484096f,\
0.7942630050207910574755f,0.2042467951135929216111f,-0.4515030272861193516576f,\
0.6146475682591936440247f,-0.6290585121948016888993f,-0.1427330253584118413546f,\
-0.0603831392611861861308f,-0.0118358773438195733624f,1.060362899843382056275f,\
0.0968488469273018626193f,0.1916075762821658201585f,-0.4096449181703107345065f,\
0.3696227488734469268650f,0.2664498618423789544352f,-1.1169828984464544863187f,\
0.1529016818054778348301f,0.5016653096177513537768f,0.3713737327704177415555f,\
1.519060224335068820523f,-0.1807259441689535728326f,1.8139275887503047979266f,\
-0.3257752015232963649360f,2.1486960576842424330835f,-0.1051361455427324009815f,\
-0.2626851203928968758738f,1.0103646188196337973864f,0.2148110767207350724206f,\
0.4407052420763278299809f,-0.5122126723342420584473f,1.2412118916908576604641f,\
0.9766933236701691445347f,2.039099736880281454887f,-0.2559919392094065493382f,\
0.5420836083333696597819f,0.0791245311903027159772f,-0.0955893777744002970387f,\
-1.3712286813648302263857f,2.1069701518694308184365f,-1.189922581642507859456f,\
-1.1599757893702906663691f,-0.5696357256121767909107f,-1.3015572133370920671069f,\
-0.5449309642239419382292f,-0.5067789559895423678881f,0.6346443332238025369918f,\
-0.6108333161328157734360f,1.8419857567724760016858f}

#define CRESULTR {-1.0378404956328399766363f,-1.133735695651125086059f,1.0339197498326544444325f,\
0.5531122148702418694910f,-1.040340001858497842591f,1.0085860369894361632248f,\
1.1420720538989748149561f,1.1056797792052726059353f,0.5117972485274214777817f,\
0.9070677525728206846978f,1.0572990288526666891045f,-1.0360972400059726972188f,\
-1.1383229838393340571656f,-0.6648420928164470167232f,-0.6807443500487321275116f,\
-0.8031597943350016199915f,0.883947625424225447155f,-1.269412549612109586405f,\
-1.4161063395011512788813f,-1.2859233456553140761969f,-0.5672668801729759957553f,\
0.7745318044293433290548f,0.6947007749642374330179f,0.4991201053193883852011f,\
0.6140034872209438887580f,0.096413007169791717366f,0.8007709883951089624432f,\
0.8792563999787510464756f,1.0343346624696823088385f,0.0302467913897976371784f,\
-1.1472175673143576446478f,0.3369832737151475243742f,0.9907410521400105141154f,\
1.0796900049026223467052f,0.5594674889946016360653f,-0.1560251223940891662778f,\
-1.1705823062338804874116f,0.4618385738778090776613f,-1.3324797047631469215645f,\
-1.1997345609820562195580f,1.1160254294044837930500f,-1.230501878395329207194f,\
-0.6761086369817806973614f,-1.0896592333865446899921f,-0.6710881467286168300390f,\
-0.5798029666713722107829f,-0.6136654494083557676021f,1.1617507290156328103592f,\
1.27276401512989068010f,-0.8120428578165023170143f,-1.1072391191957589029471f,\
-0.2233715590492064695383f,-0.1434422451344934956730f,1.3153998337128238738103f,\
-1.0526498309129606045786f,0.0553606627561369843415f,0.7291584643384485531215f,\
-0.8211933984789114848724f,-1.1593353121271579020402f,1.3152057671476293787549f,\
-1.172801856026281397405f,1.4071868225661712248353f,-1.237749706635684621148f,\
1.1803373520872921798031f,1.5151506180989924299496f,0.7531983030718831795269f,\
-0.9762856051169326310202f,-1.1612557605568909480098f,1.4932305416569968681273f,\
-0.8614722664300586973951f,0.8618528735715539346174f,1.1016443473924788509777f,\
0.9393199732131509716027f,1.0919198431908447854966f,-0.9052324038739091305317f,\
-0.9298866314213817263479f,0.7633780893052066751636f,-0.7143116680469970836143f,\
-1.2127221047629597183715f,-0.7227638256662162197230f,-1.253501631676815275540f,\
-1.4738165927959636647415f,0.9413278434132237304510f,-1.1484735264203178584097f,\
0.3698862224535668929981f,-1.0222624393360630890015f,0.6231994143282580944643f,\
0.9950036636352803665062f,-0.2983226702432650867536f,0.0176907017367243651895f,\
1.2324636476429444709169f,0.6361627801840686879942f,1.1459319881374090410731f,\
-0.7953680408910630550423f,-1.4154164061425698051266f,-0.0876282946873059020998f,\
-1.5216557556403844664317f,-0.8071142269969606708457f,0.0815747053150205070349f,\
1.0712377179167194007903f,0.8666202597884599123645f,-0.8619222017137594393787f,\
-0.9481006227828882026998f,0.1552413858057176687666f,-0.7506128146087278629750f,\
-0.3836715577045819447477f,-0.5239185633043924594787f,-0.7436026090030812829568f,\
1.0616275053374448766874f,1.4897517325664235698923f,0.4367517077925673341099f,\
1.3246660695183969380651f,-0.9109135023203799308433f,0.5553722323129884896886f,\
1.3365545316217091187383f,-0.9452504202661284882225f,-1.24445301968662169756f,\
0.6665795438258386163000f,-1.314150441284937187447f,0.0550695906884250130364f,\
0.0202332991673926272658f,0.9634857364192206397036f,0.2836842504797497110935f,\
-1.0552170344242444155469f,0.9396260470070250114816f,-0.9303925570132891564867f,\
0.2783356640126000702828f,1.1824291811858682610392f,0.8685688319389791578473f,\
1.1519647668153425446036f,0.4220715686665841848146f,-1.1065714015957384130928f,\
-0.861924596730684333679f,0.9073537157079681891858f,-0.6218839294281949259258f,\
-1.120015581786375724604f,-0.9733844585621500566930f,0.595029230494463101664f,\
1.175230190501943328130f,0.9508205283471821145369f,-0.8508278968495206484590f,\
0.1541098930310453307690f,-0.8824217885955716322854f,0.8902851444120675195038f,\
-0.6639557596979325237996f,0.1084368331219868891724f,-1.2396941127079998956617f,\
0.3226031789257856052799f,-0.8843151570857661347702f,0.5707126023897258759732f,\
0.3012759106579737111709f,-0.8367027089033168829602f,-1.4909615617958020816758f,\
-0.7009193727197650103378f,-0.5098573775891588333309f,0.6979392344955810401075f,\
-0.11360619748546052499f,-0.9509385591695135309109f,-1.253860295053432105661f,\
0.650797750208578995590f,0.1772712514866976729611f,-0.9640945137047890467485f,\
-0.5689005122453275609118f,-0.1250511412013994849701f,-0.4037636514907702589561f,\
-0.7926166698304296653887f,-0.2823466357029139617296f,-1.056824688357730357424f,\
0.9537129762345133432433f,-0.5025361511250948653995f,0.4038372312258701746224f,\
-1.356748408455357823854f,-0.1106205947085566049237f,-1.3416335800212069173654f,\
1.1885949854017261451133f,-1.3422443000337007656952f,0.6375731708639520434190f,\
0.3760968575323995755078f,-0.9884746207385446403748f,0.7854115858087797885645f,\
0.999043445647114114472f,1.033179400413832382810f,1.1526308570666976560659f,\
0.6867562899067288784138f,-1.4009010309735028254607f,-0.6940419760103245794269f,\
0.5354681750957488439724f,0.9063410461496741454823f,0.2034358249367814175379f,\
1.3295608151948998809644f,1.5281379412739910517161f,-1.0737486644518823286631f,\
1.0727905584835071284289f,-0.6577524210666327864061f,-1.1372820311372766610702f,\
-0.1467884541731124814490f,-0.3758609793464613990643f,-0.9135278670013463608868f,\
-0.5879353157795642603745f,1.3892627420568484097885f}

#define CRESULTI {-0.3299360864553753103223f,0.5773236414575498853807f,0.4991095547887292593892f,\
1.0331094146354482532502f,-0.3176151990967214233663f,-0.0427672547155572568833f,\
-0.5408736725419536206516f,-0.1380553162115908116814f,-0.1495803862615101287314f,\
0.2075977110248564960759f,0.1483156441793008761820f,0.1814264210630067153396f,\
-0.2481388687151736549552f,-0.1914494023025192226406f,0.0475995307877313186817f,\
0.0486725512662827888843f,0.0793454719839349342791f,0.8749639413571212998022f,\
-0.6896294045728997845757f,-0.5086525074514365307721f,0.2944098793875352670923f,\
-0.3917506744074427116331f,-0.1846852570799382420308f,-0.3894217746197643492678f,\
-0.5646100518854718641748f,0.4746040014516990646065f,-0.3015127179783077537856f,\
-0.0002750414994330601867f,-0.4738712470203229054633f,0.6504861039469930217294f,\
0.0770111005352082517161f,-0.1450021418767060144006f,-0.2504460533174687753011f,\
-0.1242925201299330817406f,-0.3767991401181884358884f,-0.4132076872602681860691f,\
-0.3870747570445600693745f,-0.1287551829606753961421f,-0.5591653729797143590474f,\
-0.3808547758746415601294f,0.0560087196606005033317f,0.0701856173788610038233f,\
-0.3788485405347551959743f,0.0044895072328474238538f,-0.4792093730891275327188f,\
-0.0422815385429984591514f,0.0061101098120875880007f,1.3269258764406561823535f,\
0.50216582477378490790f,-0.3441118926473294425961f,0.2204807457606408893636f,\
0.0790893257779779063066f,-0.1890021515648551142519f,0.518665277550073300361f,\
-0.8006086655024508003109f,1.0073379811293934338323f,0.2137094925844510162616f,\
0.5375421998418649094376f,-0.2320202834395212743157f,0.3256990051992574852768f,\
-0.5075425697148114867474f,0.4587488944259289214145f,0.8635283954295314146066f,\
-0.1297869621390935479521f,-0.852694676585578515f,0.3180243625197139989424f,\
-0.1362504231180562963566f,0.1356147426873018091431f,-0.5110906304654022624945f,\
0.0364746671485365880905f,0.3518205609306652159596f,-0.1882338930265980980749f,\
-0.1641509348055795458610f,-0.1003678389496054923491f,0.3533058939584889368568f,\
0.1400753442460135889114f,-0.3190262039403771177071f,0.1130098866744752156288f,\
0.4874882612585151875351f,0.0821093566409674818773f,-0.4196102828902398829136f,\
-0.451423643355465198379f,-0.2794721520836026540380f,0.0388676985912680683644f,\
0.5261724556813406339373f,0.3369140501375452179111f,0.5021943268293638240607f,\
-0.9466008502228719923011f,0.0813161752282447886087f,-0.3647911127697049948893f,\
0.9402058236775613364600f,0.2373145443406108057172f,0.1741667096823807936445f,\
0.6110175965051998225874f,-0.3276211596627106037438f,0.1205074840878167241609f,\
-0.3776545253138779423274f,-0.8929722827626465075923f,0.549792722962075375293f,\
0.0271042479895461374539f,-0.47522513055127707515f,0.0593823102898174345898f,\
-0.2798313897020670570903f,0.3034375004902351569136f,0.1544875118519504486603f,\
-0.3064946913611272250044f,-0.1233973071314871799986f,-0.9748519593919268144688f,\
-0.2695469774323944189831f,-0.2398595153162375315237f,-0.3849351067537384318840f,\
-0.4832629774775746844817f,0.2120502817724358168849f,-0.5500280838647416681297f,\
-0.6567358702149050930785f,-0.0439088406752093027285f,0.3215272662057582220285f,\
0.252983359599071477852f,0.3285524490410307585364f,-0.7260295113781071174586f,\
0.5814783672028649430530f,0.2280478984411803411447f,0.1921683660815579341996f,\
0.2598222279442688464890f,-1.2261944929533434844870f,0.6354501028006451779362f,\
-0.6350507146232319266588f,0.5241840999802419576170f,0.1326112979841672367964f,\
0.5331634907909190701503f,-0.1060363792025432461141f,-0.1405159325068739140097f,\
-1.2650277702054697481771f,0.2669908129991411804838f,0.2495345813255305800205f,\
-0.3316627619047222141901f,-0.2282918540535401608071f,-0.1217152595768435791035f,\
-0.4921799931736892674827f,0.4709770755615852455556f,-0.5858164911014823728053f,\
0.2035859669317575948444f,0.2043112301670926833630f,-0.6450693837623580062512f,\
-0.0755935103401305513726f,-0.5356174761081086144188f,-0.3471562389208797116957f,\
0.2328317315621121486036f,0.7651997819792383248583f,-0.3199579280419243554334f,\
-0.3582454315092570285017f,0.7669246314230472316709f,0.5441811107763497856737f,\
0.6504831149102675569296f,0.1580962824886572026806f,-0.2872668874651375658935f,\
0.7084196447067554469612f,-0.2398740644903666341392f,-0.0138893916104706732079f,\
-0.0382724601233607325534f,-0.0114683647521359316501f,1.042906817386681339599f,\
0.0689854613036876146426f,0.1910230634709511876590f,-0.3704134917614289590482f,\
0.1911216797569713354843f,0.2522464542416475996589f,-0.4451672855349098623101f,\
0.0515134584128001532521f,0.4287903998263715155126f,0.3315338614185490695441f,\
0.7124742713592439047332f,-0.1805296499983318203597f,0.5024343285394804459187f,\
-0.0459393453273769861167f,0.3351247751616924785978f,-0.0681623033986126780626f,\
-0.2332477835758634543417f,0.4789761892657505848447f,0.1091019217623192538724f,\
0.1355147604481500289708f,-0.1428984493591255733325f,0.3037123307940571281804f,\
1.5115293287912119346572f,0.4692494475562393740908f,-0.154956179496453544386f,\
0.4557841446769143045614f,0.0301394028826129541099f,-0.0919789120268482279785f,\
-0.8385856266070932374390f,0.5121474514176801440257f,-0.5562655937076338430458f,\
-0.4610543161770726539039f,-0.4105611124291430047428f,-0.5820664911774818817136f,\
-0.5994113052598605273502f,-0.4878070905668511203501f,0.2712394281598410339384f,\
-0.5014387951037901913764f,0.5397742494143892288960f}






void satansTest() {
 	float in[]= SOURCE;
	float res[]= RESULT;
	float out;
	int i=0;

	for (i=0;i<200;i++){
		out=satans(in[i]);
		assert( ( (fabs(out-res[i])) / (fabs(out)) ) <1e-7);
	}
}

void catansTest(void) {
	float inR[]=CSOURCER;
	float inI[]=CSOURCEI;
	float resR[]=CRESULTR;
	float resI[]=CRESULTI;
	floatComplex in, out;
	int i=0;

	for (i=0;i<200;i++){
		in=FloatComplex(inR[i],inI[i]);
		out=catans(in);
		assert( ( (fabs(creals(out)-resR[i])) / (fabs(creals(out))) ) <1e-6);
		assert( ( (fabs(cimags(out)-resI[i])) / (fabs(cimags(out))) ) <1e-6);	
	}
}

void satanaTest(void) {
	float in[]= SOURCE;
	float res[]= RESULT;
	float out[200];
	int i=0;
	
	satana(in,200,out);
	for (i=0;i<200;i++){
		assert( ( (fabs(out[i]-res[i])) / (fabs(out[i])) ) <1e-6);
	}
}

void catanaTest(void) {
 	float inR[]=CSOURCER;
	float inI[]=CSOURCEI;
	float resR[]=CRESULTR;
	float resI[]=CRESULTI;
	floatComplex in[200], out[200];
	int i=0;

	for (i=0;i<200;i++){
		in[i]=FloatComplex(inR[i],inI[i]);
	}
	catana(in,200,out);
	for (i=0;i<200;i++){
		assert( ( (fabs(creals(out[i])-resR[i])) / (fabs(creals(out[i]))) ) <1e-6);
		assert( ( (fabs(cimags(out[i])-resI[i])) / (fabs(cimags(out[i]))) ) <1e-6);	
	}	
}



int testAtan() {
  printf("\n>>>> Float Arc tangeant Tests\n");
  satansTest();
  catansTest();
  satanaTest();
  catanaTest();

  return 0;
}

int main() {
  assert(testAtan() == 0);
  return 0;
}