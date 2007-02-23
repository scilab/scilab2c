##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Fri Feb 23 18:11:49 2007 jofret
##
## Copyright INRIA 2006
##

NAME	=	alltest

RM	=	rm -f

CC	=	gcc

INCLUDE	=	-I ../type \
		-I ../includes \
		-I ../elementaryFunctions/includes \
		-I ../auxiliaryFunctions/includes

LINK	=	-L ../lib

LIBS	=	-lm \
		-lCos -lCosh \
		-lSin -lSinh \
		-lTan -lTanh \
		-lSign \
		-lExp \
		-lIsEmpty \
		-lFind

CFLAGS	=	-Werror -Wall -ansi $(INCLUDE)
CLFLAGS	=	$(LINK) $(LIBS)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	testCos.c \
		testCosh.c \
		testSin.c \
		testSinh.c \
		testTan.c \
		testTanh.c \
		testExp.c \
		testFind.c \
		testIsEmpty.c \
		test.c

HEAD	=	test.h
OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(HEAD) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(CLFLAGS) -o $@
clean:
	$(RM) $(OBJ)

distclean: clean
	$(RM) $(NAME)

re: clean all

test: $(NAME)
	./$(NAME)
