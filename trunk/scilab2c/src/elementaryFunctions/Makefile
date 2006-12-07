##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Tue Dec  5 09:19:53 2006 jofret
## Last update Thu Dec  7 17:25:24 2006 jofret
##
## Copyright INRIA 2006
##

DIRS	=	cos #\
#		cosh \
# 		sin \
# 		sinh \
# 		tan \
# 		tanh \
# 		exp \
# 		log

all: recure

recure:
	@for i in $(DIRS); \
	do cd $$i && make; \
	cd .. ;\
	done

clean:
	@for i in $(DIRS); \
	do cd $$i && make $@; \
	cd .. ;\
	done

distclean:
	@for i in $(DIRS); \
	do cd $$i && make $@; \
	cd .. ;\
	done

re: clean all