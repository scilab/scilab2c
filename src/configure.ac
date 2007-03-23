##########
### Bruno JOFRET
### INRIA - Scilab 2007
##########

## Copyright INRIA 2007


AC_INIT([sci2c],[1.0],[])
AC_CONFIG_AUX_DIR(config)
AC_PREREQ(2.55)

RM='rm -f'
SCIDIR=$srcdir
SCIDIRFULL=`cd $SCIDIR && pwd`

AC_CONFIG_HEADERS([includes/machine.h])

AC_PROG_LN_S
#AC_PACKAGE_VERSION([4.0])

AC_CANONICAL_HOST

AC_PROG_RANLIB
AM_MAINTAINER_MODE
AM_INIT_AUTOMAKE([-Wall foreign]) # Not using -Werror because we override {C,F}FLAGS in order to disable optimisation


### Fortran Compiler
AC_PROG_F77
### C Compiler
AC_PROG_CC
### C++ Compiler
AC_PROG_CXX

# for "subdir-objects"
AC_PROG_CC_C_O
AC_PROG_F77_C_O

#################################
## all the --with-* argument help
#################################
AC_ARG_WITH(stdc99,
   [  --with-stdc99           Enable standard C99 (Used in complex implementation)])
if test "$with_stdc99" = yes; then
   AC_CHECK_HEADERS([complex.h])
   CFLAGS="$CFLAGS -std=c99"
fi

########### FORTRAN FLAGS ######################

######################
######## With F77 / G77 / GFortran ...
######################

if test -n "$F77"; then
	  FFLAGS="$FFLAGS -g -Wall "
fi

########### C FLAGS ######################

######################
######## With GCC ...
######################
if test "$CC" = "gcc"; then
     CFLAGS="$CFLAGS -Wformat -Wshadow -Wpointer-arith -Wcast-align -Wmissing-prototypes -Wmissing-declarations -g -Wall "
     # used to be -O
     # -D_FORTIFY_SOURCE=2
else
		## CC compiler (not GCC)
		     CFLAGS="$CFLAGS -g"
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
## test for underscores (name mangling issues between C and fortran)
#######################
AC_CHECK_UNDERSCORE_FORTRAN()



#######################
###### Creation of the header file (machine.h)
#######################

AH_TOP([#ifndef MACHINE_H
#define MACHINE_H

])

AH_BOTTOM([
/*
   Define integer C type which must fit Fortran integer
   For Scilab to work, the rule is:
          size of Fortran double precision = 2 * size of Fortran integer

   At the present time, we suppose:
       size of Fortran integer = 4 bytes
       size of Fortran double precision = 8 bytes
       size of C int = 4 bytes
*/

typedef int integer;

/* define boolean type */
#ifdef BOOL
	#undef BOOL
#endif

typedef int BOOL ;

#ifdef TRUE
	#undef TRUE
#endif
#define TRUE 1

#ifdef FALSE
	#undef FALSE
#endif
#define FALSE 0

/*  params.h */
#ifdef __STDC__
#ifndef  __PARAMS
#define  __PARAMS(paramlist)		paramlist
#endif
#ifndef  _PARAMS
#define  _PARAMS(paramlist)		paramlist
#endif
#else
#ifndef  __PARAMS
#define  __PARAMS(paramlist)		()
#endif
#ifndef  _PARAMS
#define  _PARAMS(paramlist)		()
#endif
#endif

#endif /* MACHINE_H  */
])


AC_CONFIG_FILES([
Makefile
type/Makefile
elementaryFunctions/Makefile
elementaryFunctions/acos/Makefile
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
echo "  CXX              = $CXX"
echo "  CXXFLAGS         = $CXXFLAGS"
echo "  F77              = $F77"
echo "  FFLAGS           = $FFLAGS"
echo "  F77_LDFLAGS      = $F77_LDFLAGS"
echo ""
