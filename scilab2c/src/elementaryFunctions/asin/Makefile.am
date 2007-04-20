##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Fri Apr 20 10:34:36 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libAsin.a

noinst_LIBRARIES =	libAsin.a

libAsin_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	sasins.c \
		dasins.c \
		casins.c \
		zasins.c \
		sasina.c \
		dasina.c \
		casina.c \
		zasina.c

HEAD	=	../includes/asin.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testAsin

TESTS		=	testAsin

#
# -*- ArcSine Tests -*-
#
testAsin_SOURCES = 	testAsin.c
testAsin_CFLAGS	=	$(check_INCLUDES)
testAsin_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libAsin.a \
			@LIBMATH@