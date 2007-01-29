##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Mon Jan 29 17:17:19 2007 jofret
##
## Copyright INRIA 2006
##

NAME	=	alltest

RM	=	rm -f
CC	=	gcc
INCLUDE	=	../type
LINK	=	../lib
LIBS	=	-lm \
		-lCos -lCosh \
		-lSin -lSinh \
		-lTan -lTanh
CFLAGS	=	-Werror -Wall -pedantic -ansi
CLFLAGS	=	-I$(INCLUDE) -L$(LINK) $(LIBS)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	testCos.c \
		testCosh.c \
		testSin.c \
		testSinh.c \
		testTan.c \
		testTanh.c \
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
