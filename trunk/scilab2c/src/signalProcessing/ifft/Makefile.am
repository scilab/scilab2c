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



libIfft_la_CFLAGS =	-I . \
			-I $(top_builddir)/type \
			-I $(top_builddir)/signalProcessing/includes \
			-I $(top_builddir)/operations/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libIfft.la

libIfft_la_SOURCES =  $(HEAD) $(SRC)

HEAD =	../includes/ifft.h \
	fft_internal.h

SRC	=		zifftma.c \
            		cifftma.c \
            		dfft2.c \
			dfftbi.c \
			dfftmx.c \
			ifft842.c \
			r2tx.c \
			r4tx.c \
			r8tx.c


####
# Checking Part
####

check_INCLUDES	=	-I . \
			-I $(top_builddir)/type \
			-I $(top_builddir)/signalProcessing/includes \
			-I $(top_builddir)/operations/includes \
			-I $(top_builddir)/auxiliaryFunctions/includes


check_LDADD	=	$(top_builddir)/type/libDoubleComplex.la \
			$(top_builddir)/type/libFloatComplex.la \
			$(top_builddir)/lib/lapack/libscilapack.la \
			$(top_builddir)/lib/blas/libsciblas.la \
			$(top_builddir)/signalProcessing/ifft/libIfft.la \
			$(top_builddir)/operations/addition/libAddition.la \
			$(top_builddir)/operations/subtraction/libSubtraction.la \
			@LIBMATH@

check_PROGRAMS	= 	testFloatIfft testDoubleIfft

TESTS		=	testFloatIfft testDoubleIfft

#
# -*- Fftine Tests -*-
#
testFloatIfft_SOURCES = 	testFloatIfft.c
testFloatIfft_CFLAGS =	$(check_INCLUDES)
testFloatIfft_LDADD =	$(check_LDADD)

testDoubleIfft_SOURCES =	testDoubleIfft.c
testDoubleIfft_CFLAGS =	$(check_INCLUDES)
testDoubleIfft_LDADD =	$(check_LDADD)
