/*
 *  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
 *  Copyright (C) 2008-2008 - INRIA - Bruno JOFRET
 *
 *  This file must be used under the terms of the CeCILL.
 *  This source file is licensed as described in the file COPYING, which
 *  you should have received as part of this distribution.  The terms
 *  are also available at
 *  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
 *
 */

#include "testAsinh.h"



#define SOURCE {-1.3576117896733277401466,-1.7637832035201410629810,0.3855566139299755334946,\
-0.2160798468986061537933,0.5079016244365412990902,-0.6713405437771273742698,\
1.2405146112769958044453,1.3996914808133518182132,2.455810932856137718261,\
-0.140780207215658148545,-0.4702849878182233100965,0.0273321471208497618344,\
0.1272959744763040301763,1.0077609385751984394375,-0.5992823608151862657678,\
-1.4909735993420030197854,1.1850328323549159659223,-0.7532372700108580509948,\
0.1544844959811866313970,-0.4395251247591652199453,-0.1710077835697096926282,\
-0.0020392103157046703732,2.3911285878389949566269,-1.8171171150936700211531,\
-0.7159791420443786247318,0.5100070355081758322058,-0.9023845512384770506387,\
0.1404573536528139765522,1.101925188407546940539,-0.0755748286838698046797,\
0.0052019860396882644168,-0.3525317421211751067744,0.9599782396584397581307,\
-0.3373393328184763340083,-0.9424787821879185845120,1.107342433121214275715,\
0.5275760618563184456420,2.2874014544326271014540,0.8431549305721607323605,\
-0.1180124731434434998123,-0.4202553394312918411124,-1.114616954771672663327,\
0.7423526085481280123446,-0.8110912540737037490501,-0.2279425085104251347268,\
0.6450672141930872127702,0.7812946955887702937815,1.4559939295961445981931,\
1.4808632601102580395036,-0.0561674797508281767322,-0.6499637724416639228409,\
0.9406577697059905762700,0.4408659857477613686072,1.0630757257539220628217,\
-1.3783233641019425608221,-0.3062086297728683903507,0.3570701509900506276374,\
0.2722352561686949279363,-0.8234027247256571202527,-0.5990920922251514735279,\
0.8126089186562406307957,-0.9202541957145593531919,0.4637689483065319806521,\
2.7285780311422769273122,-0.5523000528063060077244,0.5645499540468182919639,\
-0.1966239792749471526623,0.3232076144184721222530,0.2044915219084416369011,\
0.9122595139735795166658,1.32862804461268768641,-0.3933121244849541731092,\
0.6800596076198115458311,-0.0390966465388340317366,0.4460664717379928534413,\
0.0466968662605830517331,-1.159097013642337747896,-0.1516000867442619526315,\
1.099835547132880231302,-1.8591997482220850024248,-1.5859733492347323213778,\
-2.3518422239705527587716,-0.0363309315202365243347,-0.3671077430846361733252,\
1.4974841041542252817464,0.1166082461631383904166,0.6150562435701190100446,\
-1.1854669210396810985486,0.3562903039222897749738,0.3468046496992864269338,\
-0.7767949783190361001672,-0.0388605946733660209680,0.4658948000641440767566,\
2.5397452836287333077792,-1.6499955625089919308834,-1.730408375709416413102,\
-0.5118965544481819396339,0.6229106301535243250811,1.2541834743916775440908,\
-0.4242067654129669240781,-2.4609745338396713520979,-0.5875679117078018709464,\
0.0525256277866840218249,-0.0221901005868065138993,0.0047340660621973179242,\
0.5954335288237887491292,1.240326181995874410546,-0.4474314847009220885710,\
0.309985603496633732590,0.1897272751476858920761,-0.5041309171227571495066,\
-1.0407049076417729249755,-0.8790182225827031237131,-0.8241442015820352740008,\
0.0114520840633361691702,-0.8375012162452729613804,1.5044689875616372720657,\
-1.4872169103117691690841,-0.9491620445763213620438,-0.4714572242020408365804,\
-0.9944436112957297790871,-0.7897744853013518584461,-1.9610605179993771951530,\
-0.5551411828413486126976,-0.1498033190111577317438,1.049612455441040648196,\
-1.873247408264758551155,-1.7768646550852811305532,2.055125969134249608317,\
0.4181799324473139956027,0.4756981765178688870144,-0.0497090050304667893655,\
-0.8254170186481527560218,0.3315212467523889205978,-0.1049083295446031904863,\
0.9436361823785577307433,-0.4297495677869329622212,0.6041720693587251389545,\
-0.5126921017648137235412,0.8253623930867394209443,-0.5636867633411185574133,\
1.4780035136607696522049,-0.1150898513104453707578,-0.0895959753888824761425,\
-0.1719733530741588689583,0.2269131790250100699780,2.0342102181126362481223,\
-0.0976186373893909720145,-1.0193857468205604899,0.778026114056752038373,\
0.3469309321844699645077,-0.2119385547567329830532,0.1122013143743656737872,\
0.5130455426994967593757,-0.9836962738165191399986,-1.8662473753394661635241,\
0.5046191490309642757595,0.5397589965174257597980,0.1495290449776452701425,\
-1.0010126697848658050560,-1.231087303316227510308,0.493771591129457787517,\
0.0084749296034232757258,0.6528794554325030308206,1.3165434517533367575481,\
-0.7644706245855447113158,1.60959294894722515501,-0.3945002118117288958388,\
-1.7397191133485980785167,0.7283944071784652640744,-0.8252534213629215686936,\
0.1067480143242338502807,1.4303021806407054672405,-0.9653188502218088551388,\
0.3473141482678416824825,1.3246017895509272221943,2.2493951812296155701176,\
-0.6569708783346918101742,-0.321524642114760117462,0.6051546744959480639281,\
0.3028414522677088660529,-0.6449695892069078340114,0.3426130327302095435194,\
-0.9643932135296735541630,1.3325612893853038265490,-1.628074335418207230219,\
0.7075076309451185929689,1.0853008279162978944044,-2.3506278976788554935240,\
-0.1463993258475799474905,-1.0813242242905494183702,0.8848173893719444293993,\
-0.8759582027327027509145,-0.8344888331049786778237,-1.0485734628076319729928,\
1.9962933549994803517080,1.2493174700563109968954,1.1394362749053514871633,\
-0.2197402489428784411185,0.3152457615995896134109}

#define RESULT {-1.1130949556588403126511,-1.3327159168755193796585,0.3765918165954149632313,\
-0.2144327449409605401698,0.4882680607211341006213,-0.6290298228269889380115,\
1.0416537998862092084806,1.1378027100741174848508,1.6306935238556961031975,\
-0.1403192842222721059553,-0.4544772654936784506141,0.0273287452012760077869,\
0.1269546678262620797994,0.8868507654832032960357,-0.568209430801213888351,\
-1.1897458189645284676317,1.0063560088725012064970,-0.6957349846601869058915,\
0.1538765289352577170234,-0.4264787556420423508818,-0.1701850823931514988807,\
-0.0020392089024058542880,1.6060204471410550741695,-1.3587234662009097796442,\
-0.6657080515933866404765,0.4901444289074484705893,-0.8106383081775411225678,\
0.1399995760847499992607,0.9516413314489057251322,-0.0755030713336432846017,\
0.0052019625784457792020,-0.3456102163306026819889,0.8527889195091039598040,\
-0.3312482849825826303203,-0.8401095674014050773692,0.9552769725934540101520,\
0.5057396137890651788283,1.5652435713544583517631,0.7660130911978242362892,\
-0.1177402502570575049123,-0.4087756154845550438104,-0.9601436921836913329642,\
0.6870180358136419584980,-0.7413056602559416896625,-0.2260133834402236752137,\
0.607083791196235011967,0.7179951440904949189203,1.1701025225825925080159,\
1.1841009702891132082669,-0.0561379888707583402097,-0.6111939387463327655325,\
0.8387837653657870262691,0.4277059773372764994726,0.9252791007143230661569,\
-1.1253178411086610655,-0.3016147291750726489035,0.3498873875038394642978,\
0.2689800399453179946541,-0.7508385861915640724362,-0.568046218336308084140,\
0.7424839156827229835756,-0.8238461490952974086710,0.4485733597383650406165,\
1.7289314850929364819621,-0.5274948117440469985695,0.5381900831525847639369,\
-0.1953785803896550821168,0.3178295637778837390286,0.2030924952508830483300,\
0.8179516300830952379997,1.0957859238613814056862,-0.3838186466908449778757,\
0.6362542602331872076959,-0.0390866932016993157140,0.4324599635687117471505,\
0.0466799117153936446445,-0.9895220015504287980335,-0.1510253177999459628378,\
0.9502363023238964423456,-1.3788344661100282451116,-1.2415257056941875202227,\
-1.5907556842186492129798,-0.0363229438428324669097,-0.3593253093499745309813,\
1.1933668386250828596928,0.1163455870775610828671,0.5816925710627691703536,\
-1.0066359311257613295965,0.3491528652755562234233,0.3402040976525141924292,\
-0.7144454627768908050456,-0.0388508204533765666433,0.4505011238681072560652,\
1.6618918653106427019139,-1.2751867809374948237178,-1.3161363888578068159774,\
-0.4918270306483571441269,0.5883710719531183297448,1.0502037442465796956981,\
-0.4124158523209305871049,-1.6326391191927918100646,-0.5581352790789477769096,\
0.0525015052004256660423,-0.0221882799205271458165,0.0047340483795489029725,\
0.5649052397488373289391,1.0415355372390291410767,-0.4337062598861871065559,\
0.3052242689715726209343,0.1886070763157441099178,-0.4849035737297955339642,\
-0.9098654196250280934422,-0.7931897365608786554247,-0.7514108860522482613575,\
0.0114518337541998777018,-0.7616847132530191188948,1.1972396117455856856537,\
-1.1876514534079536389299,-0.8449650527155313506356,-0.4555378112663634460056,\
-0.8774391641368382011024,-0.7246635421278604383133,-1.4260843463597587810199,\
-0.5299803397861506670807,-0.1492486124002971037417,0.9160234338985321356219,\
-1.3854693118499961101975,-1.339149741178953689769,1.4680202081995989971119,\
0.4068615933419172381313,0.4593706772145678129959,-0.0496885560579486892929,\
-0.7523928088748154108245,0.3257305872841815830299,-0.1047168437798993573251,\
0.8409515953244546260237,-0.4175134246305884921924,0.5723991247141133609233,\
-0.4925350737504667897326,0.7523506802368506996004,-0.5374382677208087155662,\
1.1824994989469264083937,-0.1148372801243118385139,-0.0894765353119480744137,\
-0.1711367593250398000393,0.2250096841326320595833,1.458830901005770064316,\
-0.0974642573471812823094,-0.8950151622701945086646,0.7154174354590427942213,\
0.3403234064876564657354,-0.2103831526165375054305,0.1119672185619183107930,\
0.4928495654965970862449,-0.8697979955142227659337,-1.382167978700230337452,\
0.4853394960873701480253,0.5164877528407616491535,0.1489773595696585739567,\
-0.8820894714376154022162,-1.0357236173571910953228,0.4756340389263381540630,\
0.0084748281555349427863,0.6136369862616236625641,1.0884976091419886756739,\
-0.7046834979102297724651,1.254056645766540967202,-0.3849240656020492257205,\
-1.3207856959376931271777,0.6757730196964429891793,-0.7522666350656633804661,\
0.1065463121770779120201,1.155469512029384748786,-0.8566364746899163273852,\
0.3406854318087456645614,1.0933623617966952146219,1.5499122891284196068540,\
-0.6170596901911918896744,-0.3162277642902040497574,0.5732399668068761666717,\
0.2983935984890606074593,-0.6070017519078403367416,0.3362413129909137543549,\
-0.8559703502467290725519,1.0981489764525824703867,-1.2637694566754069658288,\
0.6588062099967662010869,0.9404229224232689698937,-1.590280419973736147909,\
-0.1458813492114517662568,-0.9377256428290303702511,0.7975391112088442424621,\
-0.7908896752603351565369,-0.7593735645090678998415,-0.9153065625835585805703,\
1.441976583204267914340,1.0471665685842834747632,0.9766162941953494547320,\
-0.2180092160957680658129,0.3102448153202543856821}


#define ZSOURCER {0.1344153599005591392945,-1.5506135890216410366804,-0.6851077106999041710367,\
0.4218254137797516900577,0.4563186792784946765877,-0.0065657292828231895304,\
-1.4909053660893785142605,0.3020078702400747494572,0.9932063361099687792688,\
-0.4433136654301204071515,-1.2230912696221460933543,-0.4536074652511654647924,\
-0.391728395210721336284,-1.0754644749418362792426,-0.3220075728643138068819,\
-1.8561721663709394025688,0.9166361449615868517427,-0.4865676280317013935317,\
-0.0798825634299456799337,0.7227932226211960520246,0.4367586477867241301354,\
1.100708465607679542586,0.7887304681164191144660,-0.7638617615134800642451,\
-1.1157778009204568636648,-0.0715514394916681589764,0.1759955522740979383389,\
0.6521704771208436390850,-1.2566799200234315403435,0.7200913102328155845910,\
-0.3420550667112094989086,0.2477935566640704911912,2.0205940701992970431888,\
1.3930268695166325709778,-1.2605487293586259411882,-0.1650288634784027319569,\
-0.0981081330322927658294,0.4100655669623185506367,0.7181621264742018562188,\
-0.4072630840419457221024,0.5156039430832634051782,0.3795734781395984636099,\
0.3638182194100580413298,0.8461109103084072380341,0.6093905395787995171730,\
-0.2503150987783319125768,0.6420253514641469649860,-0.0446314315869399819148,\
0.2916988037421140433914,-0.3385179884731976951429,0.4290547410494972568884,\
-1.7617580904822116583119,0.0242252644066083683283,-1.6979773429025941666737,\
-1.5685374082937220130418,0.2235220732382334762889,0.3158040584918663795655,\
-0.3902896794740354780018,-0.2554731784615550393980,-1.2399505074947390070861,\
-0.0969941013810174113008,-0.7835998873676693898815,-0.7420185738540517883521,\
0.1215847078229450456410,0.346331144382537814419,-0.1289657459832099506425,\
-0.2972509851392565738415,0.5513684955823417999099,-0.3924372370508544816126,\
0.6550918706396454682661,-0.0941496244175293039991,-0.6298808116548983981886,\
0.6046273337026021321705,1.154776599111647650275,-1.3475403271419439388268,\
1.6941635868888738070126,-0.9698161544930480326698,0.321333626597992860763,\
0.8077673631787291030903,0.4495327099693594008478,-0.2815944820401523052134,\
0.5503911320698096076853,0.4415940612643087237466,-0.0426890352355768151749,\
0.4574486820024267763607,-1.8233880107049311725120,-1.2644581540832258159668,\
1.8182154451811951556550,-0.4365692326313646565161,-0.7834466000398015994577,\
-0.2438122853723030947215,-1.238179759598785789620,1.0164635023339896324757,\
1.1566875865587697980175,0.7525323014625638906594,-0.5302881550474964900133,\
0.9946348209098996306921,-0.2846244148716441380031,-1.4971569165104527954213,\
0.3858437386079422992680,0.5857497893655945198077,-0.5407108407032041874629,\
-0.3913628275219260821416,0.394150621449124050066,-0.3677461583219513441279,\
-0.3580090499105863521834,1.2238011161239454871463,-0.0394483595782139026542,\
0.6819869387311006114771,0.0482725904112477066654,0.6909298247176761664790,\
1.3224847954183336362632,1.4037115762091163517766,0.8467069128655627663349,\
0.5210759995289813151231,-0.2055830325344648878971,-2.0192992995259366750815,\
-0.5304191698016149647543,1.09472080578548336405,1.3620867421349684978082,\
-0.1808242201566298279491,-0.0194904828858388744217,-0.4683180277648698042192,\
0.7819869233308703870833,0.1429480494914288357666,0.2773646548392231792057,\
0.6096476038786750040188,-0.5960852983339143262853,-1.963887290912852856550,\
0.9721629223729456592551,-1.6452050961761244263215,-0.3723296190652639614527,\
0.4738633834151028678683,-1.057700746568926764013,-0.4968910756708404541371,\
0.2577873463311163293454,-0.0737988795500269523231,0.1977793752007929173331,\
-0.6149210248305110315670,0.9875664176674272543011,-0.4642707502431423494116,\
0.0643413048674845028385,0.6498540575999842694443,0.7121440663138152160627,\
0.2359686505725840099945,-0.2350484222736072826,1.427908791905283747425,\
-2.1717696603112686126735,-0.7707405591334609562537,0.8328839983146067993403,\
-0.8442913355247498863321,-0.9327775490791254675571,-0.1481361786955139869804,\
1.3160166106571784538914,-1.641046498941054032628,1.1071159236267200665083,\
-0.1637297725664050573879,0.0063889356258534446900,-0.1876117315630027870821,\
-0.0437156856017992812014,-0.5047856242612756005883,-0.4377080020532335691286,\
0.8918622387976500309748,-0.7125206673387354250337,-1.8420141064608679393,\
-0.6323236657671401639291,0.4307970989642812553733,0.0065706118931696342461,\
-0.2380637309545470814420,-0.9281665549650555124828,1.2462413799568070604806,\
0.1118120260462647785893,0.5017427788303500113543,0.1413380949238240147370,\
0.5728474017890546887699,-0.2522748296906130449635,-0.4384774472140181011959,\
0.0497517512937118988603,0.5020924835745471659365,0.6928164360637126817366,\
0.9383192238380625438410,0.9522811808490952989459,0.6799302528285031677058,\
0.5017679240717164423913,-2.1626383553421018035579,0.4579762384000223285341,\
0.0586823729814069730559,-1.0035555258293702429739,-0.1166748359615927543853,\
0.8530686378617126086610,-0.5952441201854786756442,-0.9104692400773028992944,\
-0.1222081949574846115869,0.8743861864198215760879,-1.7814901158856750740256,\
-0.1655434636829379024814,1.2699075561256230049167,3.1587625106365013749610,\
0.8610776754247619901861,-0.0100004380673695478232}

#define ZSOURCEI {0.9250286334648400998759,0.1065362941212572023275,-0.8122748012511081805442,\
2.9016509109873367400212,-0.879282905363888867001,-0.3325238972742790566350,\
1.2084799362120550725308,0.2580513186266746861186,-0.2529978784629969279507,\
1.6363224419507169660193,0.3632057263498695842685,0.3611017132584669053763,\
-1.2067543995469365292195,-0.9261214746973902567362,0.5500770410591231396324,\
0.3509274981930612380410,-2.0620828383452867171854,0.1301261656898765051160,\
-0.0829640021096160473757,0.5497292800458170036748,-1.586103376800369391120,\
1.1212128658770057487715,-0.0802149047940418080671,0.3400568097779858578456,\
0.5992917235464352287977,1.2934484737369573714716,-0.1770100915330515556345,\
-1.6783588206143511545321,0.3877335362207995905770,-0.3290626192650726866695,\
-0.7735806757117498211329,1.4288193530454935675778,-0.0608386450296815664562,\
0.2853217242027552558170,-0.3091484421032868468160,0.2351673955360732704012,\
0.8718242905301006873131,0.9043814712183079196350,0.4001603453209788274769,\
0.2902565872125924539837,-0.1051862594971314374126,-0.2633497801636938695502,\
0.5605928815183498503671,-1.0135332223701010168071,1.3762849538989350151041,\
0.0221113855817069056287,0.296045052860035018405,0.1323984531412186749222,\
-0.5439657044615130443432,0.7105758550684416752219,-1.988902172751357388947,\
0.8370036445008282033342,-1.361827445493777322127,-0.2908726176761944892668,\
0.7582058566306987268391,2.2582687071318150451305,-0.838995532132944754622,\
-0.0049693115325542529942,0.8948621233346091274896,-0.1820415696112677728102,\
0.0164009645281327567923,0.4631157184786182656744,1.2818863747394355634412,\
1.37735582155233560187,-0.7661687725125947423521,-0.8188017890741936533061,\
1.3941959606340814659120,2.0721869090596265472470,0.9329858014692479217800,\
-1.0023470169799657547571,0.1352029091047084741195,0.5763346694547388793239,\
-1.492034523395888490072,-0.4804977288873880647557,0.7911732889577677285686,\
0.1745293679511154827377,0.0354831535332537570393,-0.8628629256538601355331,\
0.1942834096659604437018,1.3466596448020036191906,0.3364543941938548110571,\
-1.109797124842869298078,0.1809508886112952685821,0.5725159396053964844242,\
0.6787472822917395287590,1.4922528447187788369632,-0.9855408452288743070824,\
2.0147405762642014437347,-0.1974169216352719968821,-0.2472797570908096820297,\
-0.3003777280233598800940,-0.6957353172991608269982,0.8954567399776292013769,\
0.0025734217968703923703,1.2028191624106452373155,-0.3976568161030914483334,\
-0.9486032699014914637559,0.344203116731234826098,-0.1282579491971870822020,\
0.2354837848969928981724,-1.0123893486718691381299,-0.1455435264750559176683,\
-0.0385439121492695893623,0.2704776801120854501370,0.9996348746916957628272,\
1.1879952493572987215487,-0.1421627190737907164841,-0.9134168336317867176177,\
-1.3273949616244651306118,-0.2266260602581666450117,0.0136941574262192684169,\
0.8667822397875659667932,-0.8918524882230300931951,0.5818810906621436629393,\
0.5786477410918646757665,-1.2824019249961673416749,-0.8858272202103619763491,\
1.49931415247364041576,-0.3191008638398869501351,-0.6302800825827241659738,\
-0.9307697616588104239099,-0.2218962076254625825911,0.5504657591791385362612,\
0.7937732776747626894931,0.4530121091137990219089,-0.5561836772913717474864,\
-0.0487810094749783207391,1.0373690852013959240452,-1.9605345216190741552964,\
-0.6318190008183720562940,-0.2595506312908315571519,1.6655693943633802511783,\
0.2643484753712377899326,0.5166487752761181884154,-1.7642021092407271787295,\
0.9519817124353935344772,1.5941109627321103925368,-0.3268346133298423716873,\
-0.8591341754919610274044,-0.5067465121338621258928,0.4012524027420211192307,\
-1.3781772559142455580883,-1.0900200484217259511155,0.7071849131547247591101,\
0.6311112492498477388736,-1.5661486235109134401711,-0.3037032596268335327139,\
-2.3928711979350367755615,0.9280630230889591603116,1.234345031017325400313,\
0.0245382276611107209841,-1.7795591476102954331395,-0.1457340296796875434016,\
-1.4175919090731374794245,-1.0931645829165108629866,0.0976120560124896369247,\
-0.4917932561715864236973,0.3236361331498361360026,-1.3493789441767958248164,\
-0.4975410901203008995353,-0.5175498508985710843788,1.9028534065523732277114,\
-1.0213015320689262654952,0.7201673839470011939667,-0.229479324750370056174,\
0.0507808834449509222120,-0.6036524407661360003274,-0.3189899214184117592907,\
0.8969390978377852485792,0.0689550751790670851671,-0.3842312216289716086948,\
-0.5817559662860881664059,-1.4228206622942274339749,-0.8055937171612096436846,\
-0.8761791574203163790457,0.6999940081500163335804,0.3592083211755666694032,\
-2.2759824091756848396528,1.1126243656877470300515,-1.490042708505755930659,\
-0.2517675074289520420479,-0.4649616224894683735869,-0.9304122891120238936224,\
-0.2780945839682648634827,-1.186365868114249266796,-1.0805465619847403058174,\
-0.2982113561322028982836,-0.4608151973468663786804,0.5142626215675811796046,\
-0.8962085262358048254328,-1.8912922138922239057024,1.5339839202719194322100,\
-1.0493592314888038341536,1.5275565058768361126340,-0.3000289995792813080300,\
-1.2901253199534357118949,0.4517205659557054775455,0.1925085892467791881533,\
0.4244705571771024699146,1.1465794102472002258253}

#define ZRESULTR {0.2881823261718455264635,-1.2239148834349047323400,-0.7845879395690421587162,\
1.7398908843418365854916,0.6267968040978579846723,-0.0069618200210163757799,\
-1.3647060336777470102021,0.3067781755755824568688,0.8879601142484547793288,\
-1.1408081118402808584733,-1.0511217892257147532575,-0.4630227853264242132703,\
-0.8052300885146775888401,-1.0799054881923455528892,-0.3673239873834487356774,\
-1.3895193771431015861140,1.4748704381210364644517,-0.4721815868535457205724,\
-0.0800715444386163321955,0.7328675926305248111703,1.1062012776691256821238,\
1.1578188890116758447135,0.7250736097899580512305,-0.7268209399811761395327,\
-1.020749615675486277055,-0.7543891378811746761812,0.1777916795470285138414,\
1.224903809672051702151,-1.074529895353530717372,0.6903548013878436639956,\
-0.4611640141379182988857,0.933556473565831823613,1.4531339378119088046049,\
1.1451427225776011908920,-1.0686132863053487973559,-0.1688483441440512822229,\
-0.1889456477264452038956,0.5985578048499338166266,0.6993236665323845357989,\
-0.4109810453160360754765,0.4971360116983927213141,0.3821580291233257486994,\
0.4128919091647823558233,0.9758538921704605906271,1.0346135696067118026065,\
-0.2478280180540722854587,0.6216905071606976251886,-0.0450118169844396301404,\
0.3340415020637265142156,-0.4315313860868430495543,1.3446595868643815840926,\
-1.4033414360880258620057,0.8274220763035017300879,-1.309144795084008494612,\
-1.3004176310924011605863,1.4613978516551788811029,0.4652521895005036212112,\
-0.3810083873666035292338,-0.4305652750257212835194,-1.0463819862831613693999,\
-0.0968555231163464591670,-0.7621978211341690068181,-1.0442639351316740370379,\
0.8551375533721097266238,0.4624338658491132791895,-0.2135461711123592121186,\
-0.9192783709328955499274,1.406572519212488048268,-0.5996917427163407365853,\
0.8472849136812159454024,-0.0948718277212909494311,-0.6635046470522460992925,\
1.102552918644890800337,1.0241591511876448894469,-1.1946095915247210150767,\
1.3012416677676885701231,-0.860094399966521483414,0.4848763007604853791932,\
0.7459402751068522352540,0.9429407450799555112653,-0.2932662625241302944978,\
0.8365772498525353428889,0.4339900657778844039747,-0.0520088659229247518567,\
0.540163948037489571874,-1.5617045052623743650599,-1.1990755672824380262398,\
1.6897714229424107834632,-0.4304392780607278479188,-0.7314935627224536940361,\
-0.2521660858364912494167,-1.1139709472810304102808,1.03593284093582016503,\
0.9879482215425008373444,1.008898373366306833177,-0.5387894626210441018088,\
1.0404295395317768591070,-0.2970761763070669525533,-1.1952939328908356309000,\
0.3857997224260597546319,0.8038817262315489653446,-0.5212531537640049394966,\
-0.3822389517390957225373,0.3966495909859810709008,-0.6230521638604892276092,\
-0.7692209701300163349202,1.03425437487647720047,-0.0946733232120821749378,\
1.0396309891046779938506,0.0495385539831420876333,0.6452562376798283150237,\
1.1985497422790862831476,1.2458585900431864423865,0.8349246161988523873276,\
0.5689579490080320933743,-0.7806209699664544698905,-1.5187452500641256403213,\
-1.0796802038517956390251,0.9639374126836365297422,1.1711728912763936794050,\
-0.362488012679416937711,-0.0199872602643281528645,-0.5128264059242761963020,\
0.8492028743473079011039,0.1591587587129435210631,0.3212111561314560104208,\
0.5775318673000989777577,-0.8249558967503766160334,-1.7154192273737123297650,\
0.9346304365709510175719,-1.2804432024400131950870,-1.1426657840798974952179,\
0.4703017265736584850977,-0.9677493848474170157203,-1.2320829767979621927054,\
0.4762683633703864716225,-1.0444970147674126348392,0.2072645201710894835578,\
-0.7498010260478793487238,0.9188781401771745072082,-0.4789588845434366026765,\
0.8476937452776511783270,0.8895027647705600060135,0.7682169660294876356588,\
0.2922093151936491217668,-1.0429114806489117039945,1.166492728893671504409,\
-1.8646253504096552688907,-0.8923239533314403226782,1.0666374040344190898821,\
-0.7669950473749445052363,-1.3585386555510787776058,-0.1491456224121993634490,\
1.354597929546794699007,-1.4004360287243708960148,0.9567139977921835791719,\
-0.1859618971982733570680,0.0067522660769214690180,-0.842830481930881947328,\
-0.0503539309377906904586,-0.5389456072426579424928,-1.2991753231583602623544,\
1.0064698858838660999737,-0.7727166159011478185903,-1.375918311051623987851,\
-0.5968365322787659854598,0.4909328325978893903248,0.0069327197759769939797,\
-0.4109069224660110153380,-0.8305261099098545374275,1.067766372332880076002,\
0.1364036525382384124061,1.0185816452043403579353,0.2263896344197315613211,\
0.7241797053868859190828,-0.3310339119084142467386,-0.4485953806654829345568,\
1.4637030484564286236804,0.8062581119903107218505,1.135230070733268981087,\
0.8486739138084887779101,0.8869200257723099944940,0.8304138989692378958196,\
0.4970805707137128659490,-1.6189532479764259242927,0.7536345887109229257916,\
0.0614297741451279438740,-0.9217679644120017057318,-0.1351912284135200204016,\
0.9344534227267771164804,-1.3237759469951597690596,-1.2409772949992454726953,\
-0.4266400610039619012426,1.2242961173386468498592,-1.3507787481217943259537,\
-0.7743193525686042910650,1.0905655681187926830944,1.869097852573508911078,\
0.8141159942263986870614,-0.5353611933969746328188}

#define ZRESULTI {1.0927665474832626291146,0.0577041411945533808114,-0.6605411939586326441898,\
1.4173928005937053153929,-0.8196938376873322829042,-0.3389699587748392084485,\
0.6182411929183926346809,0.2489298772050817232238,-0.1790179858054015138435,\
1.2497543779018556175942,0.2282445233800083350673,0.3316185520857942714557,\
-1.1178350760886399672955,-0.5992404494636266454322,0.5409431572062767257236,\
0.165426376161976390611,-1.1122536593055589726475,0.1171231329897951256580,\
-0.0827933061236485051682,0.4436212447193593200190,-1.2403328057018132568601,\
0.6960798868922111193314,-0.0629757037081154352753,0.2697689038111338311055,\
0.3922302209885859536342,1.4842743869253867128322,-0.1751428834182987837043,\
-1.13801740936157136375,0.2394213509890497915134,-0.2668464988788373237760,\
-0.7726426977316005473284,1.3382415873096298319922,-0.0269807302035863991185,\
0.1656312162752983929703,-0.1911246952977092017356,0.2339836780169318453115,\
1.0284310438096477824388,0.8686878315011077322794,0.3246111072217529036621,\
0.2706500543034189298908,-0.0935407508346946525712,-0.2477506860556301926390,\
0.5421539099371334158306,-0.7327711559744070068945,1.05214358953255682216,\
0.0214509576394467729732,0.2493724089381304798163,0.1326531466862980457311,\
-0.5409686898264083332322,0.7065143938000820744705,-1.3284854753780470648650,\
0.3984512917058077308141,-1.5446072484052193463100,-0.1469509150678137976431,\
0.3947301571210936610434,1.461008167394748147316,-0.8567501445560671280433,\
-0.0046292376134026641879,0.9577036871573997300899,-0.1140752778705255016112,\
0.0163250605343483005949,0.3628386917181465332050,0.9320951721399445277783,\
1.44423353597128478754,-0.7628206936973814800140,-0.9280966118664348840639,\
1.2849894108105837098321,1.2792864989827095190122,0.9061761299907579170210,\
-0.8122605612540356734286,0.1350064725981316715586,0.4883936062374085174120,\
-1.102637196793889051705,-0.3106468603302708908487,0.4543964386247798525886,\
0.0885735454738456329249,0.0254706011136682855533,-0.8796254633651946486239,\
0.151022627304807338655,1.1452851102523748938466,0.3283556388648877777392,\
-0.9434455972747952667845,0.1659123702555805879300,0.6086281726098896616151,\
0.631662047814702143356,0.6431181331610840157254,-0.5760553428914201301581,\
0.8026360136122261401681,-0.1814351276467410234439,-0.1944579368330171531554,\
-0.2953494745705410595704,-0.4250058789202441067445,0.599813865521373279499,\
0.0016830438518425523946,0.8854731871017331723550,-0.3534985427172745442448,\
-0.6383931728072353983805,0.3358307199066276060861,-0.0711733718807077142543,\
0.2207727851446303901639,-0.8556718335996058577564,-0.1281371029552695606224,\
-0.0358976629777693137524,0.2532084228703710415687,0.983986642358089413918,\
1.1345925939829912820755,-0.0898559156199065373061,-1.1416915329673189560822,\
-0.9870037974692073001748,-0.2283270051627071806077,0.0112664968061259064547,\
0.4998464672322767698986,-0.4937534754955061888637,0.4389132738737425154518,\
0.5191615917775272981416,-1.330080589614465180759,-0.3792401398168883108752,\
1.1512099997314479971067,-0.2141264512433771194377,-0.3645359117298094808746,\
-1.0609046855212507232125,-0.2237132816089271170057,0.5066458933231118288987,\
0.6114387233853804115569,0.4637825784576218857147,-0.5570387380565021695489,\
-0.0416532931678999865377,0.8675730496349238762832,-0.7521971544712148238787,\
-0.4444425039044248570974,-0.1343255157657375076230,1.3031888522890535675458,\
0.2398794824711508455461,0.3501788639961876947737,-1.2484148728039676790047,\
1.0223862780907517766593,1.5114877336366283611113,-0.3256639805152193312132,\
-0.7257147000802074421344,-0.3563177118938634091450,0.367466380314942664409,\
-1.5032253124394940879682,-0.8731092741090689113292,0.5703012583169800864269,\
0.6498833797759138164452,-1.3804786941428137669874,-0.1733188156619589748164,\
-0.8098487944615534450676,0.7091099644264757806411,0.8627806630820323841036,\
0.0187490818204580703132,-1.0316116049359651540840,-0.1446317495535741626256,\
-0.7559013344655626243096,-0.5329078157992787057040,0.0653983668850169619358,\
-0.5045465362161873912328,0.3295621318182701542376,-1.3711989596398608259875,\
-0.5200355557922887728139,-0.4673488331710942134123,1.3098786184351398631520,\
-0.7189565120188516900157,0.580208200526596162838,-0.1091990841314347954194,\
0.0429221122996483323009,-0.5675416667058814645941,-0.3246554520854594838575,\
0.9723329710924543123340,0.0505316478341986258238,-0.2385123070932486100126,\
-0.6142986606043344677275,-1.1409813222703388824186,-0.9033119064286492250204,\
-0.7584587763797572268487,0.7252421018090512427889,0.3319280479688784257775,\
-1.5464687515566899467245,0.9763347698321626078055,-1.0511809923664583443781,\
-0.1831638202759971745248,-0.3336438319634690841120,-0.7499286125479456277532,\
-0.2495331996617490000201,-0.4693439688376106477818,-0.9839213631021112016484,\
-0.3022296870844187743899,-0.3220832096726037319101,0.5347182539371353460211,\
-0.6559994287878105900802,-1.2228456605235495935347,0.9588662882096035122714,\
-1.2891530456629314294048,0.9731441796186428572213,-0.1461840118371629804184,\
-1.3757278523698810435150,0.2762809284691948308321,0.0580458636704428015962,\
0.3198225937522309325622,1.5529789344620548163789}

void dasinhsTest(void) {
	double in[]= SOURCE;
	double res[]= RESULT;
	double out;
	int i=0;

	for (i=0;i<200;i++){
		out=dasinhs(in[i]);
		assert ( ( (fabs(out-res[i])) / (fabs(out)) ) <1e-15);
	}
}

void zasinhsTest(void) {
	double inR[]=ZSOURCER;
	double inI[]=ZSOURCEI;
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex in, out;
	int i=0;

	for (i=0;i<200;i++){
		in=DoubleComplex(inR[i],inI[i]);
		out = zasinhs(in);
		printf("%d - trouvé : %1.20f  - espéré : %1.20f - erreur %1.20f\n",i,zreals(out),resR[i],(fabs(zreals(out)-resI[i])) / (fabs(zreals(out))));
		printf("detail : %1.20f - %1.20f / %1.20f\n",zreals(out)-resI[i],(fabs(zreals(out)-resI[i])),(fabs(zreals(out))));

		assert( ( ( fabs( zreals(out)-resR[i] ) ) / (fabs(zreals(out)) ) ) <1e-15);
		assert( ( ( fabs( zimags(out)-resI[i] ) ) / (fabs(zimags(out)) ) ) <1e-15);
	}
}

void dasinhaTest(void) {
	double in[]= SOURCE;
	double res[]= RESULT;
	double out[200];
	int i=0;

	dasinha(in,200,out);
	for (i=0;i<200;i++){
		assert ( ( (fabs(out[i]-res[i])) / (fabs(out[i])) ) <1e-15);
	}}

void zasinhaTest(void) {
	double inR[]=ZSOURCER;
	double inI[]=ZSOURCEI;
	double resR[]=ZRESULTR;
	double resI[]=ZRESULTI;
	doubleComplex in[200], out[200];
	int i=0;

	for (i=0;i<200;i++){
		in[i]=DoubleComplex(inR[i],inI[i]);
	}
	zasinha(in,200,out);
	for (i=0;i<200;i++){
		assert( ( ( fabs( zreals(out[i])-resR[i] ) ) / (fabs(zreals(out[i])) ) ) <1e-15);
		assert( ( ( fabs( zimags(out[i])-resI[i] ) ) / (fabs(zimags(out[i])) ) ) <1e-15);
	}
}

int testAsinh(void) {
  printf("\n>>>> Double Hyperbolic ArcSine Tests\n");
  dasinhsTest();
  zasinhsTest();
  dasinhaTest();
  zasinhaTest();

  return 0;
}

int main(void) {
  assert(testAsinh() == 0);
  return 0;
}
