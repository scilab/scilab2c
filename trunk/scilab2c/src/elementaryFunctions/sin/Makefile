##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Fri Feb 23 17:10:58 2007 jofret
##
## Copyright INRIA 2006
##

NAME	=	../../lib/libSin.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	-I ../../type -I ../includes
LINK	=	-L ../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi $(INCLUDE) $(LINK) $(STANDARD)
AR	=	ar cru
RANLIB	=	ranlib

SRC	=	ssins.c \
		dsins.c \
		csins.c \
		zsins.c \
		ssina.c \
		dsina.c \
		csina.c \
		zsina.c

HEAD	=	../includes/sin.h
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
