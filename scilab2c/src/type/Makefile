##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Fri Feb  2 15:37:53 2007 jofret
##
## Copyright INRIA 2006
##

RM	=	rm -f
CC	=	gcc
CFLAGS	=	-Wall -pedantic -ansi $(STANDARD)
AR	=	ar cru
RANLIB	=	ranlib

OBJS	=	$(DCOBJ) $(FCOBJ) $(TESTDCOBJ) $(TESTFCOBJ)
LIBS	=	$(DCLIB) $(FCLIB)
TESTS	=	$(TESTDC) $(TESTFC)

### test
TESTDCSRC =	testDoubleComplex.c
TESTDCOBJ =	$(TESTDCSRC:.c=.o)
TESTDC	=	testDoubleComplex

### Double Complex
DCLIB	=	../lib/libDoubleComplex.a
DCSRC	=	doubleComplex.c
DCHEAD	=	doubleComplex.h
DCOBJ	=	$(DCSRC:.c=.o)

### Float Complex
FCLIB	=	../lib/libFloatComplex.a
FCSRC	=	floatComplex.c
FCHEAD	=	floatComplex.h
FCOBJ	=	$(FCSRC:.c=.o)


all: $(LIBS)

$(DCLIB) : $(DCHEAD) $(DCOBJ)
	$(AR) $@ $(DCOBJ)
	$(RANLIB) $@

$(FCLIB) : $(FCHEAD) $(FCOBJ)
	$(AR) $@ $(FCOBJ)
	$(RANLIB) $@

test: $(TESTDC)


$(TESTDC) : $(DCOBJ) $(TESTDCOBJ)
	$(CC) $(CFLAGS) $(DCOBJ) $(TESTDCOBJ) -o $@

clean:
	$(RM) $(OBJS)

distclean: clean
	$(RM) $(LIBS) $(TESTS)

re: clean all

retest: clean test

