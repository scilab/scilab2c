##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Thu Nov 30 16:33:40 2006 jofret
## Last update Fri Dec  8 16:38:48 2006 jofret
##
## Copyright INRIA 2006
##

NAME	=	../../lib/libSin.a

RM	=	rm -f
CC	=	gcc
INCLUDE	=	../../type
LINK	=	../../lib
CFLAGS	=	-Werror -Wall -pedantic -ansi -I $(INCLUDE) -L $(LINK)
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

HEAD	=	sin.h
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
