##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Tue Dec  5 09:19:53 2006 jofret
## Last update Fri Jan 19 15:17:32 2007 jofret
##
## Copyright INRIA 2006
##

DIRS	=	cos \
		sin \
		acos \
		asin \
		cosh \
 		sinh #\
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