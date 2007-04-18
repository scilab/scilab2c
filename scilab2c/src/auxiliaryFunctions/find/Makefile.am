##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Wed Apr 18 17:20:57 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libFind.a

noinst_LIBRARIES =	libFind.a

libFind_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	sfinds.c \
		dfinds.c \
		cfinds.c \
		zfinds.c \
		sfinda.c \
		dfinda.c \
		cfinda.c \
		zfinda.c

HEAD	=	../includes/find.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testFind

TESTS		=	testFind

#
# -*- Find Tests -*-
#
testFind_SOURCES = 	testFind.c
testFind_CFLAGS	=	$(check_INCLUDES)
testFind_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libFind.a \
			@LIBMATH@
