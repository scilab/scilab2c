##
##  -*- makefile -*-
##
## Makefile.am
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Fri Mar 30 14:10:45 2007 jofret
##
## Copyright INRIA 2006
##

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type


# noinst_bin = testCos

#
# -*- All checks programms -*-
#
check_PROGRAMS	= 	testCos testSin testTan \
			testCosh testSinh testTanh
#testAcos testAsin testAtan
#testLog testExp testSqrt

#
# -*- Cosine Tests -*-
#
testCos_SOURCES = 	testCos.c
testCos_CFLAGS	=	$(check_INCLUDES)
testCos_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libCos.a \
			$(top_builddir)/lib/libSin.a \
			$(top_builddir)/lib/libCosh.a \
			$(top_builddir)/lib/libSinh.a \
			@LIBMATH@

#
# -*- Sine Tests -*-
#
testSin_SOURCES = 	testSin.c
testSin_CFLAGS	=	$(check_INCLUDES)
testSin_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libSin.a \
			@LIBMATH@

#
# -*- Tangeant Tests -*-
#
testTan_SOURCES = 	testTan.c
testTan_CFLAGS	=	$(check_INCLUDES)
testTan_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libTan.a \
			@LIBMATH@

#
# -*- Hyperbolic Cosine Tests -*-
#
testCosh_SOURCES = 	testCosh.c
testCosh_CFLAGS	=	$(check_INCLUDES)
testCosh_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libCosh.a \
			@LIBMATH@
#
# -*- Hyperbolic Sine Tests -*-
#
testSinh_SOURCES = 	testSinh.c
testSinh_CFLAGS	=	$(check_INCLUDES)
testSinh_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libSinh.a \
			@LIBMATH@

#
# -*- Hyperbolic Tangeant Tests -*-
#
testTanh_SOURCES = 	testTanh.c
testTanh_CFLAGS	=	$(check_INCLUDES)
testTanh_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libTanh.a \
			@LIBMATH@


#
# -*- All tests -*-
#
TESTS		=	testCos testSin testTan \
			testCosh testSinh testTanh
#testAcos testAsin testAtan
#testLog testExp testSqrt

