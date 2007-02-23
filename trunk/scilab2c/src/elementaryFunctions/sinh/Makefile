##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Fri Feb 23 17:15:12 2007 jofret
##
## Copyright INRIA 2006
##

NAME	=	../../lib/libSinh.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	-I ../../type -I ../includes
LINK	=	-L ../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi $(INCLUDE) $(LINK) $(STANDARD)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	ssinhs.c \
		dsinhs.c \
		csinhs.c \
		zsinhs.c \
		ssinha.c \
		dsinha.c \
		csinha.c \
		zsinha.c

HEAD	=	../includes/sinh.h
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
