//
// Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
// Copyright (C) 2009 - INRIA - Arnaud Torset
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Edited by: Yash Pratap Singh Tomar

function scilab2ccode = Scilab2CDeps()


/////////////////////////////////
////// AUXILIARY FUNCTIONS //////
/////////////////////////////////

//abs
scilab2ccode.deps.cabss=["ssqrts","sabss","creals","cimags"]
scilab2ccode.deps.cabsa=["cabss"]
scilab2ccode.deps.dabss=[]
scilab2ccode.deps.dabsa=["dabss"]
scilab2ccode.deps.sabss=[]
scilab2ccode.deps.sabsa=["sabss"]
scilab2ccode.deps.zabss=["dsqrts","dabss","zreals","zimags"]
scilab2ccode.deps.zabsa=["zabss"]
scilab2ccode.deps.u8absa=["u8abss"]
scilab2ccode.deps.u8abss=[]
scilab2ccode.deps.i8absa=["i8abss"]
scilab2ccode.deps.i8abss=[]
scilab2ccode.deps.u16absa=["u16abss"]
scilab2ccode.deps.u16abss=[]
scilab2ccode.deps.i16absa=["i16abss"]
scilab2ccode.deps.i16abss=[]
//conj
scilab2ccode.deps.cconjs=["FloatComplex","creals","cimags"]
scilab2ccode.deps.cconja=["cconjs"]
scilab2ccode.deps.zconjs=["DoubleComplex","zreals","zimags"]
scilab2ccode.deps.zconja=["zconjs"]

//find
scilab2ccode.deps.cfinda=["creals","cimags"]
scilab2ccode.deps.dfinda=[]
scilab2ccode.deps.sfinda=[]
scilab2ccode.deps.zfinda=["zreals","zimags"]
scilab2ccode.deps.i8finda=[]
scilab2ccode.deps.i16finda=[]
scilab2ccode.deps.u8finda=[]
scilab2ccode.deps.u16finda=[]

//float
scilab2ccode.deps.dfloats=[]
scilab2ccode.deps.dfloata=[]
scilab2ccode.deps.i8floats=[]
scilab2ccode.deps.i8floata=[]
scilab2ccode.deps.i16floats=[]
scilab2ccode.deps.i16floata=[]
scilab2ccode.deps.sfloats=[]
scilab2ccode.deps.sfloata=[]
scilab2ccode.deps.u8floats=[]
scilab2ccode.deps.u8floata=[]
scilab2ccode.deps.u16floats=[]
scilab2ccode.deps.u16floata=[]

//find2d
scilab2ccode.deps.cfind2da=["creals","cimags"]
scilab2ccode.deps.dfind2da=[]
scilab2ccode.deps.sfind2da=[]
scilab2ccode.deps.zfind2da=["zreals","zimags"]


//frexp
scilab2ccode.deps.dfrexps=[]
scilab2ccode.deps.sfrexps=[]

//isempty
scilab2ccode.deps.cisemptys=[]
scilab2ccode.deps.cisemptya=["cfinda"]
scilab2ccode.deps.disemptys=[]
scilab2ccode.deps.disemptya=["dfinda"]
scilab2ccode.deps.sisemptys=[]
scilab2ccode.deps.sisemptya=["sfinda"]
scilab2ccode.deps.zisemptys=[]
scilab2ccode.deps.zisemptya=["zfinda"]

//isnan
scilab2ccode.deps.cisnans=["creals","cimags"]
scilab2ccode.deps.cisnana=["cisnans"]
scilab2ccode.deps.disnans=[]
scilab2ccode.deps.disnana=["disnans"]
scilab2ccode.deps.sisnans=[]
scilab2ccode.deps.sisnana=["sisnans"]
scilab2ccode.deps.zisnans=["zreals","zimags"]
scilab2ccode.deps.zisnana=["zisnans"]

//length

//pythag
scilab2ccode.deps.cpythags=["csqrts","cadds","cmuls"]
scilab2ccode.deps.dpythags=["dsqrts"]
scilab2ccode.deps.spythags=["ssqrts"]
scilab2ccode.deps.zpythags=["zsqrts","zadds","zmuls"]

//rand
scilab2ccode.deps.cranda=["crands"]
scilab2ccode.deps.crands=["FloatComplex"]
scilab2ccode.deps.dranda=["drands"]
scilab2ccode.deps.drands=[]
scilab2ccode.deps.i8randa=["i8rands"]
scilab2ccode.deps.i8rands=[]
scilab2ccode.deps.i16randa=["i16rands"]
scilab2ccode.deps.i16rands=[]
scilab2ccode.deps.sranda=["srands"]
scilab2ccode.deps.srands=[]
scilab2ccode.deps.u8randa=["u8rands"]
scilab2ccode.deps.u8rands=[]
scilab2ccode.deps.u16randa=["u16rands"]
scilab2ccode.deps.u16rands=[]
scilab2ccode.deps.zranda=["drands","DoubleComplex","zreals",]
scilab2ccode.deps.zrands=["drands","DoubleComplex"]

//sign
scilab2ccode.deps.csigns=["FloatComplex","cabss","creals","cimags"]
scilab2ccode.deps.csigna=["csigns"]
scilab2ccode.deps.dsigns=[]
scilab2ccode.deps.dsigna=["dsigns"]
scilab2ccode.deps.dsigns=[]
scilab2ccode.deps.dsigna=["ssigns"]
scilab2ccode.deps.zsigns=["DoubleComplex","zabss","zreals","zimags"]
scilab2ccode.deps.zsigna=["zsigns"]
scilab2ccode.deps.i8signa=["i8signs"]
scilab2ccode.deps.i8signs=[]
scilab2ccode.deps.i16signa=["i16signs"]
scilab2ccode.deps.i16signs=[]
scilab2ccode.deps.u8signa=["u8signs"]
scilab2ccode.deps.u8signs=[]
scilab2ccode.deps.u16signa=["u16signs"]
scilab2ccode.deps.u16signs=[]

//size
scilab2ccode.deps.dallsizea=[]

//type

/////////////////////////////////
/////      CACSD    /////////////
////////////////////////////////

//lqe
scilab2ccode.deps.dlqea=["dtransposea","dlqra"]

//lqr
scilab2ccode.deps.dlqra=["dtransposea","dmulma","dinverma","ddiffa","dschura","drdivma","dadda","deyea","dgschura"]

//obscont
scilab2ccode.deps.dobsconta=["dmulma","dadda"]

//syslin
scilab2ccode.deps.dsyslina=[]

/////////////////////////////////
///////DIFFERENTIAL CALCULUS/////
/////////////////////////////////

//diff
scilab2ccode.deps.ddiffca=[]
scilab2ccode.deps.i8diffca=[]
scilab2ccode.deps.i16diffca=[]
scilab2ccode.deps.sdiffca=[]
scilab2ccode.deps.u8diffca=[]
scilab2ccode.deps.u16diffca=[]

//ode
scilab2ccode.deps.dodea=[]
scilab2ccode.deps.dodes=[]




//////////////////////////////////
////// ELEMENTARY FUNCTIONS //////
//////////////////////////////////

//acos
scilab2ccode.deps.cacoss=["FloatComplex","ssqrts","sabss","sacoss","satans","slogs","slog1ps","creals","cimags"]
scilab2ccode.deps.cacosa=["cacoss"]
scilab2ccode.deps.dacoss=[]
scilab2ccode.deps.dacosa=["dacoss"]
scilab2ccode.deps.sacoss=[]
scilab2ccode.deps.sacosa=["sacoss"]
scilab2ccode.deps.zacoss=["DoubleComplex","dsqrts","dabss","dacoss","datans","dlogs","dlog1ps","zreals","zimags"]
scilab2ccode.deps.zacosa=["zacoss"]

//acosd
scilab2ccode.deps.dacosda=["dacosds"]
scilab2ccode.deps.dacosds=[]
scilab2ccode.deps.sacosda=["sacosds"]
scilab2ccode.deps.sacosds=[]

//acosh
scilab2ccode.deps.cacoshs=["FloatComplex","cacoss","creals","cimags"]
scilab2ccode.deps.cacosha=["cacoshs"]
scilab2ccode.deps.dacoshs=[]
scilab2ccode.deps.dacosha=["dacoshs"]
scilab2ccode.deps.sacoshs=[]
scilab2ccode.deps.sacosha=["sacoshs"]
scilab2ccode.deps.zacoshs=["DoubleComplex","zacoss","zreals","zimags"]
scilab2ccode.deps.zacosha=["zacoshs"]

//acot
scilab2ccode.deps.cacota=["cacots"]
scilab2ccode.deps.cacots=["FloatComplex","crdivs","catans"]
scilab2ccode.deps.dacota=["dacots"]
scilab2ccode.deps.dacots=[]
scilab2ccode.deps.sacota=["sacots"]
scilab2ccode.deps.sacots=[]
scilab2ccode.deps.zacota=["zacots"]
scilab2ccode.deps.zacots=["DoubleComplex","zrdivs","zatans"]

//acotd
scilab2ccode.deps.dacotda=["dacotds"]
scilab2ccode.deps.dacotds=[]
scilab2ccode.deps.sacotda=["sacotds"]
scilab2ccode.deps.sacotds=[]

//acoth
scilab2ccode.deps.cacotha=["cacoths"]
scilab2ccode.deps.cacoths=["FloatComplex","crdivs","catanhs"]
scilab2ccode.deps.dacotha=["dacoths"]
scilab2ccode.deps.dacoths=[]
scilab2ccode.deps.sacotha=["sacoths"]
scilab2ccode.deps.sacoths=[]
scilab2ccode.deps.zacotha=["zacoths"]
scilab2ccode.deps.zacoths=["DoubleComplex","zrdivs","zatanhs"]

//acsc
scilab2ccode.deps.cacsca=["cacscs"]
scilab2ccode.deps.cacscs=["FloatComplex","crdivs","casins"]
scilab2ccode.deps.dacsca=["dacscs"]
scilab2ccode.deps.dacscs=[]
scilab2ccode.deps.sacsca=["sacscs"]
scilab2ccode.deps.sacscs=[]
scilab2ccode.deps.zacsca=["zacscs"]
scilab2ccode.deps.zacscs=["DoubleComplex","zrdivs","zasins"]

//acscd
scilab2ccode.deps.dacscda=["dacscds"]
scilab2ccode.deps.dacscds=[]
scilab2ccode.deps.sacscda=["sacscds"]
scilab2ccode.deps.sacscds=[]

//acsch
scilab2ccode.deps.cacsca=["cacscs"]
scilab2ccode.deps.cacscs=["FloatComplex","crdivs","cmuls"]
scilab2ccode.deps.dacscha=["dacschs"]
scilab2ccode.deps.dacschs=[]
scilab2ccode.deps.sacscha=["sacschs"]
scilab2ccode.deps.sacschs=[]
scilab2ccode.deps.zacsca=["zacscs"]
scilab2ccode.deps.zacscs=["zrdivs","DoubleComplex","zasins"]

//asec
scilab2ccode.deps.daseca=["dasecs"]
scilab2ccode.deps.dasecs=[]
scilab2ccode.deps.saseca=["sasecs"]
scilab2ccode.deps.sasecs=[]

//asecd
scilab2ccode.deps.dasecda=["dasecds"]
scilab2ccode.deps.dasecds=[]
scilab2ccode.deps.sasecda=["sasecds"]
scilab2ccode.deps.sasecds=[]

//asech
scilab2ccode.deps.dasecha=["dasechs"]
scilab2ccode.deps.dasechs=[]
scilab2ccode.deps.sasecha=["sasechs"]
scilab2ccode.deps.sasechs=[]

//asin
scilab2ccode.deps.casins=["FloatComplex","ssqrts","sabss","sasins","satans","slogs","slog1ps","dabss","creals","cimags"]
scilab2ccode.deps.casina=["casins"]
scilab2ccode.deps.dasins=[]
scilab2ccode.deps.dasina=["dasins"]
scilab2ccode.deps.sasins=[]
scilab2ccode.deps.sasina=["sasins"]
scilab2ccode.deps.zasins=["DoubleComplex","dsqrts","dabss","dasins","datans","dlog1ps","dlogs","zreals","zimags"]
scilab2ccode.deps.zasina=["zasins"]

//asind
scilab2ccode.deps.dasinda=["dasinds"]
scilab2ccode.deps.dasinds=[]
scilab2ccode.deps.sasinda=["sasinds"]
scilab2ccode.deps.sasinds=[]


//asinh
scilab2ccode.deps.casinhs=["FloatComplex","casins","creals","cimags"]
scilab2ccode.deps.casinha=["casinhs"]
scilab2ccode.deps.dasinhs=["DoubleComplex","zasins"]
scilab2ccode.deps.dasinha=["dasinhs"]
scilab2ccode.deps.sasinhs=["FloatComplex","casins"]
scilab2ccode.deps.sasinha=["sasinhs"]
scilab2ccode.deps.zasinhs=["DoubleComplex","zasins","zreals","zimags"]
scilab2ccode.deps.zasinha=["zasinhs"]


//atan
scilab2ccode.deps.catans=["satans","creals","cimags","dabss","slnp1m1s","sabss","FloatComplex"]
scilab2ccode.deps.catana=["catans"]
scilab2ccode.deps.datans=[]
scilab2ccode.deps.datana=["datans"]
scilab2ccode.deps.satans=[]
scilab2ccode.deps.satana=["satans"]
scilab2ccode.deps.zatans=["datans","zreals","zimags","dabss","dlnp1m1s","DoubleComplex"]
scilab2ccode.deps.zatana=["zatans"]


//atan2
scilab2ccode.deps.datan2s=[]
scilab2ccode.deps.datan2a=["datan2s"]
scilab2ccode.deps.satan2s=[]
scilab2ccode.deps.satan2a=["satan2s"]

//atand
scilab2ccode.deps.datanda=["datands"]
scilab2ccode.deps.datands=[]
scilab2ccode.deps.satanda=["satands"]
scilab2ccode.deps.satands=[]

//atanh
scilab2ccode.deps.catanhs=["FloatComplex","creals","cimags","catans"]
scilab2ccode.deps.catanha=["catanhs"]
scilab2ccode.deps.datanhs=["zimags","zatans","DoubleComplex"]
scilab2ccode.deps.datanha=["datanhs"]
scilab2ccode.deps.satanhs=["cimags","catans","FloatComplex"]
scilab2ccode.deps.satanha=["satanhs"]
scilab2ccode.deps.zatanhs=["DoubleComplex","zreals","zimags","zatans"]
scilab2ccode.deps.zatanha=["zatanhs"]

//bitand
scilab2ccode.deps.u8bitanda=["u8bitands"]
scilab2ccode.deps.u8bitands=[]
scilab2ccode.deps.u16bitanda=["u16bitands"]
scilab2ccode.deps.u16bitands=[]

//bitcmp
scilab2ccode.deps.u8bitcmps=["u8bitcmps"]
scilab2ccode.deps.u8bitcmps=[]
scilab2ccode.deps.u16bitcmpa=["u16bitcmps"]
scilab2ccode.deps.u16bitcmps=[]

//bitget
scilab2ccode.deps.u8bitgets=[]
scilab2ccode.deps.u16bitgets=[]

//bitor
scilab2ccode.deps.u8bitora=["u8bitors"]
scilab2ccode.deps.u8bitors=[]
scilab2ccode.deps.u16bitora=["u16bitors"]
scilab2ccode.deps.u16bitors=[]

//bitset
scilab2ccode.deps.u8bitsets=[]
scilab2ccode.deps.u16bitsets=[]

//bitxor
scilab2ccode.deps.u8bitxora=["u8bitxors"]
scilab2ccode.deps.u8bitxors=[]
scilab2ccode.deps.u16bitxora=["u16bitxors"]
scilab2ccode.deps.u16bitxors=[]

//ceil
scilab2ccode.deps.cceila=["cceils"]
scilab2ccode.deps.cceils=["creals","cimags","FloatComplex"]
scilab2ccode.deps.dceila=["dceils"]
scilab2ccode.deps.dceils=[]
scilab2ccode.deps.i8ceila=["i8ceils"]
scilab2ccode.deps.i8ceils=[]
scilab2ccode.deps.i16ceila=["i16ceils"]
scilab2ccode.deps.i16ceils=[]
scilab2ccode.deps.sceila=["sceils"]
scilab2ccode.deps.sceils=[]
scilab2ccode.deps.u8ceila=["u8ceils"]
scilab2ccode.deps.u8ceils=[]
scilab2ccode.deps.u16ceila=["u16ceils"]
scilab2ccode.deps.u16ceils=[]
scilab2ccode.deps.zceila=["zceils"]
scilab2ccode.deps.zceils=["zreals","zimags","DoubleComplex"]

//cos
scilab2ccode.deps.ccoss=["creals","cimags","FloatComplex","scoss","scoshs","ssins","ssinhs"]
scilab2ccode.deps.ccosa=["ccoss"]
scilab2ccode.deps.dcoss=[]
scilab2ccode.deps.dcosa=["dcoss"]
scilab2ccode.deps.scoss=[]
scilab2ccode.deps.scosa=["scoss"]
scilab2ccode.deps.zcoss=["zreals","zimags","DoubleComplex","dcoss","dcoshs","dsins","dsinhs"]
scilab2ccode.deps.zcosa=["zcoss"]
scilab2ccode.deps.i8cosa=["i8coss"]
scilab2ccode.deps.i8coss=[]
scilab2ccode.deps.i16cosa=["i16coss"]
scilab2ccode.deps.i16coss=[]
scilab2ccode.deps.u8cosa=["u8coss"]
scilab2ccode.deps.u8coss=[]
scilab2ccode.deps.u16cosa=["u16coss"]
scilab2ccode.deps.u16coss=[]

//cosh
scilab2ccode.deps.ccoshs=["ccoss","FloatComplex","creals","cimags"]
scilab2ccode.deps.ccosha=["ccoshs"]
scilab2ccode.deps.dcoshs=["dexps","dabss"]
scilab2ccode.deps.dcosha=["dcoshs"]
scilab2ccode.deps.scoshs=["sexps","sabss"]
scilab2ccode.deps.scosha=["scoshs"]
scilab2ccode.deps.zcoshs=["zcoss","DoubleComplex","zreals","zimags"]
scilab2ccode.deps.zcosha=["zcoshs"]
scilab2ccode.deps.i8cosha=["i8coshs"]
scilab2ccode.deps.i8coshs=["i8abss","i8exps"]
scilab2ccode.deps.i16cosha=["i16coshs"]
scilab2ccode.deps.i16coshs=["i16abss","i16exps"]
scilab2ccode.deps.u8cosha=["u8coshs"]
scilab2ccode.deps.u8coshs=["u8abss","u8exps"]
scilab2ccode.deps.u16cosha=["u16coshs"]
scilab2ccode.deps.u16coshs=["u16abss","u16exps"]


//exp
scilab2ccode.deps.cexps=["creals","cimags","FloatComplex","sexps","scoss","ssins"]
scilab2ccode.deps.cexpa=["cexps"]
scilab2ccode.deps.dexps=[]
scilab2ccode.deps.dexpa=["dexps"]
scilab2ccode.deps.sexps=[]
scilab2ccode.deps.sexpa=["sexps"]
scilab2ccode.deps.zexps=["zreals","zimags","DoubleComplex","dexps","dcoss","dsins"]
scilab2ccode.deps.zexpa=["zexps"]
scilab2ccode.deps.i8expa=["i8exps"]
scilab2ccode.deps.i8exps=[]
scilab2ccode.deps.i16expa=["i16exps"]
scilab2ccode.deps.i16exps=[]
scilab2ccode.deps.u8expa=["u8exps"]
scilab2ccode.deps.u8exps=[]
scilab2ccode.deps.u16expa=["u16exps"]
scilab2ccode.deps.u16exps=[]

//exp10
scilab2ccode.deps.cexp10s=["cpows","FloatComplex"]
scilab2ccode.deps.cexp10a=["cexp10s"]
scilab2ccode.deps.dexp10s=[]
scilab2ccode.deps.dexp10a=["dexp10s"]
scilab2ccode.deps.sexp10s=[]
scilab2ccode.deps.sexp10a=["sexp10s"]
scilab2ccode.deps.zexp10s=["zpows","DoubleComplex"]
scilab2ccode.deps.zexp10a=["zexp10s"]

//fix
scilab2ccode.deps.cfixa=["cfixs"]
scilab2ccode.deps.cfixs=["creals","cimags","FloatComplex"]
scilab2ccode.deps.dfixa=["dfixs"]
scilab2ccode.deps.dfixs=[]
scilab2ccode.deps.i8fixa=["i8fixs"]
scilab2ccode.deps.i8fixs=["i8floors","i8ceils"]
scilab2ccode.deps.i16fixa=["i16fixs"]
scilab2ccode.deps.i16fixs=["i16floors","i16ceils"]
scilab2ccode.deps.sfixa=["sfixs"]
scilab2ccode.deps.sfixs=[]
scilab2ccode.deps.u8fixa=["u8fixs"]
scilab2ccode.deps.u8fixs=["u8floors","u8ceils"]
scilab2ccode.deps.u16fixa=["u16fixs"]
scilab2ccode.deps.u16fixs=["u16floors","u16ceils"]
scilab2ccode.deps.zfixa=["zfixs"]
scilab2ccode.deps.zfixs=["zreals","zimags","DoubleComplex"]

//floor
scilab2ccode.deps.cfloora=["cfloors"]
scilab2ccode.deps.cfloors=["creals","cimags","FloatComplex"]
scilab2ccode.deps.dfloora=["dfloors"]
scilab2ccode.deps.dfloors=[]
scilab2ccode.deps.i8floora=["i8floors"]
scilab2ccode.deps.i8floors=[]
scilab2ccode.deps.i16floora=["i16floors"]
scilab2ccode.deps.i16floors=[]
scilab2ccode.deps.sfloora=["sfloors"]
scilab2ccode.deps.sfloors=[]
scilab2ccode.deps.u8floora=["u8floors"]
scilab2ccode.deps.u8floors=[]
scilab2ccode.deps.u16floora=["u16floors"]
scilab2ccode.deps.u16floors=[]
scilab2ccode.deps.zfloors=["zfloors"]
scilab2ccode.deps.zfloors=["zreals","zimags","DoubleComplex"]

//int
scilab2ccode.deps.cinta=["cfixa"]
scilab2ccode.deps.cints=["cfixs"]
scilab2ccode.deps.dinta=["dfixa"]
scilab2ccode.deps.dints=["dfixs"]
scilab2ccode.deps.sinta=["sfixa"]
scilab2ccode.deps.sints=["sfixs"]
scilab2ccode.deps.zinta=["zfixa"]
scilab2ccode.deps.zints=["zfixs"]

//int8
scilab2ccode.deps.dint8a=["dint8s"]
scilab2ccode.deps.dint8s=[]
scilab2ccode.deps.i16int8a=["i16int8s"]
scilab2ccode.deps.i16int8s=[]
scilab2ccode.deps.sint8a=["sint8s"]
scilab2ccode.deps.sint8s=[]
scilab2ccode.deps.u8int8a=["u8int8s"]
scilab2ccode.deps.u8int8s=[]
scilab2ccode.deps.u16int8a=["u16int8s"]
scilab2ccode.deps.u16int8s=[]

//int16
scilab2ccode.deps.dint16a=["dint16s"]
scilab2ccode.deps.dint16s=[]
scilab2ccode.deps.i8int16a=["i8int16s"]
scilab2ccode.deps.i8int16s=[]
scilab2ccode.deps.sint16a=["sint16s"]
scilab2ccode.deps.sint16s=[]
scilab2ccode.deps.u8int16a=["u8int16s"]
scilab2ccode.deps.u8int16s=[]
scilab2ccode.deps.u16int16a=["u16int16s"]
scilab2ccode.deps.u16int16s=[]

//linspace
scilab2ccode.deps.dlinspacea=[]
scilab2ccode.deps.dlinspaces=[]


//lnp1m1
scilab2ccode.deps.dlnp1m1s=["dabss"]
scilab2ccode.deps.slnp1m1s=["sabss"]


//log
scilab2ccode.deps.clogs=["creals","cimags","slog1ps","slogs","spythags","FloatComplex"]
scilab2ccode.deps.cloga=["clogs"]
scilab2ccode.deps.dlogs=[]
scilab2ccode.deps.dloga=["dlogs"]
scilab2ccode.deps.slogs=[]
scilab2ccode.deps.sloga=["slogs"]
scilab2ccode.deps.zlogs=["zreals","zimags","zlog1ps","zlogs","zpythags","DoubleComplex"]
scilab2ccode.deps.zloga=["zlogs"]


//log1p
scilab2ccode.deps.clog1ps=["clogs","FloatComplex","creals","cimags"]
scilab2ccode.deps.clog1pa=["clog1ps"]
scilab2ccode.deps.dlog1ps=["dlnp1m1s","dlogs"]
scilab2ccode.deps.dlog1pa=["dlog1ps"]
scilab2ccode.deps.slog1ps=["slnp1m1s","slogs"]
scilab2ccode.deps.slog1pa=["slog1ps"]
scilab2ccode.deps.zlog1ps=["zlogs","DoubleComplex","zreals","zimags"]
scilab2ccode.deps.zlog1pa=["zlog1ps"]


//log10
scilab2ccode.deps.clog10s=["clogs","FloatComplex","creals","cimags","slogs"]
scilab2ccode.deps.clog10a=["clog10s"]
scilab2ccode.deps.dlog10s=[]
scilab2ccode.deps.dlog10a=["dlog10s"]
scilab2ccode.deps.slog10s=[]
scilab2ccode.deps.slog10a=["slog10s"]
scilab2ccode.deps.zlog10s=["zlogs","DoubleComplex","zreals","zimags","dlogs"]
scilab2ccode.deps.zlog10a=["zlog10s"]

//logspace
scilab2ccode.deps.dlogspacea=[]
scilab2ccode.deps.dlogspaces=[]

//pow
scilab2ccode.deps.cpows=["cexps","cmuls","clogs"]
scilab2ccode.deps.cpowa=["cpows"]
scilab2ccode.deps.dpows=[]
scilab2ccode.deps.dpowa=["dpows"]
scilab2ccode.deps.spows=[]
scilab2ccode.deps.spowa=["spows"]
scilab2ccode.deps.zpows=["zexps","zmuls","zlogs"]
scilab2ccode.deps.zpowa=["zpows"]
scilab2ccode.deps.i8powa=["i8pows"]
scilab2ccode.deps.i8pows=[]
scilab2ccode.deps.i16powa=["i16pows"]
scilab2ccode.deps.i16pows=[]
scilab2ccode.deps.u8powa=["u8pows"]
scilab2ccode.deps.u8pows=[]
scilab2ccode.deps.u16powa=["u16pows"]
scilab2ccode.deps.u16pows=[]

//round
scilab2ccode.deps.crounda=["crounds"]
scilab2ccode.deps.crounds=["creals","cimags","FloatComplex"]
scilab2ccode.deps.drounda=["drounds"]
scilab2ccode.deps.drounds=[]
scilab2ccode.deps.i8rounda=["i8rounds"]
scilab2ccode.deps.i8rounds=[]
scilab2ccode.deps.i16rounda=["i16rounds"]
scilab2ccode.deps.i16rounds=[]
scilab2ccode.deps.srounda=["srounds"]
scilab2ccode.deps.srounds=[]
scilab2ccode.deps.u8rounda=["u8rounds"]
scilab2ccode.deps.u8rounds=[]
scilab2ccode.deps.u16rounda=["u16rounds"]
scilab2ccode.deps.u16rounds=[]
scilab2ccode.deps.zrounda=["zrounds"]
scilab2ccode.deps.zrounds=["zreals","zimags","DoubleComplex"]

//sin
scilab2ccode.deps.csins=["creals","cimags","FloatComplex","ssins","scoshs","scoss","ssinhs"]
scilab2ccode.deps.csina=["csins"]
scilab2ccode.deps.dsins=[]
scilab2ccode.deps.dsina=["dsins"]
scilab2ccode.deps.ssins=[]
scilab2ccode.deps.ssina=["ssins"]
scilab2ccode.deps.zsins=["zreals","zimags","DoubleComplex","dsins","dcoshs","dcoss","dsinhs"]
scilab2ccode.deps.zsina=["zsins"]
scilab2ccode.deps.i8sina=["i8sins"]
scilab2ccode.deps.i8sins=[]
scilab2ccode.deps.i16sina=["i16sins"]
scilab2ccode.deps.i16sins=[]
scilab2ccode.deps.u8sina=["u8sins"]
scilab2ccode.deps.u8sins=[]
scilab2ccode.deps.u16sina=["u16sins"]
scilab2ccode.deps.u16sins=[]


//sinh
scilab2ccode.deps.csinhs=["creals","cimags","csins","FloatComplex"]
scilab2ccode.deps.csinha=["csinhs"]
scilab2ccode.deps.dsinhs=[]
scilab2ccode.deps.dsinha=["dsinhs"]
scilab2ccode.deps.ssinhs=[]
scilab2ccode.deps.ssinha=["ssinhs"]
scilab2ccode.deps.zsinhs=["zreals","zimags","zsins","DoubleComplex"]
scilab2ccode.deps.zsinha=["zsinhs"]
scilab2ccode.deps.i8sinha=["i8sinhs"]
scilab2ccode.deps.i8sinhs=[]
scilab2ccode.deps.i16sinha=["i16sinhs"]
scilab2ccode.deps.i16sinhs=[]
scilab2ccode.deps.u8sinha=["u8sinhs"]
scilab2ccode.deps.u8sinhs=[]
scilab2ccode.deps.u16sinha=["u16sinhs"]
scilab2ccode.deps.u16sinhs=[]


//sqrt
scilab2ccode.deps.csqrts=["creals","cimags","dabss","ssqrts","sabss","spythags","FloatComplex"]
scilab2ccode.deps.csqrta=["csqrts"]
scilab2ccode.deps.dsqrts=[]
scilab2ccode.deps.dsqrta=["dsqrts"]
scilab2ccode.deps.ssqrts=[]
scilab2ccode.deps.ssqrta=["ssqrts"]
scilab2ccode.deps.zsqrts=["zreals","zimags","dabss","dsqrts","dpythags","DoubleComplex"]
scilab2ccode.deps.zsqrta=["zsqrts"]


//tan
scilab2ccode.deps.ctans=["slogs","ssqrts","creals","cimags","scoss","ssinhs","ssins","sabss","FloatComplex"]
scilab2ccode.deps.ctana=["ctans"]
scilab2ccode.deps.dtans=[]
scilab2ccode.deps.dtana=["dtans"]
scilab2ccode.deps.stans=[]
scilab2ccode.deps.stana=["stans"]
scilab2ccode.deps.ztans=["dlogs","dsqrts","zreals","zimags","dcoss","dsinhs","dsins","dabss","DoubleComplex"]
scilab2ccode.deps.ztana=["ztans"]
scilab2ccode.deps.i8tana=["i8tans"]
scilab2ccode.deps.i8tans=[]
scilab2ccode.deps.i16tana=["i16tans"]
scilab2ccode.deps.i16tans=[]
scilab2ccode.deps.u8tana=["u8tans"]
scilab2ccode.deps.u8tans=[]
scilab2ccode.deps.u16tana=["u16tans"]
scilab2ccode.deps.u16tans=[]


//tanh
scilab2ccode.deps.ctanhs=["creals","cimags","ctans","FloatComplex"]
scilab2ccode.deps.ctanha=["ctanhs"]
scilab2ccode.deps.dtanhs=[]
scilab2ccode.deps.dtanha=["dtanhs"]
scilab2ccode.deps.stanhs=[]
scilab2ccode.deps.stanha=["stanhs"]
scilab2ccode.deps.ztanhs=["zreals","zimags","ztans","DoubleComplex"]
scilab2ccode.deps.ztanha=["ztanhs"]
scilab2ccode.deps.i8tanha=["i8tanhs"]
scilab2ccode.deps.i8tanhs=[]
scilab2ccode.deps.i16tanha=["i16tanhs"]
scilab2ccode.deps.i16tanhs=[]
scilab2ccode.deps.u8tanha=["u8tanhs"]
scilab2ccode.deps.u8tanhs=[]
scilab2ccode.deps.u16tanha=["u16tanhs"]
scilab2ccode.deps.u16tanhs=[]

//uint8
scilab2ccode.deps.duint8a=["duint8s"]
scilab2ccode.deps.duint8s=[]
scilab2ccode.deps.i8uint8a=["i8uint8s"]
scilab2ccode.deps.i8uint8s=[]
scilab2ccode.deps.i16uint8a=["i16uint8s"]
scilab2ccode.deps.i16uint8s=[]
scilab2ccode.deps.suint8a=["suint8s"]
scilab2ccode.deps.suint8s=[]
scilab2ccode.deps.u16uint8a=["u16uint8s"]
scilab2ccode.deps.u16uint8s=[]

//uint16
scilab2ccode.deps.duint16a=["duint16s"]
scilab2ccode.deps.duint16s=[]
scilab2ccode.deps.i8uint16a=["i8uint16s"]
scilab2ccode.deps.i8uint16s=[]
scilab2ccode.deps.i16uint16a=["i16uint16s"]
scilab2ccode.deps.i16uint16s=[]
scilab2ccode.deps.suint16a=["suint16s"]
scilab2ccode.deps.suint16s=[]
scilab2ccode.deps.u8uint16a=["u8uint16s"]
scilab2ccode.deps.u8uint16s=[]

//////DISCRETE_MATHEMATICS/////////

//factor
scilab2ccode.deps.dfactors=[]
scilab2ccode.deps.sfactors=[]

//factorial
scilab2ccode.deps.dfactoriala=["dfactorials"]
scilab2ccode.deps.dfactorials=[]
scilab2ccode.deps.sfactoriala=["dfactorials"]
scilab2ccode.deps.sfactorials=[]

//primes
scilab2ccode.deps.dprimess=[]
scilab2ccode.deps.sprimess=[]


////////RADIX_CONVERSION////////

//base2dec
scilab2ccode.deps.dbase2decs=[]
scilab2ccode.deps.gbase2decs=[]

//bin2dec
scilab2ccode.deps.dbin2deca=["dbin2decs"]
scilab2ccode.deps.dbin2decs=[]
scilab2ccode.deps.i8bin2deca=["i8bin2decs"]
scilab2ccode.deps.i8bin2decs=[]
scilab2ccode.deps.i16bin2deca=["i16bin2decs"]
scilab2ccode.deps.i16bin2decs=[]
scilab2ccode.deps.u8bin2deca=["u8bin2decs"]
scilab2ccode.deps.u8bin2decs=[]
scilab2ccode.deps.u16bin2deca=["u16bin2decs"]
scilab2ccode.deps.u16bin2decs=[]

//dec2base
scilab2ccode.deps.ddec2basea=["ddec2bases"]
scilab2ccode.deps.ddec2bases=[]
scilab2ccode.deps.sdec2basea=["sdec2bases"]
scilab2ccode.deps.sdec2bases=[]

//dec2bin
scilab2ccode.deps.ddec2bina=["ddec2bins"]
scilab2ccode.deps.ddec2bins=[]
scilab2ccode.deps.i8dec2bina=["i8dec2bins"]
scilab2ccode.deps.i8dec2bins=[]
scilab2ccode.deps.i16dec2bina=["i16dec2bins"]
scilab2ccode.deps.i16dec2bins=[]
scilab2ccode.deps.u8dec2bina=["u8dec2bins"]
scilab2ccode.deps.u8dec2bins=[]
scilab2ccode.deps.u16dec2bina=["u16dec2bins"]
scilab2ccode.deps.u16dec2bins=[]

//dec2hex
scilab2ccode.deps.ddec2hexa=["ddec2hexs"]
scilab2ccode.deps.ddec2hexs=[]
scilab2ccode.deps.i8dec2hexa=["i8dec2hexs"]
scilab2ccode.deps.i8dec2hexs=[]
scilab2ccode.deps.i16dec2hexa=["i16dec2hexs"]
scilab2ccode.deps.i16dec2hexs=[]
scilab2ccode.deps.u8dec2hexa=["u8dec2hexs"]
scilab2ccode.deps.u8dec2hexs=[]
scilab2ccode.deps.u16dec2hexa=["u16dec2hexs"]
scilab2ccode.deps.u16dec2hexs=[]

//dec2oct
scilab2ccode.deps.ddec2octa=["ddec2octs"]
scilab2ccode.deps.ddec2octs=[]
scilab2ccode.deps.i8dec2octa=["i8dec2octs"]
scilab2ccode.deps.i8dec2octs=[]
scilab2ccode.deps.i16dec2octa=["i16dec2octs"]
scilab2ccode.deps.i16dec2octs=[]
scilab2ccode.deps.u8dec2octa=["u8dec2octs"]
scilab2ccode.deps.u8dec2octs=[]
scilab2ccode.deps.u16dec2octs=["u16dec2octs"]
scilab2ccode.deps.u16dec2octs=[]

//hex2dec
scilab2ccode.deps.dhex2decs=[]
scilab2ccode.deps.ghex2decs=[]

//oct2dec
scilab2ccode.deps.doct2deca=["doct2decs"]
scilab2ccode.deps.doct2decs=[]
scilab2ccode.deps.i8oct2deca=["i8oct2decs"]
scilab2ccode.deps.i8oct2decs=[]
scilab2ccode.deps.i16oct2deca=["i16oct2decs"]
scilab2ccode.deps.i16oct2decs=[]
scilab2ccode.deps.u8oct2deca=["u8oct2decs"]
scilab2ccode.deps.u8oct2decs=[]
scilab2ccode.deps.u16oct2deca=["u16oct2decs"]
scilab2ccode.deps.u16oct2decs=[]

//////////Trigonometry/////////

//cosd
scilab2ccode.deps.dcosda=["dcosds"]
scilab2ccode.deps.dcosds=[]
scilab2ccode.deps.scosda=["scosds"]
scilab2ccode.deps.scosds=[]

//cotd
scilab2ccode.deps.dcotda=["dcotds"]
scilab2ccode.deps.dcotds=[]
scilab2ccode.deps.scotda=["scotds"]
scilab2ccode.deps.scotds=[]

//coth
scilab2ccode.deps.ccotha=["ccoths"]
scilab2ccode.deps.ccoths=["ctanhs","FloatComplex","crdivs"]
scilab2ccode.deps.dcotha=[]
scilab2ccode.deps.dcoths=[]
scilab2ccode.deps.scotha=[]
scilab2ccode.deps.scoths=[]
scilab2ccode.deps.zcotha=["zcoths"]
scilab2ccode.deps.zcoths=["zrdivs","DoubleComplex","ztanhs"]

//csc
scilab2ccode.deps.ccsca=["ccscs"]
scilab2ccode.deps.ccscs=["csins","FloatComplex","crdivs"]
scilab2ccode.deps.dcsca=["dcscs"]
scilab2ccode.deps.dcscs=[]
scilab2ccode.deps.scsca=["scscs"]
scilab2ccode.deps.scscs=[]
scilab2ccode.deps.zcsca=["zcscs"]
scilab2ccode.deps.zcscs=["DoubleComplex","zrdivs","dsins","dcoshs","dcoss","dsinhs","zreals","zimags"]

//cscd
scilab2ccode.deps.ccscda=["ccscds"]
scilab2ccode.deps.ccscds=["csins","FloatComplex","crdivs"]
scilab2ccode.deps.dcscda=["dcscds"]
scilab2ccode.deps.dcscds=[]
scilab2ccode.deps.scscda=["scscds"]
scilab2ccode.deps.scscds=[]
scilab2ccode.deps.zcscda=["zcscds"]
scilab2ccode.deps.zcscds=["zrdivs","DoubleComplex","zsins"]

//csch
scilab2ccode.deps.ccscha=["ccschs"]
scilab2ccode.deps.ccschs=["csinhs","FloatComplex","crdivs"]
scilab2ccode.deps.dcscha=["dcschs"]
scilab2ccode.deps.dcschs=[]
scilab2ccode.deps.scscha=["scschs"]
scilab2ccode.deps.scschs=[]
scilab2ccode.deps.zcscha=["zcschs"]
scilab2ccode.deps.zcschs=["zrdivs","DoubleComplex","zsinhs"]

//sec
scilab2ccode.deps.cseca=["csecs"]
scilab2ccode.deps.csecs=["ccoss","FloatComplex","crdivs"]
scilab2ccode.deps.dseca=[]
scilab2ccode.deps.dsecs=[]
scilab2ccode.deps.sseca=["ssecs"]
scilab2ccode.deps.ssecs=[]
scilab2ccode.deps.zseca=["zsecs"]
scilab2ccode.deps.zsecs=["zrdivs","DoubleComplex","zcoss"]

//secd
scilab2ccode.deps.dsecda=["dsecds"]
scilab2ccode.deps.dsecds=[]
scilab2ccode.deps.ssecda=["ssecds"]
scilab2ccode.deps.ssecds=[]

//sech
scilab2ccode.deps.csecha=["csechs"]
scilab2ccode.deps.ccoths=["ccoshs","FloatComplex","crdivs"]
scilab2ccode.deps.dsecha=["dsechs"]
scilab2ccode.deps.dsechs=[]
scilab2ccode.deps.ssecha=["ssechs"]
scilab2ccode.deps.ssechs=[]
scilab2ccode.deps.zsecha=["zsechs"]
scilab2ccode.deps.zsechs=["zrdivs","DoubleComplex","zcoshs"]

///////////////////////////////
//////       FILES       //////
///////////////////////////////


//mclose
scilab2ccode.deps.mclose=[]


//mopen
scilab2ccode.deps.mopen=[]


//mput
scilab2ccode.deps.dmputa=[]
scilab2ccode.deps.dmputs=[]
scilab2ccode.deps.i8mputa=[]
scilab2ccode.deps.i8mputs=[]
scilab2ccode.deps.i16mputa=[]
scilab2ccode.deps.i16mputs=[]
scilab2ccode.deps.smputa=[]
scilab2ccode.deps.smputs=[]
scilab2ccode.deps.u8mputa=[]
scilab2ccode.deps.u8mputs=[]
scilab2ccode.deps.u16mputa=[]
scilab2ccode.deps.u16mputs=[]



///////////////////////////////
//////   IMPLICITLIST    //////
///////////////////////////////

scilab2ccode.deps.cimplicitLists=["simplicitLists"]
scilab2ccode.deps.dimplicitLists=[]
scilab2ccode.deps.simplicitLists=[]
scilab2ccode.deps.zimplicitLists=["dimplicitLists"]

///////////////////////////////
///////  LINEARALGEBRA  ///////
///////////////////////////////

//balanc
scilab2ccode.deps.dbalanca=["deyea"]

//rcond
scilab2ccode.deps.drconda=[]

//schur
scilab2ccode.deps.dgschura=[]
scilab2ccode.deps.dschura=[]

///////////////////////////////
////// MATRIX OPERATIONS //////
///////////////////////////////

//cat
scilab2ccode.deps.ccata=[]
scilab2ccode.deps.ccats=[]
scilab2ccode.deps.dcata=[]
scilab2ccode.deps.dcatS=[]
scilab2ccode.deps.scata=[]
scilab2ccode.deps.scats=[]
scilab2ccode.deps.zcata=[]
scilab2ccode.deps.zcats=[]
scilab2ccode.deps.i8cata=[]
scilab2ccode.deps.i8cats=[]
scilab2ccode.deps.i16cata=[]
scilab2ccode.deps.i16catS=[]
scilab2ccode.deps.u8cata=[]
scilab2ccode.deps.u8cats=[]
scilab2ccode.deps.u16cata=[]
scilab2ccode.deps.u16cats=[]

//OpRc
scilab2ccode.deps.crowcats=[]
scilab2ccode.deps.crowcata=[]
scilab2ccode.deps.drowcats=[]
scilab2ccode.deps.drowcata=[]
scilab2ccode.deps.srowcats=[]
scilab2ccode.deps.srowcata=[]
scilab2ccode.deps.zrowcats=[]
scilab2ccode.deps.zrowcata=[]


//OpCc
scilab2ccode.deps.ccolumncats=[]
scilab2ccode.deps.ccolumncata=[]
scilab2ccode.deps.dcolumncats=[]
scilab2ccode.deps.dcolumncata=[]
scilab2ccode.deps.scolumncats=[]
scilab2ccode.deps.scolumncata=[]
scilab2ccode.deps.zcolumncats=[]
scilab2ccode.deps.zcolumncata=[]


//chol
scilab2ccode.deps.cchola=["DoubleComplex","creals","cimags","FloatComplex","zreals","zimags","cdiffs","cmuls","crdivs","csqrts"]
scilab2ccode.deps.dchols=["dsqrts"]
scilab2ccode.deps.dchola=[]
scilab2ccode.deps.schols=["ssqrts"]
scilab2ccode.deps.schola=["ssqrts"]
scilab2ccode.deps.zchola=["DoubleComplex","zreals","zimags","zdiffs","zmuls","zrdivs","zsqrts"]
//cumprod
scilab2ccode.deps.dcolumncumproda=[]
scilab2ccode.deps.dcumproda=[]
scilab2ccode.deps.drowcumproda=[]
scilab2ccode.deps.i8columncumproda=[]
scilab2ccode.deps.i8cumproda=[]
scilab2ccode.deps.i8rowcumproda=[]
scilab2ccode.deps.i16columncumproda=[]
scilab2ccode.deps.i16cumproda=[]
scilab2ccode.deps.i16rowcumproda=[]
scilab2ccode.deps.scolumncumproda=[]
scilab2ccode.deps.scumproda=[]
scilab2ccode.deps.srowcumproda=[]
scilab2ccode.deps.u8columncumproda=[]
scilab2ccode.deps.u8cumproda=[]
scilab2ccode.deps.u8rowcumproda=[]
scilab2ccode.deps.u16columncumproda=[]
scilab2ccode.deps.u16cumproda=[]
scilab2ccode.deps.u16rowcumproda=[]

//cumcum
scilab2ccode.deps.dcolumncumsuma=[]
scilab2ccode.deps.dcumsuma=[]
scilab2ccode.deps.drowcumsuma=[]
scilab2ccode.deps.i8columncumsuma=[]
scilab2ccode.deps.i8cumsuma=[]
scilab2ccode.deps.i8rowcumsuma=[]
scilab2ccode.deps.i16columncumsuma=[]
scilab2ccode.deps.i16cumsuma=[]
scilab2ccode.deps.i16rowcumsuma=[]
scilab2ccode.deps.scolumncumsuma=[]
scilab2ccode.deps.scumsuma=[]
scilab2ccode.deps.srowcumsuma=[]
scilab2ccode.deps.u8columncumsuma=[]
scilab2ccode.deps.u8cumsuma=[]
scilab2ccode.deps.u8rowcumsuma=[]
scilab2ccode.deps.u16columncumsuma=[]
scilab2ccode.deps.u16cumsuma=[]
scilab2ccode.deps.u16rowcumsuma=[]

//determ
scilab2ccode.deps.cdeterma=["cdiffs","FloatComplex","cmuls","cadds","DoubleComplex","creals","cimags","zreals","zimags","zmuls","crdivs"]
scilab2ccode.deps.ddeterma=[]
scilab2ccode.deps.sdeterma=[]
scilab2ccode.deps.zdeterma=["zdiffs","zmuls","DoubleComplex","zadds","zreals","zimags","zrdivs"]
scilab2ccode.deps.i8determa=[]
scilab2ccode.deps.i16determa=[]
scilab2ccode.deps.u8determa=[]
scilab2ccode.deps.u16determa=[]

//diag
scilab2ccode.deps.ddiaga=[]
scilab2ccode.deps.ddiagexa=[]
scilab2ccode.deps.ddiagexs=[]
scilab2ccode.deps.ddiagina=[]
scilab2ccode.deps.ddiagins=[]
scilab2ccode.deps.ddiags=[]
scilab2ccode.deps.i8diags=[]
scilab2ccode.deps.i8diagexa=[]
scilab2ccode.deps.i8diagexs=[]
scilab2ccode.deps.i8diagina=[]
scilab2ccode.deps.i8diagins=[]
scilab2ccode.deps.i8diags=[]
scilab2ccode.deps.i16diaga=[]
scilab2ccode.deps.i16diags=[]
scilab2ccode.deps.i16diagexa=[]
scilab2ccode.deps.i16diagexs=[]
scilab2ccode.deps.i16diagina=[]
scilab2ccode.deps.i16diagins=[]
scilab2ccode.deps.u8diaga=[]
scilab2ccode.deps.u8diags=[]
scilab2ccode.deps.u8diagexa=[]
scilab2ccode.deps.u8diagexs=[]
scilab2ccode.deps.u8diagina=[]
scilab2ccode.deps.u8diagins=[]
scilab2ccode.deps.u16diaga=[]
scilab2ccode.deps.u16diags=[]
scilab2ccode.deps.u16diagexa=[]
scilab2ccode.deps.u16diagexs=[]
scilab2ccode.deps.u16diagina=[]
scilab2ccode.deps.u16diagins=[]

//dist
scilab2ccode.deps.cdists=["spows","creals","cimags","ssqrts"]
scilab2ccode.deps.cdista=["spows","creals","cimags","ssqrts"]
scilab2ccode.deps.ddists=["dpows","dsqrts"]
scilab2ccode.deps.ddista=["dpows","dsqrts"]
scilab2ccode.deps.sdists=["spows","ssqrts"]
scilab2ccode.deps.sdista=["spows","ssqrts"]
scilab2ccode.deps.zdists=["dpows","zreals","zimags","dsqrts"]
scilab2ccode.deps.zdista=["dpows","zreals","zimags","dsqrts"]

//division
scilab2ccode.deps.crdivcsv=["crdivv"]
scilab2ccode.deps.crdivscv=["crdivv"]
scilab2ccode.deps.crdivv=["crdivma","FloatComplex"]
scilab2ccode.deps.drdivv=["drdivma"]
scilab2ccode.deps.i8rdivma=["dtransposea"]
scilab2ccode.deps.i8ldivma=[]
scilab2ccode.deps.i8rdivv=["i8rdivma"]
scilab2ccode.deps.i16ldivma=[]
scilab2ccode.deps.i16rdivma=["dtransposea"]
scilab2ccode.deps.i16rdivv=["i16rdivma"]
scilab2ccode.deps.srdivv=["srdivma"]
scilab2ccode.deps.u8rdivma=["dtransposea"]
scilab2ccode.deps.u8ldivma=[]
scilab2ccode.deps.u8rdivv=["u8rdivma"]
scilab2ccode.deps.u16ldivma=[]
scilab2ccode.deps.u16rdivma=["dtransposea"]
scilab2ccode.deps.u16rdivv=["u16rdivma"]
scilab2ccode.deps.zrdivdzv=["dzerosa","zrdivv"]
scilab2ccode.deps.zrdivv=["zrdivma","DoubleComplex"]
scilab2ccode.deps.zrdivzdv=["dzerosa","zrdivv"]


//OpSlash
scilab2ccode.deps.crdivma=["DoubleComplex","creals","cimags","zrdivma","FloatComplex","zreals","zimags"]
scilab2ccode.deps.drdivma=["dtransposea"]
scilab2ccode.deps.srdivma=["drdivma"]
scilab2ccode.deps.zrdivma=["ztransposea","zconja","DoubleComplex","zreals","zimags"]


//OpBackSlash
scilab2ccode.deps.cldivma=["DoubleComplex","creals","cimags","zldivma","FloatComplex","zreals","zimags"]
scilab2ccode.deps.dldivma=[]
scilab2ccode.deps.sldivma=["dldivma"]
scilab2ccode.deps.zldivma=[]


//expm
scilab2ccode.deps.cexpma=["sfrexps","cinfnorma","spows","crdivs","FloatComplex","ceyea","cmuls","cadda","cdiffa","cmulma","cldivma"]
scilab2ccode.deps.dexpma=["dfrexps","dinfnorma","dpows","deyea","dadda","ddiffa","dmulma","dldivma"]
scilab2ccode.deps.sexpma=["sfrexps","sinfnorma","spows","seyea","sadda","sdiffa","smulma","sldivma"]
scilab2ccode.deps.zexpma=["dfrexps","zinfnorma","zrdivs","DoubleComplex","zeyea","zmuls","zadda","zdiffa","zmulma","zldivma"]


//eye
scilab2ccode.deps.ceyea= ["FloatComplex"]
scilab2ccode.deps.deyea= []
scilab2ccode.deps.seyea= []
scilab2ccode.deps.zeyea= ["DoubleComplex"]
scilab2ccode.deps.i8eyea= []
scilab2ccode.deps.i16eyea= []
scilab2ccode.deps.u8eyea= []
scilab2ccode.deps.u16eyea= []

//fill
scilab2ccode.deps.cfilla=["conesa","cmuls"]
scilab2ccode.deps.dfilla=["donesa"]
scilab2ccode.deps.sfilla=["sonesa"]
scilab2ccode.deps.zfilla=["zonesa","zmuls"]

//flipdim
scilab2ccode.deps.dflipdima=[]
scilab2ccode.deps.i8flipdima=[]
scilab2ccode.deps.i16flipdima=[]
scilab2ccode.deps.sflipdima=[]
scilab2ccode.deps.u8flipdima=[]
scilab2ccode.deps.u16flipdima=[]

//hilb
scilab2ccode.deps.dhilba=[]
scilab2ccode.deps.shilba=[]


//infinite norm
scilab2ccode.deps.cinfnorma=["spythags","creals","cimags"]
scilab2ccode.deps.dinfnorma=[]
scilab2ccode.deps.sinfnorma=[]
scilab2ccode.deps.zinfnorma=["dpythags","zreals","zimags"]


//inversion
scilab2ccode.deps.cinverma=["DoubleComplex","creals","cimags","zinverma","FloatComplex","zreals","zimags"]
scilab2ccode.deps.dinverma=[]
scilab2ccode.deps.sinverma=["dinverma"]
scilab2ccode.deps.zinverma=[]
scilab2ccode.deps.i8inverma=[]
scilab2ccode.deps.i16inverma=[]
scilab2ccode.deps.u8inverma=[]
scilab2ccode.deps.u16inverma=[]


//jmat
scilab2ccode.deps.djmata=[]
scilab2ccode.deps.sjmata=[]

//kron
scilab2ccode.deps.dkrona=[]
scilab2ccode.deps.skrona=[]

//logm
scilab2ccode.deps.clogma=["DoubleComplex","creals","cimags","zlogma","FloatComplex","zreals","zimags"]
scilab2ccode.deps.dlogma=["DoubleComplex","zlogma"]
scilab2ccode.deps.slogma=["DoubleComplex","zlogma","FloatComplex","zreals","zimags"]
scilab2ccode.deps.zlogma=["ztransposea","zreals","zimags","zlogs","DoubleComplex","zmulma","zinverma"]


//magnitude
scilab2ccode.deps.cmagns=["creals","cimags","ssqrts"]
scilab2ccode.deps.cmagna=["cmagns"]
scilab2ccode.deps.dmagns=[]
scilab2ccode.deps.dmagna=["dmagns"]
scilab2ccode.deps.smagns=[]
scilab2ccode.deps.smagna=["smagns"]
scilab2ccode.deps.zmagns=["zreals","zimags","dsqrts"]
scilab2ccode.deps.zmagna=["zmagns"]
scilab2ccode.deps.i8magna=[]
scilab2ccode.deps.i8magns=["i8abss"]
scilab2ccode.deps.i16magna=["dmagns"]
scilab2ccode.deps.i16magns=["i16abss"]
scilab2ccode.deps.u8magna=["dmagns"]
scilab2ccode.deps.u8magns=["u8abss"]
scilab2ccode.deps.u16magna=["dmagns"]
scilab2ccode.deps.u16magns=["u16abss"]

//OpStar
scilab2ccode.deps.cmulma=["FloatComplex","cadds","cmuls"]
scilab2ccode.deps.dmulma=[]
scilab2ccode.deps.smulma=[]
scilab2ccode.deps.zmulma=["zreala","zimaga","DoubleComplex","zadds","zmuls"]
scilab2ccode.deps.i8mulma=[]
scilab2ccode.deps.i16mulma=[]
scilab2ccode.deps.u8mulma=[]
scilab2ccode.deps.u16mulma=[]

//norm
scilab2ccode.deps.dnorma=[]
scilab2ccode.deps.dnormv=[]
scilab2ccode.deps.snorma=[]
scilab2ccode.deps.snormv=[]

//ones
scilab2ccode.deps.conesa=["FloatComplex"]
scilab2ccode.deps.donesa=[]
scilab2ccode.deps.sonesa=[]
scilab2ccode.deps.zonesa=["DoubleComplex"]
scilab2ccode.deps.i8onesa=[]
scilab2ccode.deps.i16onesa=[]
scilab2ccode.deps.u8onesa=[]
scilab2ccode.deps.u16onesa=[]

//powm
scilab2ccode.deps.cpowma=["creals","cimags","cspec2a","cpows","cmulma","ctransposea","cconja","cinverma"]
scilab2ccode.deps.dpowma=["dzerosa","zspec2a","zpows","zmulma","ztransposea","zconja","zinverma","zreals","DoubleComplex"]
scilab2ccode.deps.spowma=["szerosa","cspec2a","cpows","FloatComplex","cmulma","ctransposea","cconja","cinverma","creals"]
scilab2ccode.deps.zpowma=["zreals","zimags","zspec2a","zpows","zmulma","ztransposea","zconja","zinverma"]

//spec
scilab2ccode.deps.cspeca=["DoubleComplex","creals","cimags","zspeca","FloatComplex","zreals","zimags"]
scilab2ccode.deps.dspeca=[]
scilab2ccode.deps.sspeca=["dspeca"]
scilab2ccode.deps.zspeca=["DoubleComplex","zreals","zimags","zconjs","dzerosa"]

//spec2
scilab2ccode.deps.cspec2a=["DoubleComplex","creals","cimags","zspec2a","FloatComplex","zreals","zimags"]
scilab2ccode.deps.dspec2a=["dzerosa"]
scilab2ccode.deps.sspec2a=["dspec2a"]
scilab2ccode.deps.zspec2a=["DoubleComplex","zreals","zimags","dzerosa"]

//Squared Magnitude
scilab2ccode.deps.csquMagns=["creals","cimags"]
scilab2ccode.deps.csquMagna=["cmagna"]
scilab2ccode.deps.dsquMagns=[]
scilab2ccode.deps.dsquMagna=["dmagna"]
scilab2ccode.deps.ssquMagns=[]
scilab2ccode.deps.ssquMagna=["smagna"]
scilab2ccode.deps.zsquMagns=["zreals","zimags"]
scilab2ccode.deps.zsquMagna=["zmagna"]


//trace
scilab2ccode.deps.ctracea=["creals","cimags","FloatComplex"]
scilab2ccode.deps.dtracea=[]
scilab2ccode.deps.stracea=[]
scilab2ccode.deps.ztracea=["zreals","zimags","DoubleComplex"]
scilab2ccode.deps.i8tracea=[]
scilab2ccode.deps.i16tracea=[]
scilab2ccode.deps.u8tracea=[]
scilab2ccode.deps.u16tracea=[]


//transpose
scilab2ccode.deps.ctransposea=["creals","cimags","FloatComplex"]
scilab2ccode.deps.dtransposea=[]
scilab2ccode.deps.stransposea=[]
scilab2ccode.deps.ztransposea=["zreals","zimags","DoubleComplex"]
scilab2ccode.deps.i8transposea=[]
scilab2ccode.deps.i16transposea=[]
scilab2ccode.deps.u8transposea=[]
scilab2ccode.deps.u16transposea=[]

//tril
scilab2ccode.deps.dtrila=[]
scilab2ccode.deps.i8trila=[]
scilab2ccode.deps.i16trila=[]
scilab2ccode.deps.strila=[]
scilab2ccode.deps.u8trila=[]
scilab2ccode.deps.u16trila=[]

//triu
scilab2ccode.deps.dtriua=[]
scilab2ccode.deps.i8triua=[]
scilab2ccode.deps.i16triua=[]
scilab2ccode.deps.striua=[]
scilab2ccode.deps.u8triua=[]
scilab2ccode.deps.u16triua=[]

//zeros
scilab2ccode.deps.czerosa=["FloatComplex"]
scilab2ccode.deps.dzerosa=[]
scilab2ccode.deps.dzerosh=[]
scilab2ccode.deps.i8zerosa=[]
scilab2ccode.deps.i16zerosa=[]
scilab2ccode.deps.szerosa=[]
scilab2ccode.deps.u8zerosa=[]
scilab2ccode.deps.u16zerosa=[]
scilab2ccode.deps.zzerosa=["DoubleComplex"]

////////////////////////
////// OPERATIONS //////
////////////////////////


//addition
scilab2ccode.deps.cadds=["creals","cimags","FloatComplex"]
scilab2ccode.deps.cadda=["cadds"]
scilab2ccode.deps.dadds=[]
scilab2ccode.deps.dadda=["dadds"]
scilab2ccode.deps.sadds=[]
scilab2ccode.deps.sadda=["sadds"]
scilab2ccode.deps.zadds=["zreals","zimags","DoubleComplex"]
scilab2ccode.deps.zadda=["zadds"]
scilab2ccode.deps.i8adda=["i8adds"]
scilab2ccode.deps.i8adds=[]
scilab2ccode.deps.i16adda=["i16adds"]
scilab2ccode.deps.i16adds=[]
scilab2ccode.deps.u8adda=["u8adds"]
scilab2ccode.deps.u8adds=[]
scilab2ccode.deps.u16adda=["u16adds"]
scilab2ccode.deps.u16adds=[]


//division
scilab2ccode.deps.crdivs=["FloatComplex"]
scilab2ccode.deps.crdiva=["crdivs"]
scilab2ccode.deps.drdivs=[]
scilab2ccode.deps.drdiva=["drdivs"]
scilab2ccode.deps.srdivs=[]
scilab2ccode.deps.srdiva=["srdivs"]
scilab2ccode.deps.zrdivs=["DoubleComplex"]
scilab2ccode.deps.zrdiva=["zrdivs"]
scilab2ccode.deps.cldivs=["cmuls","cconjs","creals","cimags","FloatComplex","crdivs"]
scilab2ccode.deps.cldiva=["cldivs"]
scilab2ccode.deps.dldivs=[]
scilab2ccode.deps.dldiva=["dldivs"]
scilab2ccode.deps.sldivs=[]
scilab2ccode.deps.sldiva=["scldivs"]
scilab2ccode.deps.zldivs=["zmuls","zconjs","zreals","zimags","DoubleComplex","zrdivs"]
scilab2ccode.deps.zldiva=["zldivs"]
scilab2ccode.deps.i8ldiva=["i8ldivs"]
scilab2ccode.deps.i8ldivs=[]
scilab2ccode.deps.i8rdiva=["i8rdivs"]
scilab2ccode.deps.i8rdivs=[]
scilab2ccode.deps.i16ldiva=["i16ldivs"]
scilab2ccode.deps.i16ldivs=[]
scilab2ccode.deps.i16rdiva=["i16rdivs"]
scilab2ccode.deps.i16rdivs=[]
scilab2ccode.deps.u8ldiva=["u8ldivs"]
scilab2ccode.deps.u8ldivs=[]
scilab2ccode.deps.u8rdiva=["u8rdivs"]
scilab2ccode.deps.u8rdivs=[]
scilab2ccode.deps.u16ldiva=["u16ldivs"]
scilab2ccode.deps.u16ldivs=[]
scilab2ccode.deps.u16rdiva=["u16rdivs"]
scilab2ccode.deps.u16rdivs=[]

//multiplication
scilab2ccode.deps.cmuls=["FloatComplex"]
scilab2ccode.deps.cmula=["cmuls"]
scilab2ccode.deps.dmuls=[]
scilab2ccode.deps.dmula=["dmuls"]
scilab2ccode.deps.smuls=[]
scilab2ccode.deps.smula=["smuls"]
scilab2ccode.deps.zmuls=["DoubleComplex"]
scilab2ccode.deps.zmula=["zmuls"]
scilab2ccode.deps.cmulcsv=["cmulv"]
scilab2ccode.deps.cmulscv=["cmulv"]
scilab2ccode.deps.cmulv=["cadds"]
scilab2ccode.deps.dmulv=["dmuls"]
scilab2ccode.deps.i8muls=[]
scilab2ccode.deps.i8mula=["i8muls"]
scilab2ccode.deps.i8mulv=["i8muls"]
scilab2ccode.deps.i16muls=[]
scilab2ccode.deps.i16mula=["i16muls"]
scilab2ccode.deps.i16mulv=["i16muls"]
scilab2ccode.deps.smulv=["smuls"]
scilab2ccode.deps.u8muls=[]
scilab2ccode.deps.u8mula=["u8muls"]
scilab2ccode.deps.u8mulv=["u8muls"]
scilab2ccode.deps.u16muls=[]
scilab2ccode.deps.u16mula=["u16muls"]
scilab2ccode.deps.u16mulv=["u16muls"]
scilab2ccode.deps.zmuldzv=["dzerosa","zmulv"]
scilab2ccode.deps.zmulzdv=["dzerosa","zmulv"]
scilab2ccode.deps.zmulv=["zadds"]

//subtraction
scilab2ccode.deps.cdiffs=["creals","cimags","FloatComplex"]
scilab2ccode.deps.cdiffa=["cdiffs"]
scilab2ccode.deps.ddiffs=[]
scilab2ccode.deps.ddiffa=["ddiffs"]
scilab2ccode.deps.sdiffs=[]
scilab2ccode.deps.sdiffa=["sdiffs"]
scilab2ccode.deps.zdiffs=["zreals","zimags","DoubleComplex"]
scilab2ccode.deps.zdiffa=["zdiffs"]
scilab2ccode.deps.i8diffs=[]
scilab2ccode.deps.i8diffa=["i8diffs"]
scilab2ccode.deps.i16diffa=["i16diffs"]
scilab2ccode.deps.i16diffs=[]
scilab2ccode.deps.u8diffa=["u8diffs"]
scilab2ccode.deps.u8diffs=[]
scilab2ccode.deps.u16diffa=["u16diffs"]
scilab2ccode.deps.u16diffs=[]


///////////////////////////////
////// SIGNAL PROCESSING //////
///////////////////////////////


//conv
scilab2ccode.deps.cconva=["FloatComplex","cfftma","cmula","cifftma"]
scilab2ccode.deps.dconva=["DoubleComplex","zconva","zreala"]
scilab2ccode.deps.sconva=["FloatComplex","cconva","creala"]
scilab2ccode.deps.zconva=["DoubleComplex","zfftma","zmula","zifftma"]


//conv2d
scilab2ccode.deps.cconv2da=["FloatComplex","cadds","cmuls"]
scilab2ccode.deps.dconv2da=[]
scilab2ccode.deps.sconv2da=[]
scilab2ccode.deps.zconv2da=["DoubleComplex","zadds","zmuls"]


//cross correlation
scilab2ccode.deps.ccrossCorra=["cconjs","cconv2da"]
scilab2ccode.deps.dcrossCorra=["dconv2da"]
scilab2ccode.deps.scrossCorra=["sconv2da"]
scilab2ccode.deps.zcrossCorra=["zconjs","zconv2da"]


//fft
scilab2ccode.deps.cfftma=["DoubleComplex","creals","cimags","zfftma","FloatComplex","zreals","zimags"]
scilab2ccode.deps.dfft2=["dfftbi"]
scilab2ccode.deps.dfftbi=["dfftmx"]
scilab2ccode.deps.dfftmx=[]
scilab2ccode.deps.dfftma=["dzerosa","zfftma","zreala"]
scilab2ccode.deps.fft842=["r2tx","r4tx","r8tx","DoubleComplex","zreals","zimags"]
scilab2ccode.deps.r2tx=["zadds","zdiffs","DoubleComplex","zreals","zimags"]
scilab2ccode.deps.r4tx=["zadds","zdiffs","DoubleComplex","zreals","zimags"]
scilab2ccode.deps.r8tx=["zadds","zdiffs","DoubleComplex","zreals","zimags"]
scilab2ccode.deps.zfftma=["zreala","zimaga","fft842","dfft2","DoubleComplexMatrix"]
scilab2ccode.deps.sfftma=["szerosa","cfftma","creala"]

//hilbert
scilab2ccode.deps.dhilberts=[]
scilab2ccode.deps.dhilberta=["DoubleComplex","zfftma","zmuls","zifftma"]
scilab2ccode.deps.shilberts=[]
scilab2ccode.deps.shilberta=["FloatComplex","cfftma","cmuls","cifftma"]

//fftshift
scilab2ccode.deps.ccolumnfftshifta=[]
scilab2ccode.deps.cfftshifta=["crowfftshifta","ccolumnfftshifta"]
scilab2ccode.deps.crowfftshifta=[]
scilab2ccode.deps.dcolumnfftshifta=[]
scilab2ccode.deps.dfftshifta=["drowfftshifta","dcolumnfftshifta"]
scilab2ccode.deps.drowfftshifta=[]
scilab2ccode.deps.scolumnfftshifta=[]
scilab2ccode.deps.sfftshifta=["srowfftshifta","scolumnfftshifta"]
scilab2ccode.deps.srowfftshifta=[]
scilab2ccode.deps.zcolumnfftshifta=[]
scilab2ccode.deps.zfftshifta=["zrowfftshifta","zcolumnfftshifta"]
scilab2ccode.deps.zrowfftshifta=[]


//ifft
scilab2ccode.deps.cifftma=["DoubleComplex","creals","cimags","zifftma","FloatComplex","zreals","zimags"]
scilab2ccode.deps.difft2=["difftbi"]
scilab2ccode.deps.difftbi=["difftmx"]
scilab2ccode.deps.difftmx=[]
scilab2ccode.deps.ifft842=["ir2tx","ir4tx","ir8tx","DoubleComplex","zreals","zimags"]
scilab2ccode.deps.ir2tx=["zadds","zdiffs","DoubleComplex","zreals","zimags"]
scilab2ccode.deps.ir4tx=["zadds","zdiffs","DoubleComplex","zreals","zimags"]
scilab2ccode.deps.ir8tx=["zadds","zdiffs","DoubleComplex","zreals","zimags"]
scilab2ccode.deps.zifftma=["zreala","zimaga","ifft842","difft2","DoubleComplexMatrix"]
scilab2ccode.deps.diffbi_lavraie=[]
scilab2ccode.deps.difftma=["dzerosa","zifftma","zreala"]
scilab2ccode.deps.sifftma=["szerosa","cifftma","creala"]

//lev
scilab2ccode.deps.cleva=["crdivs","FloatComplex","creals","cimags","cmuls","cconjs","cdiffs","cadds"]
scilab2ccode.deps.cleva2=["crdivs","FloatComplex","creals","cimags","cmuls","cconjs","cdiffs","cadds"]
scilab2ccode.deps.dleva=[]
scilab2ccode.deps.dleva2=[]
scilab2ccode.deps.sleva=[]
scilab2ccode.deps.sleva2=[]
scilab2ccode.deps.zleva=["zrdivs","DoubleComplex","zreals","zimags","zmuls","zdiffs","zconjs","zadds"]
scilab2ccode.deps.zleva2=["zrdivs","DoubleComplex","zreals","zimags","zmuls","zdiffs","zconjs","zadds"]


//levin
scilab2ccode.deps.dlevina=["dinitTab","dr1","dr2","dr3","dr4","dlevinmul","dinverma","dmulma","dlevinmul2","ddecalage","dlevinsub","dlevinsig"]
scilab2ccode.deps.slevina=["sinitTab","sr1","sr2","sr3","sr4","slevinmul","sinverma","smulma","slevinmul2","sdecalage","slevinsub","slevinsig"]
scilab2ccode.deps.dinitTab=[]
scilab2ccode.deps.dr1=[]
scilab2ccode.deps.dr2=[]
scilab2ccode.deps.dr3=[]
scilab2ccode.deps.dr4=[]
scilab2ccode.deps.dlevinmul=[]
scilab2ccode.deps.dlevinmul2=[]
scilab2ccode.deps.ddecalage=[]
scilab2ccode.deps.dlevinsub=[]
scilab2ccode.deps.dlevinsig=[]
scilab2ccode.deps.sinitTab=[]
scilab2ccode.deps.sr1=[]
scilab2ccode.deps.sr2=[]
scilab2ccode.deps.sr3=[]
scilab2ccode.deps.sr4=[]
scilab2ccode.deps.slevinmul=[]
scilab2ccode.deps.slevinmul2=[]
scilab2ccode.deps.sdecalage=[]
scilab2ccode.deps.slevinsub=[]
scilab2ccode.deps.slevinsig=[]
scilab2ccode.deps.levinUtils=[]

//lpc2cep
scilab2ccode.deps.clpc2cepa=["cfftma","clogma","cifftma"]
scilab2ccode.deps.dlpc2cepa=["DoubleComplex","zfftma","zlogma","zifftma","zreala"]
scilab2ccode.deps.slpc2cepa=["FloatComplex","cfftma","clogma","cifftma","creala"]
scilab2ccode.deps.zlpc2cepa=["zfftma","zlogma","zifftma"]


/////////////////////////////////
////// STATISTIC FUNCTIONS //////
/////////////////////////////////

//max
scilab2ccode.deps.dcolumnmaxa=[]
scilab2ccode.deps.dmaxa=[]
scilab2ccode.deps.drowmaxa=[]
scilab2ccode.deps.i8columnmaxa=[]
scilab2ccode.deps.i8maxa=[]
scilab2ccode.deps.i8rowmaxa=[]
scilab2ccode.deps.i16columnmaxa=[]
scilab2ccode.deps.i16maxa=[]
scilab2ccode.deps.i16rowmaxa=[]
scilab2ccode.deps.scolumnmaxa=[]
scilab2ccode.deps.smaxa=[]
scilab2ccode.deps.srowmaxa=[]
scilab2ccode.deps.u8columnmaxa=[]
scilab2ccode.deps.u8maxa=[]
scilab2ccode.deps.u8rowmaxa=[]
scilab2ccode.deps.u16columnmaxa=[]
scilab2ccode.deps.u16maxa=[]
scilab2ccode.deps.u16rowmaxa=[]

//mean
scilab2ccode.deps.cmeana=["FloatComplex","cadds","creals","cimags"]
scilab2ccode.deps.dmeana=[]
scilab2ccode.deps.smeana=[]
scilab2ccode.deps.zmeana=["DoubleComplex","zadds","zreals","zimags"]
scilab2ccode.deps.ccolumnmeana=["ccolumnsuma","crdivs","FloatComplex"]
scilab2ccode.deps.dcolumnmeana=["dcolumnsuma"]
scilab2ccode.deps.scolumnmeana=["scolumnsuma"]
scilab2ccode.deps.zcolumnmeana=["zcolumnsuma","zrdivs","DoubleComplex"]
scilab2ccode.deps.crowmeana=["crowsuma","crdivs","FloatComplex"]
scilab2ccode.deps.drowmeana=["drowsuma"]
scilab2ccode.deps.srowmeana=["srowsuma"]
scilab2ccode.deps.zrowmeana=["zrowsuma","zrdivs","DoubleComplex"]

//meanf
scilab2ccode.deps.cmeanfa=["FloatComplex","cadds","crdivs"]
scilab2ccode.deps.dmeanfa=[]
scilab2ccode.deps.smeanfa=[]
scilab2ccode.deps.zmeanfa=["DoubleComplex","zadds","zmuls","zrdivs"]
scilab2ccode.deps.ccolumnmeanfa=["cadds","cmuls","FloatComplex","crdivs"]
scilab2ccode.deps.dcolumnmeanfa=[]
scilab2ccode.deps.scolumnmeanfa=[]
scilab2ccode.deps.zcolumnmeanfa=["zmuls","zrdivs","DoubleComplex","zadds"]
scilab2ccode.deps.crowmeanfa=["cmuls","crdivs","FloatComplex","cadds"]
scilab2ccode.deps.drowmeanfa=["drowsuma"]
scilab2ccode.deps.srowmeanfa=[]
scilab2ccode.deps.zrowmeanfa=["zmuls","zrdivs","DoubleComplex","zadds"]
scilab2ccode.deps.cmeanfcs=["szerosa","cmeanfa"]
scilab2ccode.deps.cmeanfsc=["szerosa","cmeanfa"]
scilab2ccode.deps.zmeanfdz=["dzerosa","zmeanfa"]
scilab2ccode.deps.zmeanfzd=["dzerosa","zmeanfa"]

//min
scilab2ccode.deps.dcolumnmina=[]
scilab2ccode.deps.dmina=[]
scilab2ccode.deps.drowmina=[]
scilab2ccode.deps.i8columnmina=[]
scilab2ccode.deps.i8mina=[]
scilab2ccode.deps.i8rowmina=[]
scilab2ccode.deps.i16columnmina=[]
scilab2ccode.deps.i16mina=[]
scilab2ccode.deps.i16rowmina=[]
scilab2ccode.deps.scolumnmina=[]
scilab2ccode.deps.smina=[]
scilab2ccode.deps.srowmina=[]
scilab2ccode.deps.u8columnmina=[]
scilab2ccode.deps.u8mina=[]
scilab2ccode.deps.u8rowmina=[]
scilab2ccode.deps.u16columnmina=[]
scilab2ccode.deps.u16mina=[]
scilab2ccode.deps.u16rowmina=[]
//prod
scilab2ccode.deps.cproda=["cmuls"]
scilab2ccode.deps.dproda=[]
scilab2ccode.deps.sproda=[]
scilab2ccode.deps.zproda=["zmuls"]
scilab2ccode.deps.ccolumnproda=["cmuls"]
scilab2ccode.deps.dcolumnproda=[]
scilab2ccode.deps.scolumnproda=[]
scilab2ccode.deps.zcolumnproda=["zmuls"]
scilab2ccode.deps.crowproda=["cmuls"]
scilab2ccode.deps.drowproda=[]
scilab2ccode.deps.srowproda=[]
scilab2ccode.deps.zrowproda=["zmuls"]

//stdevf
scilab2ccode.deps.ccolumnstdevfa=["FloatComplex","cpows","cdiffs","cmuls","cadds","sabss","creals","cimags","crdivs","csqrts"]
scilab2ccode.deps.cstdevfa=["FloatComplex","cmeanfa","cpows","cmuls","cadds","crdivs","csqrts","cdiffs"]
scilab2ccode.deps.crowstdevfa=["FloatComplex","crowmeanfa","cpows","cdiffs","cmuls","cadds""sabss","creals","cimags","crdivs","csqrts"]
scilab2ccode.deps.cstdevfcs=["FloatComplex","cmeanfcs","cpows","cdiffs","cmuls","cadds","creals","cimags","csqrts"]
scilab2ccode.deps.cstdevfsc=["szerosa","cstdevfa"]
scilab2ccode.deps.dcolumnstdevfa=["dcolumnmeanfa","dpows","dsqrts"]
scilab2ccode.deps.dstdevfa=[]
scilab2ccode.deps.drowstdevfa=[]
scilab2ccode.deps.i8columnmina=[]
scilab2ccode.deps.i8mina=[]
scilab2ccode.deps.i8rowmina=[]
scilab2ccode.deps.i16columnmina=[]
scilab2ccode.deps.i16mina=[]
scilab2ccode.deps.i16rowmina=[]
scilab2ccode.deps.scolumnmina=[]
scilab2ccode.deps.smina=[]
scilab2ccode.deps.srowmina=[]
scilab2ccode.deps.u8columnmina=[]
scilab2ccode.deps.u8mina=[]
scilab2ccode.deps.u8rowmina=[]
scilab2ccode.deps.u16columnmina=[]
scilab2ccode.deps.u16mina=[]
scilab2ccode.deps.u16rowmina=[]

//sum
scilab2ccode.deps.csuma=["cadds"]
scilab2ccode.deps.dsuma=[]
scilab2ccode.deps.ssuma=[]
scilab2ccode.deps.zsuma=["zadds"]
scilab2ccode.deps.ccolumnsuma=["cadds"]
scilab2ccode.deps.dcolumnsuma=[]
scilab2ccode.deps.scolumnsuma=[]
scilab2ccode.deps.zcolumnsuma=["zadds"]
scilab2ccode.deps.crowsuma=["cadds"]
scilab2ccode.deps.drowsuma=[]
scilab2ccode.deps.srowsuma=[]
scilab2ccode.deps.zrowsuma=["zadds"]
scilab2ccode.deps.i8suma=["i8adds"]
scilab2ccode.deps.i8columnsuma=["i8adds"]
scilab2ccode.deps.i8rowsuma=["i8adds"]
scilab2ccode.deps.i16suma=["i16adds"]
scilab2ccode.deps.i16columnsuma=["i16adds"]
scilab2ccode.deps.i16rowsuma=["i16adds"]
scilab2ccode.deps.u8suma=["u8adds"]
scilab2ccode.deps.U8columnsuma=["u8adds"]
scilab2ccode.deps.u8rowsuma=["u8adds"]
scilab2ccode.deps.u16suma=["u16adds"]
scilab2ccode.deps.u16columnsuma=["u16adds"]
scilab2ccode.deps.u16rowsuma=["u16adds"]

//variance
scilab2ccode.deps.cvariancea=["FloatComplex","cmeana","cdiffs","cadds","cpows","creals","cimags","crdivs"]
scilab2ccode.deps.dvariancea=["dmeana","dpows"]
scilab2ccode.deps.svariancea=["smeana","spows"]
scilab2ccode.deps.zvariancea=["DoubleComplex","zmeana","zdiffs","zadds","zpows","zreals","zimags","zrdivs"]
scilab2ccode.deps.ccolumnvariancea=["cvariancea"]
scilab2ccode.deps.dcolumnvariancea=["dvariancea"]
scilab2ccode.deps.scolumnvariancea=["svariancea"]
scilab2ccode.deps.zcolumnvariancea=["zvariancea"]
scilab2ccode.deps.crowvariancea=["ctransposea","FloatComplex","creals","cimags","cvariancea"]
scilab2ccode.deps.drowvariancea=["dtransposea","dvariancea"]
scilab2ccode.deps.srowvariancea=["stransposea","svariancea"]
scilab2ccode.deps.zrowvariancea=["ztransposea","DoubleComplex","zreals","zimags","zvariancea"]

//variancef
scilab2ccode.deps.cvariancefa=["FloatComplex","cmeanfa","cdiffs","cadds","cpows","cmuls","crdivs"]
scilab2ccode.deps.dvariancefa=["dmeanfa","dpows"]
scilab2ccode.deps.svariancefa=["smeanfa","spows"]
scilab2ccode.deps.zvariancefa=["DoubleComplex","zmeanfa","zdiffs","zadds","zpows","zrdivs"]
scilab2ccode.deps.ccolumnvariancefa=["cvariancefa","ctransposea"]
scilab2ccode.deps.dcolumnvariancefa=["dvariancefa","dtransposea"]
scilab2ccode.deps.scolumnvariancefa=["scolumnmeanfa","spows"]
scilab2ccode.deps.zcolumnvariancefa=["zvariancefa","ztransposea"]
scilab2ccode.deps.crowvariancefa=["cvariancefa"]
scilab2ccode.deps.drowvariancefa=["dvariancefa"]
scilab2ccode.deps.srowvariancefa=["svariancefa"]
scilab2ccode.deps.zrowvariancefa=["zvariancefa"]


////////////////////
////// STRING //////
////////////////////

//convstr
scilab2ccode.deps.gconvstrs=[]

//disp
scilab2ccode.deps.cdisps=["creals","cimags"]
scilab2ccode.deps.cdispa=["creals","cimags"]
scilab2ccode.deps.ddisps=[]
scilab2ccode.deps.ddispa=[]
scilab2ccode.deps.sdisps=[]
scilab2ccode.deps.sdispa=[]
scilab2ccode.deps.zdisps=["zreals","zimags"]
scilab2ccode.deps.zdispa=["zreals","zimags"]
scilab2ccode.deps.ddisph=[]
scilab2ccode.deps.i8disps=[]
scilab2ccode.deps.i8dispa=[]
scilab2ccode.deps.i16disps=[]
scilab2ccode.deps.i16dispa=[]
scilab2ccode.deps.u8disps=[]
scilab2ccode.deps.u8dispa=[]
scilab2ccode.deps.u16disps=[]
scilab2ccode.deps.u16dispa=[]

//string
scilab2ccode.deps.cstringa=["cstrings"]
scilab2ccode.deps.cstrings=["creals","cimags"]
scilab2ccode.deps.dstringa=["dstrings"]
scilab2ccode.deps.dstrings=[]
scilab2ccode.deps.i8stringa=["i8strings"]
scilab2ccode.deps.i8strings=[]
scilab2ccode.deps.i16stringa=["i16strings"]
scilab2ccode.deps.i16strings=[]
scilab2ccode.deps.sstringa=["sstrings"]
scilab2ccode.deps.sstrings=[]
scilab2ccode.deps.u8stringa=["u8strings"]
scilab2ccode.deps.u8strings=[]
scilab2ccode.deps.u16stringa=["u16strings"]
scilab2ccode.deps.u16strings=[]
scilab2ccode.deps.zstringa=["zstrings"]
scilab2ccode.deps.zstrings=[]

//strrchr
scilab2ccode.deps.gstrrchra=[]

//strrev
scilab2ccode.deps.gstrreva=[]

//strsubst
scilab2ccode.deps.gstrsubsta=[]

///////////////////
////// TYPES //////
///////////////////

scilab2ccode.deps.floatComplex=["creals","cimags","FloatComplex","cisreals","cisimags"]
scilab2ccode.deps.doubleComplex=["zreals","zimags","DoubleComplex","zisreals","zisimags"]

//floatComplex
scilab2ccode.deps.creals=[]
scilab2ccode.deps.cimags=[]
scilab2ccode.deps.creala=["creals"]
scilab2ccode.deps.cimaga=["cimags"]
scilab2ccode.deps.FloatComplex=[]
scilab2ccode.deps.FloatComplexMatrix=["FloatComplex"]
scilab2ccode.deps.cisreals=["cimags"]
scilab2ccode.deps.cisimags=["creals"]


//doubleComplex
scilab2ccode.deps.zreals=[]
scilab2ccode.deps.zimags=[]
scilab2ccode.deps.zreala=["zreals"]
scilab2ccode.deps.zimaga=["zimags"]
scilab2ccode.deps.DoubleComplex=[]
scilab2ccode.deps.DoubleComplexMatrix=["DoubleComplex"]
scilab2ccode.deps.zisreals=["zimags"]
scilab2ccode.deps.zisimags=["zreals"]

//Arduino Functions
scilab2ccode.deps.u8cmd_analog_ins=["duint16a","duint16s","i8uint16a","i8uint16s","i16uint16a","i16uint16s","suint16a","suint16s","u8uint16a","u8uint16s"]
scilab2ccode.deps.u8cmd_analog_in_volts=["dfloats","dfloata","i8floats","i8floata","i16floats","i16floata","sfloats","sfloata","u8floats","u8floata","u16floats","u16floata"]
scilab2ccode.deps.u8cmd_analog_outs=[]
scilab2ccode.deps.u8cmd_analog_out_volts=[]
scilab2ccode.deps.u8cmd_dcmotor_releases=[]
scilab2ccode.deps.u8cmd_dcmotor_runs=[]
scilab2ccode.deps.u8cmd_dcmotor_setups=[]
scilab2ccode.deps.u8cmd_digital_ins=["duint8a","duint8s","i8uint8a","i8uint8s","i16uint8a","i16uint8s","suint8a","suint8s","u16uint8a","u16uint8s"]
scilab2ccode.deps.u8cmd_digital_outs=[]
scilab2ccode.deps.u8cmd_i2c_devs=["duint8a","duint8s","i8uint8a","i8uint8s","i16uint8a","i16uint8s","suint8a","suint8s","u16uint8a","u16uint8s"]
scilab2ccode.deps.u8cmd_i2c_reads=[]
scilab2ccode.deps.u8cmd_i2c_read_registers=[]
scilab2ccode.deps.u8cmd_i2c_writes=[]
scilab2ccode.deps.u8cmd_i2c_write_registers=[]
scilab2ccode.deps.u8cmd_servo_attach=[]
scilab2ccode.deps.u8cmd_servo_move=[]
scilab2ccode.deps.u8cmd_servo_detach=[]
scilab2ccode.deps.u16sleeps=[]

endfunction
