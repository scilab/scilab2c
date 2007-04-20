##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Fri Apr 20 10:26:22 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libAcos.a

noinst_LIBRARIES =	libAcos.a

libAcos_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	sacoss.c \
		dacoss.c \
		cacoss.c \
		zacoss.c \
		sacosa.c \
		dacosa.c \
		cacosa.c \
		zacosa.c

HEAD	=	../includes/acos.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testAcos

TESTS		=	testAcos

#
# -*- Acosine Tests -*-
#
testAcos_SOURCES = 	testAcos.c
testAcos_CFLAGS	=	$(check_INCLUDES)
testAcos_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libAcos.a \
			@LIBMATH@