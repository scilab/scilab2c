##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Fri Jan  5 10:19:16 2007 jofret
## Last update Sun Mar 25 20:57:34 2007 bruno
##
## Copyright INRIA 2007
##

AM_CFLAGS =	-I ../../type \
		-I ../includes

instdir = $(top_builddir)/lib

inst_LIBRARIES =	libSin.a

noinst_LIBRARIES =	libSin.a

libSin_a_SOURCES =	$(HEAD) $(SRC)

SRC	=	ssins.c \
		dsins.c \
		csins.c \
		zsins.c \
		ssina.c \
		dsina.c \
		csina.c \
		zsina.c

HEAD	=	../includes/sin.h
