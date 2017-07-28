#ifndef __SCI2CLIB_H__
#define __SCI2CLIB_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <stdlib.h>
#include <string.h>
#include <math.h>
	
/* CONSTANT */
#include "constant.h"

/* LIB */
/* interfacing blas */
#include "blas.h"
/* interfacing lapack */
#include "lapack.h"


#include "sva.h"
#include "int_sva.h"


#include "svd.h"
#include "int_svd.h"


/* AUXILIARY FUNCTIONS */

/* interfacing abs */
#include "abs.h"
#include "int_abs.h"
/* interfacing conj */
#include "conj.h"
#include "int_conj.h"
/* interfacing disp */
#include "disp.h"
#include "int_disp.h"
/* interfacing find */
#include "find.h"
#include "find2d.h"
#include "int_find.h"
/* interfacing frexp */
#include "frexp.h"
/* interfacing isempty */
#include "isempty.h"
#include "int_isempty.h"
/* interfacing isnan */
#include "isnan.h"
#include "int_isnan.h"
/* interfacing length */
#include "length.h"
#include "int_length.h"
/* interfacing max */
#include "max.h"
#include "int_max.h"
/* interfacing min */
#include "min.h"
#include "int_min.h"
/* interfacing pythag */
#include "pythag.h"
/* interfacing sign */
#include "sign.h"
#include "int_sign.h"
/* interfacing size */
#include "size.h"
#include "int_size.h"
/* interfacing type */
#include "type.h"
#include "int_type.h"
/* interfacing rand */
#include "rand.h"
#include "int_rand.h"

/* INTERPOLATION FUNCTIONS*/

/*interfacing interp1*/
#include "interp1.h"
#include "int_interp1.h"

/* SPECIAL FUNCTIONS */

/* interfacing erf */
#include "erf.h"
#include "int_erf.h"

/* interfacing erfc */
#include "erfc.h"
#include "int_erfc.h"

/* interfacing erfcx */
#include "erfcx.h"
#include "int_erfcx.h"

/* interfacing erfinv */
#include "erfinv.h"
#include "int_erfinv.h"


/* ELEMENTARY FUNCTIONS */

#include "nextpow2.h"
#include "int_nextpow2.h"
/*interfacing gcd*/
#include "gcd.h"
#include "int_gcd.h"
/* interfacing isreal*/
#include "isreal.h"
#include "int_isreal.h"
/* interfacing atand */
#include "atand.h"
#include "int_atand.h"
/* interfacing asind */
#include "asind.h"
#include "int_asind.h"
/* interfacing asech */
#include "asech.h"
#include "int_asech.h"
/* interfacing asecd */
#include "asecd.h"
#include "int_asecd.h"
/* interfacing asec */
#include "asec.h"
#include "int_asec.h"
/* interfacing acsch */
#include "acsch.h"
#include "int_acsch.h"
/* interfacing acscd */
#include "acscd.h"
#include "int_acscd.h"
/* interfacing acsc */
#include "acsc.h"
#include "int_acsc.h"
/* interfacing acoth */
#include "acoth.h"
#include "int_acoth.h"
/* interfacing acotd */
#include "acotd.h"
#include "int_acotd.h"
/* interfacing acot */
#include "acot.h"
#include "int_acot.h"
/* interfacing acos */
#include "acos.h"
#include "int_acos.h"
/* interfacing acosd */
#include "acosd.h"
#include "int_acosd.h"
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
/* interfacing ceil */
#include "ceil.h"
#include "int_ceil.h"
/* interfacing cosh */
#include "cosh.h"
#include "int_cosh.h"
/* interfacing exp */
#include "exp.h"
#include "int_exp.h"
/* interfacing fix */
#include "fix.h"
#include "int_fix.h"
/*interfacing isrow*/
#include "isrow.h"
#include "int_isrow.h"
/*interfacing nthroot*/
#include "nthroot.h"
#include "int_nthroot.h"
/*interfacing pmodulo*/
#include "pmodulo.h"
#include "int_pmodulo.h"
/*interfacing nanmax*/
#include "nanmax.h"
#include "int_nanmax.h"
/*interfacing nanmean*/
#include "nanmean.h"
#include "int_nanmean.h"
/*interfacing nanmin*/
#include "nanmin.h"
#include "int_nanmin.h"
/*interfacing nanmin*/
#include "nansum.h"
#include "int_nansum.h"
/*interfacing issquare*/
#include "issquare.h"
#include "int_issquare.h"
/*interfacing isscalar*/
#include "isscalar.h"
#include "int_isscalar.h"
/*interfacing isvector*/
#include "isvector.h"
#include "int_isvector.h"
/*interfacing iscolumn*/
#include "iscolumn.h"
#include "int_iscolumn.h"
/*interfacing ismatrix*/
#include "ismatrix.h"
#include "int_ismatrix.h"
/* interfacing floor */
#include "floor.h"
#include "int_floor.h"
/* interfacing int */
#include "int.h"
#include "int_int.h"
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
#include "matrixPow.h"
#include "int_OpHat.h"
#include "int_OpDotHat.h"
/* interfacing round */
#include "round.h"
#include "int_round.h"
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
/* interfacing uint8 */
#include "uint8.h"
#include "int_uint8.h"
/* interfacing int8 */
#include "int8.h"
#include "int_int8.h"
/* interfacing uint16 */
#include "uint16.h"
#include "int_uint16.h"
/* interfacing int16 */
#include "int16.h"
#include "int_int16.h"
/* interfacing uint32 */
#include "uint32.h"
#include "int_uint32.h"
/* interfacing int32 */
#include "int32.h"
#include "int_int32.h"

/*interfacing bitand */
#include "bitand.h"
#include "int_bitand.h"

/*interfacing bitor */
#include "bitor.h"
#include "int_bitor.h"

/*interfacing bitxor */
#include "bitxor.h"
#include "int_bitxor.h"

/*interfacing bitcmp */
#include "bitcmp.h"
#include "int_bitcmp.h"

/*interfacing bitset */
#include "bitset.h"
#include "int_bitset.h"

/*interfacing bitget */
#include "bitget.h"
#include "int_bitget.h"


/*interfacing linspace */
#include "linspace.h"
#include "int_linspace.h"

/*interfacing logspace */
#include "logspace.h"
#include "int_logspace.h"

/*interfacing dec2base*/
#include "dec2base.h"
#include "int_dec2base.h"

/*interfacing base2dec*/
#include "base2dec.h"
#include "int_base2dec.h"

/*interfacing dec2bin*/
#include "dec2bin.h"
#include "int_dec2bin.h"
/*interfacing dec2hex*/
#include "dec2hex.h"
#include "int_dec2hex.h"

/*interfacing dec2oct*/
#include "dec2oct.h"
#include "int_dec2oct.h"
/*interfacing oct2dec*/
#include "oct2dec.h"
#include "int_oct2dec.h"
/*interfacing hex2dec*/
#include "hex2dec.h"
#include "int_hex2dec.h"
/*interfacing bin2dec*/
#include "bin2dec.h"
#include "int_bin2dec.h"

/*interfacing cosd*/
#include "cosd.h"
#include "int_cosd.h"


/*interfacing cotd*/
#include "cotd.h"
#include "int_cotd.h"

/*interfacing coth*/
#include "coth.h"
#include "int_coth.h"

/*interfacing csc*/
#include "csc.h"
#include "int_csc.h"

/*interfacing cscd*/
#include "cscd.h"
#include "int_cscd.h"

/*interfacing csch*/
#include "csch.h"
#include "int_csch.h"

/*interfacing sec*/
#include "sec.h"
#include "int_sec.h"

/*interfacing sech*/
#include "sech.h"
#include "int_sech.h"

/*interfacing secd*/
#include "secd.h"
#include "int_secd.h"

/*interfacing float*/
#include "get_float.h"
#include "int_float.h"

/*interfacing factorial*/
#include "factorial.h"
#include "int_factorial.h"

/*interfacing primes*/
#include "primes.h"
#include "int_primes.h"

/*interfacing factor*/
#include "factor.h"
#include "int_factor.h"

/*interfacing gcd*/
#include "gcd.h"
#include "int_gcd.h"

/*interfacing lcm*/
#include "lcm.h"
#include "int_lcm.h"

/*interfacing isequal*/
#include "isequal.h"
#include "int_isequal.h"


/* IMPLICIT LISTS */
/* interfacing implicitList/OpColon */
#include "implicitList.h"
#include "int_OpColon.h"

/* OPERATIONS */
/* interfacing assignation */
#include "int_OpEqual.h"
/* interfacing addition */
#include "addition.h"
#include "int_OpPlus.h"
/* interfacing subtraction */
#include "subtraction.h"
#include "int_OpMinus.h"
/* interfacing multiplication */
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
/* interfacing comparison */
#include "int_OpLogNot.h"
#include "int_OpLogEq.h"
#include "int_OpLogNe.h"
#include "int_OpLogGt.h"
#include "int_OpLogGe.h"
#include "int_OpLogLt.h"
#include "int_OpLogLe.h"
#include "int_OpLogAnd.h"
#include "int_OpLogOr.h"
/* interfacing insertion */
#include "int_OpIns.h"


/* MATRIX OPERATIONS */
/* interfacing extraction */
#include "int_OpExt.h"
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
#include "infiniteNorm.h"
/* interfacing ones */
#include "ones.h"
#include "int_ones.h"
/* Linear Algebra - spec */
#include "spec.h"
#include "int_spec.h"
/* interfacing trace */
#include "matrixTrace.h"
#include "int_trace.h"
/* interfacing tranpose */
#include "matrixTranspose.h"
#include "int_OpApex.h"
#include "int_OpDotApex.h"
/* interfacing zeros */
#include "zeros.h"
#include "int_zeros.h"
/* interfacing diag */
#include "diag.h"
#include "int_diag.h"
/*interfacing cumsum*/
#include "int_cumsum.h"
#include "cumsum.h"
/*interfacing matrix*/
#include "int_matrix.h"
#include "matrix.h"
/*interfacing nnz*/
#include "int_nnz.h"
#include "nnz.h"
/*interfacing cumprod*/
#include "int_cumprod.h"
#include "cumprod.h"
/*interfacing triu*/
#include "int_triu.h"
#include "triu.h"
/*interfacing tril*/
#include "int_tril.h"
#include "tril.h"
/*interfacing kron*/
#include "int_kron.h"
#include "kron.h"
/*interfacing flipdim*/
#include "int_flipdim.h"
#include "flipdim.h"
/*interfacing norm*/
#include "int_norm.h"
#include "norm.h"

/*interface Toeplitz */
#include "toeplitz.h"
#include "int_toeplitz.h"


/*interface Cross */
#include "cross.h"
#include "int_cross.h"


/* SIGNAL PROCESSING */


#include "modk.h"
#include "int_modk.h"
/* interfacing idct */
#include "idct.h"
#include "int_idct.h"

/* interfacing dct   */
#include "dct.h"
#include "int_dct.h"

/* interfacing convol */
#include "conv.h"
#include "conv2d.h"
#include "int_convol.h"
/* interfacing fft */
#include "fft.h"
#include "fft_internal.h"
#include "int_fft.h"
/* interfacing fftshift */
#include "fftshift.h"
#include "int_fftshift.h"
/* interfacing ifft */
#include "ifft.h"
#include "ifft_internal.h"
#include "int_ifft.h"
/* interfacing lev */
#include "lev.h"
#include "int_lev.h"

/* interfacing zpbutt */
#include "zpbutt.h"
#include "int_zpbutt.h"

/*interfacing zpch1 */
#include "zpch1.h"
#include "int_zpch1.h"

/*interfacing zpch2 */
#include "zpch2.h"
#include "int_zpch2.h"

/*interfacing buttmag */
#include "buttmag.h"
#include "int_buttmag.h"

/*interfacing cheb1mag */
#include "cheb1mag.h"
#include "int_cheb1mag.h"

/*interfacing cheb2mag */
#include "cheb2mag.h"
#include "int_cheb2mag.h"

/*interfacing sinc */
#include "sinc.h"
#include "int_sinc.h"

/*interfacing sincd */
#include "sincd.h"
#include "int_sincd.h"

/*interfacing fsfirlin */
#include "fsfirlin.h"
#include "int_fsfirlin.h"

/*interfacing %k */
#include "modk.h"
#include "int_modk.h"

/*interfacing filt_sinc */
#include "filt_sinc.h"
#include "int_filt_sinc.h"

/*interfacing ffilt */
#include "ffilt.h"
#include "int_ffilt.h"

/*interfacing %sn */
#include "modsn.h"
#include "int_modsn.h"

/*interfacing ell1mag */
#include "ell1mag.h"
#include "int_ell1mag.h"

/* interfacing amell */
#include "amell.h"
#include "int_amell.h"

/* STATISTICS FUNCTIONS */

/* interfacing max */
#include "statMax.h"
/* interfacing min */
#include "statMin.h"
/* interfacing mean */
#include "mean.h"
#include "int_mean.h"
/* interfacing median */
#include "median.h"
#include "int_median.h"
/* interfacing nanmedian */
#include "nanmedian.h"
#include "int_nanmedian.h"
/* interfacing mad */
#include "mad.h"
#include "int_mad.h"
/* interfacing stdevf */
#include "stdevf.h"
#include "int_stdevf.h"
/* interfacing meanf */
#include "meanf.h"
#include "int_meanf.h"
/* interfacing sum */
#include "sum.h"
#include "int_sum.h"
/* interfacing prod */
#include "prod.h"
#include "int_prod.h"
/* interfacing variance */
#include "variance.h"
#include "int_variance.h"

/* TYPE */
/* interfacing real */
#include "int_real.h"
/* interfacing imag */
#include "int_imag.h"

#include "types.h"

/* STRING*/
/* interface for String */
#include "int_string.h"
/*include for string */
#include "str.h"

/*ODE functions*/
#include "ode.h"
#include "int_ode.h"

/*Diff function*/
#include "diffc.h"
#include "int_diffc.h"

/*Functions related to file handling*/
#include "files.h"
#include "int_files.h"

/*Functions related to strings*/
#include "convstr.h"
#include "int_convstr.h"

/*interfacing strsubst*/
#include "strsubst.h"
#include "int_strsubst.h"

/*interfacing strrev*/
#include "strrev.h"
#include "int_strrev.h"

/*interfacing strrchr*/
#include "strrchr.h"
#include "int_strrchr.h"

/*interfacing strchr*/
#include "strchr.h"
#include "int_strchr.h"

/*interfacing ascii*/
#include "ascii.h"
#include "int_ascii.h"

/*interfacing strspn*/
#include "strspn.h"
#include "int_strspn.h"

/*interfacing strcspn*/
#include "strcspn.h"
#include "int_strcspn.h"

/*interfacing strncpy*/
#include "strncpy.h"
#include "int_strncpy.h"

/*Functions related to strings*/
#include "convstr.h"
#include "int_convstr.h"


#include "syslin.h"
#include "int_syslin.h"	

#include "lqr.h"
#include "int_lqr.h"	

#include "lqe.h"
#include "int_lqe.h"

#include "obscont.h"
#include "int_obscont.h"	

#include "schur.h"
#include "int_schur.h"

#include "balanc.h"
#include "int_balanc.h"	

#include "svd.h"		/*Linear Alegbra - Singular value decompostion */
#include "int_svd.h"

#include "rcond.h"
#include "int_rcond.h"

#include "hess.h"	/* Linear Algebra - Hess function */
#include "int_hess.h"

#include "sva.h"	/* Linear Algebra - SVA function */
#include "int_sva.h" 

#include "sqroot.h"	/* Linear Algebra - Sqroot function */
#include "int_sqroot.h"

#include "givens.h"	/* Linear Algebra - Givens Function */
#include "int_givens.h"

#include "householder.h" /* Linear Algebra - Householder function */
#include "int_householder.h"

#include "fullrf.h"		/* Linear Algebra - Full rank factoziation */
#include "int_fullrf.h"

#include "rowcomp.h"	/* Linear Algebra - row compression, range */
#include "int_rowcomp.h"


#include "qr.h" /* Linear Algebra - QR decomposition */
#include "int_qr.h"
	
/*Functions related to opencv*/
/*#include "cvcore.hpp"
#include "int_cvcore.hpp"
#include "cvhighgui.hpp"
#include "int_cvhighgui.hpp"
#include "cvimgproc.hpp"
#include "int_cvimgproc.hpp"
*/
/*Scilab-arduino toolbox*/
#ifdef Arduino1
#include "int_cmd_digital_out.h"
#include "cmd_digital_out.h"
#include "int_cmd_digital_in.h"
#include "cmd_digital_in.h"
#include "int_cmd_analog_out.h"
#include "cmd_analog_out.h"
#include "int_cmd_analog_in.h"
#include "cmd_analog_in.h"
#include "int_cmd_dcmotor.h"
#include "cmd_dcmotor_run.h"
#include "cmd_dcmotor_setup.h"
#include "cmd_dcmotor_release.h"
#include "int_sleep.h"
#include "sleep.h"
#include "int_cmd_analog_in_volt.h"
#include "cmd_analog_in_volt.h"
#include "int_cmd_analog_out_volt.h"
#include "cmd_analog_out_volt.h"
#include "cmd_i2c_dev.h"
#include "int_cmd_i2c_dev.h"
#include "cmd_i2c_write.h"
#include "int_cmd_i2c_write.h"
#include "cmd_i2c_read.h"
#include "int_cmd_i2c_read.h"
#include "cmd_i2c_write_register.h"
#include "int_cmd_i2c_write_register.h"
#include "cmd_i2c_read_register.h"
#include "int_cmd_i2c_read_register.h"

/*#include "cmd_servo_attach.h"
#include "cmd_servo_detach.h"
#include "cmd_servo_move.h"
#include "int_cmd_servo.h"
*/
#endif

/*AVR*/
#ifdef AVR1
#include "int_AVRPeripheralGPIO.h"
#include "AVRPeripheralGPIO.h"
#include "int_AVRPeripheralADC.h"
#include "AVRPeripheralADC.h"
#include "int_AVRPeripheralPWM.h"
#include "AVRPeripheralPWM.h"
#include "int_AVRUtil.h"
#include "AVRUtil.h"
#include "int_AVRPeripheralTimer.h"
#include "AVRPeripheralTimer.h"
#include "int_AVRPeripheralUART.h"
#include "AVRPeripheralUART.h"
#endif

/*RPi*/
#ifdef RPi1
#include "wiringPi.h"
#include "RPIPeripheralDigital.h"
#include "int_RPIPeripheralDigital.h"
#include "RPIPeripheralGertboard.h"
#include "int_RPIPeripheralGertboard.h"
#include "RPIPeripheralI2C.h"
#include "int_RPIPeripheralI2C.h"
#include "RPIPeripheralInterrupt.h"
#include "int_RPIPeripheralInterrupt.h"
#include "RPIPeripheralLCD.h"
#include "int_RPIPeripheralLCD.h"
#include "RPIPeripheralMcp.h"
#include "int_RPIPeripheralMcp.h"
#include "RPIPeripheralMisc.h"
#include "int_RPIPeripheralMisc.h"
#include "RPIPeripheralPcf.h"
#include "int_RPIPeripheralPcf.h"
#include "RPIPeripheralPiGlow.h"
#include "int_RPIPeripheralPiGlow.h"
#include "RPIPeripheralPinMap.h"
#include "int_RPIPeripheralPinMap.h"
#include "RPIPeripheralPWM.h"
#include "int_RPIPeripheralPWM.h"
#include "RPIPeripheralSerial.h"
#include "int_RPIPeripheralSerial.h"
#include "RPIPeripheralSetup.h"
#include "int_RPIPeripheralSetup.h"
#include "RPIPeripheralShift.h"
#include "int_RPIPeripheralShift.h"
#include "RPIPeripheralSoft.h"
#include "int_RPIPeripheralSoft.h"
#include "RPIPeripheralTiming.h"
#include "int_RPIPeripheralTiming.h"
#endif

#ifdef __cplusplus
}
#endif

// #ifdef opencv1
// #include "cvcore.hpp"
// #include "int_cvcore.hpp"
// #include "cvhighgui.hpp"
// #include "int_cvhighgui.hpp"
// #include "cvimgproc.hpp"
// #include "int_cvimgproc.hpp"
// #endif

#endif /* !__SCI2CLIB_H__ */


