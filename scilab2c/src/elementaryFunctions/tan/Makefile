##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Mon Jan 29 16:08:57 2007 jofret
##
## Copyright INRIA 2006
##

NAME	=	../../lib/libTan.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	../../type
LINK	=	../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi -I $(INCLUDE) -L $(LINK)
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

HEAD	=	tan.h
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
