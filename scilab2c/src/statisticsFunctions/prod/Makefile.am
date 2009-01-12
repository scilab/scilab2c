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

libProd_la_CFLAGS =	-I $(top_builddir)/type \
			-I $(top_builddir)/operations/includes \
			-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libProd.la

libProd_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	sproda.c \
		srowproda.c \
		scolumnproda.c \
		dproda.c \
		drowproda.c \
		dcolumnproda.c \
		cproda.c \
		crowproda.c \
		ccolumnproda.c \
		zproda.c \
		zrowproda.c \
		zcolumnproda.c

HEAD	=	../includes/prod.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/statisticsFunctions/includes \
			-I $(top_builddir)/operations/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/operations/multiplication/libMultiplication.la \
			$(top_builddir)/statisticsFunctions/prod/libProd.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatProd testDoubleProd

TESTS		=	testFloatProd testDoubleProd

#
# -*- Prod Tests -*-
#
testFloatProd_SOURCES = testFloatProd.c
testFloatProd_CFLAGS =	$(check_INCLUDES)
testFloatProd_LDADD =	$(check_LDADD)

testDoubleProd_SOURCES =testDoubleProd.c
testDoubleProd_CFLAGS =	$(check_INCLUDES)
testDoubleProd_LDADD =	$(check_LDADD)
