#define SCI2Cint int
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "constant.h"
#include "notFound.h"
#include "doubleComplex.h"
#include "length.h"
#include "int_length.h"
#include "min.h"
#include "max.h"
#include "floatComplex.h"
#include "RealToComplex.h"
#include "conj.h"
#include "cos.h"
#include "ones.h"
#include "zeros.h"
#include "OpApex.h"
#include "OpColon.h"
#include "OpDotSlash.h"
#include "OpDotHat.h"
#include "OpEqual.h"
#include "OpPlus.h"
#include "OpMinus.h"
#include "OpStar.h"
#include "OpIns.h"
#include "OpExt.h"
#include "sin.h"
#include "FileManagement.h"
#include "OpLogGt.h"
#include "OpLogLt.h"
#include "OpLogGe.h"
#include "OpLogLe.h"
#include "OpLogEq.h"
#include "OpLogOr.h"
#include "OpLogAnd.h"
#include "ConvertPrecision.h"
#include "sqrt.h"
#include "int_sqrt.h"
#include "abs.h"
#include "int_abs.h"
#include "log1p.h"
#include "log.h"
#include "int_log.h"
#include "log10.h"
#include "int_log10.h"
#include "pythag.h"

/* LIB */
/* interefacing lapack */
#include "lapack.h"
/* interefacing blas */
#include "blas.h"

/* AUXILIARY FUNCTIONS */

/* interfacing find */
#include "find.h"
#include "int_find.h"
/* interfacing disp */
#include "disp.h"
#include "int_disp.h"
/* interfacing conj */
#include "conj.h"
#include "int_conj.h"
/* interfacing pythag */
#include "pythag.h"
/* interfacing frexp */
#include "frexp.h"
/* interfacing sign */
#include "sign.h"

/* ELEMENTARY FUNCTIONS */

/* interfacing acos */
#include "acos.h"
#include "int_acos.h"
/* interfacing acosh */
#include "acosh.h"
#include "int_acosh.h"
/* interfacing atan */
#include "atan.h"
#include "int_atan.h"
/* interfacing lnp1m1 */
#include "lnp1m1.h"
/* interfacing pow */
#include "pow.h"
#include "int_pow.h"
/* interfacing log */
#include "log.h"
#include "int_log.h"
/* interfacing exp */
#include "exp.h"
#include "int_exp.h"
/* interfacing sin */
#include "sin.h"
#include "int_sin.h"
/* interfacing cos */
#include "cos.h"
#include "int_cos.h"
/* interfacing cosh */
#include "cosh.h"
#include "int_cosh.h"
/* interfacing sinh */
#include "sinh.h"
#include "int_sinh.h"

/* OPERATIONS */
/* interfacing addition */
#include "addition.h"
#include "int_OpPlus.h"/* interfacing subtraction */
#include "subtraction.h"
#include "int_OpMinus.h"/* interfacing multiplication */
#include "multiplication.h"
#include "matrixMultiplication.h"
#include "int_OpStar.h"
#include "int_OpDotStar.h"
/* interfacing division */
#include "division.h"
#include "matrixDivision.h"
#include "int_OpSlash.h"
#include "int_OpDotSlash.h"
#include "int_OpBackSlash.h"
#include "int_OpDotBackSlash.h"



/* MATRIX OPERTAIONS */
/* interfacing cat */
#include "cat.h"
#include "int_OpRc.h"
#include "int_OpCc.h"
/* interfacing fill */
#include "fill.h"/* interfacing ones */
#include "ones.h"
/* interefacing eye */
#include "eye.h"
#include "int_eye.h"
/* interfacing trace */
#include "matrixTrace.h"
#include "int_trace.h"
/* interfacing tranpose */
#include "matrixTranspose.h"
/* interefacing inversion */
#include "matrixInversion.h"
#include "int_invert.h"
/* interfacing expm */
#include "matrixExponential.h"
#include "int_expm.h"
/* interefacing infinite norm */
#include "infiniteNorm.h"
/* interefacing determinant */
#include "determ.h"
#include "int_det.h"

/* STATISTICS FUNCTIONS */

/* interfacing mean */
#include "mean.h"
#include "int_mean.h"
/* interfacing sum */
#include "sum.h"
#include "int_sum.h"
/* interfacing variance */
#include "variance.h"
#include "int_variance.h"


