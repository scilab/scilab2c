##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Sun Mar 25 20:56:35 2007 bruno
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libTan.a

noinst_LIBRARIES =	libTan.a

libTan_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	stans.c \
		dtans.c \
		ctans.c \
		ztans.c \
		stana.c \
		dtana.c \
		ctana.c \
		ztana.c

HEAD	=	../includes/tan.h
