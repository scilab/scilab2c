##
##  -*- makefile -*-
##
## Makefile
## Made by  Bruno JOFRET <bruno.jofret@inria.fr>
##
## Started on  Tue Dec  5 09:19:53 2006 jofret
## Last update Wed Feb 14 15:40:48 2007 jofret
##
## Copyright INRIA 2006
##

DIRS	=	sign \
		find \
		isempty #\
		#isnan #\
		#rand #\
		#size #\
		#type

all: recure

stdc99:
	@for i in $(DIRS); \
	do cd $$i && make STANDARD=-std=c99; \
	result=$$? ; \
	cd .. ;\
	if test $$result -ne 0; then exit 1; fi; \
	done

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
	cd .. ;\
	done

distclean:
	@for i in $(DIRS); \
	do cd $$i && make $@; \
	cd .. ;\
	done

re: clean all