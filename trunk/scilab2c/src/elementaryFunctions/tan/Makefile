##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Thu Mar 22 08:59:51 2007 jofret
##
## Copyright INRIA 2006
##

NAME	=	../../lib/libTan.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	-I ../../type -I ../includes -I ../../includes
LINK	=	-L ../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi $(INCLUDE) $(LINK) $(STANDARD)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	stans.c \
		dtans.c \
		ctans.c \
		ztans.c \
		stana.c \
		dtana.c \
		ctana.c \
		ztana.c

HEAD	=	../includes/tan.h
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
