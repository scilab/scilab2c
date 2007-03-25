##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Sun Mar 25 20:58:13 2007 bruno
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libExp.a

noinst_LIBRARIES =	libExp.a

libExp_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	sexps.c \
		dexps.c \
		cexps.c \
		zexps.c \
		sexpa.c \
		dexpa.c \
		cexpa.c \
		zexpa.c

HEAD	=	../includes/exp.h
