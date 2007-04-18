##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Wed Apr 18 18:45:11 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libSign.a

noinst_LIBRARIES =	libSign.a

libSign_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	ssigns.c \
		dsigns.c \
		csigns.c \
		zsigns.c \
		ssigna.c \
		dsigna.c \
		csigna.c \
		zsigna.c

HEAD	=	../includes/sign.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testSign

TESTS		=	testSign

#
# -*- Sign Tests -*-
#
testSign_SOURCES = 	testSign.c
testSign_CFLAGS	=	$(check_INCLUDES)
testSign_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libSign.a \
			@LIBMATH@
