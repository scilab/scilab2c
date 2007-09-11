##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Thu Sep  6 15:06:54 2007 bruno
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libAtanh.a

noinst_LIBRARIES =	libAtanh.a

libAtanh_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	satanhs.c \
		datanhs.c \
		catanhs.c \
		zatanhs.c \
		satanha.c \
		datanha.c \
		catanha.c \
		zatanha.c

HEAD	=	../includes/atanh.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testAtanh

TESTS		=	testAtanh

#
# -*- Atanhgeant Tests -*-
#
testAtanh_SOURCES = 	testAtanh.c
testAtanh_CFLAGS	=	$(check_INCLUDES)
testAtanh_LDADD	=	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libAtanh.a \
			@LIBMATH@
