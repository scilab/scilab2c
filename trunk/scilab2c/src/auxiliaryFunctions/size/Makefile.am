##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Wed Apr 18 18:46:06 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libSize.a

noinst_LIBRARIES =	libSize.a

libSize_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	ssizes.c \
		dsizes.c \
		csizes.c \
		zsizes.c \
		ssizea.c \
		dsizea.c \
		csizea.c \
		zsizea.c

HEAD	=	../includes/size.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testSize

TESTS		=	testSize

#
# -*- Size Tests -*-
#
testSize_SOURCES = 	testSize.c
testSize_CFLAGS	=	$(check_INCLUDES)
testSize_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libSize.a \
			@LIBMATH@
