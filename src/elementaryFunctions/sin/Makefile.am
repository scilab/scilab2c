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

libSin_la_CFLAGS =	-I ../../type \
			-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libSin.la

libSin_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	ssins.c \
		dsins.c \
		csins.c \
		zsins.c \
		ssina.c \
		dsina.c \
		csina.c \
		zsina.c

HEAD	=	../includes/sin.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/elementaryFunctions/sin/libSin.la \
			$(top_builddir)/elementaryFunctions/cos/libCos.la \
			$(top_builddir)/elementaryFunctions/sinh/libSinh.la \
			$(top_builddir)/elementaryFunctions/exp/libExp.la \
			$(top_builddir)/elementaryFunctions/cosh/libCosh.la \
			$(top_builddir)/elementaryFunctions/sqrt/libSqrt.la \
			$(top_builddir)/auxiliaryFunctions/abs/libAbs.la \
			$(top_builddir)/auxiliaryFunctions/pythag/libPythag.la \
			$(top_builddir)/operations/multiplication/libMultiplication.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatSin testDoubleSin

TESTS		=	testFloatSin testDoubleSin

#
# -*- Sine Tests -*-
#
testFloatSin_SOURCES = 	testSin.h testFloatSin.c
testFloatSin_CFLAGS	=	$(check_INCLUDES)
testFloatSin_LDADD	=	$(check_LDADD)

testDoubleSin_SOURCES = 	testSin.h testDoubleSin.c
testDoubleSin_CFLAGS	=	$(check_INCLUDES)
testDoubleSin_LDADD	=	$(check_LDADD)
