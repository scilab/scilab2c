##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Sun Mar 25 20:58:01 2007 bruno
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libLog.a

noinst_LIBRARIES =	libLog.a

libLog_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	slogs.c \
		dlogs.c \
		clogs.c \
		zlogs.c \
		sloga.c \
		dloga.c \
		cloga.c \
		zloga.c

HEAD	=	../includes/log.h
