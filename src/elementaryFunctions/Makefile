##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Tue Dec  5 09:19:53 2006 jofret
## Last update Wed Feb 14 14:03:59 2007 jofret
##
## Copyright INRIA 2006
##

DIRS	=	cos \
		sin \
		acos \
		asin \
		cosh \
		sinh \
		tan \
		tanh \
		exp #\
# 		log

all: recure

recure:
	@for i in $(DIRS); \
	do cd $$i && make; \
	result=$$? ; \
	cd .. ;\
	if test $$result -ne 0; then exit 1; fi; \
	done

clean:
	@for i in $(DIRS); \
	do cd $$i && make $@; \
	result=$$? ; \
	cd .. ;\
	if test $$result -ne 0; then exit 1; fi; \
	done

distclean:
	@for i in $(DIRS); \
	do cd $$i && make $@; \
	cd .. ;\
	done

re: clean all