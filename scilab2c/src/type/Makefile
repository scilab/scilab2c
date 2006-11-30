##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Thu Nov 30 17:52:34 2006 jofret
##
## Copyright INRIA 2006
##

NAME	=	dummy
RM	=	rm -f
CC	=	gcc
CFLAGS	=	-Wall -pedantic

SRC	=	doubleComplex.c \
		main.c

HEADERS	=	doubleComplex.h

OBJ	=	$(SRC:.c=.o)

all: $(SRC) $(HEADERS) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

distclean: clean
	$(RM) $(NAME)