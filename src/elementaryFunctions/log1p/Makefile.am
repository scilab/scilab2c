##
##  Scilab ( http://www.scilab.org/ ) - This file is part of Scilab
##  Copyright (C) 2007-2008 - INRIA - Bruno JOFRET
##
##  This file must be used under the terms of the CeCILL.
##  This source file is licensed as described in the file COPYING, which
##  you should have received as part of this distribution.  The terms
##  are also available at
##  http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
##
##

libLog1p_la_CFLAGS =	-I ../../type \
			-I ../includes

instdir = $(top_builddir)/lib

pkglib_LTLIBRARIES =	libLog1p.la

libLog1p_la_SOURCES =	$(HEAD) $(SRC)

SRC	=	slog1ps.c \
		dlog1ps.c \
		clog1ps.c \
		zlog1ps.c \
		slog1pa.c \
		dlog1pa.c \
		clog1pa.c \
		zlog1pa.c

HEAD	=	../includes/log1p.h
