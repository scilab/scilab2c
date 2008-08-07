##
##  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
##  Copyright (C) 2008-2008 - INRIA - Allan SIMON
##
##  This file must be used under the terms of the CeCILL.
##  This source file is licensed as described in the file COPYING, which
##  you should have received as part of this distribution.  The terms
##  are also available at
##  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
##
##

libFrexp_la_CFLAGS =	-I $(top_builddir)/type \
                    -I $(top_builddir)/includes \
                    -I $(top_builddir)/auxiliaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libFrexp.la

HEAD = ../includes/frexp.h

libFrexp_la_SOURCES = 	$(HEAD) \
				sfrexps.c \
				dfrexps.c 

check_PROGRAMS = 	testFrexp

check_LDADD =		$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			libFrexp.la

check_INCLUDES =	-I $(top_builddir)/type \
                    -I $(top_builddir)/includes \
                    -I $(top_builddir)/auxiliaryFunctions/includes



testFrexp_SOURCES = testFrexp.c
testFrexp_LDADD = $(check_LDADD)
testFrexp_CFLAGS = $(check_INCLUDES)

TESTS =		testFrexp
