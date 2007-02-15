##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Thu Feb 15 17:16:42 2007 jofret
##
## Copyright INRIA 2006
##

NAME	=	alltest

RM	=	rm -f
CC	=	gcc
INCLUDE	=	-I ../type -I ../misc
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
