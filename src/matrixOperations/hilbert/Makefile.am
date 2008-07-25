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

libDSPHilbert_la_CFLAGS =	-I $(top_builddir)/type \
				-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES = libDSPHilbert.la

HEAD = ../includes/hilbert.h

libDSPHilbert_la_SOURCES = 	$(HEAD) \
				shilba.c \
				dhilba.c 

check_PROGRAMS = 	testDSPHilbert

check_LDADD =   libDSPHilbert.la

check_INCLUDES =	-I $(top_builddir)/type \
			-I ../includes

testDSPHilbert_SOURCES = testDSPHilbert.c
testDSPHilbert_LDADD = $(check_LDADD)
testDSPHilbert_CFLAGS = $(check_INCLUDES)

TESTS =		testDSPHilbert
