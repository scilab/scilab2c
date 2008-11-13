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

libDivision_la_CFLAGS =	-I $(top_builddir)/type \
			-I $(top_builddir)/operations/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libDivision.la

HEAD = ../includes/division.h

libDivision_la_SOURCES = 	$(HEAD) \
				cdivides.c \
				zdivides.c 

check_PROGRAMS = 	testDivision

check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			libDivision.la

check_INCLUDES =	-I $(top_builddir)/type \
			-I $(top_builddir)/operations/includes

testDivision_SOURCES = testDivision.c
testDivision_LDADD = $(check_LDADD)
testDivision_CFLAGS = $(check_INCLUDES)

TESTS =		testDivision
