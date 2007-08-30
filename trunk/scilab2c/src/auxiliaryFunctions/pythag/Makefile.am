##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Thu Aug 16 11:46:20 2007 bruno
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes \
		-I ../../elementaryFunctions/includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libPythag.a

noinst_LIBRARIES =	libPythag.a

libPythag_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	spythags.c \
		dpythags.c \
		cpythags.c

HEAD	=	../includes/pythag.h

####
# Checking Part
####

check_INCLUDES	=	-I $(top_builddir)/auxiliaryFunctions/includes \
			-I $(top_builddir)/elementaryFunctions/includes \
			-I $(top_builddir)/type

check_PROGRAMS	= 	testPythag

TESTS		=	testPythag

#
# -*- Pythag Tests -*-
#
testPythag_SOURCES = 	testPythag.c
testPythag_CFLAGS  =	$(check_INCLUDES)
testPythag_LDADD   =	$(top_builddir)/lib/libPythag.a \
			$(top_builddir)/lib/libSqrt.a \
			@LIBMATH@
