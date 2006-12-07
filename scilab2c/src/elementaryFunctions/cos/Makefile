##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Thu Dec  7 15:25:32 2006 jofret
##
## Copyright INRIA 2006
##

NAME	=	../../lib/libCos.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	../../type
LINK	=	../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi -I $(INCLUDE) -L $(LINK)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	scoss.c \
		dcoss.c \
		ccoss.c \
		zcoss.c \
		scosa.c \
		dcosa.c \
		ccosa.c \
		zcosa.c

HEAD	=	cos.h
OBJ	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(HEAD) $(OBJ)
	$(AR) $@ $(OBJ)
	$(RANLIB) $@

clean:
	$(RM) $(OBJ)

distclean: clean
	$(RM) $(NAME)

re: clean all
