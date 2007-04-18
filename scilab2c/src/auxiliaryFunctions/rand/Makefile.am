##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Wed Apr 18 18:44:03 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libRand.a

noinst_LIBRARIES =	libRand.a

libRand_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	srands.c \
		drands.c \
		crands.c \
		zrands.c \
		sranda.c \
		dranda.c \
		cranda.c \
		zranda.c

HEAD	=	../includes/rand.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testRand

TESTS		=	testRand

#
# -*- Rand Tests -*-
#
testRand_SOURCES = 	testRand.c
testRand_CFLAGS	=	$(check_INCLUDES)
testRand_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libRand.a \
			@LIBMATH@
