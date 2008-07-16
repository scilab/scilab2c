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

AC_INIT([sci2cLibrary],[0.1],[])
AC_CONFIG_AUX_DIR(config)
AC_PREREQ(2.61)

RM='rm -f'
SCIDIR=$srcdir
SCIDIRFULL=`cd $SCIDIR && pwd`

AC_CONFIG_HEADERS([includes/machine.h])


AM_PROG_INSTALL_STRIP
AC_PROG_LN_S
#AC_PACKAGE_VERSION([4.0])

AC_CANONICAL_HOST

AM_MAINTAINER_MODE
AM_INIT_AUTOMAKE([-Wall foreign]) # Not using -Werror because we override {C,F}FLAGS in order to disable optimisation

### LibTool
AC_PROG_LIBTOOL
### Fortran Compiler
AC_PROG_F77
### C Compiler
AC_PROG_CC
### C++ Compiler
AC_PROG_CXX

# for "subdir-objects"
AM_PROG_CC_C_O
AC_PROG_F77_C_O

### Need to check for math lib and symbols
AC_SEARCH_LIBS(atan, m, LIBMATH="-lm")
AC_SUBST(LIBMATH)


#################################
## all the --with-* argument help
#################################
AC_ARG_WITH(stdc99,
   AS_HELP_STRING([--with-stdc99],[Enable standard C99 (Used in complex implementation)]))
if test "$with_stdc99" = yes; then
   AC_CHECK_HEADERS([complex.h])
   CFLAGS="$CFLAGS -std=c99"
fi

AC_ARG_WITH(blas,
   AS_HELP_STRING([--with-blas],[Enable call to blas library (Used in matrix operations)]))
if test "$with_blas" = no; then
   CFLAGS="$CFLAGS -DWITHOUT_BLAS"
fi

AC_ARG_ENABLE(debug,
   AS_HELP_STRING([--enable-debug],[Use verbose messages through compilation process]))
if test "$enable_debug" = yes; then
   CFLAGS="$CFLAGS -Wall -Wextra -pedantic -Wconversion -Wformat -Wshadow \
   -Wpointer-arith -Wcast-align -Wmissing-prototypes \
   -Wmissing-declarations"
fi

AC_ARG_ENABLE(stopOnWarning,
   AS_HELP_STRING([--enable-stop-on-warning],[Stop the compilation on the first warning found in the C/C++ code]))
if test "$enable_stop_on_warning" = yes; then
   CFLAGS="$CFLAGS -Werror"
fi

###########�FORTRAN FLAGS ######################

######################
######## With F77 / G77 / GFortran ...
######################

if test -n "$F77"; then
	  FFLAGS="$FFLAGS -g -Wall "
fi

###########�C FLAGS ######################

######################
######## With GCC ...
######################
if test "$CC" = "gcc"; then
     CFLAGS="$CFLAGS"
     # used to be -O
     # -D_FORTIFY_SOURCE=2
else
		## CC compiler (not GCC)
		     CFLAGS="-g"
fi


##############################################################
## test for functions in standard C library and C math library
##############################################################

# Provided by math.h
#AC_CHECK_FUNCS([pow] [sqrt] [finite] [floor])

#AC_CHECK_FUNC([exp10],,[
#				AC_DEFINE([log_10_],[2.3025850929940456840179914546844],[Provide a macro to do exp10])
#				AC_DEFINE([exp10(x)],[exp( (log_10_) * (x) )],[Provide a macro to do exp10])
#				])

########################
## test for header files
########################

AC_HEADER_STDBOOL

#################
## FFTW
#################

AC_ARG_WITH(fftw,
    [  --with-fftw	           compile with the FFTW 3 library ])
if test "$with_fftw" = yes; then
  # AC_FFTW()
  echo
fi

#################
## atlas
#################

# check user arguments
USER_ATLAS_LIB_PATH=""

AC_ARG_WITH(atlas-library,
     [  --with-atlas-library=DIR  Atlas library files are in DIR and we use Atlas ],
     [  USER_ATLAS_LIB_PATH=$withval
     CC_OPTIONS="$CC_OPTIONS -DWITH_ATLAS"],
     )
if test "$USER_ATLAS_LIB_PATH" = ""; then
	WHICH_BLAS="STD_BLAS"
 	IN_ATLAS=LOCAL
else
 	echo "Using Atlas library"
 	WHICH_BLAS="ATLAS_LAPACKBLAS"
 	ATLAS_DIR=$USER_ATLAS_LIB_PATH
 	IN_ATLAS=ATLAS
 	AC_DEFINE([WITH_ATLAS],[],[With the Atlas Lib])
fi

#######################
###### Creation of the header file (machine.h)
#######################

AC_CONFIG_FILES([
Makefile
lib/blas/Makefile
lib/lapack/Makefile
type/Makefile
matrixOperations/Makefile
matrixOperations/addition/Makefile
matrixOperations/subtraction/Makefile
matrixOperations/multiplication/Makefile
matrixOperations/division/Makefile
matrixOperations/cat/Makefile
matrixOperations/transpose/Makefile
implicitList/Makefile
elementaryFunctions/Makefile
elementaryFunctions/cos/Makefile
elementaryFunctions/cosh/Makefile
elementaryFunctions/acos/Makefile
elementaryFunctions/acosh/Makefile
elementaryFunctions/sin/Makefile
elementaryFunctions/sinh/Makefile
elementaryFunctions/asin/Makefile
elementaryFunctions/asinh/Makefile
elementaryFunctions/tan/Makefile
elementaryFunctions/tanh/Makefile
elementaryFunctions/atan/Makefile
elementaryFunctions/atan2/Makefile
elementaryFunctions/atanh/Makefile
elementaryFunctions/log/Makefile
elementaryFunctions/log1p/Makefile
elementaryFunctions/log10/Makefile
elementaryFunctions/exp/Makefile
elementaryFunctions/exp10/Makefile
elementaryFunctions/sqrt/Makefile
elementaryFunctions/lnp1m1/Makefile
elementaryFunctions/pow/Makefile
auxiliaryFunctions/Makefile
auxiliaryFunctions/abs/Makefile
auxiliaryFunctions/find/Makefile
auxiliaryFunctions/isempty/Makefile
auxiliaryFunctions/isnan/Makefile
auxiliaryFunctions/rand/Makefile
auxiliaryFunctions/sign/Makefile
auxiliaryFunctions/size/Makefile
auxiliaryFunctions/length/Makefile
auxiliaryFunctions/type/Makefile
auxiliaryFunctions/pythag/Makefile
statisticsFunctions/Makefile
statisticsFunctions/mean/Makefile
statisticsFunctions/sum/Makefile
string/Makefile
string/disp/Makefile
string/string/Makefile
])


AC_OUTPUT

echo ""

echo "Sci2C is configured as follows. Please verify that this configuration"
echo "matches your expectations."
echo ""
echo "Host system type : $host"
echo ""
echo "                  Option                        Value"
echo "-------------------------------------------------------------------------"
echo "Options:"
echo "Atlas library (--with-atlas-library) ............ : $USER_ATLAS_LIB_PATH"
echo "Use FFTW (--with-fftw) .......................... : $with_fftw"

echo ""

echo ""
echo "Options used to compile and link:"
echo "  PREFIX           = $PREFIX_DIR"
echo "  EXEC-PREFIX      = $EXEC_PREFIX_DIR"
echo "  CC               = $CC"
echo "  CFLAGS           = $CFLAGS"
#echo "  CPP              = $CPP"
#echo "  CPPFLAGS         = $CPPFLAGS"
echo "  PCFLAGS          = $PCFLAGS"
echo "  DEFS             = $DEFS"
echo "  LD               = $LD"
echo "  LDFLAGS          = $LDFLAGS"
echo "  LIBS             = $LIBS"
echo "  LIBMATH          = $LIBMATH"
echo "  CXX              = $CXX"
echo "  CXXFLAGS         = $CXXFLAGS"
echo "  F77              = $F77"
echo "  FFLAGS           = $FFLAGS"
echo "  F77_LDFLAGS      = $F77_LDFLAGS"
echo ""
