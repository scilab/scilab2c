##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Mon Apr 23 17:21:00 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes \
		-I ../../elementaryFunctions/includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libAbs.a

noinst_LIBRARIES =	libAbs.a

libAbs_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	sabss.c \
		dabss.c \
		cabss.c \
		zabss.c \
		sabsa.c \
		dabsa.c \
		cabsa.c \
		zabsa.c

HEAD	=	../includes/abs.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testAbs

TESTS		=	testAbs

#
# -*- Abs Tests -*-
#
testAbs_SOURCES = 	testAbs.c
testAbs_CFLAGS	=	$(check_INCLUDES)
testAbs_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libAbs.a \
			$(top_builddir)/lib/libSqrt.a \
			@LIBMATH@
