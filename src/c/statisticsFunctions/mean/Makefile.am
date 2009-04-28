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

libMean_la_CFLAGS =	-I $(top_builddir)/type \
			-I $(top_builddir)/operations/includes \
			-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libMean.la

libMean_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	smeana.c \
		srowmeana.c \
		scolumnmeana.c \
		dmeana.c \
		drowmeana.c \
		dcolumnmeana.c \
		cmeana.c \
		crowmeana.c \
		ccolumnmeana.c \
		zmeana.c \
		zrowmeana.c \
		zcolumnmeana.c

HEAD	=	../includes/mean.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/statisticsFunctions/includes \
			-I $(top_builddir)/operations/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/statisticsFunctions/mean/libMean.la \
			$(top_builddir)/statisticsFunctions/sum/libSum.la \
			$(top_builddir)/operations/division/libDivision.la \
			$(top_builddir)/operations/multiplication/libMultiplication.la \
			$(top_builddir)/auxiliaryFunctions/conj/libConj.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatMean testDoubleMean

TESTS		=	testFloatMean testDoubleMean

#
# -*- Mean Tests -*-
#
testFloatMean_SOURCES = testFloatMean.c
testFloatMean_CFLAGS =	$(check_INCLUDES)
testFloatMean_LDADD =	$(check_LDADD)

testDoubleMean_SOURCES =testDoubleMean.c
testDoubleMean_CFLAGS =	$(check_INCLUDES)
testDoubleMean_LDADD =	$(check_LDADD)
