/* Scilab2C FOSSEE IIT BOMBAY */

#ifndef __INT_CAT_H
#define __INT_CAT_H

/* Column Cat */

/* Same input elements */

#define s0s0cats2(in1,in2,out)					scolumncats(in1,in2,out)
		
#define d0d0catd2(in1,in2,out)					dcolumncats(in1,in2,out)

#define c0c0catc2(in1,in2,out)					ccolumncats(in1,in2,out)

#define z0z0catz2(in1,in2,out)					zcolumncats(in1,in2,out)

#define u80u80catu82(in1,in2,out)                              u8columncats(in1,in2,out)

#define u160u160catu162(in1,in2,out)                           u16columncats(in1,in2,out)

#define i80i80cati82(in1,in2,out)                              i8columnscats(in1,in2,out)

#define i160i160cati162(in1,in2,out)                           i16columnscats(in1,in2,out)

#define s2s2cats2(in1,size1,in2,size2,out)			scolumncata(in1, size1[0], size1[1], in2, size2[0], size2[1], out)

#define d2d2catd2(in1,size1,in2,size2,out)			dcolumncata(in1, size1[0], size1[1], in2, size2[0], size2[1], out)

/* ROW COLUMN SUPPORT for cat, If First argument in cat command is 1 then it will concatenate the element ROW WISE else COLUMN WISE */

#define d0d2d2catd2(in1,in2,size2,in3,size3,out)                (in1 == 1) ? drowcata(in2, size2[0], size2[1], in3, size3[0], size3[1], out) : dcolumncata(in2, size2[0],size2[1],in3,size3[0],size3[1],out)

#define d0u82u82catu82(in1,in2,size2,in3,size3,out)                (in1 == 1) ? u8rowcata(in2, size2[0], size2[1], in3, size3[0], size3[1], out) : u8columncata(in2, size2[0],size2[1],in3,size3[0],size3[1],out)

#define d0u162u162catu162(in1,in2,size2,in3,size3,out)                (in1 == 1) ? u16rowcata(in2, size2[0], size2[1], in3, size3[0], size3[1], out) : u16columncata(in2, size2[0],size2[1],in3,size3[0],size3[1],out)


#define d0i82i82cati82(in1,in2,size2,in3,size3,out)                (in1 == 1) ? i8rowcata(in2, size2[0], size2[1], in3, size3[0], size3[1], out) : i8columncata(in2, size2[0],size2[1],in3,size3[0],size3[1],out)

#define d0i162i162cati162(in1,in2,size2,in3,size3,out)                (in1 == 1) ? i16rowcata(in2, size2[0], size2[1], in3, size3[0], size3[1], out) : i16columncata(in2, size2[0],size2[1],in3,size3[0],size3[1],out)


#define c2c2catc2(in1,size1,in2,size2,out)			ccolumncata(in1, size1[0], size1[1], in2, size2[0], size2[1], out)

#define z2z2catz2(in1,size1,in2,size2,out)			zcolumncata(in1, size1[0], size1[1], in2, size2[0], size2[1], out)

#define u82u82catu82(in1,size1,in2,size2,out)                  u8columncata(in1,size1[0], size1[1], in2, size2[0], size2[1], out)

#define u162u162catu162(in1,size1,in2,size2,out)               u16columncata(in1,size1[0], size1[1], in2, size2[0], size2[1], out)

#define i82i82cati82(in1,size1,in2,size2,out)                  i8columncata(in1,size1[0], size1[1], in2, size2[0], size2[1], out)

#define i162i162cati162(in1,size1,in2,size2,out)               i16columncata(in1,size1[0], size1[1], in2, size2[0], size2[1], out)



/* Differents input elements */
#define s0c0catc2(in1,in2,out)					c0c0OpRcc2(FloatComplex(in1,0),in2,out)
		
#define d0z0catz2(in1,in2,out)					z0z0OpRcz2(DoubleComplex(in1,0),in2,out)

#define c0s0catc2(in1,in2,out)					c0c0OpRcc2(in1,FloatComplex(in2,0),out)

#define z0d0catz2(in1,in2,out)					z0z0OpRcz2(in1,DoubleComplex(in2,0),out)

#define s2c2catc2(in1,size1,in2,size2,out)			sfilla((float*)out,size1[0],size1[1],0); \
										c2c2OpRcc2(FloatComplexMatrix(in1,(float*)out,size1[0]*size1[1]), size1, in2, size2, out)

#define d2z2catz2(in1,size1,in2,size2,out)			dfilla((double*)out,size1[0],size1[1],0);  \
										z2z2OpRcz2(DoubleComplexMatrix(in1,(double*)out,size1[0]*size1[1]), size1, in2, size2, out)

#define c2s2catc2(in1,size1,in2,size2,out)			sfilla((float*)out,size2[0],size2[1],0);  \
										c2c2OpRcc2(in1, size1, FloatComplexMatrix(in2,(float*)out,size2[0]*size2[1]), size2, out)

#define z2d2catz2(in1,size1,in2,size2,out)			dfilla((double*)out,size2[0],size2[1],0);  \
										z2z2OpRcz2(in1, size1, DoubleComplexMatrix(in2,(double*)out,size2[0]*size2[1]), size2, out)

/* Matrix-Scalar */

/* Same type */

#define s2s0cats2(in1,size,in2,out)				{ float temp=in2; \
										  scolumncata(in1, size[0], size[1],&temp, 1, 1, out); \
										}

#define d2d0catd2(in1,size,in2,out)				{ double temp=in2; \
										  dcolumncata(in1, size[0], size[1],&temp, 1, 1, out); \
										}
										
#define c2c0catc2(in1,size,in2,out)				{ floatComplex temp=in2; \
										 ccolumncata(in1, size[0], size[1], &temp, 1, 1, out); \
										}

#define z2z0catz2(in1,size,in2,out)				{ doubleComplex temp=in2; \
										 zcolumncata(in1, size[0], size[1], &temp, 1, 1, out); \
										}

#define u82u80catu82(in1,size,in2,out)                         { uint8 temp=in2; \
                                                                                 u8columncata(in1,size[0],size[1],&temp,1,1,out); \
                                                                                }
#define u162u160catu162(in1,size,in2,out)                      { uint16 temp=in2; \
                                                                                  u16columncata(in1,size[0],size[1],&temp,1,1,out); \
                                                                                }
#define i82i80cati82(in1,size,in2,out)                         { int8 temp=in2; \
                                                                                 i8columncata(in1,size[0],size[1],&temp,1,1,out); \
                                                                                }
#define i162i160cati162(in1,size,in2,out)                      { int16 temp=in2; \
                                                                                  i16columncata(in1,size[0],size[1],&temp,1,1,out); \
                                                                                }


/* Different type */
#define s2c0catc2(in1,size,in2,out)				{ floatComplex temp=in2; \
										sfilla((float *)out,size[0],size[1],0);  \
										scolumncata(FloatComplexMatrix(in1,(float*)out,size[0]*size[1]), size[0], size[1], &temp , 1, 1, out); \
										}

#define d2z0catz2(in1,size,in2,out)				{ doubleComplex temp=in2; \
										dfilla((double *)out,size[0],size[1],0);  \
										zcolumncata(DoubleComplexMatrix(in1,(double *)out,size[0]*size[1]), size[0], size[1], &temp , 1, 1, out); \
										}

#define c2s0catc2(in1,size,in2,out)				{ floatComplex temp = FloatComplex(in2,0);   \
										  ccolumncata(in1, size[0], size[1], &temp, 1, 1, out); \
										}

#define z2d0catz2(in1,size,in2,out)				{ doubleComplex temp = DoubleComplex(in2,0);   \
										   zcolumncata(in1, size[0], size[1], &temp, 1, 1, out); \
										}

/* Scalar-Matrix */

/* Same type */
#define s0s2cats2(in1,in2,size,out)				{ \
 float __tmp1 = in1 ;\
 scolumncata(&__tmp1 , 1, 1, in2, size[0], size[1], out);\
}
#define d0d2catd2(in1,in2,size,out)				{\
 double __tmp1 = in1 ;\
 dcolumncata(&__tmp1 , 1, 1, in2, size[0], size[1], out); \
}

#define c0c2catc2(in1,in2,size,out)				{ \
 floatComplex __tmp1 = in1 ;\
 ccolumncata(&__tmp1, 1, 1, in2, size[0], size[1], out);\
}

#define z0z2catz2(in1,in2,size,out)				{ \
 doubleComplex  __tmp1 = in1 ;\
 zcolumncata(&__tmp1, 1, 1, in2, size[0], size[1], out);\
}

#define u80u82catu82(in1,in2,size,out)                         {\
 uint8 __tmp1 = in1 ;\
 u8columncata(&__tmp1,1,1,in2,size[0],size[1],out);\
}

#define u160u162catu162(in1,in2,size,out)                         {\
 uint16 __tmp1 = in1 ;\
 u16columncata(&__tmp1,1,1,in2,size[0],size[1],out);\
}

#define i80i82cati82(in1,in2,size,out)                         {\
 int8 __tmp1 = in1 ;\
 i8columncata(&__tmp1,1,1,in2,size[0],size[1],out);\
}

#define i160i162cati162(in1,in2,size,out)                         {\
 int16 __tmp1 = in1 ;\
 i16columncata(&__tmp1,1,1,in2,size[0],size[1],out);\
}


/* Different type */
#define s0c2catc2(in1,in2,size,out)				c0c2OpRcc2(FloatComplex(in1,0),in2,size,out)

#define d0z2catz2(in1,in2,size,out)				z0z2OpRcz2(DoubleComplex(in1,0),in2,size,out)

#define c0s2catc2(in1,in2,size,out)				sfilla((float*)out,size[0],size[1],0); \
										c0c2OpRcc2(in1,FloatComplexMatrix(in2,(float*)out,size[0]*size[1]),size,out)

#define z0d2catz2(in1,in2,size,out)				dfilla((double*)out,size[0],size[1],0);  \
										z0z2OpRcz2(in1,DoubleComplexMatrix(in2,(double*)out,size[0]*size[1]),size,out)


/* Column Cat */

/* Same input elements */

#define s0s0cats2(in1,in2,out)					srowcats(in1,in2,out)
		
#define d0d0catd2(in1,in2,out)					drowcats(in1,in2,out)

#define c0c0catc2(in1,in2,out)					crowcats(in1,in2,out)

#define z0z0catz2(in1,in2,out)					zrowcats(in1,in2,out)

#define u80u80catu82(in1,in2,out)                              u8rowcats(in1,in2,out)

#define u160u160catu162(in1,in2,out)                           u16rowcats(in1,in2,out)

#define i80i80cati82(in1,in2,out)                              i8rowcats(in1,in2,out)

#define i160i160cati162(in1,in2,out)                           i16rowcats(in1,in2,out)

#define s2s2cats2(in1,size1,in2,size2,out)			srowcata(in1, size1[0], size1[1], in2, size2[0], size2[1], out)

#define d2d2catd2(in1,size1,in2,size2,out)			drowcata(in1, size1[0], size1[1], in2, size2[0], size2[1], out)

#define c2c2catc2(in1,size1,in2,size2,out)			crowcata(in1, size1[0], size1[1], in2, size2[0], size2[1], out)

#define z2z2catz2(in1,size1,in2,size2,out)			zrowcata(in1, size1[0], size1[1], in2, size2[0], size2[1], out)

#define u82u82catu82(in1,size1,in2,size2,out)                  u8rowcata(in1, size1[0], size1[1], in2, size2[0], size2[1], out)

#define u162u162catu162(in1,size1,in2,size2,out)               u16rowcata(in1, size1[0], size1[1], in2, size2[0], size2[1], out)

#define i82i82cati82(in1,size1,in2,size2,out)                  i8rowcata(in1, size1[0], size1[1], in2, size2[0], size2[1], out)

#define i162i162cati162(in1,size1,in2,size2,out)               i16rowcata(in1, size1[0], size1[1], in2, size2[0], size2[1], out)

/* Differents input elements */
#define s0c0catc2(in1,in2,out)					c0c0OpCcc2(FloatComplex(in1,0),in2,out)
		
#define d0z0catz2(in1,in2,out)					z0z0OpCcz2(DoubleComplex(in1,0),in2,out)

#define c0s0catc2(in1,in2,out)					c0c0OpCcc2(in1,FloatComplex(in2,0),out)

#define z0d0catz2(in1,in2,out)					z0z0OpCcz2(in1,DoubleComplex(in2,0),out)

#define s2c2catc2(in1,size1,in2,size2,out)			sfilla((float*)out,size1[0],size1[1],0); \
										c2c2OpCcc2(FloatComplexMatrix(in1,(float*)out,size1[0]*size1[1]), size1, in2, size2, out)

#define d2z2catz2(in1,size1,in2,size2,out)			dfilla((double*)out,size1[0],size1[1],0);  \
										z2z2OpCcz2(DoubleComplexMatrix(in1,(double*)out,size1[0]*size1[1]), size1, in2, size2, out)

#define c2s2catc2(in1,size1,in2,size2,out)			sfilla((float*)out,size2[0],size2[1],0);  \
										c2c2OpCcc2(in1, size1, FloatComplexMatrix(in2,(float*)out,size2[0]*size2[1]), size2, out)

#define z2d2catz2(in1,size1,in2,size2,out)			dfilla((double*)out,size2[0],size2[1],0); \
										z2z2OpCcz2(in1, size1, DoubleComplexMatrix(in2,(double*)out,size2[0]*size2[1]), size2, out)

/* Matrix-Scalar */

/* Same type */

#define s2s0cats2(in1,size,in2,out)				{ float temp=in2; \
										  srowcata(in1, size[0], size[1],&temp, 1, 1, out); \
										}

#define d2d0catd2(in1,size,in2,out)				{ double temp=in2; \
										  drowcata(in1, size[0], size[1],&temp, 1, 1, out); \
										}

#define c2c0catc2(in1,size,in2,out)				{ floatComplex temp = in2;   \
										  crowcata(in1, size[0], size[1],&temp, 1, 1, out);\
										}

#define z2z0catz2(in1,size,in2,out)				{ doubleComplex temp =in2;   \
										  zrowcata(in1, size[0], size[1],&temp, 1, 1, out);\
								}

#define u82u80catu82(in1,size,in2,out)                         { uint8 temp=in2; \
                                                                                 u8rowcata(in1, size[0], size[1],&temp, 1,1,out);\
                                                                }
#define u162u160catu162(in1,size,in2,out)                      { uint16 temp=in2; \
                                                                                 u16rowcata(in1, size[0], size[1],&temp, 1,1,out);\
                                                                }

#define i82i80cati82(in1,size,in2,out)                         { int8 temp=in2; \
                                                                                 i8rowcata(in1, size[0], size[1],&temp, 1,1,out);\
                                                                }
#define i162i160cati162(in1,size,in2,out)                      { int16 temp=in2; \
                                                                                 i16rowcata(in1, size[0], size[1],&temp, 1,1,out);\
                                                                }



/* Different type */
#define s2c0catc2(in1,size,in2,out)				sfilla((float *)out,size[0],size[1],0); \
										c2c0OpCcc2(FloatComplexMatrix(in1,(float*)out,size[0]*size[1]),size,in2,out)

#define d2z0catz2(in1,size,in2,out)				dfilla((double *)out,size[0],size[1],0); \
										z2z0OpCcz2(DoubleComplexMatrix(in1,(double *)out,size[0]*size[1]),size,in2,out)

#define c2s0catc2(in1,size,in2,out)				{ floatComplex temp = FloatComplex(in2, 0); 	c2c0OpCcc2(in1, size, temp, out)}

#define z2d0catz2(in1,size,in2,out)				{ doubleComplex temp = DoubleComplex(in2, 0); 	z2z0OpCcz2(in1, size, temp, out)}
					

/* Scalar-Matrix */

/* Same type */
#define s0s2cats2(in1,in2,size,out)				{ \
 float __tmp1 = in1 ;\
 srowcata(&__tmp1, 1, 1, in2, size[0], size[1], out);\
}

#define d0d2catd2(in1,in2,size,out)				{ \
 double __tmp1 = in1 ;\
 drowcata(&__tmp1, 1, 1, in2, size[0], size[1], out);\
}

#define c0c2catc2(in1,in2,size,out)				{ \
 floatComplex __tmp1 = in1 ;\
 crowcata(&__tmp1, 1, 1, in2, size[0], size[1], out);\
}

#define z0z2catz2(in1,in2,size,out)				{ \
 doubleComplex __tmp1 = in1 ;\
 zrowcata(&__tmp1, 1, 1, in2, size[0], size[1], out);\
}

#define u80u82catu82(in1,in2,size,out)                         { \
  uint8 __tmp1 = in1;\
  u8rowcata(&__tmp1, 1,1, in2, size[0], size[1], out);\
}

#define u160u162catu162(in1,in2,size,out)                         { \
  uint16 __tmp1 = in1;\
  u16rowcata(&__tmp1, 1,1, in2, size[0], size[1], out);\
}

#define i80i82cati82(in1,in2,size,out)                         { \
  int8 __tmp1 = in1;\
  i8rowcata(&__tmp1, 1,1, in2, size[0], size[1], out);\
}

#define i160i162cati162(in1,in2,size,out)                         { \
  int16 __tmp1 = in1;\
  i16rowcata(&__tmp1, 1,1, in2, size[0], size[1], out);\
}


/* Different type */
#define s0c2catc2(in1,in2,size,out)				c0c2OpCcc2(FloatComplex(in1,0),in2,size,out)

#define d0z2catz2(in1,in2,size,out)				z0z2OpCcz2(DoubleComplex(in1,0),in2,size,out)

#define c0s2catc2(in1,in2,size,out)				sfilla((float*)out,size[0],size[1],0); \
										c0c2OpCcc2(in1,FloatComplexMatrix(in2,(float*)out,size[0]*size[1]),size,out)

#define z0d2catz2(in1,in2,size,out)				dfilla((double*)out,size[0],size[1],0);  \
										z0z2OpCcz2(in1,DoubleComplexMatrix(in2,(double*)out,size[0]*size[1]),size,out)


#endif /* !__INT_CAT__H */

