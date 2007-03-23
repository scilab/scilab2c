##
##  -*- makefile -*-
##
## Makefile.am
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Fri Mar 23 10:46:35 2007 jofret
##
## Copyright INRIA 2006
##

instdir = $(topdir)/lib

inst_LIBRARIES = libDoubleComplex.a libFloatComplex.a

noinst_LIBRARIES = libDoubleComplex.a libFloatComplex.a

libDoubleComplex_a_SOURCES = $(DCHEAD) $(DCSRC)

libFloatComplex_a_SOURCES = $(FCHEAD) $(FCSRC)

check_PROGRAMS = testDoubleComplex testFloatComplex

testDoubleComplex_SOURCES = testDoubleComplex.c
testDoubleComplex_LDADD = libDoubleComplex.a

testFloatComplex_SOURCES = testFloatComplex.c
testFloatComplex_LDADD = libFloatComplex.a

TESTS = testDoubleComplex testFloatComplex

### Double Complex
DCSRC	=	doubleComplex.c
DCHEAD	=	doubleComplex.h

### Float Complex
FCSRC	=	floatComplex.c
FCHEAD	=	floatComplex.h
