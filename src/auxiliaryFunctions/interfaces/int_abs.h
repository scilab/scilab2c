/*
**  -*- C -*-
**
** int_sqrt.h
** Made by  Raffaele Nutricato <raffaele.nutricato@tiscali.it>
**
**
** Copyright POLIBA 2008
*/
/* 
   1. Search for abs in INIT_FillSCI2LibCDirs.sci
   2. Search for // --- Function List Class. --- in INIT_FillSCI2LibCDirs.sci
   3. You will find 
      PrintStringInfo('s0'+ArgSeparator+'s0',ClassFileName,'file','y');
      PrintStringInfo('d0'+ArgSeparator+'d0',ClassFileName,'file','y');
      PrintStringInfo('c0'+ArgSeparator+'s0',ClassFileName,'file','y');
      PrintStringInfo('z0'+ArgSeparator+'d0',ClassFileName,'file','y');
      PrintStringInfo('s2'+ArgSeparator+'s2',ClassFileName,'file','y');
      PrintStringInfo('d2'+ArgSeparator+'d2',ClassFileName,'file','y');
      PrintStringInfo('c2'+ArgSeparator+'s2',ClassFileName,'file','y');
      PrintStringInfo('z2'+ArgSeparator+'d2',ClassFileName,'file','y');
   4. These are all the functions to be implemented.
   5. According to functions available in src you have to generate the mapping between
      functions in step3 and functions in src.
*/

#ifndef __INT_ABS_H__
#define __INT_ABS_H__

#define s0abss0(in) \
sabss(in);

#define d0absd0(in) \
dabss(in);

#define c0abss0(in) \
cabss(in);

#define z0absd0(in) \
zabss(in);

#define s2abss2(inptr,insizeptr,outptr) \
sabsa(inptr, insizeptr[0]*insizeptr[1], outptr);

#define d2absd2(inptr,insizeptr,outptr) \
dabsa(inptr, insizeptr[0]*insizeptr[1], outptr);

#define c2abss2(inptr,insizeptr,outptr) \
cabsa(inptr, insizeptr[0]*insizeptr[1], outptr);

#define z2absd2(inptr,insizeptr,outptr) \
zabsa(inptr, insizeptr[0]*insizeptr[1], outptr);

#endif /* !__INT_ABS_H__ */
