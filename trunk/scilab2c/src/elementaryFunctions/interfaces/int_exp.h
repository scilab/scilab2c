/*
**  -*- C -*-
**
** int_exp.h
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright POLIBA 2008
*/
/* 
   1. Search for exp in INIT_FillSCI2LibCDirs.sci
   2. Search for // --- Function List Class. --- in INIT_FillSCI2LibCDirs.sci
   3. You will find 
      PrintStringInfo('s0'+ArgSeparator+'s0',ClassFileName,'file','y');
      PrintStringInfo('d0'+ArgSeparator+'d0',ClassFileName,'file','y');
      PrintStringInfo('c0'+ArgSeparator+'c0',ClassFileName,'file','y');
      PrintStringInfo('z0'+ArgSeparator+'z0',ClassFileName,'file','y');
      PrintStringInfo('s2'+ArgSeparator+'s2',ClassFileName,'file','y');
      PrintStringInfo('d2'+ArgSeparator+'d2',ClassFileName,'file','y');
      PrintStringInfo('c2'+ArgSeparator+'c2',ClassFileName,'file','y');
      PrintStringInfo('z2'+ArgSeparator+'z2',ClassFileName,'file','y');
   4. These are all the functions to be implemented.
   5. According to functions available in src you have to generate the mapping between
      functions in step3 and functions in src.
*/

#ifndef __INT_EXP_H__
#define __INT_EXP_H__


#define s0exps0(in) \
sexps(in)

#define d0expd0(in) \
dexps(in)

#define c0expc0(in) \
cexps(in)

#define z0expz0(in) \
zexps(in)

#define s2exps2(inptr,insizeptr,outptr) \
sexpa(inptr, insizeptr[0]*insizeptr[1], outptr)

#define d2expd2(inptr,insizeptr,outptr) \
dexpa(inptr, insizeptr[0]*insizeptr[1], outptr)

#define c2expc2(inptr,insizeptr,outptr) \
cexpa(inptr, insizeptr[0]*insizeptr[1], outptr)

#define z2expz2(inptr,insizeptr,outptr) \
zexpa(inptr, insizeptr[0]*insizeptr[1], outptr)

#endif /* !__INT_EXP_H__ */
