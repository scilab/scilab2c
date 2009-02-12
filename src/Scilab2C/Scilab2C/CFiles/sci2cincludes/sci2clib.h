#define SCI2Cint int
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "SCI2CMacroInterface.h"
#include "constant.h"
#include "notFound.h"
#include "doubleComplex.h"
#include "min.h"
#include "max.h"
#include "floatComplex.h"
#include "RealToComplex.h"
#include "ones.h"
#include "zeros.h"
#include "OpApex.h"
#include "OpColon.h"
#include "OpDotHat.h"
#include "OpEqual.h"
#include "OpIns.h"
#include "OpExt.h"
#include "FileManagement.h"
#include "OpLogGt.h"
#include "OpLogLt.h"
#include "OpLogGe.h"
#include "OpLogLe.h"
#include "OpLogEq.h"
#include "OpLogOr.h"
#include "OpLogAnd.h"
#include "ConvertPrecision.h"
#include "abs.h"
#include "int_abs.h"
#include "log10.h"
#include "int_log10.h"
#include "pythag.h"

/* LIB */
/* interfacing lapack */
#include "lapack.h"
/* interfacing blas */
#include "blas.h"

/* AUXILIARY FUNCTIONS */

/* interfacing find */
#include "find.h"
#include "find2d.h"
#include "int_find.h"
/* interfacing disp */
#include "disp.h"
#include "int_disp.h"
/* interfacing conj */
#include "conj.h"
#include "int_conj.h"
/* interfacing isempty */
#include "isempty.h"
#include "int_isempty.h"
/* interfacing isnan */
#include "isnan.h"
#include "int_isnan.h"
/* interfacing length */
#include "length.h"
#include "int_length.h"
/* interfacing pythag */
#include "pythag.h"
/* interfacing frexp */
#include "frexp.h"
/* interfacing sign */
#include "sign.h"
#include "int_sign.h"
/* interfacing size */
#include "size.h"
#include "int_size.h"
/* interfacing type */
#include "type.h"
#include "int_type.h"

/* ELEMENTARY FUNCTIONS */

/* interfacing acos */
#include "acos.h"
#include "int_acos.h"
/* interfacing acosh */
#include "acosh.h"
#include "int_acosh.h"
/* interfacing asin */
#include "asin.h"
#include "int_asin.h"
/* interfacing asinh */
#include "asinh.h"
#include "int_asinh.h"
/* interfacing atan */
#include "atan.h"
#include "atan2.h"
#include "int_atan.h"
/* interfacing atanh */
#include "atanh.h"
#include "int_atanh.h"
/* interfacing cos */
#include "cos.h"
#include "int_cos.h"
/* interfacing cosh */
#include "cosh.h"
#include "int_cosh.h"
/* interfacing exp */
#include "exp.h"
#include "int_exp.h"
/* interfacing lnp1m1 */
#include "lnp1m1.h"
/* interfacing log */
#include "log.h"
#include "int_log.h"
/* interfacing log10 */
#include "log10.h"
#include "int_log10.h"
/* interfacing log1p */
#include "log1p.h"
#include "int_log1p.h"
/* interfacing pow */
#include "pow.h"
#include "int_OpHat.h"
#include "int_OpDotHat.h"
/* interfacing sin */
#include "sin.h"
#include "int_sin.h"
/* interfacing sinh */
#include "sinh.h"
#include "int_sinh.h"
/* interfacing sqrt */
#include "sqrt.h"
#include "int_sqrt.h"
/* interfacing tan */
#include "tan.h"
#include "int_tan.h"
/* interfacing tanh */
#include "tanh.h"
#include "int_tanh.h"

/* IMPLICIT LISTS */
/* interfacing implicitList/OpColon */
#include "implicitList.h"
#include "int_OpColon.h"


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
/* interfacing chol */
#include "chol.h"
#include "int_chol.h"
/* interfacing determinant */
#include "determ.h"
#include "int_det.h"
/* interfacing expm */
#include "matrixExponential.h"
#include "int_expm.h"
/* interfacing eye */
#include "eye.h"
#include "int_eye.h"
/* interfacing fill */
#include "fill.h"
/* interfacing inversion */
#include "matrixInversion.h"
#include "int_invert.h"
/* interfacing infinite norm */
#include "infiniteNorm.h"/* interfacing ones */
#include "ones.h"
#include "int_ones.h"
/* interfacing trace */
#include "matrixTrace.h"
#include "int_trace.h"
/* interfacing tranpose */
#include "matrixTranspose.h"/* interfacing zeros */
#include "zeros.h"
#include "int_zeros.h"


/* STATISTICS FUNCTIONS */
/* interfacing convol */
#include "conv.h"
#include "conv2d.h"
#include "int_convol.h"
/* interfacing fft */
#include "fft.h"
#include "fft_internal.h"
#include "int_fft.h"
/* interfacing ifft */
#include "ifft.h"
#include "ifft_internal.h"
#include "int_ifft.h"
/* interfacing lev */
#include "lev.h"
#include "int_lev.h"





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


