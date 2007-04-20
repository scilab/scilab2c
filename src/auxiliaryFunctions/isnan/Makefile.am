##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Fri Apr 20 16:20:05 2007 jofret
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libIsnan.a

noinst_LIBRARIES =	libIsnan.a

libIsnan_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	sisnans.c \
		disnans.c \
		cisnans.c \
		zisnans.c

HEAD	=	../includes/isnan.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testIsnan

TESTS		=	testIsnan

#
# -*- Isnan Tests -*-
#
testIsnan_SOURCES = 	testIsnan.c
testIsnan_CFLAGS  =	$(check_INCLUDES)
testIsnan_LDADD	  =	$(top_builddir)/lib/libDoubleComplex.a \
			$(top_builddir)/lib/libFloatComplex.a \
			$(top_builddir)/lib/libIsnan.a \
			@LIBMATH@
