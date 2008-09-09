##
##  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
##  Copyright (C) 2006-2008 - INRIA - Bruno JOFRET
##
##  This file must be used under the terms of the CeCILL.
##  This source file is licensed as described in the file COPYING, which
##  you should have received as part of this distribution.  The terms
##  are also available at
##  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
##
##



libCos_la_CFLAGS =	-I $(top_builddir)/type \
			-I $(top_builddir)/elementaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libCos.la

libCos_la_SOURCES =  $(HEAD) $(SRC)

HEAD =	../includes/cos.h

SRC	=	scoss.c \
		dcoss.c \
		ccoss.c \
		zcoss.c \
		scosa.c \
		dcosa.c \
		ccosa.c \
		zcosa.c

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/elementaryFunctions/cos/libCos.la \
			$(top_builddir)/elementaryFunctions/sin/libSin.la \
			$(top_builddir)/elementaryFunctions/cosh/libCosh.la \
			$(top_builddir)/elementaryFunctions/sinh/libSinh.la \
			$(top_builddir)/elementaryFunctions/exp/libExp.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatCos testDoubleCos

TESTS		=	testFloatCos testDoubleCos

#
# -*- Cosine Tests -*-
#
testFloatCos_SOURCES = 	../../includes/constant.h testCos.h testFloatCos.c
testFloatCos_CFLAGS =	$(check_INCLUDES)
testFloatCos_LDADD =	$(check_LDADD)

testDoubleCos_SOURCES =	../../includes/constant.h testCos.h testDoubleCos.c
testDoubleCos_CFLAGS =	$(check_INCLUDES)
testDoubleCos_LDADD =	$(check_LDADD)