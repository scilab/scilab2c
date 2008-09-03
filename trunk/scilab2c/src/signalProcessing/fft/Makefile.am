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



libFft_la_CFLAGS =	-I . \
			-I $(top_builddir)/type \
			-I $(top_builddir)/signalProcessing/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libFft.la

libFft_la_SOURCES =  $(HEAD) $(SRC)

HEAD =	../includes/fft.h

SRC	=		dfft2.c \
			dfftbi.c \
			dfftmx.c \
			fft842.c \
			r2tx.c \
			r4tx.c \
			r8tx.c


####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/signalProcessing/includes \
			-I $(top_builddir)/type

check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/elementaryFunctions/fft/libFft.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatFft testDoubleFft

TESTS		=	testFloatFft testDoubleFft

#
# -*- Fftine Tests -*-
#
testFloatFft_SOURCES = 	testFloatFft.c
testFloatFft_CFLAGS =	$(check_INCLUDES)
testFloatFft_LDADD =	$(check_LDADD)

testDoubleFft_SOURCES =	testDoubleFft.c
testDoubleFft_CFLAGS =	$(check_INCLUDES)
testDoubleFft_LDADD =	$(check_LDADD)